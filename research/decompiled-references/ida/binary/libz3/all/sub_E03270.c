__m128i *__fastcall sub_E03270(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  int v15; // ecx
  _DWORD *v16; // r14
  bool v17; // zf
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  __int64 v19; // rsi
  __int64 v20; // rdi
  __m128i *v21; // rbx
  unsigned int v22; // r10d
  __int64 v23; // rcx
  __m128i *v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // r10
  __m128i *v27; // rdi
  __m128i *result; // rax
  __m128i *v29; // rcx
  int v30; // edx
  int v31; // eax
  __m128i *v32; // rax
  int v33; // r8d
  __m128i *v34; // rdx
  const __m128i *v35; // r15
  __m128i *v36; // r11
  __int64 v37; // rax
  __m128i *v38; // rdx
  __m128i *v39; // rax
  __m128i v40; // xmm0
  size_t v41; // [rsp+10h] [rbp-58h]
  int v42; // [rsp+18h] [rbp-50h]

  v6 = *a2;
  ++*(_DWORD *)(a3 + 8);
  v7 = *(_QWORD *)(a1 + 568);
  v8 = *(unsigned int *)(a1 + 576);
  if ( v6 )
  {
    if ( (v6 & 7) == 1 )
      v9 = v6 >> 3;
    else
      LODWORD(v9) = *(_DWORD *)(v6 - 8);
  }
  else
  {
    LODWORD(v9) = -1640531495;
  }
  v10 = 24LL * ((unsigned int)v9 & ((_DWORD)v8 - 1));
  v11 = 24LL * (unsigned int)v8;
  v12 = v7 + v10;
  v13 = v7 + v11;
  if ( v10 != v11 )
  {
    v14 = v7 + v10;
    do
    {
      v15 = *(_DWORD *)(v14 + 4);
      if ( v15 == 2 )
      {
        if ( (_DWORD)v9 == *(_DWORD *)v14 && *(_QWORD *)(v14 + 8) == v6 )
          goto LABEL_11;
      }
      else if ( !v15 )
      {
        goto LABEL_17;
      }
      v14 += 24;
    }
    while ( v13 != v14 );
  }
  for ( ; v12 != v7; v7 += 24 )
  {
    v31 = *(_DWORD *)(v7 + 4);
    if ( v31 == 2 )
    {
      if ( (_DWORD)v9 == *(_DWORD *)v7 && *(_QWORD *)(v7 + 8) == v6 )
      {
        v14 = v7;
LABEL_11:
        v16 = *(_DWORD **)(v14 + 16);
        v17 = v16[2]-- == 1;
        if ( v17 )
        {
          v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL);
          if ( v18 == sub_DFC000 )
          {
            sub_DFBCB0(a1);
            v19 = *((_QWORD *)v16 + 2);
            if ( v19 )
            {
              v20 = *(_QWORD *)(a1 + 296);
              v17 = (*(_DWORD *)(v19 + 8))-- == 1;
              if ( v17 )
                sub_15D7BC0(v20, v19);
            }
          }
          else
          {
            v18((__int64)v16, a1);
          }
          (**(void (__fastcall ***)(void *))v16)(v16);
          sub_186B220(v16);
          v8 = *(unsigned int *)(a1 + 576);
          v6 = *a2;
        }
        break;
      }
    }
    else if ( !v31 )
    {
      break;
    }
  }
