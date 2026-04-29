unsigned __int64 __fastcall sub_2D0FA0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  unsigned int v5; // eax
  __int64 v6; // rax
  size_t v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rsi
  __m128i *v10; // rbp
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rax
  __m128i v14; // xmm0
  _QWORD *v15; // rdx
  _QWORD *i; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 n; // [rsp+8h] [rbp-B0h]
  __int64 v25[2]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+20h] [rbp-98h]
  void *v27; // [rsp+28h] [rbp-90h]
  __m128i v28; // [rsp+30h] [rbp-88h] BYREF
  __int64 v29; // [rsp+40h] [rbp-78h] BYREF
  void *v30; // [rsp+48h] [rbp-70h]
  __m128i v31; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h]
  __int32 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v34 = __readfsqword(0x28u);
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
              sub_37B760(52588);
            BUG();
          }
          *(_DWORD *)(a2 + 48) = v3[18];
        }
        else if ( v5 == 1 )
        {
          v25[0] = (__int64)(v3 + 3);
          v21 = sub_2121C0((__m128i *)(a2 + 24), (__int64)(v3 + 3), v25);
          v22 = v21 + 24;
          copy_argloc(v21 + 48, v3 + 8);
          *(_QWORD *)(v22 + 40) = v3[10];
        }
        else
        {
          if ( v5 != 2 )
            goto LABEL_32;
          LODWORD(v25[0]) = 0;
          copy_argloc(v25, v3 + 8);
          v6 = v3[10];
          v27 = nullptr;
          v28 = 0;
          v26 = v6;
          v7 = v3[12];
          if ( v7 )
          {
            v27 = (void *)qalloc_or_throw(v3[12]);
            v28.m128i_i64[1] = v7;
            memcpy(v27, (const void *)v3[11], v7);
            v28.m128i_i64[0] = v7;
          }
          v29 = 0;
          copy_tinfo_t(&v29, v3 + 14);
          v30 = nullptr;
          v31 = 0;
          if ( v3[16] )
          {
            n = v3[16];
            v30 = (void *)qalloc_or_throw(n);
            v31.m128i_i64[1] = n;
            memcpy(v30, (const void *)v3[15], n);
            v31.m128i_i64[0] = n;
          }
          v8 = *(_QWORD *)(a2 + 8);
          v9 = *(_QWORD *)a2;
          v32 = v3[18];
          v33 = *((_DWORD *)v3 + 38);
          if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v8 + 1) )
          {
            v23 = qvector_reserve(a2, v9, v8 + 1, 96);
            *(_QWORD *)a2 = v23;
            v8 = *(_QWORD *)(a2 + 8);
            v9 = v23;
          }
          v10 = (__m128i *)(v9 + 96 * v8);
          v10->m128i_i32[0] = 0;
          copy_argloc(v10, v25);
          v10[1].m128i_i64[0] = v26;
          v11 = _mm_load_si128(&v28);
          v12 = (__int64)v27;
          v27 = nullptr;
          v10[2] = v11;
          v28 = 0;
          v10[1].m128i_i64[1] = v12;
          v10[3].m128i_i64[0] = 0;
          copy_tinfo_t(&v10[3], &v29);
          v13 = (__int64)v30;
          v14 = _mm_load_si128(&v31);
          v30 = nullptr;
          v10[4] = v14;
          v10[3].m128i_i64[1] = v13;
          v31 = 0;
          v10[5].m128i_i64[0] = v32;
          v10[5].m128i_i32[2] = v33;
          ++*(_QWORD *)(a2 + 8);
          sub_2B2600(v25);
        }
        if ( (*v3 & 2) == 0 )
        {
          v15 = (_QWORD *)v3[2];
          if ( (*(_BYTE *)v15 & 2) != 0 )
          {
            v18 = (_QWORD *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
            v19 = *v18;
            if ( (*v18 & 2) == 0 )
            {
              while ( (_QWORD *)v18[2] == v3 )
              {
                v3 = v18;
                v20 = v19 & 0xFFFFFFFFFFFFFFFCLL;
                v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v19 & 2) != 0 )
                {
                  v3 = (_QWORD *)v20;
                  goto LABEL_20;
                }
                v18 = (_QWORD *)v20;
              }
            }
            v3 = v18;
          }
          else
          {
            for ( i = (_QWORD *)v15[1]; (*(_BYTE *)i & 2) == 0; i = (_QWORD *)i[1] )
              v15 = i;
            v3 = v15;
          }
        }
LABEL_20:
        ;
      }
    }
  }
  return v34 - __readfsqword(0x28u);
}
