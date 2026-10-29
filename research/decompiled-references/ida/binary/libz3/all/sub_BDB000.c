__int64 __fastcall sub_BDB000(__int64 *a1, unsigned int *a2, __int64 a3, unsigned __int64 a4, _QWORD *a5, int a6)
{
  __int16 v8; // ax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // edx
  __int64 *v16; // rsi
  __int64 *i; // rax
  unsigned int v18; // edx
  __m128i *v19; // r12
  int v20; // r9d
  __int64 v21; // r8
  unsigned int **v22; // r14
  unsigned int v23; // ecx
  __int64 v24; // r9
  __m128i *v25; // rdi
  unsigned int **v26; // rax
  unsigned int **v27; // rsi
  unsigned int *v28; // rdx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int *v31; // rax
  unsigned int *v32; // rax
  __m128i *v33; // rax
  int v34; // r10d
  __m128i *v35; // rcx
  const __m128i *v36; // r15
  __m128i *v37; // r11
  __int64 v38; // rax
  __m128i *v39; // rdx
  __m128i *v40; // rax
  int v41; // [rsp+0h] [rbp-68h]
  int v42; // [rsp+8h] [rbp-60h]
  size_t v43; // [rsp+8h] [rbp-60h]
  int v44; // [rsp+8h] [rbp-60h]
  int v45; // [rsp+10h] [rbp-58h]
  int v46; // [rsp+10h] [rbp-58h]
  size_t v47; // [rsp+10h] [rbp-58h]
  void *v48; // [rsp+18h] [rbp-50h]
  int v49; // [rsp+18h] [rbp-50h]

  v8 = *((_WORD *)a2 + 2);
  if ( v8 == 1 )
  {
    v29 = a2[4];
    v30 = *((_DWORD *)a1 + 22);
    if ( v29 < v30 )
      return *(_QWORD *)(a1[12] + 8LL * (v30 - 1 - v29));
    return 0;
  }
  v9 = *a1;
  v10 = *(_QWORD *)(*a1 + 8656);
  if ( v10 )
  {
    a4 = *a2;
    if ( (unsigned int)a4 < *(_DWORD *)(v10 - 4) )
    {
      if ( *(_QWORD *)(v10 + 8 * a4) )
      {
        if ( !(unsigned int)sub_8E7030(*a1)
          || (*(unsigned __int8 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(v9 + 7488) + 56LL))(
               *(_QWORD *)(v9 + 7488),
               a2) )
        {
          return *(_QWORD *)(*(_QWORD *)(*a1 + 8656) + 8LL * *a2);
        }
        v8 = *((_WORD *)a2 + 2);
      }
    }
  }
  if ( v8 || !a2[6] )
    return 0;
  if ( a2[2] > 1 )
  {
    v13 = *((unsigned int *)a1 + 18);
    v14 = a2[3];
    a4 = a1[8];
    v15 = v13 - 1;
    v13 *= 16;
    v16 = (__int64 *)(a4 + v13);
    v10 = 16LL * (v14 & v15);
    a5 = (_QWORD *)(a4 + v10);
    if ( v10 != v13 )
    {
      for ( i = (__int64 *)(a4 + v10); v16 != i; i += 2 )
      {
        v10 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v10 + 12) == v14 && a2 == (unsigned int *)v10 )
            return i[1];
        }
        else if ( !v10 )
        {
          goto LABEL_20;
        }
      }
    }
    for ( ; a5 != (_QWORD *)a4; a4 += 16LL )
    {
      v31 = *(unsigned int **)a4;
      if ( *(_QWORD *)a4 > 1u )
      {
        if ( v31[3] == v14 && a2 == v31 )
        {
          i = (__int64 *)a4;
          return i[1];
        }
      }
      else if ( !v31 )
      {
        break;
      }
    }
  }
