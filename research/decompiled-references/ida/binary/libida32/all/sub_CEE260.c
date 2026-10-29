__int64 __fastcall sub_CEE260(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned __int8 **v3; // rax
  unsigned __int8 **v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r13d
  __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+14h] [rbp-64h] BYREF
  char v12; // [rsp+1Ch] [rbp-5Ch]
  _BYTE v13[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v13);
  sub_DFDA50(v2, 48);
  v10 = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
  v3 = (unsigned __int8 **)sub_E0FFE0(a1, &v10, 2417, 0);
  if ( v3 )
  {
    v4 = v3;
    sub_AC60B0(v3, 2, 2u);
    v5 = sub_E0E500(a1);
    sub_AC60B0(v4, (*(_BYTE *)(v5 + 1) & 8) != 0, 3u);
    v6 = sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
    v12 = 1;
    v11 = v6;
    sub_AC88D0((__int64 *)v4, &v11);
  }
  else
  {
    sub_E0E500(a1);
    sub_DFC9E0(*(_QWORD *)(a1 + 400), a2);
  }
  v7 = sub_DA9500(a1, a2, v13, 1);
  if ( (_BYTE)v7 )
  {
    v9 = sub_CDA6B0((__int64)v13);
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v9 != 0;
  }
  else
  {
    v7 = sub_CDB0E0(a1, a2);
  }
  sub_DFF560(v13);
  return v7;
}

