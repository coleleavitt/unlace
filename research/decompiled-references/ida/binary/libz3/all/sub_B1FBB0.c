__int64 __fastcall sub_B1FBB0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // r12d
  void *v4; // r13
  __int64 v5; // rdx
  int v6; // edx
  __int64 v7; // rdx
  char v8; // cl
  __int64 v9; // rax
  void *v10; // r13
  int v11; // ecx
  unsigned int v12; // r13d
  void *v13; // rdi
  __int64 v14; // r12
  char v15; // al
  int v16; // eax
  void *v17; // rbx
  void *v19; // [rsp+10h] [rbp-A8h]
  void *v20; // [rsp+10h] [rbp-A8h]
  __int64 v21; // [rsp+20h] [rbp-98h] BYREF
  __int64 v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h] BYREF
  __int64 v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+40h] [rbp-78h] BYREF
  char v26; // [rsp+44h] [rbp-74h]
  __int64 v27; // [rsp+48h] [rbp-70h]
  int v28; // [rsp+50h] [rbp-68h] BYREF
  char v29; // [rsp+54h] [rbp-64h]
  __int64 v30; // [rsp+58h] [rbp-60h]
  int v31; // [rsp+60h] [rbp-58h] BYREF
  char v32; // [rsp+64h] [rbp-54h]
  __int64 v33; // [rsp+68h] [rbp-50h]
  int v34; // [rsp+70h] [rbp-48h] BYREF
  char v35; // [rsp+74h] [rbp-44h]
  __int64 v36; // [rsp+78h] [rbp-40h]

  v21 = 1;
  v22 = 0;
  v23 = 1;
  v24 = 0;
  sub_182CBA0(qword_1C7F2C0, &v23);
  v2 = *(_QWORD *)(a1 + 40);
  BYTE4(v23) &= ~1u;
  LODWORD(v23) = 1;
  if ( v2 )
  {
    v3 = 0;
    while ( 1 )
    {
      v4 = qword_1C7F2C0;
      if ( v3 >= *(_DWORD *)(v2 - 4) )
        break;
      v26 &= 0xFCu;
      v29 &= 0xFCu;
      v5 = 32LL * v3 + v2;
      v25 = 0;
      v27 = 0;
      v28 = 1;
      v30 = 0;
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v25, v5 + 16);
      else
        v25 = *(_DWORD *)(v5 + 16);
      sub_182CBA0(v4, &v28);
      v28 = 1;
      v29 &= ~1u;
      v32 &= 0xFCu;
      v35 &= 0xFCu;
      v31 = 0;
      v33 = 0;
      v34 = 1;
      v36 = 0;
      v19 = qword_1C7F2C0;
      sub_1836B00(qword_1C7F2C0, &v21, &v25, &v31);
      sub_182CBA0(v19, &v34);
      v6 = v31;
      ++v3;
      v31 = v21;
      LODWORD(v21) = v6;
      v7 = v33;
      v33 = v22;
      v22 = v7;
      v20 = qword_1C7F2C0;
      v8 = v32 & 1;
      LOBYTE(v7) = BYTE4(v21) & 0xFC | v32 & 2;
      v32 = BYTE4(v21) & 1 | v32 & 0xFC | BYTE4(v21) & 2;
      BYTE4(v21) = v8 | v7;
      v34 = v23;
      v9 = v24;
      v24 = v36;
      v36 = v9;
      LODWORD(v23) = 1;
      LOBYTE(v9) = BYTE4(v23) & 1 | BYTE4(v23) & 2 | v35 & 0xFC;
      BYTE4(v23) = BYTE4(v23) & 0xFC | v35 & 2;
      v35 = v9;
      sub_182CBA0(qword_1C7F2C0, &v31);
      sub_182CBA0(v20, &v34);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v25);
      sub_182CBA0(v10, &v28);
      v2 = *(_QWORD *)(a1 + 40);
      if ( !v2 )
        goto LABEL_7;
    }
    if ( (v21 & 0x100000000LL) != 0 )
      goto LABEL_10;
  }
  else
  {
LABEL_7:
    v4 = qword_1C7F2C0;
    if ( (v21 & 0x100000000LL) != 0 )
      goto LABEL_26;
  }
  v11 = v21;
  if ( (_DWORD)v21 == 1 && (v23 & 0x100000000LL) == 0 && (_DWORD)v23 == 1 )
  {
    *(_BYTE *)(a1 + 52) &= ~1u;
    *(_DWORD *)(a1 + 48) = 1;
    goto LABEL_18;
  }
  if ( v2 )
  {
LABEL_10:
    v12 = 0;
    do
    {
      v13 = qword_1C7F2C0;
      if ( v12 >= *(_DWORD *)(v2 - 4) )
        break;
      v14 = v2 + 32LL * v12;
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0
        || *(_DWORD *)(v14 + 16) != 1
        || (v23 & 0x100000000LL) != 0
        || (_DWORD)v23 != 1 )
      {
        sub_1848FF0(qword_1C7F2C0, v14, &v21);
      }
      else
      {
        sub_1831650(qword_1C7F2C0, v14, &v21);
        sub_182CBA0(v13, v14 + 16);
        *(_BYTE *)(v14 + 20) &= ~1u;
        *(_DWORD *)(v14 + 16) = 1;
      }
      v2 = *(_QWORD *)(a1 + 40);
      ++v12;
    }
    while ( v2 );
    v4 = qword_1C7F2C0;
    v11 = v21;
    if ( (v21 & 0x100000000LL) == 0 )
      goto LABEL_17;
LABEL_26:
    sub_182C690(v4, a1 + 48, &v21);
    if ( (v23 & 0x100000000LL) == 0 )
      goto LABEL_18;
LABEL_27:
    sub_182C690(v4, a1 + 64, &v23);
    goto LABEL_19;
  }
LABEL_17:
  v15 = BYTE4(v23);
  *(_BYTE *)(a1 + 52) &= ~1u;
  *(_DWORD *)(a1 + 48) = v11;
  if ( (v15 & 1) != 0 )
    goto LABEL_27;
LABEL_18:
  v16 = v23;
  *(_BYTE *)(a1 + 68) &= ~1u;
  *(_DWORD *)(a1 + 64) = v16;
LABEL_19:
  v17 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v21);
  return sub_182CBA0(v17, &v23);
}

