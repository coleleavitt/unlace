__int64 __fastcall sub_CF5490(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r13
  __int64 v5; // r15
  unsigned int v6; // r14d
  __int64 v8; // rax
  __int64 v9; // rax
  _BYTE v10[48]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v11[104]; // [rsp+40h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v4, 48);
  sub_DFF520(v10);
  sub_DFDA50(v4, 48);
  v5 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v5 + 24) || (v6 = 0, *(_DWORD *)(sub_CDA220(v5) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220(v5) + 60) )
    {
      sub_CDA6F0((__int64)v11, v5, a3);
      v6 = sub_DA6400(a1, a2, v11);
      if ( (_BYTE)v6 )
      {
        sub_E00FC0(v11);
        v8 = sub_CEACF0((__int64)v11);
        sub_DFF4A0(v8, v10);
      }
      sub_DFF560(v11);
    }
    else
    {
      v6 = 1;
      sub_E00FC0(v5);
      v9 = sub_CEACF0(v5);
      sub_DFF4A0(v9, v10);
    }
  }
  sub_DFF560(v10);
  return v6;
}

