__int64 __fastcall sub_DC38B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebp
  __int64 v5; // r13
  __int64 v6; // r12
  _DWORD v7[22]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v7);
  sub_DFDA50(v2, 48);
  v3 = sub_DA8420(a1, a2, (__int64)v7, 0);
  if ( (_BYTE)v3 )
  {
    if ( v7[6] )
    {
      v3 = 0;
    }
    else
    {
      v5 = sub_CEB200((__int64)v7);
      v6 = sub_DFD980(*(_QWORD *)(a1 + 176), 64);
      sub_DFF4A0(v6, v5);
      *(_QWORD *)(v6 + 48) = *(_QWORD *)(v5 + 48);
      *(_DWORD *)(v6 + 56) = *(_DWORD *)(v5 + 56);
    }
  }
  sub_DFF560(v7);
  return v3;
}

