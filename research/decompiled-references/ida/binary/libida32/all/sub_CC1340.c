__int64 __fastcall sub_CC1340(_QWORD *a1, __int64 a2)
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  char v20; // al
  char v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  char v26; // al
  char v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  unsigned int v35; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v36; // [rsp+14h] [rbp-74h] BYREF
  __int64 v37; // [rsp+18h] [rbp-70h] BYREF
  void *v38; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v39; // [rsp+28h] [rbp-60h]
  __int64 v40; // [rsp+30h] [rbp-58h]
  __int64 v41; // [rsp+38h] [rbp-50h]
  int v42; // [rsp+40h] [rbp-48h]
  unsigned int v43; // [rsp+44h] [rbp-44h]
  char v44; // [rsp+48h] [rbp-40h]

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
    sub_BD3D10((__int64)&v38, (__int64)v5);
    if ( (unsigned int)v39 > 0x40 && v38 )
      operator delete[](v38);
    v39 = a1;
    v34 = a1[166];
    v42 = 1;
    a1[166] = &v38;
    v40 = v34;
    v41 = 0;
    v44 = 0;
    v38 = &off_2B216F8;
    v8 = sub_CBBC10((__int64)a1, v3, v31, v32, v33);
    if ( (_BYTE)v8 && v44 )
    {
      v37 = 4;
      v8 = sub_C97A90((__int64)&v38, 0);
      sub_CDBA30(v39, v43, &v37);
    }
    goto LABEL_34;
  }
  v6 = (_WORD *)sub_BD9810((unsigned __int64)v5);
  if ( ((*v6 + 423) & 0x1FFu) <= 4 && (unsigned int)sub_BD8130((__int64)v6) == 214 )
  {
    v35 = sub_CDB570(a1);
    v36 = sub_CDB570(a1);
    v38 = (void *)(a2 | 4);
    v7 = sub_CE45E0(a1, &v38);
    if ( !v7 )
      return 0;
  }
  else
  {
    v7 = 0;
    v35 = sub_CDB570(a1);
    v36 = sub_CDB570(a1);
  }
  v8 = sub_C91CB0(a1, (__int64)v5);
  if ( !(_BYTE)v8 )
  {
    v9 = (_QWORD **)a1[51];
    v10 = (__int64 (*)(void))(*v9)[2];
    if ( (char *)v10 == (char *)sub_C8A730 )
      v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 16LL))(v9[3]);
    else
      v11 = v10();
    if ( v11 && (unsigned __int8)sub_CB69D0((__int64)a1, v3, v12, v13, v14) )
    {
      sub_CB69D0((__int64)a1, v4, v28, v29, v30);
      return v8;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_CDB900(a1, &v36) )
    return 0;
  v19 = a1[166];
  v39 = a1;
  v41 = 0;
  v40 = v19;
  a1[166] = &v38;
  v42 = 1;
  v44 = 0;
  v38 = &off_2B216F8;
  v8 = sub_CBBC10((__int64)a1, v3, v16, v17, v18);
  if ( !(_BYTE)v8 )
    goto LABEL_34;
  if ( v44 )
  {
    v20 = sub_C97A90((__int64)&v38, 0);
    v37 = 4;
    v21 = v20;
    sub_CDBA30(v39, v43, &v37);
    sub_C977B0((__int64)&v38);
    if ( !v21 )
      return 0;
  }
  else
  {
    sub_C977B0((__int64)&v38);
  }
  if ( !(unsigned __int8)sub_CDB970(a1, &v35) )
    return 0;
  sub_CDB560(a1, v36);
  v39 = a1;
  v22 = a1[166];
  v42 = 1;
  v41 = 0;
  v40 = v22;
  v44 = 0;
  a1[166] = &v38;
  v38 = &off_2B216F8;
  v8 = sub_CBBC10((__int64)a1, v4, v23, v24, v25);
  if ( !(_BYTE)v8 )
  {
LABEL_34:
    sub_C977B0((__int64)&v38);
    return v8;
  }
  if ( v44 )
  {
    v26 = sub_C97A90((__int64)&v38, 0);
    v37 = 4;
    v27 = v26;
    sub_CDBA30(v39, v43, &v37);
    sub_C977B0((__int64)&v38);
    if ( v27 )
      goto LABEL_24;
    return 0;
  }
  sub_C977B0((__int64)&v38);
LABEL_24:
  sub_CDB9A0(a1, &v35);
  sub_CDB560(a1, v35);
  if ( v7 )
  {
    v38 = (void *)(a2 | 4);
    return (unsigned int)sub_CDCF50(a1, &v38);
  }
  return v8;
}

