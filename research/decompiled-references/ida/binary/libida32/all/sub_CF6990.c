__int64 __fastcall sub_CF6990(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int v6; // r15d
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[48]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-98h] BYREF
  int v12; // [rsp+58h] [rbp-80h]
  _BYTE v13[104]; // [rsp+70h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v10);
  sub_DFDA50(v4, 48);
  v5 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v5, 48);
  sub_DFF520(v11);
  sub_DFDA50(v5, 48);
  if ( v12 || (v6 = 0, *(_DWORD *)(sub_CDA220((__int64)v11) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220((__int64)v11) + 60) )
    {
      sub_CDA6F0((__int64)v13, (__int64)v11, a3);
      v6 = sub_DA6400(a1, a2, v13);
      if ( (_BYTE)v6 )
      {
        sub_E00FC0(v13);
        v8 = sub_CEACF0((__int64)v13);
        sub_DFF4A0(v8, v10);
      }
      sub_DFF560(v13);
    }
    else
    {
      v6 = 1;
      sub_E00FC0(v11);
      v9 = sub_CEACF0((__int64)v11);
      sub_DFF4A0(v9, v10);
    }
  }
  sub_DFF560(v11);
  sub_DFF560(v10);
  return v6;
}

