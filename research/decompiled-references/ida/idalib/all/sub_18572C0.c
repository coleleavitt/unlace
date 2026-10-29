__int64 __fastcall sub_18572C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r15
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbp
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r12
  __int64 v33; // rax
  _QWORD *v34; // rax
  int v35; // [rsp+4h] [rbp-44h] BYREF
  __int64 v36[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = (*a2 >> 1) & 3;
  if ( v4 != 2 && v4 != 1 )
  {
    v35 = 1;
    v5 = sub_1587D10(a1, &v35);
    v6 = *a2;
    if ( !*a2 || (v6 & 6) != 0 )
      BUG();
    v36[0] = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    sub_162B6D0(v5, v36);
    goto LABEL_6;
  }
  v35 = 0;
  v11 = sub_1587D10(a1, &v35);
  v12 = *a2;
  v13 = v11;
  v14 = (*a2 >> 1) & 3;
  if ( v14 == 1 )
  {
    v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !*(_BYTE *)(v13 + 120) )
      goto LABEL_16;
LABEL_29:
    sub_AE9DF0((unsigned __int8 **)(v13 + 32), v15, 0xAu);
    goto LABEL_6;
  }
  v15 = 0;
  if ( v14 == 2 )
    v15 = *(_QWORD *)(*(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                    + 8LL * *(unsigned int *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                    - 8);
  if ( *(_BYTE *)(v13 + 120) )
    goto LABEL_29;
LABEL_16:
  if ( *(_BYTE *)(v13 + 132) )
  {
    v20 = sub_168B9E0((_QWORD *)v13);
    v21 = *(_QWORD *)(v13 + 16);
    if ( v21 )
      v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 32LL))(*(_QWORD *)(v13 + 16));
    v36[0] = v21;
    v22 = sub_1587BC0(v20, v36, v16, v17, v18, v19);
    sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * *(unsigned int *)(v13 + 128) + 8), v15, 0xAu);
    v7 = (*a3 >> 1) & 3;
    if ( v7 == 2 )
      goto LABEL_20;
    goto LABEL_7;
  }
LABEL_6:
  v7 = (*a3 >> 1) & 3;
  if ( v7 == 2 )
    goto LABEL_20;
LABEL_7:
  if ( v7 != 1 )
  {
    v35 = 1;
    v8 = sub_1587D10(a1, &v35);
    v9 = *a3;
    if ( !*a3 || (v9 & 6) != 0 )
      BUG();
    v36[0] = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF8LL);
    return sub_162B6D0(v8, v36);
  }
LABEL_20:
  v35 = 0;
  v23 = sub_1587D10(a1, &v35);
  v24 = *a3;
  v25 = v23;
  result = (*a3 >> 1) & 3;
  if ( result != 1 )
  {
    v26 = 0;
    if ( result == 2 )
    {
      v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      result = *(_QWORD *)(v27 + 56);
      v26 = *(_QWORD *)(result + 8LL * *(unsigned int *)(v27 + 64) - 8);
    }
    if ( !*(_BYTE *)(v25 + 120) )
      goto LABEL_24;
    return sub_AE9DF0((unsigned __int8 **)(v25 + 32), v26, 0xAu);
  }
  v26 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)(v25 + 120) )
    return sub_AE9DF0((unsigned __int8 **)(v25 + 32), v26, 0xAu);
LABEL_24:
  if ( *(_BYTE *)(v25 + 132) )
  {
    v32 = sub_168B9E0((_QWORD *)v25);
    v33 = *(_QWORD *)(v25 + 16);
    if ( v33 )
      v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 32LL))(*(_QWORD *)(v25 + 16));
    v36[0] = v33;
    v34 = sub_1587BC0(v32, v36, v28, v29, v30, v31);
    return sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * *(unsigned int *)(v25 + 128) + 8), v26, 0xAu);
  }
  return result;
}
