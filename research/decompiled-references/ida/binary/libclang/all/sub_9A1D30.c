__int64 __fastcall sub_9A1D30(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  int v9; // r9d
  unsigned int v10; // edx
  __int64 *v11; // r13
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // r12
  __int64 v20; // rdx
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  void **v28; // rbx
  __int64 *v30; // rdi
  _QWORD *v31; // rax

  v5 = *((unsigned int *)a1 + 4);
  v6 = *a1;
  if ( !(_DWORD)v5 )
    return 0;
  v9 = 1;
  v10 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v11 = (__int64 *)(v6 + 80LL * v10);
  v12 = *v11;
  if ( a2 != *v11 )
  {
    while ( v12 != -4096 )
    {
      v10 = (v5 - 1) & (v10 + v9);
      v11 = (__int64 *)(v6 + 80LL * v10);
      v12 = *v11;
      if ( a2 == *v11 )
        goto LABEL_3;
      ++v9;
    }
    return 0;
  }
LABEL_3:
  if ( v11 == (__int64 *)(v6 + 80 * v5) )
    return 0;
  v13 = (_QWORD *)v11[1];
  v14 = 8LL * *((unsigned int *)v11 + 4);
  v15 = &v13[(unsigned __int64)v14 / 8];
  v16 = v14 >> 3;
  v17 = v14 >> 5;
  if ( v17 )
  {
    v18 = &v13[4 * v17];
    while ( *v13 != a3 )
    {
      if ( v13[1] == a3 )
      {
        v19 = ++v13 + 1;
        goto LABEL_12;
      }
      if ( v13[2] == a3 )
      {
        v13 += 2;
        v19 = v13 + 1;
        goto LABEL_12;
      }
      if ( v13[3] == a3 )
      {
        v13 += 3;
        v19 = v13 + 1;
        goto LABEL_12;
      }
      v13 += 4;
      if ( v13 == v18 )
      {
        v16 = v15 - v13;
        goto LABEL_33;
      }
    }
    goto LABEL_11;
  }
LABEL_33:
  switch ( v16 )
  {
    case 2LL:
      v31 = v13;
      break;
    case 3LL:
      v19 = v13 + 1;
      v31 = v13 + 1;
      if ( *v13 == a3 )
        goto LABEL_12;
      break;
    case 1LL:
      goto LABEL_37;
    default:
LABEL_36:
      a3 = *v15;
      v13 = v15;
      v19 = v15 + 1;
      goto LABEL_12;
  }
  v13 = v31 + 1;
  if ( *v31 == a3 )
  {
    v13 = v31;
    goto LABEL_11;
  }
LABEL_37:
  if ( *v13 != a3 )
    goto LABEL_36;
LABEL_11:
  v19 = v13 + 1;
LABEL_12:
  v20 = *(_QWORD *)(a3 + 32);
  v21 = *(void (__fastcall **)(__int64, __int64))(v20 + 64);
  if ( v21 )
    v21(a3, a3 + *(unsigned int *)(v20 + 16) + 40);
  *(_BYTE *)(a3 + 27) = 0;
  sub_A1ADF0(a4, a3);
  v22 = v11[1];
  v23 = *((unsigned int *)v11 + 4);
  v24 = (v22 + 8 * v23 - (__int64)v19) >> 3;
  if ( v22 + 8 * v23 - (__int64)v19 > 0 )
  {
    while ( 1 )
    {
      v25 = v13[1];
      v26 = (void *)*v13;
      v13[1] = 0;
      *v13 = v25;
      if ( v26 )
        operator delete[](v26);
      v13 = v19;
      if ( !--v24 )
        break;
      ++v19;
    }
    LODWORD(v23) = *((_DWORD *)v11 + 4);
    v22 = v11[1];
  }
  v27 = (unsigned int)(v23 - 1);
  v28 = (void **)(v22 + 8 * v27);
  *((_DWORD *)v11 + 4) = v27;
  if ( *v28 )
    operator delete[](*v28);
  *v28 = nullptr;
  if ( !*((_DWORD *)v11 + 4) )
  {
    v30 = (__int64 *)v11[1];
    if ( v30 != v11 + 3 )
      free(v30);
    *v11 = -8192;
    a1[1] = _mm_add_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 1)), _mm_loadl_epi64((const __m128i *)&qword_3C86F78)).m128i_u64[0];
  }
  return 1;
}

