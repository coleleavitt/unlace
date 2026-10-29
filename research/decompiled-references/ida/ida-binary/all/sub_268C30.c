__int64 __fastcall sub_268C30(__int64 a1, __int64 a2)
{
  char v3; // r12
  _DWORD *v4; // rax

  if ( sub_1A15A0() )
    return 0;
  if ( (get_merge_state() & 3) != 0 )
    v3 = is_diff_merge_mode() + 3;
  else
    v3 = 1 - ((dword_8CC5F0 == 0) - 1);
  if ( !(_BYTE)byte_8CC660 )
  {
    if ( __cxa_guard_acquire(&byte_8CC660) )
    {
      xmmword_8CC688 = 0;
      qword_8CC680 = 0;
      v4 = (_DWORD *)qvector_reserve(&qword_8CC680, 0, 8, 1);
      qword_8CC680 = (__int64)v4;
      *(_QWORD *)&xmmword_8CC688 = 8;
      *v4 = 1634100548;
      *(_DWORD *)((char *)v4 + 3) = 1953264993;
      *(_BYTE *)(qword_8CC680 + 7) = 0;
      byte_8CC699 = v3;
      xmmword_8CC6A8 = 0;
      byte_8CC698 = 0;
      qword_8CC6A0 = 0;
      __cxa_atexit((void (*)(void *))sub_230E20, &qword_8CC680, &off_85BC80);
      __cxa_guard_release(&byte_8CC660);
    }
  }
  return sub_267A80(a2, (const char *)&qword_8CC680, 1);
}
