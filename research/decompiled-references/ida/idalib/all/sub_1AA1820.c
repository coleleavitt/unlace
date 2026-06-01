_QWORD *__fastcall sub_1AA1820(_BYTE *a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 *v12; // rbx
  _QWORD *result; // rax
  _QWORD *v14; // r15
  __int64 v15; // r13
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  _DWORD *v19; // rsi
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rbx
  char v26; // al
  __int64 v27; // rdx
  void *v28; // rdi
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v30; // [rsp+10h] [rbp-68h]
  char v31; // [rsp+1Fh] [rbp-59h]
  char v32; // [rsp+1Fh] [rbp-59h]
  void *v33; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v34; // [rsp+28h] [rbp-50h]
  char v35; // [rsp+2Ch] [rbp-4Ch]
  void *v36; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v37; // [rsp+38h] [rbp-40h]
  char v38; // [rsp+3Ch] [rbp-3Ch]

  *(_BYTE *)(*(_QWORD *)a1 + 32LL) &= ~2u;
  *(_BYTE *)(*(_QWORD *)a1 + 72LL) = 1;
  v9 = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 64LL) )
  {
    v27 = *(unsigned int *)(v9 + 56);
    if ( (unsigned int)v27 > 0x40 )
    {
      **(_QWORD **)(v9 + 48) = 0;
      memset(
        (void *)(*(_QWORD *)(v9 + 48) + 8LL),
        0,
        8 * ((unsigned int)((unsigned __int64)(v27 + 63) >> 6) + 0x1FFFFFFF));
    }
    else
    {
      *(_QWORD *)(v9 + 48) = 0;
    }
  }
  else
  {
    *(_DWORD *)(v9 + 56) = 0;
    *(_QWORD *)(v9 + 48) = 0;
    *(_BYTE *)(v9 + 60) = 1;
    *(_BYTE *)(v9 + 64) = 1;
  }
  v10 = (__int64)&a2[a3];
  v11 = (__int64)&a4[a5];
  *(_BYTE *)(*(_QWORD *)a1 + 92LL) = 1;
  v12 = sub_1AA0CB0(a2, v10);
  result = sub_1AA0DC0(a4, v11);
  v14 = result;
  if ( (_QWORD *)v11 == result )
    return result;
  v15 = 0;
  do
  {
    v16 = *v14;
    v17 = *(_QWORD *)(*v14 + 32LL);
    if ( (__int64 *)v10 == v12 )
    {
      if ( !v17 )
        goto LABEL_27;
      v19 = **(_DWORD ***)(v16 + 24);
      if ( !v19 || (*v19 & 0x8000) != 0 )
        goto LABEL_27;
      if ( !v15 )
      {
        v15 = *v14;
        goto LABEL_27;
      }
    }
    else
    {
      if ( !v17 )
        goto LABEL_26;
      v18 = *v12;
      v19 = **(_DWORD ***)(v16 + 24);
      if ( !v19 || (*v19 & 0x8000) != 0 )
        goto LABEL_26;
      if ( v18 )
      {
        if ( !*(_QWORD *)(v18 + 32) )
          BUG();
        if ( (BYTE1(***(_DWORD ***)(v18 + 24)) & 0x80u) == 0 )
          goto LABEL_26;
      }
      if ( !v15 )
      {
        v15 = *v14;
LABEL_26:
        v12 = sub_1AA0CB0(v12 + 1, v10);
        goto LABEL_27;
      }
    }
    v29 = *v14;
    sub_BF7A50((__int64)&v36, (__int64)v19);
    v20 = 0;
    if ( *(_QWORD *)(v15 + 32) )
      v20 = **(_QWORD **)(v15 + 24);
    sub_BF7A50((__int64)&v33, v20);
    if ( v35 )
      v21 = sub_2205DB0(&v33, &v36);
    else
      v21 = sub_2205E20(&v33, &v36);
    v22 = v29;
    v23 = v21 >> 31;
    if ( v34 > 0x40 && v33 )
    {
      v31 = v23;
      operator delete[](v33);
      LOBYTE(v23) = v31;
      v22 = v29;
    }
    if ( v37 > 0x40 && v36 )
    {
      v32 = v23;
      v30 = v22;
      operator delete[](v36);
      LOBYTE(v23) = v32;
      v22 = v30;
    }
    if ( (_BYTE)v23 )
      v15 = v22;
    if ( (__int64 *)v10 != v12 )
      goto LABEL_26;
LABEL_27:
    result = sub_1AA0DC0(v14 + 1, v11);
    v14 = result;
  }
  while ( result != (_QWORD *)v11 );
  if ( v15 )
  {
    v24 = 0;
    *(_QWORD *)(*(_QWORD *)a1 + 40LL) = v15;
    *(_BYTE *)(*(_QWORD *)a1 + 72LL) = 0;
    if ( *(_QWORD *)(v15 + 32) )
      v24 = **(_QWORD **)(v15 + 24);
    sub_BF7A50((__int64)&v36, v24);
    v25 = *(_QWORD *)a1;
    if ( *(_BYTE *)(*(_QWORD *)a1 + 64LL) )
    {
      if ( *(_DWORD *)(v25 + 56) > 0x40u )
      {
        v28 = *(void **)(v25 + 48);
        if ( v28 )
          operator delete[](v28);
      }
      *(_QWORD *)(v25 + 48) = v36;
      *(_DWORD *)(v25 + 56) = v37;
      *(_BYTE *)(v25 + 60) = v38;
    }
    else
    {
      *(_DWORD *)(v25 + 56) = v37;
      *(_QWORD *)(v25 + 48) = v36;
      v26 = v38;
      *(_BYTE *)(v25 + 64) = 1;
      *(_BYTE *)(v25 + 60) = v26;
    }
    result = *(_QWORD **)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 73LL) = a1[32];
  }
  return result;
}
