unsigned __int64 __fastcall sub_5A0F40(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i *v14; // rax
  __int64 v15; // r13
  unsigned __int64 v16; // rbx
  int v17; // esi
  __int64 v18; // r12
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __m128i *v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __m128i v29; // xmm0
  bool v30; // cf
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __m128i *v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+20h] [rbp-78h]
  __int64 v44; // [rsp+20h] [rbp-78h]
  __int64 v45; // [rsp+20h] [rbp-78h]
  __m128i v46; // [rsp+30h] [rbp-68h] BYREF
  __m128i v47; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  v41 = sub_5B0060();
  if ( v41 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = sub_5AFD80(a1, v2);
      v4 = v3;
      if ( !v3 || !*(_DWORD *)(v3 + 40) )
        goto LABEL_3;
      v5 = sub_59EB00(a1, v3);
      if ( !v5 )
      {
        if ( !under_debugger )
          interr(1924);
        BUG();
      }
      v6 = *(_QWORD *)(a2 + 8);
      v7 = *(unsigned int *)(v4 + 40);
      v8 = v6 + v7;
      if ( v6 + v7 != v6 )
      {
        v46.m128i_i64[0] = 0;
        v46.m128i_i64[1] = 0xFFFFFFFFLL;
        v47.m128i_i64[0] = 0;
        v47.m128i_i64[1] = -1;
        if ( !__CFADD__(v6, v7) )
        {
          v9 = *(_QWORD *)(a2 + 16);
          if ( (unsigned __int64)&v46 < *(_QWORD *)a2 || (unsigned __int64)&v46 >= 32 * v9 + *(_QWORD *)a2 )
          {
            v10 = v6;
            if ( v9 < v8 )
            {
              v42 = *(_QWORD *)(a2 + 16);
              v23 = qvector_reserve(a2, 0, v8, 32);
              v24 = *(_QWORD *)(a2 + 8);
              v25 = *(_QWORD *)(a2 + 16);
              v26 = *(__m128i **)a2;
              *(_QWORD *)(a2 + 16) = v42;
              v27 = v24 - 1;
              if ( v24 - 1 >= 0 )
              {
                v28 = v23;
                do
                {
                  v29 = _mm_loadu_si128(v26);
                  v28 += 32;
                  v26 += 2;
                  *(__m128i *)(v28 - 32) = v29;
                  *(__m128i *)(v28 - 16) = _mm_loadu_si128(v26 - 1);
                  v30 = v27-- == 0;
                }
                while ( !v30 );
                v26 = *(__m128i **)a2;
              }
              v43 = v23;
              qfree(v26);
              *(_QWORD *)a2 = v43;
              *(_QWORD *)(a2 + 16) = v25;
              v10 = *(_QWORD *)(a2 + 8);
            }
            if ( v10 < v8 )
            {
              v11 = _mm_load_si128(&v46);
              v12 = _mm_load_si128(&v47);
              do
              {
                v13 = v10++;
                v14 = (__m128i *)(*(_QWORD *)a2 + 32 * v13);
                *v14 = v11;
                v14[1] = v12;
              }
              while ( v8 != v10 );
            }
          }
          else
          {
            v20 = v6;
            if ( v9 < v8 )
            {
              v44 = *(_QWORD *)(a2 + 16);
              v31 = qvector_reserve(a2, 0, v8, 32);
              v32 = *(_QWORD *)(a2 + 16);
              v33 = v31;
              v34 = *(_QWORD *)(a2 + 8);
              v35 = *(__m128i **)a2;
              *(_QWORD *)(a2 + 16) = v44;
              v36 = v34 - 1;
              if ( v34 - 1 >= 0 )
              {
                v37 = v33;
                do
                {
                  v38 = _mm_loadu_si128(v35);
                  v37 += 32;
                  v35 += 2;
                  *(__m128i *)(v37 - 32) = v38;
                  *(__m128i *)(v37 - 16) = _mm_loadu_si128(v35 - 1);
                  v30 = v36-- == 0;
                }
                while ( !v30 );
                v35 = *(__m128i **)a2;
              }
              v45 = v33;
              qfree(v35);
              *(_QWORD *)a2 = v45;
              v20 = *(_QWORD *)(a2 + 8);
              *(_QWORD *)(a2 + 16) = v32;
            }
            if ( v20 < v8 )
            {
              do
              {
                v21 = v20++;
                v22 = *(_QWORD *)a2 + 32 * v21;
                *(_QWORD *)v22 = 0;
                *(_QWORD *)(v22 + 8) = 0xFFFFFFFFLL;
                *(_BYTE *)(v22 + 16) = 0;
                *(_QWORD *)(v22 + 24) = -1;
              }
              while ( v8 != v20 );
              *(_QWORD *)(a2 + 8) = v8;
              LODWORD(v7) = *(_DWORD *)(v4 + 40);
              goto LABEL_15;
            }
          }
        }
        *(_QWORD *)(a2 + 8) = v8;
        LODWORD(v7) = *(_DWORD *)(v4 + 40);
      }
LABEL_15:
      if ( (_DWORD)v7 )
      {
        v15 = 32 * v6;
        v16 = 0;
        v17 = 0;
        do
        {
          v18 = v15 + *(_QWORD *)a2;
          v15 += 32;
          *(_QWORD *)v18 = v4;
          *(_DWORD *)(v18 + 8) = *(_DWORD *)(v5 + 8 * v16);
          *(_DWORD *)(v18 + 12) = *(_DWORD *)(v5 + 8 * v16 + 4) - v17;
          *(_BYTE *)(v18 + 16) = (get_aflags(*(unsigned int *)(v5 + 8 * v16)) & 2) != 0;
          v17 = *(_DWORD *)(v5 + 8 * v16++ + 4);
        }
        while ( v16 < *(unsigned int *)(v4 + 40) );
        if ( v41 == ++v2 )
          return v48 - __readfsqword(0x28u);
      }
      else
      {
LABEL_3:
        if ( v41 == ++v2 )
          return v48 - __readfsqword(0x28u);
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}

