__int64 __fastcall sub_4C8680(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _QWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 *v10; // rdx
  unsigned int v11; // r12d
  void (__fastcall *v12)(__int64, _QWORD); // r13
  __int64 result; // rax
  unsigned int v14; // r12d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rdx
  bool v18; // zf
  __int64 v19; // r12
  unsigned __int64 v20; // r13
  __m128i v21; // xmm0
  __m128i *v22; // rbp
  __int32 v23; // r9d
  __int64 v24; // r15
  __m128i *v25; // r12
  __int64 v26; // r9
  __m128i *v27; // rsi
  __int64 v28; // rcx
  int v29; // edx
  __m128i *v30; // rax
  __int32 v31; // ecx
  __int64 v32; // r8
  __m128i *v33; // rdx
  const __m128i *v34; // r14
  __m128i *v35; // r10
  __int64 v36; // rax
  __m128i *v37; // rdx
  __m128i *v38; // rax
  _QWORD *v39; // rax
  __m128i v40; // [rsp+0h] [rbp-98h] BYREF
  __m128i *v41; // [rsp+18h] [rbp-80h]
  __m128i v42; // [rsp+20h] [rbp-78h] BYREF
  __int32 v43; // [rsp+34h] [rbp-64h]
  __int64 v44; // [rsp+38h] [rbp-60h]
  __int64 v45[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = *(_QWORD **)(a1 + 24);
  if ( v6 )
  {
    v7 = *((_DWORD *)v6 - 1);
    if ( v7 == *((_DWORD *)v6 - 2) )
    {
      v14 = (3 * v7 + 1) >> 1;
      v15 = 8 * v14 + 8;
      if ( 8 * v7 + 8 >= (unsigned int)v15 || v7 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_DFB18(v45, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v45);
        sub_233E40((__int64)v45);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v6 - 1, v15);
      v17 = v16[1];
      v6 = v16 + 2;
      *v16 = v14;
      *(_QWORD *)(a1 + 24) = v16 + 2;
      LODWORD(v16) = v17;
      v10 = &v6[v17];
      v9 = (_DWORD)v16 + 1;
    }
    else
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = &v6[v8];
    }
  }
  else
  {
    v39 = (_QWORD *)sub_186B270(0x18u);
    v6 = v39 + 1;
    *v39 = 2;
    v9 = 1;
    *(_QWORD *)(a1 + 24) = v6;
    v10 = v6;
  }
  *v10 = a2;
  *((_DWORD *)v6 - 1) = v9;
  v11 = *(_DWORD *)(a1 + 172);
  v12 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 16LL);
  v45[1] = a2;
  LODWORD(v45[0]) = v11;
  *(_DWORD *)(a1 + 172) = v11 + 1;
  sub_4CF4C0(a1 + 80, v45);
  v12(a2, v11);
  result = sub_64B010(*(_QWORD *)(a1 + 8));
  if ( *(_QWORD *)(a2 + 16) == result )
  {
    v18 = *(_DWORD *)(a2 + 32) == 2;
    *(_QWORD *)(a1 + 112) = a2;
    if ( !v18 )
      return result;
  }
  else if ( *(_DWORD *)(a2 + 32) != 2 )
  {
    return result;
  }
  v19 = *(unsigned int *)(a1 + 64);
  v20 = *(_QWORD *)(a2 + 40);
  v21 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)(unsigned __int64)a2);
  if ( 3 * (int)v19 < (unsigned int)(4 * (*(_DWORD *)(a1 + 68) + *(_DWORD *)(a1 + 72))) )
  {
    LODWORD(v41) = 2 * v19;
    v42 = v21;
    v40.m128i_i64[0] = 24LL * (unsigned int)(2 * v19);
    v24 = v40.m128i_i64[0];
    v30 = (__m128i *)sub_186B270(v40.m128i_u64[0]);
    v31 = 2 * v19;
    v32 = v40.m128i_i64[0];
    v21 = _mm_load_si128(&v42);
    v22 = v30;
    if ( 2 * (_DWORD)v19 )
    {
      v33 = &v30[3 * (v19 & 0x7FFFFFFF)];
      do
      {
        v30->m128i_i64[0] = 0;
        v30 += 3;
        v30[-2].m128i_i64[1] = 0;
      }
      while ( v33 != v30 );
    }
    v34 = *(const __m128i **)(a1 + 56);
    v23 = v31 - 1;
    v25 = (__m128i *)((char *)v22 + v32);
    v35 = (__m128i *)((char *)v34 + 24 * *(unsigned int *)(a1 + 64));
    if ( v34 != v35 )
    {
      do
      {
        if ( v34->m128i_i32[1] == 2 )
        {
          v36 = 24LL * (v34->m128i_i32[0] & (unsigned int)v23);
          v37 = (__m128i *)((char *)v22 + v36);
          if ( v32 == v36 )
          {
LABEL_51:
            if ( v22 == v37 )
            {
LABEL_58:
              v44 = v32;
              v43 = v31;
              v42.m128i_i32[0] = v31 - 1;
              v41 = v35;
              v40 = v21;
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v38 = v22;
            while ( v38->m128i_i32[1] )
            {
              v38 = (__m128i *)((char *)v38 + 24);
              if ( v37 == v38 )
                goto LABEL_58;
            }
          }
          else
          {
            v38 = (__m128i *)((char *)v22 + v36);
            while ( v38->m128i_i32[1] )
            {
              v38 = (__m128i *)((char *)v38 + 24);
              if ( v25 == v38 )
                goto LABEL_51;
            }
          }
          *v38 = _mm_loadu_si128(v34);
          v38[1].m128i_i64[0] = v34[1].m128i_i64[0];
        }
        v34 = (const __m128i *)((char *)v34 + 24);
      }
      while ( v35 != v34 );
      v35 = *(__m128i **)(a1 + 56);
    }
    if ( v35 )
    {
      v42.m128i_i32[0] = v31;
      LODWORD(v41) = v31 - 1;
      v40 = v21;
      sub_186B220(v35);
      v31 = v42.m128i_i32[0];
      v23 = (int)v41;
      v21 = _mm_load_si128(&v40);
    }
    *(_QWORD *)(a1 + 56) = v22;
    *(_DWORD *)(a1 + 64) = v31;
    *(_DWORD *)(a1 + 72) = 0;
  }
  else
  {
    v22 = *(__m128i **)(a1 + 56);
    v23 = v19 - 1;
    v24 = 24 * v19;
    v25 = (__m128i *)((char *)v22 + 24 * v19);
  }
  v26 = (unsigned int)v20 & v23;
  v27 = (__m128i *)((char *)v22 + 24 * v26);
  if ( 24 * v26 != v24 )
  {
    result = (__int64)&v22->m128i_i64[3 * v26];
    v28 = 0;
    while ( 1 )
    {
      v29 = *(_DWORD *)(result + 4);
      if ( v29 == 2 )
      {
        if ( (_DWORD)v20 == *(_DWORD *)result && v20 == *(_QWORD *)(result + 8) )
        {
          *(_DWORD *)(result + 4) = 2;
          *(__m128i *)(result + 8) = v21;
          return result;
        }
      }
      else
      {
        if ( !v29 )
        {
          if ( v28 )
            goto LABEL_44;
          v28 = result;
          goto LABEL_45;
        }
        v28 = result;
      }
      result += 24;
      if ( (__m128i *)result == v25 )
        goto LABEL_25;
    }
  }
  v28 = 0;
  while ( 1 )
  {
LABEL_25:
    if ( v27 == v22 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = v22->m128i_u32[1];
    if ( (_DWORD)result != 2 )
      break;
    if ( (_DWORD)v20 == v22->m128i_i32[0] && v20 == v22->m128i_i64[1] )
    {
      v22->m128i_i32[1] = 2;
      *(__m128i *)((char *)v22 + 8) = v21;
      return result;
    }
LABEL_24:
    v22 = (__m128i *)((char *)v22 + 24);
  }
  if ( (_DWORD)result )
  {
    v28 = (__int64)v22;
    goto LABEL_24;
  }
  if ( v28 )
LABEL_44:
    --*(_DWORD *)(a1 + 72);
  else
    v28 = (__int64)v22;
LABEL_45:
  *(_DWORD *)(v28 + 4) = 2;
  *(_DWORD *)v28 = v20;
  *(__m128i *)(v28 + 8) = v21;
  ++*(_DWORD *)(a1 + 68);
  return result;
}