LABEL_17:
  if ( 3 * (int)v8 < (unsigned int)(4 * (*(_DWORD *)(a1 + 580) + *(_DWORD *)(a1 + 584))) )
  {
    v42 = 2 * v8;
    v41 = 24LL * (unsigned int)(2 * v8);
    v32 = (__m128i *)sub_186B270(v41);
    v33 = v42;
    v23 = v41;
    v21 = v32;
    v34 = (__m128i *)((char *)v32 + v41);
    if ( v42 )
    {
      do
      {
        v32->m128i_i64[0] = 0;
        v32 = (__m128i *)((char *)v32 + 24);
        v32[-1].m128i_i64[0] = 0;
      }
      while ( v32 != v34 );
    }
    v35 = *(const __m128i **)(a1 + 568);
    v22 = v42 - 1;
    v24 = (__m128i *)((char *)v21 + v41);
    v36 = (__m128i *)((char *)v35 + 24 * *(unsigned int *)(a1 + 576));
    if ( v35 != v36 )
    {
      do
      {
        while ( v35->m128i_i32[1] != 2 )
        {
          v35 = (const __m128i *)((char *)v35 + 24);
          if ( v36 == v35 )
            goto LABEL_62;
        }
        v37 = 24LL * (v35->m128i_i32[0] & v22);
        v38 = (__m128i *)((char *)v21 + v37);
        if ( v37 == v41 )
        {
LABEL_68:
          if ( v38 == v21 )
          {
LABEL_75:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v39 = v21;
          while ( v39->m128i_i32[1] )
          {
            v39 = (__m128i *)((char *)v39 + 24);
            if ( v38 == v39 )
              goto LABEL_75;
          }
        }
        else
        {
          v39 = (__m128i *)((char *)v21 + v37);
          while ( v39->m128i_i32[1] )
          {
            v39 = (__m128i *)((char *)v39 + 24);
            if ( v24 == v39 )
              goto LABEL_68;
          }
        }
        v40 = _mm_loadu_si128(v35);
        v35 = (const __m128i *)((char *)v35 + 24);
        *v39 = v40;
        v39[1].m128i_i64[0] = v35[-1].m128i_i64[1];
      }
      while ( v36 != v35 );
LABEL_62:
      v36 = *(__m128i **)(a1 + 568);
    }
    if ( v36 )
    {
      sub_186B220(v36);
      v33 = v42;
      v23 = v41;
      v22 = v42 - 1;
    }
    *(_QWORD *)(a1 + 568) = v21;
    *(_DWORD *)(a1 + 576) = v33;
    *(_DWORD *)(a1 + 584) = 0;
    if ( v6 )
      goto LABEL_19;
  }
  else
  {
    v21 = *(__m128i **)(a1 + 568);
    v22 = v8 - 1;
    v23 = 24 * v8;
    v24 = (__m128i *)((char *)v21 + 24 * v8);
    if ( v6 )
    {
LABEL_19:
      if ( (v6 & 7) == 1 )
        v25 = v6 >> 3;
      else
        LODWORD(v25) = *(_DWORD *)(v6 - 8);
      goto LABEL_21;
    }
  }
  LODWORD(v25) = -1640531495;
LABEL_21:
  v26 = (unsigned int)v25 & v22;
  v27 = (__m128i *)((char *)v21 + 24 * v26);
  if ( 24 * v26 != v23 )
  {
    result = (__m128i *)((char *)v21 + 24 * v26);
    v29 = nullptr;
    while ( 1 )
    {
      v30 = result->m128i_i32[1];
      if ( v30 == 2 )
      {
        if ( (_DWORD)v25 == result->m128i_i32[0] && result->m128i_i64[1] == v6 )
        {
          result->m128i_i64[1] = v6;
          result[1].m128i_i64[0] = a3;
          result->m128i_i32[1] = 2;
          return result;
        }
      }
      else
      {
        if ( !v30 )
        {
          if ( v29 )
            goto LABEL_49;
          v29 = result;
          goto LABEL_50;
        }
        v29 = result;
      }
      result = (__m128i *)((char *)result + 24);
      if ( result == v24 )
        goto LABEL_34;
    }
  }
  v29 = nullptr;
  while ( 1 )
  {
LABEL_34:
    if ( v27 == v21 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v21->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v25 == v21->m128i_i32[0] && v21->m128i_i64[1] == v6 )
    {
      v21->m128i_i64[1] = v6;
      v21[1].m128i_i64[0] = a3;
      v21->m128i_i32[1] = 2;
      return result;
    }
LABEL_33:
    v21 = (__m128i *)((char *)v21 + 24);
  }
  if ( (_DWORD)result )
  {
    v29 = v21;
    goto LABEL_33;
  }
  if ( v29 )
LABEL_49:
    --*(_DWORD *)(a1 + 584);
  else
    v29 = v21;
LABEL_50:
  v29->m128i_i64[1] = v6;
  v29[1].m128i_i64[0] = a3;
  v29->m128i_i32[1] = 2;
  v29->m128i_i32[0] = v25;
  ++*(_DWORD *)(a1 + 580);
  return result;
}

