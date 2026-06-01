__int64 __fastcall sub_D9FAF0(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+0h] [rbp-78h] BYREF
  int v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  unsigned int v12; // [rsp+28h] [rbp-50h]
  _BYTE v13[72]; // [rsp+30h] [rbp-48h] BYREF

  sub_DFF430(v9, *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8LL * a3));
  v3 = *a2;
  sub_DFDA20(*a2, 48);
  sub_DFF520(v13);
  sub_DFDA50(v3, 48);
  if ( v10 )
  {
    v5 = v9[0];
    v6 = v11;
LABEL_3:
    v7 = v6 + v5 + 40;
    goto LABEL_4;
  }
  v4 = sub_CDA220((__int64)v9);
  v5 = v9[0];
  v6 = v11;
  if ( !*(_BYTE *)(v4 + 60) )
    goto LABEL_3;
  v7 = v11 + v12 + 72;
  if ( v12 != v9[0] )
    goto LABEL_3;
LABEL_4:
  sub_DFF6C0(v7, v13);
  sub_DFF560(v13);
  sub_E00FC0(v9);
  sub_DFF560(v9);
  return 1;
}

