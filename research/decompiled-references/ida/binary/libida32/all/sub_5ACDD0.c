__int64 __fastcall sub_5ACDD0(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // esi
  char *v9; // rdi
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  char *v12; // r13
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // edx
  __int64 *v16; // [rsp+0h] [rbp-A8h]
  unsigned __int8 v17; // [rsp+0h] [rbp-A8h]
  __int64 v18; // [rsp+8h] [rbp-A0h]
  int v19; // [rsp+10h] [rbp-98h]
  unsigned int v20; // [rsp+14h] [rbp-94h]
  void **p_ptr; // [rsp+18h] [rbp-90h]
  __int64 v22[2]; // [rsp+20h] [rbp-88h] BYREF
  void *v23; // [rsp+30h] [rbp-78h] BYREF
  __int128 v24; // [rsp+38h] [rbp-70h]
  int v25; // [rsp+48h] [rbp-60h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v27; // [rsp+58h] [rbp-50h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v4 = *(_QWORD *)(a2 + 8) & 0x8000LL;
  if ( (*(_QWORD *)(a2 + 8) & 0x8000) != 0 )
    return 0;
  v18 = *(int *)(a2 + 104);
  result = 1;
  if ( *(_DWORD *)(a2 + 104) && !*(_QWORD *)(a2 + 112) )
  {
    v6 = *(_DWORD *)a2;
    v23 = nullptr;
    v24 = 0;
    LODWORD(ptr) = sub_3B90A0(a1, v6);
    p_ptr = &ptr;
    if ( sub_79BAE0(&ptr, *a1, &v23, 1, 28672, 83) > 0 )
    {
      v27 = 0;
      ptr = nullptr;
      ptr = (void *)qvector_reserve(&ptr, 0, v18, 8);
      v9 = (char *)ptr;
      v10 = 0;
      v20 = 0;
      v11 = v27;
      *(__m128i *)v22 = _mm_unpacklo_epi64(
                          (__m128i)(unsigned __int64)v23,
                          (__m128i)(unsigned __int64)((unsigned __int64)v23 + v24));
      do
      {
        if ( *((_QWORD *)&v27 + 1) < v11 + 1 )
        {
          ptr = (void *)qvector_reserve(p_ptr, v9, v11 + 1, 8);
          v9 = (char *)ptr;
          v11 = v27;
        }
        v12 = &v9[8 * v11];
        *(_QWORD *)v12 = 0;
        *(_QWORD *)&v27 = v27 + 1;
        v16 = v22;
        v13 = unpack_dd(v22) + v10;
        *(_DWORD *)v12 = v13;
        v14 = unpack_dd(v22);
        v15 = *(_DWORD *)v12;
        v10 = v14 + v13;
        *((_DWORD *)v12 + 1) = v10;
        if ( v15 >= v10 || a3 && v15 < *(_DWORD *)(a2 + 4) && *(_DWORD *)a2 < v10 || v15 < v20 )
        {
          sub_82BC50(
            "%a: skipped bad chunk %a..%a\n",
            (__int64)v22,
            v18,
            v19,
            (int)p_ptr,
            v22[0],
            v22[1],
            (int)v23,
            v24,
            SDWORD2(v24),
            v25,
            (__int64)ptr);
          v11 = v27;
          if ( (_QWORD)v27 )
          {
            v11 = v27 - 1;
            *(_QWORD *)&v27 = v27 - 1;
          }
        }
        else
        {
          v20 = v10;
          v11 = v27;
        }
        v9 = (char *)ptr;
        ++v4;
      }
      while ( v18 != v4 );
      *(_DWORD *)(a2 + 104) = v11;
      if ( (_DWORD)v11 )
      {
        if ( v11 < *((_QWORD *)&v27 + 1) )
        {
          if ( v9 )
          {
            v9 = (char *)qrealloc(v9);
            if ( !v9 )
              v9 = (char *)ptr;
          }
        }
        *(_QWORD *)(a2 + 112) = v9;
        result = 1;
        goto LABEL_23;
      }
      if ( v9 )
      {
        *(_QWORD *)&v27 = 0;
        qfree(v9);
      }
    }
    *(_DWORD *)(a2 + 104) = 0;
    sub_82BC50(
      "%a: cannot find function tails!\n",
      (__int64)v16,
      v18,
      v19,
      (int)p_ptr,
      v22[0],
      v22[1],
      (int)v23,
      v24,
      SDWORD2(v24),
      v25,
      (__int64)ptr);
    sub_5ACD60((__int64)a1, (unsigned int *)a2, 0);
    result = 0;
LABEL_23:
    if ( v23 )
    {
      v17 = result;
      *(_QWORD *)&v24 = 0;
      qfree(v23);
      return v17;
    }
  }
  return result;
}

