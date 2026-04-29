__int64 __fastcall sub_DDC0(__int64 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  unsigned int v5; // r15d
  unsigned __int64 v7; // r12
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdx
  size_t v10; // r15
  __int64 v11; // r8
  size_t v12; // r10
  _BYTE *v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // r12
  _BYTE *v16; // rsi
  unsigned __int64 v17; // rax
  void *v18; // rdi
  unsigned __int64 v19; // rbx
  size_t v20; // r12
  __int64 v21; // rbp
  size_t v22; // r13
  _BYTE *v23; // rsi
  __m128i v24; // xmm1
  _BYTE *v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v28; // [rsp+10h] [rbp-C0h]
  size_t v29; // [rsp+18h] [rbp-B8h]
  __int64 v30; // [rsp+20h] [rbp-B0h]
  _BYTE *v31; // [rsp+28h] [rbp-A8h] BYREF
  __m128i v32; // [rsp+30h] [rbp-A0h] BYREF
  void *src; // [rsp+48h] [rbp-88h] BYREF
  __int128 v34; // [rsp+50h] [rbp-80h]
  char v35[4]; // [rsp+68h] [rbp-68h] BYREF
  unsigned int v36; // [rsp+6Ch] [rbp-64h]
  unsigned __int16 *v37; // [rsp+70h] [rbp-60h]
  __int128 v38; // [rsp+78h] [rbp-58h]
  unsigned __int64 v39; // [rsp+90h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v38 = 0;
  v37 = nullptr;
  v5 = sub_DBE0(a1, (__int64)v35, a3, a4);
  if ( !(_BYTE)v5 )
    goto LABEL_2;
  v31 = nullptr;
  v32 = 0;
  v31 = (_BYTE *)qvector_reserve(&v31, 0, 2, 1);
  v7 = (unsigned int)(a3 - 1);
  v32.m128i_i64[0] = 2;
  *v31 = 40;
  v31[1] = 0;
  v8 = v37;
  if ( 2LL * (_QWORD)v38 )
  {
    while ( 1 )
    {
      src = nullptr;
      v34 = 0;
      if ( v7 >= *(_QWORD *)(a1 + 56) )
      {
        if ( !under_debugger )
          interr(20112);
        BUG();
      }
      v5 = sub_8BD0((__int64)&src, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v7), *v8, 0x55u);
      if ( !(_BYTE)v5 )
        break;
      v9 = v34;
      if ( (_QWORD)v34 )
      {
        v10 = v34 - 1;
        if ( (_QWORD)v34 != 1 )
        {
          v11 = v32.m128i_i64[0];
          v12 = v34 - 1;
          if ( v32.m128i_i64[0] )
          {
            v11 = v32.m128i_i64[0] - 1;
            v12 = v10 + v32.m128i_i64[0] - 1;
            v9 = v34 + v32.m128i_i64[0] - 1;
          }
          v13 = v31;
          if ( v32.m128i_i64[1] < v9 )
          {
            v30 = v11;
            v29 = v12;
            v28 = v9;
            v31 = (_BYTE *)qvector_reserve(&v31, v31, v9, 1);
            v11 = v30;
            v13 = v31;
            v12 = v29;
            v9 = v28;
          }
          v32.m128i_i64[0] = v9;
          v13[v12] = 0;
          memcpy(&v31[v11], src, v10);
        }
      }
      if ( src )
      {
        *(_QWORD *)&v34 = 0;
        qfree(src);
      }
      if ( ++v8 == &v37[(_QWORD)v38] )
        goto LABEL_19;
    }
    v18 = src;
    if ( !src )
      goto LABEL_25;
    goto LABEL_24;
  }
LABEL_19:
  v14 = v32.m128i_i64[0];
  v15 = 2;
  if ( v32.m128i_i64[0] )
  {
    v15 = v32.m128i_i64[0] + 1;
    v16 = v31;
    v14 = v32.m128i_i64[0] - 1;
    if ( v32.m128i_i64[1] >= (unsigned __int64)(v32.m128i_i64[0] + 1) )
      goto LABEL_21;
  }
  else
  {
    v16 = v31;
    if ( v32.m128i_i64[1] >= 2uLL )
      goto LABEL_21;
  }
  v31 = (_BYTE *)qvector_reserve(&v31, v16, v15, 1);
  v16 = v31;
LABEL_21:
  v32.m128i_i64[0] = v15;
  v16[v14] = 41;
  v31[v14 + 1] = 0;
  v17 = (unsigned int)(a3 - 1);
  src = nullptr;
  v34 = 0;
  if ( v17 >= *(_QWORD *)(a1 + 56) )
    sub_59F0();
  v5 = sub_8BD0((__int64)&src, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v17), v36, 0x55u);
  if ( (_BYTE)v5 )
  {
    v19 = v34;
    if ( (_QWORD)v34 )
    {
      v20 = v34 - 1;
      if ( (_QWORD)v34 != 1 )
      {
        v21 = v32.m128i_i64[0];
        v22 = v34 - 1;
        if ( v32.m128i_i64[0] )
        {
          v21 = v32.m128i_i64[0] - 1;
          v22 = v20 + v32.m128i_i64[0] - 1;
          v19 = v34 + v32.m128i_i64[0] - 1;
        }
        v23 = v31;
        if ( v32.m128i_i64[1] < v19 )
        {
          v31 = (_BYTE *)qvector_reserve(&v31, v31, v19, 1);
          v23 = v31;
        }
        v32.m128i_i64[0] = v19;
        v23[v22] = 0;
        memcpy(&v31[v21], src, v20);
      }
    }
    v24 = _mm_loadu_si128(&v32);
    v18 = src;
    v25 = *(_BYTE **)a2;
    v26 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = v31;
    *(__m128i *)(a2 + 8) = v24;
    v31 = v25;
    v32 = v26;
    if ( !v18 )
      goto LABEL_25;
  }
  else
  {
    v18 = src;
    if ( !src )
      goto LABEL_25;
  }
LABEL_24:
  *(_QWORD *)&v34 = 0;
  qfree(v18);
LABEL_25:
  if ( v31 )
  {
    v32.m128i_i64[0] = 0;
    qfree(v31);
  }
LABEL_2:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  return v5;
}
