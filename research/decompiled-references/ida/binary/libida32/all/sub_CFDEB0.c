__int64 __fastcall sub_CFDEB0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int8 v10; // [rsp+Fh] [rbp-99h] BYREF
  _BYTE v11[24]; // [rsp+10h] [rbp-98h] BYREF
  int v12; // [rsp+28h] [rbp-80h]
  __int64 v13; // [rsp+30h] [rbp-78h]
  _BYTE v14[48]; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int8 v15; // [rsp+70h] [rbp-38h]

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 1232);
  v5 = a1 + 384;
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v11);
  sub_DFDA50(v3, 48);
  v6 = sub_DA5E00(a1 + 384, v4, v11, 3);
  if ( (_BYTE)v6 )
  {
    if ( !v12 && v13 && *(_BYTE *)(*(_QWORD *)(v13 + 32) + 61LL)
      || (v7 = sub_CEACF0((__int64)v11), !(unsigned __int8)sub_DA4BF0(v5, v4, v7, 4)) )
    {
      v6 = 0;
    }
    else
    {
      v8 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
      sub_DFF4A0(v8, v7);
      v10 = 1;
      sub_CFDA10((__int64)v14, v5, v4, &v10, v7, 1);
      v6 = v15;
      if ( v15 )
      {
        v9 = sub_CEACF0((__int64)v11);
        sub_DFF5C0(v9, v14);
        if ( v15 )
          sub_DFF560(v14);
      }
    }
  }
  sub_DFF560(v11);
  return v6;
}