LABEL_20:
  v11 = sub_BDBE20((int)a1, (int)a2, v10, a4, (int)a5, a6, v41, v42, v45, v48);
  if ( a2[2] <= 1 )
    return v11;
  v18 = *((_DWORD *)a1 + 18);
  if ( 3 * v18 < 4 * (*((_DWORD *)a1 + 19) + *((_DWORD *)a1 + 20)) )
  {
    v46 = 2 * v18;
    v43 = 32LL * v18;
    v33 = (__m128i *)sub_186B270(v43);
    v21 = v43;
    v34 = v46;
    v19 = v33;
    v35 = &v33[v43 / 0x10];
    if ( v46 )
    {
      if ( (v43 & 0x10) == 0 || (*v33 = 0, ++v33, v33 != v35) )
      {
        do
        {
          *v33 = 0;
          v33 += 2;
          v33[-1] = 0;
        }
        while ( v33 != v35 );
      }
    }
    v36 = (const __m128i *)a1[8];
    v20 = v46 - 1;
    v22 = (unsigned int **)v35;
    v37 = (__m128i *)&v36[*((unsigned int *)a1 + 18)];
    if ( v36 != v37 )
    {
      do
      {
        if ( v36->m128i_i64[0] > 1uLL )
        {
          v38 = 16LL * (*(_DWORD *)(v36->m128i_i64[0] + 12) & (unsigned int)v20);
          v39 = &v19[(unsigned __int64)v38 / 0x10];
          if ( v43 == v38 )
          {
LABEL_64:
            if ( v19 == v39 )
            {
LABEL_77:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v40 = v19;
            while ( v40->m128i_i64[0] )
            {
              if ( v39 == ++v40 )
                goto LABEL_77;
            }
          }
          else
          {
            v40 = &v19[(unsigned __int64)v38 / 0x10];
            while ( v40->m128i_i64[0] )
            {
              if ( v35 == ++v40 )
                goto LABEL_64;
            }
          }
          *v40 = _mm_loadu_si128(v36);
        }
        ++v36;
      }
      while ( v37 != v36 );
      v37 = (__m128i *)a1[8];
    }
    if ( v37 )
    {
      v49 = v46;
      v47 = v43;
      v44 = v34 - 1;
      sub_186B220(v37);
      v34 = v49;
      v21 = v47;
      v20 = v44;
    }
    a1[8] = (__int64)v19;
    *((_DWORD *)a1 + 18) = v34;
    *((_DWORD *)a1 + 20) = 0;
  }
  else
  {
    v19 = (__m128i *)a1[8];
    v20 = v18 - 1;
    v21 = 16LL * v18;
    v22 = (unsigned int **)((char *)v19->m128i_i64 + v21);
  }
  v23 = a2[3];
  v24 = 16LL * (v23 & v20);
  v25 = &v19[(unsigned __int64)v24 / 0x10];
  if ( v24 != v21 )
  {
    v26 = (unsigned int **)&v19[(unsigned __int64)v24 / 0x10];
    v27 = nullptr;
    while ( 1 )
    {
      v28 = *v26;
      if ( (unsigned __int64)*v26 > 1 )
      {
        if ( v28[3] == v23 && a2 == v28 )
        {
          *v26 = a2;
          v26[1] = (unsigned int *)v11;
          return v11;
        }
      }
      else
      {
        if ( !v28 )
        {
          if ( v27 )
            goto LABEL_75;
          v27 = v26;
          goto LABEL_76;
        }
        v27 = v26;
      }
      v26 += 2;
      if ( v26 == v22 )
        goto LABEL_47;
    }
  }
  v27 = nullptr;
  while ( 1 )
  {
LABEL_47:
    if ( v25 == v19 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v32 = (unsigned int *)v19->m128i_i64[0];
    if ( v19->m128i_i64[0] <= 1uLL )
      break;
    if ( v32[3] == v23 && a2 == v32 )
    {
      v19->m128i_i64[0] = (__int64)a2;
      v19->m128i_i64[1] = v11;
      return v11;
    }
LABEL_46:
    ++v19;
  }
  if ( v32 )
  {
    v27 = (unsigned int **)v19;
    goto LABEL_46;
  }
  if ( v27 )
LABEL_75:
    --*((_DWORD *)a1 + 20);
  else
    v27 = (unsigned int **)v19;
LABEL_76:
  *v27 = a2;
  v27[1] = (unsigned int *)v11;
  ++*((_DWORD *)a1 + 19);
  return v11;
}

