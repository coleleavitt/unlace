unsigned __int64 __fastcall sub_3CBDC0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __m128i *v8; // r12
  __int64 *v9; // rbp
  char v10; // cl
  unsigned __int64 v11; // rdx
  __int8 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __m128i *v17; // rdx
  __m128i *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int8 v22; // r15
  __m128i *v23; // rdx
  __m128i *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const __m128i *v27; // [rsp+8h] [rbp-70h] BYREF
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v29[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v4 = (__int64 *)(*(_QWORD *)(a1 + 1672) + a4);
  v30 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = v5 + *(unsigned int *)(a2 + 4);
  v28 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v6);
  if ( v5 < v6 )
  {
    v8 = (__m128i *)(v4 + 8);
    v9 = v4;
    while ( 1 )
    {
      v29[0] = unpack_dq(&v28);
      v14 = unpack_dq(&v28);
      v13 = v28.m128i_u64[1];
      v29[1] = v14;
      v15 = v14;
      v16 = v28.m128i_i64[0];
      if ( v28.m128i_i64[0] >= (unsigned __int64)v28.m128i_i64[1] )
        break;
      v10 = *(_BYTE *)v28.m128i_i64[0];
      v11 = ++v28.m128i_i64[0];
      if ( v10 )
      {
        if ( v11 >= v28.m128i_i64[1] )
        {
          v22 = 0;
LABEL_42:
          if ( a3 )
          {
LABEL_10:
            v12 = 0;
            goto LABEL_11;
          }
LABEL_28:
          v23 = (__m128i *)v9[9];
          v24 = v8;
          if ( !v23 )
            goto LABEL_39;
          do
          {
            while ( 1 )
            {
              v25 = v23[2].m128i_u64[0];
              if ( v25 < v29[0] || v29[0] >= v25 && v23[2].m128i_i64[1] < v15 )
                break;
              v24 = v23;
              v23 = (__m128i *)v23[1].m128i_i64[0];
              if ( !v23 )
                goto LABEL_35;
            }
            v23 = (__m128i *)v23[1].m128i_i64[1];
          }
          while ( v23 );
LABEL_35:
          if ( v8 == v24 || (v26 = v24[2].m128i_u64[0], v29[0] < v26) || v26 >= v29[0] && v15 < v24[2].m128i_i64[1] )
          {
LABEL_39:
            v27 = (const __m128i *)v29;
            v24 = sub_3B9690(v9, v24->m128i_i64, &v27);
            v13 = v28.m128i_u64[1];
          }
          v24[3].m128i_i8[0] = v22;
          goto LABEL_7;
        }
        v22 = *(_BYTE *)(v16 + 1);
        v28.m128i_i64[0] = v16 + 2;
        if ( (unsigned __int64)(v16 + 2) >= v28.m128i_i64[1] )
          goto LABEL_42;
        v12 = *(_BYTE *)(v16 + 2);
        v28.m128i_i64[0] = v16 + 3;
        if ( !a3 )
          goto LABEL_28;
LABEL_11:
        v17 = (__m128i *)v9[9];
        v18 = v8;
        if ( !v17 )
          goto LABEL_22;
        do
        {
          while ( 1 )
          {
            v19 = v17[2].m128i_u64[0];
            if ( v19 < v29[0] || v29[0] >= v19 && v17[2].m128i_i64[1] < v15 )
              break;
            v18 = v17;
            v17 = (__m128i *)v17[1].m128i_i64[0];
            if ( !v17 )
              goto LABEL_18;
          }
          v17 = (__m128i *)v17[1].m128i_i64[1];
        }
        while ( v17 );
LABEL_18:
        if ( v8 == v18 || (v20 = v18[2].m128i_u64[0], v29[0] < v20) || v20 >= v29[0] && v15 < v18[2].m128i_i64[1] )
        {
LABEL_22:
          v27 = (const __m128i *)v29;
          v18 = sub_3B9690(v9, v18->m128i_i64, &v27);
          v13 = v28.m128i_u64[1];
        }
        v18[3].m128i_i8[0] = v12;
        if ( v28.m128i_i64[0] >= v13 )
          return v30 - __readfsqword(0x28u);
      }
      else
      {
        if ( v11 >= v28.m128i_i64[1] )
          break;
        v12 = *(_BYTE *)(v16 + 1);
        v28.m128i_i64[0] = v16 + 2;
        if ( a3 )
          goto LABEL_11;
LABEL_6:
        sub_3CBA60(v9, v29);
        v13 = v28.m128i_u64[1];
LABEL_7:
        if ( v28.m128i_i64[0] >= v13 )
          return v30 - __readfsqword(0x28u);
      }
    }
    if ( a3 )
      goto LABEL_10;
    goto LABEL_6;
  }
  return v30 - __readfsqword(0x28u);
}
