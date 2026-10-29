__int64 __fastcall sub_CE5080(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // r13
  _WORD *v5; // r15
  _WORD *v6; // rax
  char v7; // r14
  unsigned int v8; // r15d
  _QWORD **v9; // rdi
  __int64 (*v10)(void); // rax
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  char v17; // al
  char v18; // r12
  __int64 v19; // rax
  char v20; // al
  char v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  unsigned int v26; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v27; // [rsp+14h] [rbp-74h] BYREF
  __int64 v28; // [rsp+18h] [rbp-70h] BYREF
  void *v29; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v30; // [rsp+28h] [rbp-60h]
  __int64 v31; // [rsp+30h] [rbp-58h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  int v33; // [rsp+40h] [rbp-48h]
  unsigned int v34; // [rsp+44h] [rbp-44h]
  char v35; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 32);
  v4 = *(_QWORD *)(a2 + 40);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x80 )
  {
    v5 = *(_WORD **)(a2 + 24);
  }
  else
  {
    v5 = *(_WORD **)(a2 + 32);
    v3 = *(_QWORD *)(a2 + 40);
    v4 = *(_QWORD *)(a2 + 48);
  }
  if ( v5 && (*v5 & 0x1FF) == 0x3D && ((*(_QWORD *)v5 >> 16) & 0x1E0) != 0 && ((v5[1] >> 5) & 0xF) == 2 )
  {
    sub_BF7A50((__int64)&v29, (__int64)v5);
    if ( (unsigned int)v30 > 0x40 && v29 )
      operator delete[](v29);
    v30 = a1;
    v25 = a1[166];
    v33 = 1;
    a1[166] = &v29;
    v31 = v25;
    v32 = 0;
    v35 = 0;
    v29 = &off_2B4B698;
    v8 = sub_CDF950(a1, v3);
    if ( (_BYTE)v8 && v35 )
    {
      v28 = 4;
      v8 = sub_CBB7D0((__int64)&v29, 0);
      sub_CFF770(v30, v34, &v28);
    }
    goto LABEL_34;
  }
  v6 = (_WORD *)sub_BFD550((unsigned __int64)v5);
  if ( ((*v6 + 423) & 0x1FFu) <= 4 && (unsigned int)sub_BFBE70((__int64)v6) == 214 )
  {
    v26 = sub_CFF2B0(a1);
    v27 = sub_CFF2B0(a1);
    v29 = (void *)(a2 | 4);
    v7 = sub_D08320(a1, &v29);
    if ( !v7 )
      return 0;
  }
  else
  {
    v7 = 0;
    v26 = sub_CFF2B0(a1);
    v27 = sub_CFF2B0(a1);
  }
  v8 = sub_CB59F0(a1, (__int64)v5);
  if ( !(_BYTE)v8 )
  {
    v9 = (_QWORD **)a1[51];
    v10 = (__int64 (*)(void))(*v9)[2];
    if ( (char *)v10 == (char *)sub_CAE470 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 16LL))(v9[3]);
    else
      v11 = v10();
    if ( v11 && (unsigned __int8)sub_CDA710((__int64)a1, v3, v12, v13, v14) )
    {
      sub_CDA710((__int64)a1, v4, v22, v23, v24);
      return v8;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_CFF640(a1, &v27) )
    return 0;
  v16 = a1[166];
  v30 = a1;
  v32 = 0;
  v31 = v16;
  a1[166] = &v29;
  v33 = 1;
  v35 = 0;
  v29 = &off_2B4B698;
  v8 = sub_CDF950(a1, v3);
  if ( !(_BYTE)v8 )
    goto LABEL_34;
  if ( v35 )
  {
    v17 = sub_CBB7D0((__int64)&v29, 0);
    v28 = 4;
    v18 = v17;
    sub_CFF770(v30, v34, &v28);
    sub_CBB4F0((__int64)&v29);
    if ( !v18 )
      return 0;
  }
  else
  {
    sub_CBB4F0((__int64)&v29);
  }
  if ( !(unsigned __int8)sub_CFF6B0(a1, &v26) )
    return 0;
  sub_CFF2A0(a1, v27);
  v30 = a1;
  v19 = a1[166];
  v33 = 1;
  v32 = 0;
  v31 = v19;
  v35 = 0;
  a1[166] = &v29;
  v29 = &off_2B4B698;
  v8 = sub_CDF950(a1, v4);
  if ( !(_BYTE)v8 )
  {
LABEL_34:
    sub_CBB4F0((__int64)&v29);
    return v8;
  }
  if ( v35 )
  {
    v20 = sub_CBB7D0((__int64)&v29, 0);
    v28 = 4;
    v21 = v20;
    sub_CFF770(v30, v34, &v28);
    sub_CBB4F0((__int64)&v29);
    if ( v21 )
      goto LABEL_24;
    return 0;
  }
  sub_CBB4F0((__int64)&v29);
LABEL_24:
  sub_CFF6E0(a1, &v26);
  sub_CFF2A0(a1, v26);
  if ( v7 )
  {
    v29 = (void *)(a2 | 4);
    return (unsigned int)sub_D00C90(a1, &v29);
  }
  return v8;
}
