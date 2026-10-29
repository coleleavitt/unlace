__int64 __fastcall sub_3781E0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v4; // rsi
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm0
  int *v15; // rcx
  char *v16; // r13
  char *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  void (__fastcall *v20)(__m128i **, const __m128i **, int); // rax
  int v21; // edx
  void *v22; // rdi
  void *v23; // rsi
  __int64 v24; // rcx
  __m128 v25; // xmm0
  __int64 v26; // r9
  __int64 v27; // rbp
  int v28; // eax
  bool v29; // zf
  __int64 v30; // [rsp+0h] [rbp-100h]
  int *v31; // [rsp+8h] [rbp-F8h]
  int v32; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v33; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  void *ptr; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h] BYREF
  void *v37; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+60h] [rbp-A0h]
  void *v39; // [rsp+70h] [rbp-90h]
  __int128 v40; // [rsp+78h] [rbp-88h]
  int v41; // [rsp+88h] [rbp-78h]
  char v42; // [rsp+8Ch] [rbp-74h]
  __int128 v43; // [rsp+98h] [rbp-68h] BYREF
  __m128i v44; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v45; // [rsp+C0h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 40);
  v45 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  v38 = 0;
  v33 = 0;
  v37 = nullptr;
  v39 = nullptr;
  v41 = 0;
  v42 = 0x80;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0xFFFFFFFFLL;
  v40 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( (_DWORD)v4 != -1 )
  {
    if ( (unsigned __int8)get_type_by_tid(&v33, v4) && (unsigned __int8)get_tinfo_details(v33, 45, &v37) )
    {
      ptr = nullptr;
      v36 = 0;
      v44 = 0u;
      v43 = 0;
      v13 = operator new(0x18u);
      *(_QWORD *)v13 = &v37;
      v14 = _mm_loadl_epi64((const __m128i *)&off_2AFC920);
      *(_DWORD *)(v13 + 8) = v2;
      *(_QWORD *)(v13 + 16) = &ptr;
      *(_QWORD *)&v43 = v13;
      v44 = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)sub_36E150);
      if ( (_QWORD)v40 )
      {
        v15 = (int *)v39;
        v16 = (char *)v39 + 4 * v40;
        if ( v39 != v16 )
        {
          v17 = (char *)v39;
          v18 = 0;
          while ( 1 )
          {
            v19 = *(int *)v17;
            if ( !(_DWORD)v19 )
              break;
            v17 += 4;
            v18 += v19;
            if ( v16 == v17 )
            {
              if ( (_QWORD)v38 != v18 )
                break;
              v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_36B810;
              v26 = 0;
              do
              {
                v27 = *v15;
                if ( (_DWORD)v27 != 1 )
                {
                  v34 = v26;
                  v32 = v27;
                  if ( !v20 )
                    std::__throw_bad_function_call();
                  v31 = v15;
                  v30 = v26;
                  v28 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v44.m128i_i64[1])(&v43, &v34, &v32);
                  v26 = v30;
                  v15 = v31;
                  v29 = v28 == 0;
                  v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))v44.m128i_i64[0];
                  if ( !v29 )
                    break;
                }
                ++v15;
                v26 += v27;
              }
              while ( v16 != (char *)v15 );
              if ( !v20 )
                goto LABEL_23;
              goto LABEL_22;
            }
          }
        }
      }
      v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_36B810;
LABEL_22:
      v20((__m128i **)&v43, (const __m128i **)&v43, 3);
LABEL_23:
      v21 = 0;
      v22 = *(void **)(a2 + 8);
      v23 = ptr;
      ptr = v22;
      if ( (_QWORD)v36 )
        v21 = v36 - 1;
      v24 = *(_QWORD *)(a2 + 24);
      v25 = _mm_loadh_ps((const double *)&v36 + 1);
      *(_QWORD *)(a2 + 8) = v23;
      *(__m128 *)(a2 + 16) = v25;
      *((_QWORD *)&v36 + 1) = v24;
      *(_DWORD *)(a2 + 8) = v21;
      if ( v22 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v22);
      }
    }
    if ( v39 )
    {
      *(_QWORD *)&v40 = 0;
      qfree(v39);
    }
    v5 = (char *)v37;
    if ( v37 )
    {
      v6 = v38;
      if ( (_QWORD)v38 )
      {
        v7 = 0;
        v8 = 0;
        do
        {
          v9 = &v5[v7];
          v10 = *(void **)&v5[v7 + 24];
          if ( v10 )
          {
            *((_QWORD *)v9 + 4) = 0;
            qfree(v10);
          }
          v11 = *(void **)v9;
          if ( *(_QWORD *)v9 )
          {
            *((_QWORD *)v9 + 1) = 0;
            qfree(v11);
          }
          ++v8;
          v5 = (char *)v37;
          v7 += 56;
        }
        while ( v6 != v8 );
      }
      *(_QWORD *)&v38 = 0;
      qfree(v5);
    }
  }
  clear_tinfo_t(&v33);
  return 0;
}

