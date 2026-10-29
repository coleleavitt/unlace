__int64 __fastcall sub_CDBBF0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r13
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-88h] BYREF
  int v10; // [rsp+18h] [rbp-70h]
  __int64 v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  _QWORD v13[11]; // [rsp+30h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)(a1 + 1232);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_DFDA20(v3, 48);
  sub_DFF520(v9);
  sub_DFDA50(v3, 48);
  if ( !v10 || v10 == 2 )
  {
    if ( !v11 )
    {
LABEL_7:
      v5 = 1;
      v6 = sub_DFD980(*(_QWORD *)(a1 + 560), 48);
      sub_DFF4A0(v6, v9);
      goto LABEL_8;
    }
  }
  else if ( v10 != 3 && !(v9[0] | v12) )
  {
    goto LABEL_7;
  }
  v5 = sub_DA5070(a1 + 384, v4, v9, 3);
  if ( (_BYTE)v5 )
  {
    if ( v10
      || !v11
      || (_DWORD)v12 == 0
      || *(_DWORD *)(*(_QWORD *)(v11 + 32) + 24LL) == (_DWORD)v12
      || *(_DWORD *)(sub_CDA220((__int64)v9) + 20) != -1 )
    {
      v7 = *(_QWORD *)(a1 + 560);
      sub_CDA6F0((__int64)v13, (__int64)v9, 0);
      v8 = sub_DFD980(v7, 48);
      sub_DFF520(v8);
      sub_DFF560(v13);
      sub_DFF560(v9);
      return v5;
    }
    v5 = 0;
    v13[0] = sub_DFB160(*(_QWORD *)(a1 + 784), v4);
    sub_E0FE60(a1 + 384, v13, 2499, 0);
  }
LABEL_8:
  sub_DFF560(v9);
  return v5;
}

