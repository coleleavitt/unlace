__int64 __fastcall sub_CF6AE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rbp
  __int64 v10; // rbp
  _BYTE v11[24]; // [rsp+10h] [rbp-D8h] BYREF
  int v12; // [rsp+28h] [rbp-C0h]
  _BYTE v13[48]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v14[48]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-48h]
  int v16; // [rsp+A8h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 64);
  sub_DFF520(v14);
  v15 = *(_QWORD *)(v5 + 48);
  v16 = *(_DWORD *)(v5 + 56);
  sub_DFDA50(v4, 64);
  v6 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v6, 48);
  sub_DFF520(v11);
  sub_DFDA50(v6, 48);
  if ( v12 || (v7 = 0, *(_DWORD *)(sub_CDA220((__int64)v11) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220((__int64)v11) + 60) )
    {
      sub_CDA6F0((__int64)v13, (__int64)v11, a3);
      v7 = sub_DA6400(a1, a2, v13);
      if ( (_BYTE)v7 )
      {
        sub_E00FC0(v13);
        v9 = sub_CEB200((__int64)v13);
        sub_DFF4A0(v9, v14);
        *(_QWORD *)(v9 + 48) = v15;
        *(_DWORD *)(v9 + 56) = v16;
      }
      sub_DFF560(v13);
    }
    else
    {
      v7 = 1;
      sub_E00FC0(v11);
      v10 = sub_CEB200((__int64)v11);
      sub_DFF4A0(v10, v14);
      *(_QWORD *)(v10 + 48) = v15;
      *(_DWORD *)(v10 + 56) = v16;
    }
  }
  sub_DFF560(v11);
  sub_DFF560(v14);
  return v7;
}

