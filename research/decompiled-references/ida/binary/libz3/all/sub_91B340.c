__int64 __fastcall sub_91B340(__int64 a1, unsigned int *a2, int a3, unsigned __int64 a4)
{
  unsigned int *v7; // rbx
  __int64 result; // rax
  __int64 (__fastcall *v9)(_QWORD *, __int64); // r8
  __int64 v10; // rax
  unsigned int v11; // esi
  __m128 *v12; // r14
  unsigned int **v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  const double *v16; // rdi
  __int64 v17; // rdx
  unsigned int **v18; // r8
  const double *i; // rax
  unsigned int *v20; // rdx
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned int v23; // r8d
  __m128i *v24; // r12
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  __m128i *v28; // r9
  unsigned int **v29; // rax
  unsigned int **v30; // rdi
  unsigned int *v31; // rdx
  unsigned int *v32; // rax
  unsigned int *v33; // rax
  _QWORD *v34; // rdx
  int v35; // ebp
  unsigned int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  unsigned int v39; // r12d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rcx
  __m128i *v43; // rax
  int v44; // r9d
  __m128i *v45; // r10
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __m128i *v49; // r11
  unsigned int *v50; // rdi
  __m128i *v51; // rsi
  const __m128i *v52; // rbx
  char v53; // r10
  __m128i *v54; // rbp
  __int64 v55; // rdx
  __m128i *v56; // rsi
  __m128i *v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rax
  char **exception; // rbx
  size_t v61; // [rsp+0h] [rbp-98h]
  int v62; // [rsp+Ch] [rbp-8Ch]
  int v63; // [rsp+10h] [rbp-88h]
  __int64 v64[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a2;
  result = sub_8E7030(*(_QWORD *)(a1 + 8));
  if ( !(_DWORD)result )
    return result;
  result = sub_8E8110(*(_QWORD **)(a1 + 8), a2);
  if ( !(_BYTE)a3 )
    result = (unsigned int)-(int)result;
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v9 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*(_QWORD *)a4 + 24LL);
      if ( v9 == sub_8E3150 )
        return (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)a4 + 32LL))(a4, a1);
      else
        return ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned int *, _QWORD))v9)(
                 a4,
                 a1,
                 a2,
                 (unsigned __int8)a3);
    }
    return result;
  }
  v10 = sub_180C100(*(_QWORD *)(a1 + 8) + 8400LL, 16);
  v11 = a2[3];
  v12 = (__m128 *)v10;
  v13 = *(unsigned int ***)(a1 + (-a3 & 0x18) + 72);
  v14 = *(unsigned int *)(a1 + (-a3 & 0x18) + 80);
  v15 = v14 - 1;
  v14 *= 16;
  v16 = (const double *)((char *)v13 + v14);
  v17 = 16LL * (v11 & v15);
  v18 = &v13[(unsigned __int64)v17 / 8];
  if ( v17 != v14 )
  {
    for ( i = (const double *)&v13[(unsigned __int64)v17 / 8]; v16 != i; i += 2 )
    {
      v20 = *(unsigned int **)i;
      if ( *(_QWORD *)i > 1u )
      {
        if ( v20[3] == v11 && v7 == v20 )
        {
LABEL_18:
          *v12 = _mm_loadh_ps(i + 1);
          goto LABEL_19;
        }
      }
      else if ( !v20 )
      {
        goto LABEL_16;
      }
    }
  }
  for ( ; v18 != v13; v13 += 2 )
  {
    v33 = *v13;
    if ( (unsigned __int64)*v13 > 1 )
    {
      if ( v33[3] == v11 && v7 == v33 )
      {
        i = (const double *)v13;
        goto LABEL_18;
      }
    }
    else if ( !v33 )
    {
      break;
    }
  }
LABEL_16:
  v12->m128_u64[0] = a4;
  v12->m128_u64[1] = 0;
