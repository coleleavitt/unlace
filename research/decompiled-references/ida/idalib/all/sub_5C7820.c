__int64 __fastcall sub_5C7820(_QWORD *a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  __int64 v6; // rsi
  void **v9; // rdi
  char *v10; // rbx
  __int64 v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  char *v15; // rbx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  __m128i *v21; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v22; // [rsp+0h] [rbp-A8h]
  __int64 v23; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v24; // [rsp+10h] [rbp-98h]
  void **p_ptr; // [rsp+18h] [rbp-90h]
  __m128i v26; // [rsp+20h] [rbp-88h] BYREF
  void *v27; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  int v29; // [rsp+48h] [rbp-60h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v31; // [rsp+58h] [rbp-50h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 16) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 16) & 0x8000) != 0 )
    return 0;
  v23 = *(int *)(a2 + 128);
  result = 1;
  if ( *(_DWORD *)(a2 + 128) && !*(_QWORD *)(a2 + 136) )
  {
    v6 = *(_QWORD *)a2;
    v27 = nullptr;
    v28 = 0;
    ptr = (void *)sub_3BDD60(a1, v6);
    p_ptr = &ptr;
    if ( sub_7BEED0(&ptr, *a1, &v27, 1, 28672, 83) > 0 )
    {
      v9 = &ptr;
      v31 = 0;
      ptr = nullptr;
      ptr = (void *)qvector_reserve(&ptr, 0, v23, 16);
      v10 = (char *)ptr;
      v11 = 0;
      v12 = v31;
      v24 = 0;
      v21 = &v26;
      v26 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)((unsigned __int64)v27 + v28));
      do
      {
        v13 = v12 + 1;
        if ( *((_QWORD *)&v31 + 1) < v12 + 1 )
        {
          v9 = p_ptr;
          ptr = (void *)qvector_reserve(p_ptr, v10, v13, 16);
          v12 = v31;
          v10 = (char *)ptr;
        }
        v14 = 16 * v12;
        v15 = &v10[v14];
        *(_OWORD *)v15 = 0;
        *(_QWORD *)&v31 = v31 + 1;
        v16 = is_cvt64(v9, v14, v13);
        v17 = v26.m128i_i64[1];
        if ( v16 )
        {
          v19 = (unsigned int)unpack_dd(v21) + (unsigned int)v4;
          if ( (unsigned int)v19 == 0xFFFFFFFFLL )
            v19 = -1;
        }
        else
        {
          v19 = unpack_dq(v21) + v4;
        }
        *(_QWORD *)v15 = v19;
        v9 = (void **)v21;
        if ( (unsigned __int8)is_cvt64(v21, v17, v18) )
        {
          v4 = (unsigned int)unpack_dd(v21) + (unsigned int)v19;
          if ( (unsigned int)v4 == 0xFFFFFFFFLL )
            v4 = -1;
        }
        else
        {
          v4 = unpack_dq(v21) + v19;
        }
        v20 = *(_QWORD *)v15;
        *((_QWORD *)v15 + 1) = v4;
        if ( v20 >= v4 || a3 && v20 < *(_QWORD *)(a2 + 8) && *(_QWORD *)a2 < v4 || v20 < v24 )
        {
          v9 = (void **)"%a: skipped bad chunk %a..%a\n";
          sub_84F5B0(
            "%a: skipped bad chunk %a..%a\n",
            (__int64)v21,
            v23,
            v24,
            (int)p_ptr,
            v26.m128i_i32[0],
            v26.m128i_i32[2],
            (int)v27,
            v28,
            SDWORD2(v28),
            v29,
            (__int64)ptr);
          v12 = v31;
          if ( (_QWORD)v31 )
          {
            v12 = v31 - 1;
            *(_QWORD *)&v31 = v31 - 1;
          }
        }
        else
        {
          v24 = v4;
          v12 = v31;
        }
        v10 = (char *)ptr;
        ++v11;
      }
      while ( v23 != v11 );
      *(_DWORD *)(a2 + 128) = v12;
      if ( (_DWORD)v12 )
      {
        if ( v12 < *((_QWORD *)&v31 + 1) )
        {
          if ( v10 )
          {
            v10 = (char *)qrealloc(v10);
            if ( !v10 )
              v10 = (char *)ptr;
          }
        }
        *(_QWORD *)(a2 + 136) = v10;
        result = 1;
        goto LABEL_27;
      }
      if ( v10 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v10);
      }
    }
    *(_DWORD *)(a2 + 128) = 0;
    sub_84F5B0(
      "%a: cannot find function tails!\n",
      (__int64)v21,
      v23,
      v24,
      (int)p_ptr,
      v26.m128i_i32[0],
      v26.m128i_i32[2],
      (int)v27,
      v28,
      SDWORD2(v28),
      v29,
      (__int64)ptr);
    sub_5C77B0((__int64)a1, (unsigned __int64 *)a2, 0);
    result = 0;
LABEL_27:
    if ( v27 )
    {
      v22 = result;
      *(_QWORD *)&v28 = 0;
      qfree(v27);
      return v22;
    }
  }
  return result;
}
