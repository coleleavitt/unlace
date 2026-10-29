__int64 __fastcall sub_CF55B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r14d
  __int64 v9; // rbx
  __int64 v10; // rbx
  _BYTE v11[48]; // [rsp+10h] [rbp-A8h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v13; // [rsp+70h] [rbp-48h]
  int v14; // [rsp+78h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 176);
  v5 = sub_DFDA20(v4, 64);
  sub_DFF520(v12);
  v13 = *(_QWORD *)(v5 + 48);
  v14 = *(_DWORD *)(v5 + 56);
  sub_DFDA50(v4, 64);
  v6 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  if ( *(_DWORD *)(v6 + 24) || (v7 = 0, *(_DWORD *)(sub_CDA220(v6) + 20) != -1) )
  {
    if ( a3 || *(_BYTE *)(sub_CDA220(v6) + 60) )
    {
      sub_CDA6F0((__int64)v11, v6, a3);
      v7 = sub_DA6400(a1, a2, v11);
      if ( (_BYTE)v7 )
      {
        sub_E00FC0(v11);
        v9 = sub_CEB200((__int64)v11);
        sub_DFF4A0(v9, v12);
        *(_QWORD *)(v9 + 48) = v13;
        *(_DWORD *)(v9 + 56) = v14;
      }
      sub_DFF560(v11);
    }
    else
    {
      v7 = 1;
      sub_E00FC0(v6);
      v10 = sub_CEB200(v6);
      sub_DFF4A0(v10, v12);
      *(_QWORD *)(v10 + 48) = v13;
      *(_DWORD *)(v10 + 56) = v14;
    }
  }
  sub_DFF560(v12);
  return v7;
}

