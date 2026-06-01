__int64 __fastcall sub_4C30F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // edi
  __int64 *v8; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r8
  char *v11; // r12
  int v12; // ecx
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 result; // rax
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __int64 *v18; // rax
  int v19; // r10d
  __m128i *v20; // rcx
  const __m128i *v21; // r13
  __m128i *v22; // r11
  __int64 v23; // rax
  __int64 *v24; // rdx
  __m128i *v25; // rax
  __m128i v26; // xmm0
  void *v27; // r12
  __int64 (__fastcall *v28)(void *); // rdx
  size_t v29; // [rsp+8h] [rbp-60h]
  unsigned int v30; // [rsp+8h] [rbp-60h]
  int v31; // [rsp+10h] [rbp-58h]
  size_t v32; // [rsp+10h] [rbp-58h]
  int v33; // [rsp+18h] [rbp-50h]

  v6 = *(unsigned int *)(a1 + 128);
  v7 = *(_DWORD *)(a1 + 136);
  if ( 3 * (int)v6 < (unsigned int)(4 * (v7 + *(_DWORD *)(a1 + 132))) )
  {
    v31 = 2 * v6;
    v29 = 16LL * (unsigned int)(2 * v6);
    v18 = (__int64 *)sub_186B270(v29);
    v10 = v29;
    v19 = v31;
    v8 = v18;
    v20 = (__m128i *)&v18[v29 / 8];
    if ( v31 )
    {
      if ( (v29 & 0x10) == 0 || (*(_OWORD *)v18 = 0, v18 += 2, v20 != (__m128i *)v18) )
      {
        do
        {
          *(_OWORD *)v18 = 0;
          v18 += 4;
          *((_OWORD *)v18 - 1) = 0;
        }
        while ( v20 != (__m128i *)v18 );
      }
    }
    v21 = *(const __m128i **)(a1 + 120);
    v9 = v31 - 1;
    v11 = (char *)v20;
    v22 = (__m128i *)&v21[*(unsigned int *)(a1 + 128)];
    if ( v21 != v22 )
    {
      do
      {
        while ( v21->m128i_i64[0] <= 1uLL )
        {
          if ( v22 == ++v21 )
            goto LABEL_31;
        }
        v23 = 16LL * (*(_DWORD *)(v21->m128i_i64[0] + 12) & v9);
        v24 = &v8[(unsigned __int64)v23 / 8];
        if ( v29 == v23 )
        {
LABEL_35:
          if ( v8 == v24 )
          {
LABEL_45:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v25 = (__m128i *)v8;
          while ( v25->m128i_i64[0] )
          {
            if ( v24 == (__int64 *)++v25 )
              goto LABEL_45;
          }
        }
        else
        {
          v25 = (__m128i *)&v8[(unsigned __int64)v23 / 8];
          while ( v25->m128i_i64[0] )
          {
            if ( v20 == ++v25 )
              goto LABEL_35;
          }
        }
        v26 = _mm_loadu_si128(v21++);
        *v25 = v26;
      }
      while ( v22 != v21 );
LABEL_31:
      v22 = *(__m128i **)(a1 + 120);
    }
    if ( v22 )
    {
      v33 = v31;
      v32 = v29;
      v30 = v19 - 1;
      sub_186B220(v22);
      v19 = v33;
      v10 = v32;
      v9 = v30;
    }
    *(_QWORD *)(a1 + 120) = v8;
    v7 = 0;
    *(_DWORD *)(a1 + 128) = v19;
    *(_DWORD *)(a1 + 136) = 0;
  }
  else
  {
    v8 = *(__int64 **)(a1 + 120);
    v9 = v6 - 1;
    v10 = 16 * v6;
    v11 = (char *)v8 + v10;
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 16LL * (v12 & v9);
  v14 = &v8[(unsigned __int64)v13 / 8];
  if ( v13 != v10 )
  {
    result = (__int64)&v8[(unsigned __int64)v13 / 8];
    v16 = nullptr;
    while ( 1 )
    {
      v17 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v17 + 12) == v12 && a2 == v17 )
        {
          v27 = *(void **)(result + 8);
          v16 = (_QWORD *)result;
          goto LABEL_49;
        }
      }
      else
      {
        if ( !v17 )
        {
          if ( v16 )
            goto LABEL_41;
          v16 = (_QWORD *)result;
          goto LABEL_42;
        }
        v16 = (_QWORD *)result;
      }
      result += 16;
      if ( (char *)result == v11 )
        goto LABEL_14;
    }
  }
  v16 = nullptr;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v8 )
    {
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    result = *v8;
    if ( (unsigned __int64)*v8 <= 1 )
    {
      if ( result )
      {
        v16 = v8;
        goto LABEL_13;
      }
      if ( v16 )
LABEL_41:
        *(_DWORD *)(a1 + 136) = v7 - 1;
      else
        v16 = v8;
LABEL_42:
      *v16 = a2;
      v16[1] = 0;
      ++*(_DWORD *)(a1 + 132);
LABEL_43:
      ++*(_DWORD *)(a2 + 8);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(result + 12) == v12 && a2 == result )
      break;
LABEL_13:
    v8 += 2;
  }
  v27 = (void *)v8[1];
  v16 = v8;
LABEL_49:
  if ( !v27 )
    goto LABEL_43;
  v28 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)v27 + 16LL);
  if ( v28 == sub_4C9C10 )
  {
    (**(void (__fastcall ***)(void *, __int64 *))v27)(v27, v14);
    result = sub_186B220(v27);
  }
  else
  {
    result = ((__int64 (__fastcall *)(void *, __int64 *))v28)(v27, v14);
  }
LABEL_44:
  v16[1] = a3;
  return result;
}

