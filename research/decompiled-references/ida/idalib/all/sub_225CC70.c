void __fastcall sub_225CC70(__int64 a1, char *a2)
{
  const __m128i *v2; // r12
  void *v4; // rbp
  size_t v5; // r15
  __int64 m128i_i64; // rcx
  const __m128i *v7; // r14
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  const __m128i *v11; // rax
  void *v12; // rax
  __int64 v13; // rcx
  char *v14; // rbp
  unsigned __int64 v15; // r15
  char *v16; // r14
  __int64 v17; // rdx
  _BYTE *v18; // rax
  const void *v19; // rsi
  char *v20; // rax
  char *v21; // rdi
  __int64 v22; // rdx
  _BYTE *v23; // rax
  char *v24; // rax
  char *v25; // rdi
  size_t v26; // rdx
  size_t v27; // rdx
  __m128i *v28; // rdi
  signed __int64 v29; // rax
  void *v31[2]; // [rsp+20h] [rbp-88h] BYREF
  __m128i v32; // [rsp+30h] [rbp-78h] BYREF
  void *v33[2]; // [rsp+40h] [rbp-68h] BYREF
  __m128i v34; // [rsp+50h] [rbp-58h] BYREF
  char v35; // [rsp+60h] [rbp-48h]

  if ( (char *)a1 != a2 && a2 != (char *)(a1 + 72) )
  {
    v2 = (const __m128i *)(a1 + 120);
    do
    {
      v4 = (void *)v2[-3].m128i_i64[1];
      v5 = *(_QWORD *)(a1 + 8);
      m128i_i64 = (__int64)v2[-3].m128i_i64;
      v7 = (const __m128i *)v2[-3].m128i_i64[0];
      v8 = v5;
      if ( (unsigned __int64)v4 <= v5 )
        v8 = v2[-3].m128i_u64[1];
      if ( v8
        && (v9 = memcmp((const void *)v2[-3].m128i_i64[0], *(const void **)a1, v8),
            m128i_i64 = (__int64)v2[-3].m128i_i64,
            v9) )
      {
        if ( v9 >= 0 )
          goto LABEL_47;
      }
      else
      {
        v29 = (signed __int64)v4 - v5;
        if ( (__int64)((__int64)v4 - v5) > 0x7FFFFFFF || v29 >= (__int64)0xFFFFFFFF80000000LL && (int)v29 >= 0 )
        {
LABEL_47:
          v14 = &v2[1].m128i_i8[8];
          sub_225CAE0(m128i_i64);
          goto LABEL_42;
        }
      }
      v31[0] = &v32;
      if ( v7 == &v2[-2] )
      {
        v32 = _mm_loadu_si128(v2 - 2);
      }
      else
      {
        v10 = v2[-2].m128i_i64[0];
        v31[0] = (void *)v7;
        v32.m128i_i64[0] = v10;
      }
      v2[-3].m128i_i64[0] = (__int64)v2[-2].m128i_i64;
      v31[1] = v4;
      v33[0] = &v34;
      v11 = (const __m128i *)v2[-1].m128i_i64[0];
      v2[-3].m128i_i64[1] = 0;
      v2[-2].m128i_i8[0] = 0;
      if ( v11 == v2 )
      {
        v34 = _mm_loadu_si128(v2);
      }
      else
      {
        v33[0] = (void *)v11;
        v34.m128i_i64[0] = v2->m128i_i64[0];
      }
      v12 = (void *)v2[-1].m128i_i64[1];
      v13 = m128i_i64 - a1;
      v2[-1].m128i_i64[0] = (__int64)v2;
      v2->m128i_i8[0] = 0;
      v14 = &v2[1].m128i_i8[8];
      v33[1] = v12;
      LOBYTE(v12) = v2[1].m128i_i8[0];
      v2[-1].m128i_i64[1] = 0;
      v15 = 0x8E38E38E38E38E39LL * (v13 >> 3);
      v35 = (char)v12;
      if ( v13 > 0 )
      {
        v16 = &v2[-7].m128i_i8[8];
        do
        {
          v24 = *((char **)v16 - 2);
          v25 = *((char **)v16 + 7);
          if ( v24 == v16 )
          {
            v26 = *((_QWORD *)v16 - 1);
            if ( v26 )
            {
              if ( v26 == 1 )
                *v25 = *v16;
              else
                memcpy(v25, v16, v26);
              v25 = *((char **)v16 + 7);
              v26 = *((_QWORD *)v16 - 1);
            }
            *((_QWORD *)v16 + 8) = v26;
            v25[v26] = 0;
          }
          else
          {
            if ( v25 == v16 + 72 )
            {
              *((_QWORD *)v16 + 7) = v24;
              *((_QWORD *)v16 + 8) = *((_QWORD *)v16 - 1);
              *((_QWORD *)v16 + 9) = *(_QWORD *)v16;
            }
            else
            {
              *((_QWORD *)v16 + 7) = v24;
              v17 = *((_QWORD *)v16 + 9);
              *((_QWORD *)v16 + 8) = *((_QWORD *)v16 - 1);
              *((_QWORD *)v16 + 9) = *(_QWORD *)v16;
              if ( v25 )
              {
                *((_QWORD *)v16 - 2) = v25;
                *(_QWORD *)v16 = v17;
                goto LABEL_18;
              }
            }
            *((_QWORD *)v16 - 2) = v16;
          }
LABEL_18:
          v18 = *((_BYTE **)v16 - 2);
          *((_QWORD *)v16 - 1) = 0;
          v19 = v16 + 32;
          *v18 = 0;
          v20 = *((char **)v16 + 2);
          v21 = *((char **)v16 + 11);
          if ( v16 + 32 == v20 )
          {
            v27 = *((_QWORD *)v16 + 3);
            if ( v27 )
            {
              if ( v27 == 1 )
                *v21 = v16[32];
              else
                memcpy(v21, v19, v27);
              v21 = *((char **)v16 + 11);
              v27 = *((_QWORD *)v16 + 3);
            }
            *((_QWORD *)v16 + 12) = v27;
            v21[v27] = 0;
            goto LABEL_22;
          }
          if ( v21 == v16 + 104 )
          {
            *((_QWORD *)v16 + 11) = v20;
            *((_QWORD *)v16 + 12) = *((_QWORD *)v16 + 3);
            *((_QWORD *)v16 + 13) = *((_QWORD *)v16 + 4);
LABEL_35:
            *((_QWORD *)v16 + 2) = v19;
            goto LABEL_22;
          }
          *((_QWORD *)v16 + 11) = v20;
          v22 = *((_QWORD *)v16 + 13);
          *((_QWORD *)v16 + 12) = *((_QWORD *)v16 + 3);
          *((_QWORD *)v16 + 13) = *((_QWORD *)v16 + 4);
          if ( !v21 )
            goto LABEL_35;
          *((_QWORD *)v16 + 2) = v21;
          *((_QWORD *)v16 + 4) = v22;
LABEL_22:
          v23 = *((_BYTE **)v16 + 2);
          *((_QWORD *)v16 + 3) = 0;
          v16 -= 72;
          *v23 = 0;
          v16[192] = v16[120];
          --v15;
        }
        while ( v15 );
      }
      sub_A0AAD0(a1, v31);
      sub_A0AAD0(a1 + 32, v33);
      v28 = (__m128i *)v33[0];
      *(_BYTE *)(a1 + 64) = v35;
      if ( v28 != &v34 )
        operator delete(v28);
      if ( v31[0] != &v32 )
        operator delete(v31[0]);
LABEL_42:
      v2 = (const __m128i *)((char *)v2 + 72);
    }
    while ( a2 != v14 );
  }
}
