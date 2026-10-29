__int64 __fastcall sub_C6DC60(_QWORD *a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v5; // r15
  char v6; // si
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // cl
  __int64 v10; // r13
  __int64 v11; // rbp
  __int64 v12; // r12
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  char v22; // al
  unsigned int v23; // eax
  int v24; // eax
  __int64 *v25; // rsi
  __int64 v26; // rax
  bool v27; // zf
  __int64 *v28; // r14
  unsigned int v29; // edx
  unsigned int v30; // ebx
  __int64 v31; // r13
  __int64 v33; // rbx
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 i; // rax
  __int64 v37; // [rsp+8h] [rbp-A0h]
  unsigned int v39; // [rsp+18h] [rbp-90h]
  char v40; // [rsp+1Fh] [rbp-89h]
  __int64 *v42; // [rsp+38h] [rbp-70h]
  __int64 *v43; // [rsp+38h] [rbp-70h]
  __int64 *v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+38h] [rbp-70h]
  char v46[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  __int64 v48; // [rsp+58h] [rbp-50h]
  __int64 v49; // [rsp+60h] [rbp-48h] BYREF
  __int64 v50; // [rsp+68h] [rbp-40h]

  sub_EE4940(v46, "factor", *a2);
  v4 = *a2;
  v5 = *a1;
  v6 = *((_BYTE *)*a2 + 123);
  v40 = v6 & 8;
  v7 = (*a2)[9];
  if ( !v7 )
    goto LABEL_52;
  v8 = v4[9];
  v9 = *(_BYTE *)(v7 + 3) >> 6;
  if ( !v9 )
  {
    do
    {
      v8 = *(_QWORD *)(v8 + 16);
      v9 = *(_BYTE *)(v8 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_4;
LABEL_67:
    v39 = *(_DWORD *)(v8 + 4) + 1;
    goto LABEL_6;
  }
  if ( v9 == 1 )
    goto LABEL_67;
LABEL_4:
  if ( v9 == 2 )
    v39 = *(_DWORD *)(v8 + 4) - 1;
  else
    v39 = *(_DWORD *)(v8 + 4);
LABEL_6:
  if ( (v6 & 0x20) != 0 || !v39 )
  {
LABEL_52:
    v37 = v5;
    v11 = 0;
    v12 = 0;
    goto LABEL_53;
  }
  v37 = v5;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 2 )
  {
    v16 = 17;
    while ( 1 )
    {
      if ( *(char *)(v7 + 3) < 0 )
      {
        if ( *(_BYTE *)(v7 + 3) >> 6 != 2 )
        {
          v17 = (__int64 *)(v10 + *(_QWORD *)(v7 + 16));
          goto LABEL_19;
        }
        goto LABEL_26;
      }
      if ( v13 == *(_DWORD *)(v7 + 4) )
        break;
LABEL_26:
      v7 = *(_QWORD *)(v7 + 16);
      if ( !--v16 )
      {
        v43 = v4;
        sub_233F80((__int64 *)(*v4 + 616), (_DWORD *)v4 + 18);
        v17 = (__int64 *)(v10 + *(_QWORD *)(v43[9] + 16));
        goto LABEL_19;
      }
    }
    v17 = (__int64 *)(v7 + 8);
LABEL_19:
    v18 = *v17;
    v47 = v12;
    v48 = v5;
    v50 = v37;
    v49 = v11;
    sub_C6DAC0((__int64)(a1 + 1), v18, &v47, &v49);
    v12 = v47;
    v11 = v49;
    v37 = v50;
    v5 = v48;
    if ( !v40 )
      goto LABEL_20;
    v20 = (*a2)[11];
    if ( !v20 )
      goto LABEL_39;
    v21 = (*a2)[11];
    v22 = *(_BYTE *)(v20 + 3) >> 6;
    if ( v22 )
    {
      if ( v22 != 1 )
        goto LABEL_31;
LABEL_47:
      if ( v13 >= *(_DWORD *)(v21 + 4) + 1 )
        goto LABEL_48;
    }
    else
    {
      do
      {
        v21 = *(_QWORD *)(v21 + 16);
        v22 = *(_BYTE *)(v21 + 3) >> 6;
      }
      while ( !v22 );
      if ( v22 == 1 )
        goto LABEL_47;
LABEL_31:
      if ( v22 == 2 )
        v23 = *(_DWORD *)(v21 + 4) - 1;
      else
        v23 = *(_DWORD *)(v21 + 4);
      if ( v13 >= v23 )
      {
LABEL_48:
        v20 = 0;
        goto LABEL_39;
      }
    }
    v24 = 17;
    while ( 2 )
    {
      if ( *(char *)(v20 + 3) < 0 )
      {
        if ( *(_BYTE *)(v20 + 3) >> 6 != 2 )
        {
          v25 = (__int64 *)(v10 + *(_QWORD *)(v20 + 16));
          goto LABEL_38;
        }
LABEL_50:
        v20 = *(_QWORD *)(v20 + 16);
        if ( !--v24 )
        {
          v44 = *a2;
          sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
          v25 = (__int64 *)(v10 + *(_QWORD *)(v44[11] + 16));
          goto LABEL_38;
        }
        continue;
      }
      break;
    }
    if ( v13 != *(_DWORD *)(v20 + 4) )
      goto LABEL_50;
    v25 = (__int64 *)(v20 + 8);
LABEL_38:
    v20 = *v25;
LABEL_39:
    v26 = sub_15DE0E0(*a1, v20, v11);
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    if ( v11 )
    {
      v27 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v27 )
      {
        v45 = v26;
        sub_15D7BC0(v37, v11);
        v26 = v45;
      }
    }
    v11 = v26;
LABEL_20:
    v19 = *a2;
    if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
    {
      v14 = v19[13];
      v15 = 17;
      do
      {
        if ( *(char *)(v14 + 3) >= 0 )
        {
          if ( v13 == *(_DWORD *)(v14 + 4) )
            goto LABEL_12;
        }
        else if ( *(_BYTE *)(v14 + 3) >> 6 != 2 )
        {
          goto LABEL_12;
        }
        v14 = *(_QWORD *)(v14 + 16);
        --v15;
      }
      while ( v15 );
      v42 = *a2;
      sub_236900((_QWORD *)(*v19 + 672), v19 + 13);
      LODWORD(v19) = (_DWORD)v42;
    }
LABEL_12:
    sub_EDBFA0((int)v19);
    v4 = *a2;
    ++v13;
    v10 += 8;
    if ( (*((_BYTE *)*a2 + 123) & 0x20) == 0 && v13 < v39 )
    {
      v7 = v4[9];
      continue;
    }
    break;
  }
LABEL_53:
  *((_DWORD *)v4 + 30) = (*((_DWORD *)v4 + 30) + 1) & 0x3FFFFFF | v4[15] & 0xFC000000;
  v28 = *a2;
  if ( v28 )
    ++*((_DWORD *)v28 + 8);
  v29 = *(_DWORD *)(a3 + 8);
  v30 = *(_DWORD *)(a3 + 12);
  if ( v29 >= v30 )
  {
    v33 = 2 * v30;
    v31 = sub_186B270(8 * v33);
    v29 = *(_DWORD *)(a3 + 8);
    v34 = *(_QWORD **)a3;
    if ( v29 )
    {
      if ( v29 - 1 <= 2 || (_QWORD *)v31 == v34 + 1 )
      {
        for ( i = 0; i != v29; ++i )
          *(_QWORD *)(v31 + i * 8) = v34[i];
      }
      else
      {
        v35 = 0;
        do
        {
          *(__m128i *)(v31 + v35 * 8) = _mm_loadu_si128((const __m128i *)&v34[v35]);
          v35 += 2;
        }
        while ( 2LL * (v29 >> 1) != v35 );
        if ( (v29 & 1) != 0 )
          *(_QWORD *)(v31 + 8LL * (v29 & 0xFFFFFFFE)) = v34[v29 & 0xFFFFFFFE];
      }
    }
    if ( v34 != (_QWORD *)(a3 + 16) && v34 )
    {
      sub_186B220(v34);
      v29 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v31;
    *(_DWORD *)(a3 + 12) = v33;
  }
  else
  {
    v31 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v31 + 8LL * v29) = v28;
  *(_DWORD *)(a3 + 8) = v29 + 1;
  if ( v11 )
  {
    v27 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v27 )
      sub_15D7BC0(v37, v11);
  }
  if ( v12 )
  {
    v27 = (*(_DWORD *)(v12 + 8))-- == 1;
    if ( v27 )
      sub_15D7BC0(v5, v12);
  }
  return sub_EE4A00(v46);
}

