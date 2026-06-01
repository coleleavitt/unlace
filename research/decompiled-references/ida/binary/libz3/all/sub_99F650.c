int *__fastcall sub_99F650(int *a1, __int64 *a2)
{
  int *v4; // rsi
  void *v5; // rdi
  __int64 v6; // r14
  __int64 i; // r15
  int v8; // edx
  __int64 v9; // rdx
  char v10; // di
  char v11; // cl
  char v12; // si
  char v13; // di
  __int64 v14; // rdx
  char v15; // r8
  char v16; // cl
  void *v17; // rdi
  void *v18; // r13
  void *v19; // r13
  void *v21; // [rsp+8h] [rbp-90h]
  void *v22; // [rsp+18h] [rbp-80h]
  int v23; // [rsp+20h] [rbp-78h] BYREF
  char v24; // [rsp+24h] [rbp-74h]
  __int64 v25; // [rsp+28h] [rbp-70h]
  int v26; // [rsp+30h] [rbp-68h] BYREF
  char v27; // [rsp+34h] [rbp-64h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  int v29; // [rsp+40h] [rbp-58h] BYREF
  char v30; // [rsp+44h] [rbp-54h]
  __int64 v31; // [rsp+48h] [rbp-50h]
  int v32; // [rsp+50h] [rbp-48h] BYREF
  char v33; // [rsp+54h] [rbp-44h]
  __int64 v34; // [rsp+58h] [rbp-40h]

  v4 = a1 + 4;
  *((_BYTE *)a1 + 20) &= 0xFCu;
  *((_QWORD *)a1 + 1) = 0;
  a1[4] = 1;
  *((_QWORD *)a1 + 3) = 0;
  v5 = qword_1C7F2C0;
  *((_BYTE *)a1 + 4) &= 0xFCu;
  *a1 = 1;
  sub_182CBA0(v5, v4);
  v6 = *a2;
  *((_BYTE *)a1 + 20) &= ~1u;
  a1[4] = 1;
  if ( v6 )
  {
    for ( i = v6 + 40LL * *(unsigned int *)(v6 - 4); v6 != i; v6 += 40 )
    {
      if ( *(_DWORD *)(v6 + 32) != -1 )
      {
        v24 &= 0xFCu;
        v19 = qword_1C7F2C0;
        v27 &= 0xFCu;
        v23 = 0;
        v25 = 0;
        v26 = 1;
        v28 = 0;
        if ( (*(_BYTE *)(v6 + 20) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v23, v6 + 16);
        else
          v23 = *(_DWORD *)(v6 + 16);
        sub_182CBA0(v19, &v26);
        v27 &= ~1u;
        v30 &= 0xFCu;
        v33 &= 0xFCu;
        v26 = 1;
        v29 = 0;
        v31 = 0;
        v32 = 1;
        v34 = 0;
        v21 = qword_1C7F2C0;
        sub_1836B00(qword_1C7F2C0, a1, &v23, &v29);
        sub_182CBA0(v21, &v32);
        v8 = *a1;
        *a1 = v29;
        v29 = v8;
        v9 = *((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 1) = v31;
        v31 = v9;
        v10 = *((_BYTE *)a1 + 4);
        LOBYTE(v9) = v10 & 2;
        v10 &= ~2u;
        v11 = v30 & 1;
        LOBYTE(v9) = v10 & 1 | v30 & 0xFC | v9 & 0xFE;
        v12 = v10 & 0xFE | v30 & 2;
        v13 = *((_BYTE *)a1 + 20);
        v30 = v9;
        LODWORD(v9) = a1[4];
        *((_BYTE *)a1 + 4) = v12 | v11;
        v32 = v9;
        v14 = *((_QWORD *)a1 + 3);
        v15 = v13 & 0xFD;
        *((_QWORD *)a1 + 3) = v34;
        v34 = v14;
        LOBYTE(v14) = v33;
        a1[4] = 1;
        v16 = v14;
        LOBYTE(v14) = v13 & 2 | v14 & 0xFC;
        v17 = qword_1C7F2C0;
        v22 = qword_1C7F2C0;
        *((_BYTE *)a1 + 20) = v15 & 0xFE | v16 & 2;
        v33 = v15 & 1 | v14;
        sub_182CBA0(v17, &v29);
        sub_182CBA0(v22, &v32);
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v23);
        sub_182CBA0(v18, &v26);
      }
    }
  }
  return a1;
}

