# (kuna) Option `tailcallentryall`. `helper` is reached only by the tail
# `jmp` at the end of `f`, and `g` sits between them, so the jump leaves f's
# entry-ordered region. Build: as tailcallentryall_x86_64.s -o t.o &&
# ld -o tailcallentryall_x86_64 t.o && strip -s tailcallentryall_x86_64
    .text
    .globl _start
_start:
    call f
    call g
    mov  $60,%eax
    syscall
    hlt
f:
    mov  $1,%edi
    jmp  helper
g:
    mov  $2,%eax
    ret
helper:
    lea  1(%rdi),%eax
    ret
