__int64 __fastcall sub_849DA0(
        unsigned int *a1,
        char a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v12; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rax
  int v18; // [rsp+50h] [rbp+8h]
  __int64 v19; // [rsp+58h] [rbp+10h]

  v12 = a8;
  if ( (_DWORD)a8 == 127 )
  {
    v15 = 63;
    if ( a1[36] )
      v15 = 31;
    v16 = a9 & v15;
    if ( !v16 )
    {
      if ( a3 )
        return sub_8498A0(a1, 0xD0B0908u, a4, a5, a6, a7, 127, 0);
      else
        return sub_844B90(a1, a4, a5, a6, a7);
    }
    v19 = v16;
    v18 = 127;
    return sub_849490(a1, a2, a4, a5, a6, a7, v18, v19);
  }
  if ( !a3 )
  {
    v19 = a9;
    v18 = v12;
    return sub_849490(a1, a2, a4, a5, a6, a7, v18, v19);
  }
  if ( a4 <= 126 )
  {
    if ( !(unsigned int)sub_849490(a1, a2, a4, a5, a6, a7, a8, a9) )
    {
      v17 = sub_844340((__int64)a1, 0x11u, 127, 0, a4, 0);
      if ( v17 )
      {
        v17[1] |= 0x38u;
        return 0;
      }
    }
  }
  else if ( !(unsigned int)sub_844EC0(a1, a6, a7, 127, 0) && !(unsigned int)sub_849490(a1, a2, a4, a5, a6, a7, a8, a9) )
  {
    return 0;
  }
  return *a1;
}

