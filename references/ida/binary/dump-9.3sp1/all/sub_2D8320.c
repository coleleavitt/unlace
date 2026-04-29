unsigned __int64 __fastcall sub_2D8320(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __m128i *v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  _QWORD *v19; // rdx
  _QWORD *i; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v28[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+20h] [rbp-98h]
  void *v30; // [rsp+28h] [rbp-90h]
  __m128i v31; // [rsp+30h] [rbp-88h] BYREF
  __int64 v32; // [rsp+40h] [rbp-78h]
  void *v33; // [rsp+48h] [rbp-70h]
  __m128i v34; // [rsp+50h] [rbp-68h] BYREF
  __int64 v35; // [rsp+60h] [rbp-58h]
  __int32 v36; // [rsp+68h] [rbp-50h]
  unsigned __int64 v37; // [rsp+78h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v2 = (_QWORD *)*a1;
  if ( *a1 )
  {
    if ( a1[1] )
    {
      v3 = (_QWORD *)v2[1];
      while ( v2 != v3 )
      {
        v5 = *((_DWORD *)v3 + 14);
        if ( v5 == 3 )
        {
          *(_QWORD *)(a2 + 40) = v3[18];
        }
        else if ( v5 > 3 )
        {
          if ( v5 != 4 )
          {
LABEL_32:
            if ( !under_debugger )
              sub_383060(52588);
            BUG();
          }
          *(_DWORD *)(a2 + 48) = v3[18];
        }
        else if ( v5 == 1 )
        {
          v28[0] = (__int64)(v3 + 3);
          v25 = sub_219540((__m128i *)(a2 + 24), (__int64)(v3 + 3), v28) + 24;
          copy_argloc();
          *(_QWORD *)(v25 + 40) = v3[10];
        }
        else
        {
          if ( v5 != 2 )
            goto LABEL_32;
          LODWORD(v28[0]) = 0;
          copy_argloc();
          v8 = v3[10];
          v30 = nullptr;
          v31 = 0;
          v29 = v8;
          v9 = v3[12];
          if ( v9 )
          {
            v30 = (void *)qalloc_or_throw(v3[12], (__int64)(v3 + 8), v6, v7);
            v31.m128i_i64[1] = v9;
            memcpy(v30, (const void *)v3[11], v9);
            v31.m128i_i64[0] = v9;
          }
          v32 = 0;
          copy_tinfo_t();
          v33 = nullptr;
          v34 = 0;
          v11 = v3[16];
          if ( v11 )
          {
            n = v3[16];
            v33 = (void *)qalloc_or_throw(n, (__int64)(v3 + 14), v11, v10);
            v34.m128i_i64[1] = n;
            memcpy(v33, (const void *)v3[15], n);
            v34.m128i_i64[0] = n;
          }
          v12 = *(_QWORD *)(a2 + 8);
          v13 = *(_QWORD *)a2;
          v35 = v3[18];
          v36 = *((_DWORD *)v3 + 38);
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v12 + 1) )
          {
            v26 = qvector_reserve(a2, v13, v12 + 1, 96);
            *(_QWORD *)a2 = v26;
            v12 = *(_QWORD *)(a2 + 8);
            v13 = v26;
          }
          v14 = (__m128i *)(v13 + 96 * v12);
          v14->m128i_i32[0] = 0;
          copy_argloc();
          v14[1].m128i_i64[0] = v29;
          v15 = _mm_load_si128(&v31);
          v16 = (__int64)v30;
          v30 = nullptr;
          v14[2] = v15;
          v31 = 0;
          v14[1].m128i_i64[1] = v16;
          v14[3].m128i_i64[0] = 0;
          copy_tinfo_t();
          v17 = (__int64)v33;
          v18 = _mm_load_si128(&v34);
          v33 = nullptr;
          v14[4] = v18;
          v14[3].m128i_i64[1] = v17;
          v34 = 0;
          v14[5].m128i_i64[0] = v35;
          v14[5].m128i_i32[2] = v36;
          ++*(_QWORD *)(a2 + 8);
          sub_2B9980(v28);
        }
        if ( (*v3 & 2) == 0 )
        {
          v19 = (_QWORD *)v3[2];
          if ( (*(_BYTE *)v19 & 2) != 0 )
          {
            v22 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
            v23 = *v22;
            if ( (*v22 & 2) == 0 )
            {
              while ( (_QWORD *)v22[2] == v3 )
              {
                v3 = v22;
                v24 = v23 & 0xFFFFFFFFFFFFFFFCLL;
                v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v23 & 2) != 0 )
                {
                  v3 = (_QWORD *)v24;
                  goto LABEL_20;
                }
                v22 = (_QWORD *)v24;
              }
            }
            v3 = v22;
          }
          else
          {
            for ( i = (_QWORD *)v19[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v19 = i;
            v3 = v19;
          }
        }
LABEL_20:
        ;
      }
    }
  }
  return v37 - __readfsqword(0x28u);
}
