__int64 __fastcall sub_8A1E40(__int64 *a1, int a2, const void *a3, size_t a4)
{
  int v5; // eax
  __int64 v6; // r14
  size_t v7; // r13
  __int64 v8; // rsi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  char *v11; // rax

  if ( !a4 )
    return 1;
  v5 = a2;
  LOBYTE(v5) = a2 & 0x7F;
  if ( v5 == 1 )
  {
    sub_8A0180(a1, a3, a4);
    return 1;
  }
  if ( v5 == 2 )
  {
    sub_8A0180(a1, a3, a4);
    v6 = *a1;
    v7 = a1[1] - a4;
    if ( !(_BYTE)byte_2CD7028 && __cxa_guard_acquire(&byte_2CD7028) )
    {
      qword_2CD7030 = 0;
      xmmword_2CD7038 = 0;
      __cxa_atexit((void (*)(void *))sub_387760, &qword_2CD7030, &off_2B25620);
      __cxa_guard_release(&byte_2CD7028);
    }
    v8 = xmmword_2CD7038;
    if ( (unsigned __int64)xmmword_2CD7038 > 1
      || (unsigned __int8)j__qgethostname(&qword_2CD7030)
      && (v8 = xmmword_2CD7038, (unsigned __int64)xmmword_2CD7038 > 1) )
    {
      v9 = v8 - 1;
      v10 = 0;
      while ( 1 )
      {
        v11 = &byte_2CCB1E1;
        if ( (v10 % v9) | v8 )
          v11 = (char *)(v10 % v9 + qword_2CD7030);
        *(_BYTE *)(v6 + v7 + v10++) ^= *v11;
        if ( a4 == v10 )
          break;
        v8 = xmmword_2CD7038;
      }
      return 1;
    }
  }
  if ( (debug & 0x200) != 0 )
    sub_3879F0();
  return 0;
}
