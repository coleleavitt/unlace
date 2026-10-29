__int64 __fastcall sub_4641B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r15
  void *v7; // r12
  int v8; // eax
  void *v9; // r15
  void *v10; // r15
  bool v11; // al
  void *v12; // r15
  void *v13; // rbx
  unsigned int v14; // r12d
  void *v15; // rbx
  void *v17; // r12
  void *v18; // rbx
  __int64 v20; // [rsp+8h] [rbp-B0h]
  int v21; // [rsp+20h] [rbp-98h] BYREF
  char v22; // [rsp+24h] [rbp-94h]
  __int64 v23; // [rsp+28h] [rbp-90h]
  int v24; // [rsp+30h] [rbp-88h] BYREF
  char v25; // [rsp+34h] [rbp-84h]
  __int64 v26; // [rsp+38h] [rbp-80h]
  _QWORD v27[2]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-68h] BYREF
  int v29; // [rsp+60h] [rbp-58h] BYREF
  char v30; // [rsp+64h] [rbp-54h]
  __int64 v31; // [rsp+68h] [rbp-50h]
  int v32; // [rsp+70h] [rbp-48h] BYREF
  char v33; // [rsp+74h] [rbp-44h]
  __int64 v34; // [rsp+78h] [rbp-40h]

  v3 = *a1;
  v4 = qword_1C7F2C0;
  v22 &= 0xFCu;
  v25 &= 0xFCu;
  v21 = 0;
  v23 = 0;
  v24 = 1;
  v26 = 0;
  sub_1831270(qword_1C7F2C0, v3, a2, &v21);
  sub_182CBA0(v4, &v24);
  v5 = *a1;
  v25 &= ~1u;
  v24 = 1;
  if ( !v5 || (v6 = 32LL * *(unsigned int *)(v5 - 4), v20 = v5 + v6, v5 + v6 == v5) )
  {
LABEL_17:
    v14 = 1;
    goto LABEL_15;
  }
  while ( 1 )
  {
    v27[0] = 0;
    v7 = qword_1C7F2C0;
    v27[1] = 0;
    v28[0] = 1;
    v28[1] = 0;
    if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v27, v5);
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
      {
LABEL_21:
        sub_182C690(v7, v28, v5 + 16);
        goto LABEL_6;
      }
    }
    else
    {
      LODWORD(v27[0]) = *(_DWORD *)v5;
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
        goto LABEL_21;
    }
    v8 = *(_DWORD *)(v5 + 16);
    BYTE4(v28[0]) &= ~1u;
    LODWORD(v28[0]) = v8;
LABEL_6:
    v9 = qword_1C7F2C0;
    v30 &= 0xFCu;
    v33 &= 0xFCu;
    v29 = 0;
    v31 = 0;
    v32 = 1;
    v34 = 0;
    sub_1831270(qword_1C7F2C0, v27, a2, &v29);
    sub_182CBA0(v9, &v32);
    v33 &= ~1u;
    v10 = qword_1C7F2C0;
    v32 = 1;
    if ( (v30 & 1) != 0 || (v22 & 1) != 0 )
      break;
    if ( v29 != v21 )
      goto LABEL_19;
LABEL_9:
    if ( (v33 & 1) != 0 || (v25 & 1) != 0 )
      v11 = (unsigned int)sub_182C7B0(v10, &v32, &v24) == 0;
    else
      v11 = v32 == v24;
    v12 = qword_1C7F2C0;
    if ( !v11 )
    {
      sub_182CBA0(qword_1C7F2C0, &v29);
      sub_182CBA0(v12, &v32);
      goto LABEL_14;
    }
    v5 += 32;
    sub_182CBA0(qword_1C7F2C0, &v29);
    sub_182CBA0(v12, &v32);
    v17 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v27);
    sub_182CBA0(v17, v28);
    if ( v20 == v5 )
      goto LABEL_17;
  }
  if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, &v29, &v21) )
    goto LABEL_9;
LABEL_19:
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v29);
  sub_182CBA0(v18, &v32);
LABEL_14:
  v13 = qword_1C7F2C0;
  v14 = 0;
  sub_182CBA0(qword_1C7F2C0, v27);
  sub_182CBA0(v13, v28);
LABEL_15:
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  sub_182CBA0(v15, &v24);
  return v14;
}

