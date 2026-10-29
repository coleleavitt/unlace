__int64 __fastcall sub_6511B0(__int64 a1, __int64 a2, char a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // edi
  unsigned int v11; // edx
  char *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r8
  __int64 result; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  __m128i v24; // xmm0
  __m128i *v25; // rbx
  __int32 v26; // ecx
  __int64 v27; // r15
  __m128i *v28; // r12
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  __m128i *v31; // rdi
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // r13d
  unsigned int v35; // ecx
  unsigned int *v36; // rax
  __int64 v37; // rcx
  __m128i *v38; // rax
  __int32 v39; // r8d
  __int64 v40; // r9
  __m128i *v41; // rdx
  const __m128i *v42; // r14
  __m128i *v43; // r10
  __int64 v44; // rax
  __m128i *v45; // rdx
  __m128i *v46; // rax
  _QWORD *v47; // rdx
  __m128i v48; // [rsp+0h] [rbp-98h] BYREF
  __m128i *v49; // [rsp+18h] [rbp-80h]
  __m128i v50; // [rsp+20h] [rbp-78h] BYREF
  __int32 v51; // [rsp+34h] [rbp-64h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  __int64 v53[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a1 + 2296);
  v9 = *(__int64 **)(a1 + 2288);
  v10 = *(_DWORD *)(a2 + 12);
  v11 = v8 - 1;
  v8 *= 8;
  v12 = (char *)v9 + v8;
  v13 = 8LL * (v10 & v11);
  v14 = &v9[(unsigned __int64)v13 / 8];
  if ( v13 != v8 )
  {
    for ( result = (__int64)&v9[(unsigned __int64)v13 / 8]; v12 != (char *)result; result += 8 )
    {
      v16 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v16 + 12) == v10 && a2 == v16 )
          return result;
      }
      else if ( !v16 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v14 != v9; ++v9 )
  {
    result = *v9;
    if ( (unsigned __int64)*v9 > 1 )
    {
      if ( *(_DWORD *)(result + 12) == v10 && a2 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v17 = *(_QWORD **)(a1 + 2136);
  ++*(_DWORD *)(a2 + 8);
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v34 = (3 * v18 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v18 + 8 >= v35 || v18 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_104888(v53, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v53);
        sub_233E40((__int64)v53);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v17 - 1, v35);
      v37 = v36[1];
      v17 = v36 + 2;
      *v36 = v34;
      *(_QWORD *)(a1 + 2136) = v36 + 2;
      LODWORD(v36) = v37;
      v21 = &v17[v37];
      v20 = (_DWORD)v36 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v17[v19];
    }
  }
  else
  {
    v47 = (_QWORD *)sub_186B270(0x18u);
    *v47 = 2;
    v20 = 1;
    v17 = v47 + 1;
    *(_QWORD *)(a1 + 2136) = v17;
    v21 = v17;
  }
  *v21 = a2;
  *((_DWORD *)v17 - 1) = v20;
  v53[0] = a2;
  result = sub_656920(a1 + 2288, v53, v17, v21, v14);
  if ( !a3 )
    return result;
  v22 = *(unsigned int *)(a1 + 2320);
  v23 = *(_QWORD *)(a2 + 16);
  v24 = _mm_unpacklo_epi64((__m128i)v23, (__m128i)(unsigned __int64)a2);
  if ( 3 * (int)v22 < (unsigned int)(4 * (*(_DWORD *)(a1 + 2324) + *(_DWORD *)(a1 + 2328))) )
  {
    LODWORD(v49) = 2 * v22;
    v50 = v24;
    v48.m128i_i64[0] = 24LL * (unsigned int)(2 * v22);
    v27 = v48.m128i_i64[0];
    v38 = (__m128i *)sub_186B270(v48.m128i_u64[0]);
    v39 = (int)v49;
    v40 = v48.m128i_i64[0];
    v24 = _mm_load_si128(&v50);
    v25 = v38;
    v41 = (__m128i *)((char *)v38 + v48.m128i_i64[0]);
    if ( (_DWORD)v49 )
    {
      do
      {
        v38->m128i_i64[0] = 0;
        v38 = (__m128i *)((char *)v38 + 24);
        v38[-1].m128i_i64[0] = 0;
      }
      while ( v38 != v41 );
    }
    v42 = *(const __m128i **)(a1 + 2312);
    v26 = v39 - 1;
    v28 = (__m128i *)((char *)v25 + v40);
    v43 = (__m128i *)((char *)v42 + 24 * *(unsigned int *)(a1 + 2320));
    if ( v42 != v43 )
    {
      do
      {
        if ( v42->m128i_i32[1] == 2 )
        {
          v44 = 24LL * (v42->m128i_i32[0] & (unsigned int)v26);
          v45 = (__m128i *)((char *)v25 + v44);
          if ( v44 == v40 )
          {
LABEL_67:
            if ( v45 == v25 )
            {
LABEL_75:
              v52 = v40;
              v51 = v39;
              v50.m128i_i32[0] = v39 - 1;
              v49 = v43;
              v48 = v24;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v46 = v25;
            while ( v46->m128i_i32[1] )
            {
              v46 = (__m128i *)((char *)v46 + 24);
              if ( v45 == v46 )
                goto LABEL_75;
            }
          }
          else
          {
            v46 = (__m128i *)((char *)v25 + v44);
            while ( v46->m128i_i32[1] )
            {
              v46 = (__m128i *)((char *)v46 + 24);
              if ( v28 == v46 )
                goto LABEL_67;
            }
          }
          *v46 = _mm_loadu_si128(v42);
          v46[1].m128i_i64[0] = v42[1].m128i_i64[0];
        }
        v42 = (const __m128i *)((char *)v42 + 24);
      }
      while ( v43 != v42 );
      v43 = *(__m128i **)(a1 + 2312);
    }
    if ( v43 )
    {
      v50.m128i_i32[0] = v39;
      LODWORD(v49) = v39 - 1;
      v48 = v24;
      sub_186B220(v43);
      v39 = v50.m128i_i32[0];
      v26 = (int)v49;
      v24 = _mm_load_si128(&v48);
    }
    *(_QWORD *)(a1 + 2312) = v25;
    *(_DWORD *)(a1 + 2320) = v39;
    *(_DWORD *)(a1 + 2328) = 0;
  }
  else
  {
    v25 = *(__m128i **)(a1 + 2312);
    v26 = v22 - 1;
    v27 = 24 * v22;
    v28 = (__m128i *)((char *)v25 + 24 * v22);
  }
  if ( v23 )
  {
    if ( (v23 & 7) == 1 )
      v29 = v23 >> 3;
    else
      LODWORD(v29) = *(_DWORD *)(v23 - 8);
  }
  else
  {
    LODWORD(v29) = -1640531495;
  }
  v30 = (unsigned int)v29 & v26;
  v31 = (__m128i *)((char *)v25 + 24 * v30);
  if ( 24 * v30 != v27 )
  {
    result = (__int64)&v25->m128i_i64[3 * v30];
    v32 = 0;
    while ( 1 )
    {
      v33 = *(_DWORD *)(result + 4);
      if ( v33 == 2 )
      {
        if ( (_DWORD)v29 == *(_DWORD *)result && *(_QWORD *)(result + 8) == v23 )
        {
          *(_DWORD *)(result + 4) = 2;
          *(__m128i *)(result + 8) = v24;
          return result;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_48;
          v32 = result;
          goto LABEL_49;
        }
        v32 = result;
      }
      result += 24;
      if ( (__m128i *)result == v28 )
        goto LABEL_41;
    }
  }
  v32 = 0;
  while ( 1 )
  {
LABEL_41:
    if ( v31 == v25 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = v25->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v29 == v25->m128i_i32[0] && v25->m128i_i64[1] == v23 )
    {
      v25->m128i_i32[1] = 2;
      *(__m128i *)((char *)v25 + 8) = v24;
      return result;
    }
LABEL_40:
    v25 = (__m128i *)((char *)v25 + 24);
  }
  if ( (_DWORD)result )
  {
    v32 = (__int64)v25;
    goto LABEL_40;
  }
  if ( v32 )
LABEL_48:
    --*(_DWORD *)(a1 + 2328);
  else
    v32 = (__int64)v25;
LABEL_49:
  *(_DWORD *)(v32 + 4) = 2;
  *(_DWORD *)v32 = v29;
  *(__m128i *)(v32 + 8) = v24;
  ++*(_DWORD *)(a1 + 2324);
  return result;
}

