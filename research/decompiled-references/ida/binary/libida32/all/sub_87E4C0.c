__int64 __fastcall sub_87E4C0(__int64 *a1, int a2, const void *a3, size_t a4)
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
    sub_87C800(a1, a3, a4);
    return 1;
  }
  if ( v5 == 2 )
  {
    sub_87C800(a1, a3, a4);
    v6 = *a1;
    v7 = a1[1] - a4;
    if ( !(_BYTE)byte_2CAD108 && __cxa_guard_acquire(&byte_2CAD108) )
    {
      qword_2CAD110 = 0;
      xmmword_2CAD118 = 0;
      __cxa_atexit((void (*)(void *))sub_383B10, &qword_2CAD110, &off_2AFC540);
      __cxa_guard_release(&byte_2CAD108);
    }
    v8 = xmmword_2CAD118;
    if ( (unsigned __int64)xmmword_2CAD118 > 1
      || (unsigned __int8)j__qgethostname((__int64)&qword_2CAD110)
      && (v8 = xmmword_2CAD118, (unsigned __int64)xmmword_2CAD118 > 1) )
    {
      v9 = v8 - 1;
      v10 = 0;
      while ( 1 )
      {
        v11 = &byte_2CA12E1;
        if ( (v10 % v9) | v8 )
          v11 = (char *)(v10 % v9 + qword_2CAD110);
        *(_BYTE *)(v6 + v7 + v10++) ^= *v11;
        if ( a4 == v10 )
          break;
        v8 = xmmword_2CAD118;
      }
      return 1;
    }
  }
  if ( (debug & 0x200) != 0 )
    sub_383DA0();
  return 0;
}

