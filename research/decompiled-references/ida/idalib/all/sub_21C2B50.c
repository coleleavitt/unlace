_QWORD *__fastcall sub_21C2B50(_QWORD *a1, __int64 a2, unsigned __int64 **a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 *v9; // rbp
  char *v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // r12
  unsigned __int64 v13; // r13
  __int64 *i; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 *v19; // rax
  unsigned __int64 **j; // r13
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rdx
  char v23; // si
  unsigned __int64 *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rbp
  unsigned __int64 *v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  unsigned __int64 *v32; // rsi
  unsigned __int64 v33; // rdx
  unsigned __int64 *v34; // rdi
  _QWORD *v35; // rsi
  __int64 *v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rax
  const __m128i *v42; // rdx
  __m128i *v43; // rax
  unsigned __int64 v44; // r8
  __int64 v46; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v47; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v49; // [rsp+20h] [rbp-D8h]
  __int64 v50; // [rsp+28h] [rbp-D0h]
  std::_V2 *v52[2]; // [rsp+40h] [rbp-B8h]
  int v53[2]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v54; // [rsp+68h] [rbp-90h]
  int v55; // [rsp+70h] [rbp-88h]
  void *ptr; // [rsp+80h] [rbp-78h] BYREF
  __int64 v57; // [rsp+88h] [rbp-70h]
  _BYTE v58[104]; // [rsp+90h] [rbp-68h] BYREF

  v8 = *(unsigned int *)(a2 + 200);
  v9 = *(__int64 **)(a2 + 192);
  v10 = v58;
  v11 = 3 * v8;
  ptr = v58;
  v12 = &v9[v11];
  v57 = 0x300000000LL;
  v13 = 0xAAAAAAAAAAAAAAABLL * ((v11 * 8) >> 3);
  if ( v11 > 9 )
  {
    sub_2237220(&ptr, v58, 0xAAAAAAAAAAAAAAABLL * ((v11 * 8) >> 3), 16);
    LODWORD(v13) = v57 + v13;
    v10 = (char *)ptr + 16 * (unsigned int)v57;
  }
  for ( i = v9; v12 != i; *((_QWORD *)v10 - 1) = v16 )
  {
    v15 = *i;
    v16 = i[1];
    i += 3;
    v10 += 16;
    *((_QWORD *)v10 - 2) = v15;
  }
  v17 = *a3;
  LODWORD(v57) = v13;
  v18 = *v17;
  v19 = v17 + 1;
  *a3 = v19;
  v49 = v18;
  if ( !v18 )
  {
LABEL_26:
    *a1 = 0;
    goto LABEL_27;
  }
  v46 = 0;
  for ( j = a3; ; v19 = *j )
  {
    v21 = *v19;
    *j = v19 + 1;
    v22 = (unsigned __int64 *)((char *)v19 + 9);
    v23 = *((_BYTE *)v19 + 8);
    v24 = (unsigned __int64 *)((char *)v19 + 17);
    *j = v22;
    v25 = *(v24 - 1);
    *(_OWORD *)v52 = 0;
    *j = v24;
    if ( v23 )
    {
      v52[0] = (std::_V2 *)v21;
      v23 = 1;
    }
    else
    {
      v21 = (unsigned __int64)ptr + 16 * v21;
      *(__m128i *)v52 = _mm_loadu_si128((const __m128i *)v21);
    }
    sub_21C1250(v53, a2, v25, (__m128i *)v21, a5, a6, v52[0], (__int64)v52[1], v23);
    if ( *(_QWORD *)v53 )
      break;
    v26 = *(_QWORD *)(a2 + 152) + ((unsigned __int64)*(unsigned int *)(a2 + 160) << 6) - 64;
    v27 = *(unsigned int *)(v26 + 60);
    v28 = **j;
    v29 = *j + 1;
    *j = v29;
    if ( v27 < v28 )
    {
      v47 = v26 + 48;
      sub_2237220(v26 + 48, v26 + 64, v28, 24);
      v29 = *j;
      v27 = *(unsigned int *)(v26 + 60);
    }
    else
    {
      if ( !v28 )
        goto LABEL_18;
      v47 = v26 + 48;
    }
    v30 = *(unsigned int *)(v26 + 56);
    v31 = 0;
    v32 = v29;
    v48 = v26 + 64;
    while ( 1 )
    {
      v33 = *v32;
      v34 = v32 + 1;
      v35 = (unsigned __int64 *)((char *)v32 + 12);
      *j = v34;
      LODWORD(v34) = *((_DWORD *)v35 - 1);
      v36 = (__int64 *)((char *)ptr + 16 * v33);
      *j = v35;
      v37 = *v36;
      v38 = v36[1];
      v55 = (int)v34;
      v54 = v38;
      v39 = v30 + 1;
      *(_QWORD *)v53 = v37;
      v40 = 24 * v30;
      if ( v30 + 1 > v27 )
      {
        v44 = *(_QWORD *)(v26 + 48);
        if ( v44 > (unsigned __int64)v53 || (unsigned __int64)v53 >= v44 + v40 )
        {
          sub_2237220(v47, v48, v39, 24);
          v41 = *(_QWORD *)(v26 + 48);
          v42 = (const __m128i *)v53;
          v40 = 24LL * *(unsigned int *)(v26 + 56);
        }
        else
        {
          v50 = *(_QWORD *)(v26 + 48);
          sub_2237220(v47, v48, v39, 24);
          v41 = *(_QWORD *)(v26 + 48);
          a5 = v50;
          v40 = 24LL * *(unsigned int *)(v26 + 56);
          v42 = (const __m128i *)((char *)v53 + v41 - v50);
        }
      }
      else
      {
        v41 = *(_QWORD *)(v26 + 48);
        v42 = (const __m128i *)v53;
      }
      v43 = (__m128i *)(v40 + v41);
      ++v31;
      *v43 = _mm_loadu_si128(v42);
      v43[1].m128i_i64[0] = v42[1].m128i_i64[0];
      v30 = (unsigned int)(*(_DWORD *)(v26 + 56) + 1);
      *(_DWORD *)(v26 + 56) = v30;
      if ( v31 >= v28 )
        break;
      v32 = *j;
      v27 = *(unsigned int *)(v26 + 60);
    }
LABEL_18:
    if ( v49 == ++v46 )
      goto LABEL_26;
  }
  *a1 = *(_QWORD *)v53;
LABEL_27:
  if ( ptr != v58 )
    free(ptr);
  return a1;
}
