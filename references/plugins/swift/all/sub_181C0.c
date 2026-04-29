__int64 __fastcall sub_181C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        int a18,
        __int64 a19)
{
  __int64 v19; // rdx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d

  v19 = *(_QWORD *)(a2 + 56);
  if ( v19 )
  {
    if ( *(_BYTE *)(v19 + 116) )
    {
      if ( *(_DWORD *)v19 == 2 )
        return sub_E180(a1, a2, v19);
      if ( *(_DWORD *)v19 == 1 )
        return sub_17B20(a1, a2, v19);
    }
    else
    {
      if ( under_debugger )
        goto LABEL_14;
      interr(30658);
    }
    if ( !under_debugger )
    {
      interr(30659);
      return sub_18250(30659, a2, v21, v22, v23, v24, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
    }
LABEL_14:
    BUG();
  }
  if ( *(_DWORD *)(a2 + 64) == 12 )
    return sub_A3A0(a2);
  else
    return sub_FC40(a1, a2);
}
