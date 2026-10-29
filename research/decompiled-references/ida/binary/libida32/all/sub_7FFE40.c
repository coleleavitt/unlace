__int64 __fastcall sub_7FFE40(__m128i *a1)
{
  __int64 v1; // rax
  __int64 v2; // r13
  __int32 v3; // r14d
  unsigned __int64 v4; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  int v11; // r14d
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rsi
  __m128i v14; // xmm0
  unsigned __int64 v15; // xmm0_8
  __int64 v16; // r12
  _DWORD *v17; // r12
  char *v18; // rcx
  char v19; // si
  char v20; // r8
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 i; // rax
  __int64 v38; // rdx
  unsigned int v39; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v40; // [rsp+10h] [rbp-78h]
  unsigned __int64 v41; // [rsp+18h] [rbp-70h]
  __int64 *v42; // [rsp+20h] [rbp-68h]
  char v43; // [rsp+37h] [rbp-51h] BYREF
  __int64 v44; // [rsp+38h] [rbp-50h] BYREF
  __int64 v45[9]; // [rsp+40h] [rbp-48h] BYREF

  v1 = a1[18].m128i_i64[0];
  v2 = a1[4].m128i_i64[1];
  v45[1] = __readfsqword(0x28u);
  v3 = a1[9].m128i_i32[2];
  v4 = a1[32].m128i_i64[0] + v1;
  v44 = 0;
  v45[0] = 0;
  if ( a1->m128i_i64[1] >= v4 )
  {
    if ( (unsigned int)sub_7F7480((__int64)a1) )
      return 12;
    v7 = a1[18].m128i_u64[0];
    v8 = a1[32].m128i_u64[0];
    v9 = a1->m128i_u64[1];
    v10 = a1[18].m128i_u64[0];
    if ( v9 >= v7 + v8 )
    {
      v39 = 0;
      v11 = v3 & 0x2000;
      v12 = 0;
      while ( 1 )
      {
        if ( (__m128i *)a1[47].m128i_i64[0] == &a1[47] )
        {
          v13 = 4;
        }
        else
        {
          v13 = 4;
          v14 = _mm_loadu_si128((const __m128i *)(a1[47].m128i_i64[1] - 24));
          v15 = _mm_add_epi64(v14, _mm_srli_si128(v14, 8)).m128i_u64[0];
          if ( v8 < v15 )
          {
            v13 = v15 - v8 + 1;
            if ( v13 < 4 )
              v13 = 4;
          }
        }
        v16 = a1->m128i_i64[0];
        a1[32].m128i_i64[1] = v13;
        v17 = (_DWORD *)(v8 + v16);
        if ( !v11 )
          v39 = 1597334677 * *v17;
        if ( v7 )
        {
          v18 = (char *)v17;
          v10 = 0;
          v19 = 0;
          do
          {
            v20 = v19;
            v19 = *v18;
            ++v10;
            if ( *v18 != v20 )
              v10 = 1;
            ++v18;
          }
          while ( v18 != (char *)v17 + v7 );
        }
        else
        {
          v19 = 0;
        }
        v43 = v19;
        if ( v2 && v9 >= a1[17].m128i_i64[0] + v8 )
        {
          result = sub_7F4200(a1, v45);
          if ( (_DWORD)result )
            return result;
          v36 = a1[17].m128i_i64[0];
          if ( v36 )
          {
            v12 = 0;
            for ( i = 0; i != v36; ++i )
            {
              v38 = *(_QWORD *)(a1[23].m128i_i64[1] + 8 * i) * *((unsigned __int8 *)v17 + i);
              v12 += v38;
            }
          }
          else
          {
            v12 = 0;
          }
          v7 = a1[18].m128i_u64[0];
        }
        if ( v10 == v7 )
          break;
LABEL_21:
        if ( !v2 )
          goto LABEL_30;
        v21 = a1[17].m128i_i64[0];
LABEL_27:
        v22 = a1[32].m128i_u64[0];
        if ( a1->m128i_i64[1] < v22 + v21 )
          goto LABEL_30;
        if ( v22 >= v45[0] )
        {
          result = sub_7F4200(a1, v45);
          if ( (_DWORD)result )
            return result;
        }
        v23 = *(_QWORD *)(a1[20].m128i_i64[1] + 8 * (v12 & a1[22].m128i_i64[0] ^ (v12 >> a1[21].m128i_i64[1])));
        if ( !v23 || (unsigned int)sub_7F4070((__int64)a1, v23 - 1) )
          goto LABEL_30;
        result = sub_7FCC00(a1);
        if ( (_DWORD)result )
          return result;
        v35 = a1[38].m128i_u64[0];
        if ( v35 )
        {
          v25 = a1[32].m128i_i64[0];
          v9 = a1->m128i_u64[1];
          v8 = v35 + v25;
          if ( v35 < a1[19].m128i_i64[1] )
            goto LABEL_60;
        }
        else
        {
LABEL_30:
          if ( v11 )
          {
            v7 = a1[18].m128i_u64[0];
            v9 = a1->m128i_u64[1];
LABEL_32:
            v24 = a1[32].m128i_u64[1];
LABEL_33:
            v25 = a1[32].m128i_i64[0];
            if ( v24 > 4 )
              a1[32].m128i_i64[1] = v24 - 1;
            goto LABEL_35;
          }
LABEL_52:
          v28 = 0;
          v29 = 8 * (a1[26].m128i_i64[1] & v39 ^ ((unsigned __int64)v39 >> a1[26].m128i_i64[0]));
          v30 = (__int64 *)(v29 + a1[24].m128i_i64[0]);
          v31 = *v30;
          if ( *v30 )
          {
            v42 = (__int64 *)(v29 + a1[24].m128i_i64[0]);
            v41 = 8 * (a1[26].m128i_i64[1] & v39 ^ ((unsigned __int64)v39 >> a1[26].m128i_i64[0]));
            v34 = sub_7F5960(a1->m128i_i64, v31, (unsigned __int64 *)&v44);
            v30 = v42;
            v29 = v41;
            v28 = v34;
          }
          v32 = a1[24].m128i_i64[1];
          v33 = a1[32].m128i_i64[0];
          if ( v32 )
          {
            *(_QWORD *)(v32 + 8 * (v33 & a1[6].m128i_i64[0])) = v31;
            v30 = (__int64 *)(a1[24].m128i_i64[0] + v29);
          }
          *v30 = v33 + 1;
          v24 = a1[32].m128i_u64[1];
          if ( v28 < v24 )
          {
            v7 = a1[18].m128i_u64[0];
            v9 = a1->m128i_u64[1];
            goto LABEL_33;
          }
          v40 = v28;
          if ( (unsigned int)sub_7FCB10(a1, a1[32].m128i_i64[0], v28, v44, 0) )
            return 12;
          v25 = a1[32].m128i_i64[0];
          v35 = v40;
          v9 = a1->m128i_u64[1];
          v8 = v40 + v25;
          if ( v40 < a1[19].m128i_i64[1] )
          {
LABEL_60:
            if ( v9 - 2 >= v8 )
            {
              a1[32].m128i_i64[1] = v35;
              v7 = a1[18].m128i_u64[0];
              goto LABEL_35;
            }
          }
        }
LABEL_68:
        v7 = a1[18].m128i_u64[0];
        a1[32].m128i_i64[0] = v8;
        v10 = v7;
        if ( v9 < v7 + v8 )
          return 0;
      }
      v9 = a1->m128i_u64[1];
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = a1[32].m128i_i64[0];
          v27 = v9 - v26;
          if ( v7 >= v27 )
          {
            v10 = v7;
          }
          else
          {
            v10 = v7;
            do
            {
              if ( *((_BYTE *)v17 + v10) != v43 )
                break;
              ++v10;
            }
            while ( v27 != v10 );
          }
          if ( v10 < a1[32].m128i_i64[1] || v10 <= 7 )
            goto LABEL_21;
          if ( (unsigned int)sub_7FBE50(a1, v26, v10, &v43) )
            return 12;
          v25 = a1[32].m128i_i64[0];
          v9 = a1->m128i_u64[1];
          v8 = v10 + v25;
          if ( v10 >= a1[19].m128i_i64[1] || v9 - 2 < v8 )
            goto LABEL_68;
          a1[32].m128i_i64[1] = v10;
          v7 = a1[18].m128i_u64[0];
LABEL_35:
          if ( v7 + v25 == v9 )
            return 0;
          ++v10;
          if ( *((_BYTE *)v17 + v7) != v43 )
          {
            v43 = *((_BYTE *)v17 + v7);
            v10 = 1;
          }
          if ( v11 )
            break;
          v39 = 1597334677 * *(_DWORD *)((char *)v17 + 1);
          if ( v2 )
          {
LABEL_24:
            v21 = a1[17].m128i_i64[0];
            if ( v21 + v25 < v9 )
              v12 = *((unsigned __int8 *)v17 + v21)
                  + 0x106689D45497FDB5LL * v12
                  - a1[23].m128i_i64[0] * *(unsigned __int8 *)v17;
            v17 = (_DWORD *)((char *)v17 + 1);
            a1[32].m128i_i64[0] = v25 + 1;
            if ( v7 != v10 )
              goto LABEL_27;
          }
          else
          {
            v17 = (_DWORD *)((char *)v17 + 1);
            a1[32].m128i_i64[0] = v25 + 1;
            if ( v7 != v10 )
              goto LABEL_52;
          }
        }
        if ( v2 )
          goto LABEL_24;
        v17 = (_DWORD *)((char *)v17 + 1);
        a1[32].m128i_i64[0] = v25 + 1;
        if ( v7 != v10 )
          goto LABEL_32;
      }
    }
  }
  return 0;
}

