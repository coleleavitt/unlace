__int64 __fastcall sub_DC3420(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v7; // eax
  _DWORD v8[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v8);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v8, 0);
  if ( (_BYTE)v3 )
  {
    if ( v8[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = sub_CEB480((__int64)v8);
      v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 24);
      v7 = *(_DWORD *)(v5 + 8);
      *(_DWORD *)(v6 + 8) = v7;
      if ( v7 > 0x40 )
        sub_21E17D0(v6);
      else
        *(_QWORD *)v6 = *(_QWORD *)v5;
      *(_BYTE *)(v6 + 12) = *(_BYTE *)(v5 + 12);
      *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
    }
  }
  sub_DFF560(v8);
  return v3;
}

