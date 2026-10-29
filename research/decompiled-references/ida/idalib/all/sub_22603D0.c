_QWORD *__fastcall sub_22603D0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp

  if ( !(_BYTE)byte_2D0AC00 && __cxa_guard_acquire(&byte_2D0AC00) )
  {
    v3 = operator new(0x150u);
    sub_225FE00(v3, 1);
    qword_2D0AC08 = v3;
    _InterlockedAdd((volatile signed __int32 *)(v3 + 8), 1u);
    __cxa_atexit((void (*)(void *))sub_2259780, &qword_2D0AC08, &off_2B25620);
    __cxa_guard_release(&byte_2D0AC00);
  }
  v1 = qword_2D0AC08;
  *a1 = qword_2D0AC08;
  if ( v1 )
    _InterlockedAdd((volatile signed __int32 *)(v1 + 8), 1u);
  return a1;
}