LABEL_19:
  v21 = (unsigned __int8)a3;
  v22 = a1 + 24LL * (unsigned __int8)a3;
  v23 = *(_DWORD *)(v22 + 80);
  if ( 3 * v23 < 4 * (*(_DWORD *)(v22 + 84) + *(_DWORD *)(v22 + 88)) )
  {
    v63 = 2 * v23;
    v62 = 2 * v23;
    v61 = 32LL * v23;
    v43 = (__m128i *)sub_186B270(v61);
    v44 = v62;
    v23 = v63;
    v24 = v43;
    v45 = &v43[v61 / 0x10];
    if ( v62 )
    {
      if ( (v61 & 0x10) == 0 || (*v43 = 0, ++v43, v43 != v45) )
      {
        do
        {
          *v43 = 0;
          v43 += 2;
          v43[-1] = 0;
        }
        while ( v43 != v45 );
      }
    }
    v46 = a1 + 24LL * (unsigned __int8)a3;
    v47 = *(_QWORD *)(v46 + 72);
    v48 = 16LL * *(unsigned int *)(v46 + 80);
    v49 = (__m128i *)(v47 + v48);
    if ( v47 != v47 + v48 )
    {
      v50 = v7;
      v51 = v45;
      v52 = *(const __m128i **)(v46 + 72);
      v53 = a3;
      v54 = v51;
      do
      {
        if ( v52->m128i_i64[0] > 1uLL )
        {
          v55 = 16LL * (*(_DWORD *)(v52->m128i_i64[0] + 12) & (unsigned int)(v62 - 1));
          v56 = &v24[(unsigned __int64)v55 / 0x10];
          if ( v61 == v55 )
          {
LABEL_65:
            if ( v24 == v56 )
            {
LABEL_78:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v57 = v24;
            while ( v57->m128i_i64[0] )
            {
              if ( v56 == ++v57 )
                goto LABEL_78;
            }
          }
          else
          {
            v57 = &v24[(unsigned __int64)v55 / 0x10];
            while ( v57->m128i_i64[0] )
            {
              if ( v54 == ++v57 )
                goto LABEL_65;
            }
          }
          *v57 = _mm_loadu_si128(v52);
        }
        ++v52;
      }
      while ( v49 != v52 );
      v49 = *(__m128i **)(a1 + 24 * v21 + 72);
      v7 = v50;
      LOBYTE(a3) = v53;
    }
    if ( v49 )
    {
      sub_186B220(v49);
      v44 = v62;
      v23 = v63;
    }
    v11 = v7[3];
    v58 = a1 + 24 * v21;
    *(_QWORD *)(v58 + 72) = v24;
    *(_DWORD *)(v58 + 80) = v44;
    *(_DWORD *)(v58 + 88) = 0;
  }
  else
  {
    v24 = *(__m128i **)(v22 + 72);
  }
  v25 = v11 & (v23 - 1);
  v26 = 16LL * v23;
  v27 = 16 * v25;
  v28 = &v24[(unsigned __int64)v27 / 0x10];
  if ( v27 != v26 )
  {
    v29 = (unsigned int **)&v24[(unsigned __int64)v27 / 0x10];
    v30 = nullptr;
    while ( 1 )
    {
      v31 = *v29;
      if ( (unsigned __int64)*v29 > 1 )
      {
        if ( v31[3] == v11 && v7 == v31 )
        {
          *v29 = v7;
          v29[1] = (unsigned int *)v12;
          goto LABEL_45;
        }
      }
      else
      {
        if ( !v31 )
        {
          if ( v30 )
            goto LABEL_75;
          v30 = v29;
          goto LABEL_76;
        }
        v30 = v29;
      }
      v29 += 2;
      if ( &v24[(unsigned __int64)v26 / 0x10] == (__m128i *)v29 )
        goto LABEL_32;
    }
  }
  v30 = nullptr;
  while ( 1 )
  {
LABEL_32:
    if ( v28 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v32 = (unsigned int *)v24->m128i_i64[0];
    if ( v24->m128i_i64[0] <= 1uLL )
      break;
    if ( v32[3] == v11 && v7 == v32 )
    {
      v24->m128i_i64[0] = (__int64)v7;
      v24->m128i_i64[1] = (__int64)v12;
      goto LABEL_45;
    }
LABEL_31:
    ++v24;
  }
  if ( v32 )
  {
    v30 = (unsigned int **)v24;
    goto LABEL_31;
  }
  if ( v30 )
LABEL_75:
    --*(_DWORD *)(a1 + 24 * v21 + 88);
  else
    v30 = (unsigned int **)v24;
LABEL_76:
  *v30 = v7;
  v30[1] = (unsigned int *)v12;
  ++*(_DWORD *)(a1 + 24 * v21 + 84);
LABEL_45:
  v34 = *(_QWORD **)(a1 + 120);
  ++v7[2];
  v35 = (unsigned __int8)a3 ^ 1;
  if ( v34 )
  {
    v36 = *((_DWORD *)v34 - 1);
    if ( v36 == *((_DWORD *)v34 - 2) )
    {
      v39 = (3 * v36 + 1) >> 1;
      v40 = 16 * v39 + 8;
      if ( 16 * v36 + 8 >= (unsigned int)v40 || v36 >= v39 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v64);
        sub_233E40((__int64)v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v41 = (unsigned int *)sub_186B300(v34 - 1, v40);
      v42 = v41[1];
      v34 = v41 + 2;
      *v41 = v39;
      *(_QWORD *)(a1 + 120) = v41 + 2;
      LODWORD(v41) = v42;
      v38 = &v34[2 * v42];
      result = (unsigned int)((_DWORD)v41 + 1);
    }
    else
    {
      v37 = v36;
      result = v36 + 1;
      v38 = &v34[2 * v37];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x28u);
    v34 = v59 + 1;
    *v59 = 2;
    result = 1;
    *(_QWORD *)(a1 + 120) = v34;
    v38 = v34;
  }
  *(_DWORD *)v38 = v35;
  v38[1] = v7;
  *((_DWORD *)v34 - 1) = result;
  return result;
}

