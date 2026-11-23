// rustc -O -C prefer-dynamic -C panic=unwind rust_eh_x86_64.rs
struct Guard(u32);
impl Drop for Guard { fn drop(&mut self) { println!("drop {}", self.0); } }
#[inline(never)] fn risky(x: u32) -> u32 { if x == 7 { panic!("seven"); } x * 3 }
#[inline(never)] fn guarded(x: u32) -> u32 { let _g = Guard(x); risky(x) + 1 }
fn main() { let n = std::env::args().count() as u32; println!("{}", guarded(n)); }
