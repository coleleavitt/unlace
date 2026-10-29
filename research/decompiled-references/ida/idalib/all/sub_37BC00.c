__int64 __fastcall sub_37BC00(__int64 a1, __int64 a2)
{
  void **v2; // rbp
  __int64 v4; // rsi
  char *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  void ***v13; // rax
  __m128i v14; // xmm0
  int *v15; // rcx
  char *v16; // r13
  char *v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  void (__fastcall *v20)(__m128i **, const __m128i **, int); // rax
  void *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rbp
  int v26; // eax
  bool v27; // zf
  __int64 v28; // [rsp+0h] [rbp-100h]
  int *v29; // [rsp+8h] [rbp-F8h]
  int v30; // [rsp+24h] [rbp-DCh] BYREF
  __int64 v31; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  void *ptr; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  void *v35; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h]
  void *v37; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+88h] [rbp-78h]
  char v40; // [rsp+8Ch] [rbp-74h]
  __int128 v41; // [rsp+98h] [rbp-68h] BYREF
  __m128i v42; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v43; // [rsp+C0h] [rbp-40h]

  v2 = *(void ***)(a1 + 40);
  v43 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v36 = 0;
  v31 = 0;
  v35 = nullptr;
  v37 = nullptr;
  v39 = 0;
  v40 = 0x80;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = -1;
  *(_OWORD *)(a2 + 16) = 0;
  v38 = 0;
  if ( v4 != -1 )
  {
    if ( (unsigned __int8)get_type_by_tid(&v31, v4) && (unsigned __int8)get_tinfo_details(v31, 45, &v35) )
    {
      ptr = nullptr;
      v34 = 0;
      v42 = 0u;
      v41 = 0;
      v13 = (void ***)operator new(0x18u);
      *v13 = &v35;
      v14 = _mm_loadl_epi64((const __m128i *)&off_2B25A00);
      v13[1] = v2;
      v13[2] = &ptr;
      *(_QWORD *)&v41 = v13;
      v42 = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)sub_371960);
      if ( (_QWORD)v38 )
      {
        v15 = (int *)v37;
        v16 = (char *)v37 + 4 * v38;
        if ( v37 != v16 )
        {
          v17 = (char *)v37;
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
              if ( (_QWORD)v36 != v18 )
                break;
              v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_36EFD0;
              v24 = 0;
              do
              {
                v25 = *v15;
                if ( (_DWORD)v25 != 1 )
                {
                  v32 = v24;
                  v30 = v25;
                  if ( !v20 )
                    std::__throw_bad_function_call();
                  v29 = v15;
                  v28 = v24;
                  v26 = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v42.m128i_i64[1])(&v41, &v32, &v30);
                  v24 = v28;
                  v15 = v29;
                  v27 = v26 == 0;
                  v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))v42.m128i_i64[0];
                  if ( !v27 )
                    break;
                }
                ++v15;
                v24 += v25;
              }
              while ( v16 != (char *)v15 );
              if ( !v20 )
                goto LABEL_23;
              goto LABEL_22;
            }
          }
        }
      }
      v20 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_36EFD0;
LABEL_22:
      v20((__m128i **)&v41, (const __m128i **)&v41, 3);
LABEL_23:
      v21 = *(void **)(a2 + 8);
      v22 = v34 - 1;
      ptr = v21;
      if ( !(_QWORD)v34 )
        v22 = 0;
      v23 = *(_QWORD *)(a2 + 24);
      *(__m128 *)(a2 + 16) = _mm_loadh_ps((const double *)&v34 + 1);
      *((_QWORD *)&v34 + 1) = v23;
      *(_QWORD *)(a2 + 8) = v22;
      if ( v21 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v21);
      }
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    v5 = (char *)v35;
    if ( v35 )
    {
      v6 = v36;
      if ( (_QWORD)v36 )
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
          v5 = (char *)v35;
          v7 += 56;
        }
        while ( v6 != v8 );
      }
      *(_QWORD *)&v36 = 0;
      qfree(v5);
    }
  }
  clear_tinfo_t(&v31);
  return 0;
}
