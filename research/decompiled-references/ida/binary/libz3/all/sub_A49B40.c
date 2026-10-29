__int64 __fastcall sub_A49B40(__int64 a1, unsigned int a2, unsigned int a3, int *a4, __int64 a5)
{
  __int64 v8; // r15
  void *v9; // rdi
  int v10; // eax
  __int64 v11; // rax
  signed int v12; // edx
  __int64 v13; // rcx
  void *v14; // rbx
  __int64 v16; // r15
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  int v20; // eax
  int v21; // r15d
  __int64 v22; // rsi
  int v23; // edx
  __int64 v24; // r10
  _DWORD *v25; // rcx
  __int64 v26; // r8
  _DWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  char v31; // al
  unsigned int v33; // [rsp+10h] [rbp-78h]
  __int64 v34; // [rsp+10h] [rbp-78h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  void *v36; // [rsp+10h] [rbp-78h]
  void *v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  unsigned int v39; // [rsp+2Ch] [rbp-5Ch] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v41[9]; // [rsp+40h] [rbp-48h] BYREF

  v8 = *(_QWORD *)(a1 + 600) + 32LL * a2;
  v40[0] = 0;
  v9 = qword_1C7F2C0;
  v40[1] = 0;
  v41[0] = 1;
  v41[1] = 0;
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
  {
    v38 = a5;
    v36 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v40, v8);
    a5 = v38;
    v9 = v36;
  }
  else
  {
    LODWORD(v40[0]) = *(_DWORD *)v8;
  }
  if ( (*(_BYTE *)(v8 + 20) & 1) != 0 )
  {
    v35 = a5;
    sub_182C690(v9, v41, v8 + 16);
    a5 = v35;
  }
  else
  {
    v10 = *(_DWORD *)(v8 + 16);
    BYTE4(v41[0]) &= ~1u;
    LODWORD(v41[0]) = v10;
  }
  if ( (v41[0] & 0x100000000LL) != 0
    || LODWORD(v41[0]) != 1
    || (*(_BYTE *)(a5 + 20) & 1) != 0
    || *(_DWORD *)(a5 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v40, a5);
  }
  else
  {
    v37 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v40, a5);
    sub_182CBA0(v37, v41);
    BYTE4(v41[0]) &= ~1u;
    LODWORD(v41[0]) = 1;
  }
  sub_3ED4D0((__int64)qword_1C7F2C0, (int *)v40, (__int64)a4, (__int64)v40);
  sub_9DA920((_QWORD *)a1, a3, (__int64)v40);
  v11 = *(_QWORD *)(a1 + 808);
  if ( v11 )
    v12 = *(_DWORD *)(v11 - 4);
  else
    v12 = 0;
  v13 = a3;
  if ( (int)a3 < v12 && *(_DWORD *)(v11 + 4LL * a3) )
    goto LABEL_12;
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * a3);
  if ( !v16 || (v17 = sub_999800(a1, a3), v18 = sub_3ED700((__int64)qword_1C7F2C0, v17, v16 + 16), v13 = a3, !v18) )
  {
    v29 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8 * v13);
    if ( !v29 )
      goto LABEL_12;
    v34 = v13;
    v30 = sub_999800(a1, a3);
    v31 = sub_3ED700((__int64)qword_1C7F2C0, v29 + 16, v30);
    v13 = v34;
    if ( !v31 )
      goto LABEL_12;
    v19 = *(_QWORD *)(a1 + 800);
    v39 = a3;
    if ( v19 )
      goto LABEL_16;
LABEL_25:
    v21 = 0;
    v20 = 0;
    goto LABEL_17;
  }
  v19 = *(_QWORD *)(a1 + 800);
  v39 = a3;
  if ( !v19 )
    goto LABEL_25;
LABEL_16:
  v20 = *(_DWORD *)(v19 - 4);
  v21 = v20;
LABEL_17:
  v33 = v20;
  *(_DWORD *)(*(_QWORD *)(a1 + 808) + 4 * v13) = v21;
  sub_98D100((_QWORD *)(a1 + 800), &v39);
  v22 = *(_QWORD *)(a1 + 800);
  v23 = v21 >> 1;
  v24 = *(_QWORD *)(a1 + 808);
  v25 = (_DWORD *)(v22 + 4LL * v33);
  v26 = (unsigned int)*v25;
  if ( v21 >> 1 )
  {
    while ( 1 )
    {
      v27 = (_DWORD *)(v22 + 4LL * (unsigned int)v23);
      v25 = (_DWORD *)(v22 + 4LL * (unsigned int)v21);
      v28 = (unsigned int)*v27;
      if ( (int)v26 >= (int)v28 )
        break;
      *v25 = v28;
      *(_DWORD *)(v24 + 4 * v28) = v21;
      v21 = v23;
      v23 >>= 1;
      if ( !v23 )
      {
        *v27 = v26;
        *(_DWORD *)(v24 + 4 * v26) = 1;
        goto LABEL_12;
      }
    }
  }
  *v25 = v26;
  *(_DWORD *)(v24 + 4 * v26) = v21;
LABEL_12:
  sub_A49890(a1, a2, a3, a4, *(_BYTE *)(a1 + 932));
  v14 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v40);
  return sub_182CBA0(v14, v41);
}

