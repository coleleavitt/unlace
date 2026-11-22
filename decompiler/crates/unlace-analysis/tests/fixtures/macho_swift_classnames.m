// Self-contained Mach-O fixture for Swift runtime class names in types
// (`swiftdemangle` + `objcivars`, tests/stages/kuna-swiftclassnames.xml). No
// Swift toolchain is needed: `objc_runtime_name` gives each class the name
// swiftc registers for `main.Engine` / `main.Car`, so the instance struct, the
// embedded superclass, the `@"_TtC4main6Engine"` ivar type and the typed
// `self` all go through the runtime-to-shown name mapping. `-x` strips local
// symbols so only the `__objc_*` metadata names anything. See
// fixtures/README.md ("Mach-O Swift class names") for the build recipe.
__attribute__((objc_root_class))
__attribute__((objc_runtime_name("_TtC4main7Vehicle")))
@interface Vehicle { long wheels; } @end
@implementation Vehicle @end
__attribute__((objc_root_class))
__attribute__((objc_runtime_name("_TtC4main6Engine")))
@interface Engine { double displacement; int cylinders; } @end
@implementation Engine
- (double)perCylinder { return displacement / cylinders; }
@end
__attribute__((objc_runtime_name("_TtC4main3Car")))
@interface Car : Vehicle { Engine *engine; long seats; } @end
@implementation Car
- (double)loadPerSeat:(long)load { return (double)(load + wheels) / seats + [engine perCylinder]; }
@end
// `-DFIELDMD` builds `macho_swift_classnames_fieldmd_arm64`: the image
// gains a `__swift5_fieldmd` section, so it reads as Swift, with no record
// for these classes.
#ifdef FIELDMD
__attribute__((used, section("__TEXT,__swift5_fieldmd"))) static const int fieldmd[4];
#endif
int main(void) { return 0; }
