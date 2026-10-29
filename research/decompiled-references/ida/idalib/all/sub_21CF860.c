_QWORD *__fastcall sub_21CF860(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _WORD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // edi
  unsigned __int64 v23; // rsi
  __int64 v24; // r10
  int v25; // r14d
  int v26; // edi
  int v27; // esi
  __int64 v28; // [rsp+18h] [rbp-90h]
  __int64 v29; // [rsp+20h] [rbp-88h]
  __m128 v32; // [rsp+40h] [rbp-68h] BYREF
  _WORD *v33; // [rsp+50h] [rbp-58h] BYREF
  __m128i v34; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v28 = a2 + 16;
  sub_21E7DF0(&v33, a2 + 16, *(_QWORD *)(a2 + 8));
  if ( !v33 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
    v4 = *(_QWORD **)(v3 + 72);
    v29 = *(_QWORD *)(v3 + 8);
    if ( !v29 )
    {
LABEL_23:
      *a1 = 0;
      return a1;
    }
    v5 = 0;
    v6 = 10;
    while ( 2 )
    {
      v11 = (_QWORD *)((char *)v4 + v6);
      v12 = *v11;
      v13 = (__int64)(v11 + 2);
      v33 = nullptr;
      v34.m128i_i64[1] = v13;
      v34.m128i_i64[0] = 0;
      v35 = v12;
      while ( 1 )
      {
        v32.m128_i8[0] = 59;
        v14 = sub_2246AB0(&v34.m128i_u64[1], &v32, 1, 0);
        if ( v14 == -1 )
        {
          v18 = (_WORD *)v34.m128i_i64[1];
          v15 = v35;
          v19 = 0;
          v17 = 0;
        }
        else
        {
          v15 = v35;
          v16 = v14 + 1;
          if ( v14 + 1 > v35 )
          {
            v16 = v35;
            v17 = 0;
          }
          else
          {
            v17 = v35 - v16;
          }
          v18 = (_WORD *)v34.m128i_i64[1];
          v19 = v34.m128i_i64[1] + v16;
          if ( v14 <= v35 )
            v15 = v14;
        }
        v33 = v18;
        v34.m128i_i64[0] = v15;
        v34.m128i_i64[1] = v19;
        v35 = v17;
        if ( v15 > 1 && *v18 == 23135 )
          break;
        if ( !v17 )
        {
          v15 = v12;
          v18 = (_WORD *)v13;
          break;
        }
      }
      v7 = sub_21E6E90(v28, v18, v15);
      if ( !v7 )
      {
LABEL_8:
        if ( v5 )
        {
          --v5;
          v10 = v29-- == 1;
          v4 = (_QWORD *)((char *)v4 + v4[1] + v4[2] + 24);
          if ( !v10 )
          {
LABEL_10:
            v6 = v5 == 0 ? 10LL : 8LL;
            continue;
          }
        }
        else
        {
          v5 = *(unsigned __int16 *)v4 - 1LL;
          v10 = v29-- == 1;
          v4 = (_QWORD *)((char *)v4 + *(_QWORD *)((char *)v4 + 18) + *(_QWORD *)((char *)v4 + 10) + 26);
          if ( !v10 )
            goto LABEL_10;
        }
        goto LABEL_23;
      }
      break;
    }
    v33 = (_WORD *)v7;
    v34.m128i_i64[0] = (__int64)v18;
    v20 = *(unsigned int *)(a2 + 40);
    v21 = a2 + 24;
    v34.m128i_i64[1] = v15;
    if ( (_DWORD)v20 )
    {
      v8 = *(_QWORD *)(a2 + 24);
      v22 = (v20 - 1) & (((0xBF58476D1CE4E5B9LL * v7) >> 31) ^ (484763065 * v7));
      v23 = v8 + 24LL * v22;
      v24 = *(_QWORD *)v23;
      if ( v7 == *(_QWORD *)v23 )
      {
LABEL_26:
        sub_21CF800(&v32, (__int64 *)v23, (__int64 *)(v8 + 24 * v20), v21, 1);
        goto LABEL_8;
      }
      v9 = 0;
      v25 = 1;
      if ( v24 != -1 )
      {
        while ( 1 )
        {
          if ( !v9 && v24 == -2 )
            v9 = v23;
          v22 = (v20 - 1) & (v25 + v22);
          v23 = v8 + 24LL * v22;
          v24 = *(_QWORD *)v23;
          if ( v7 == *(_QWORD *)v23 )
            goto LABEL_26;
          if ( v24 == -1 )
          {
            if ( v9 )
              v23 = v9;
            break;
          }
          ++v25;
        }
      }
      v32.m128_u64[0] = v23;
      v26 = *(_DWORD *)(a2 + 32) + 1;
      if ( 4 * v26 < (unsigned int)(3 * v20) )
      {
        if ( (int)v20 - *(_DWORD *)(a2 + 36) - v26 > (unsigned int)v20 >> 3 )
        {
LABEL_30:
          v10 = *(_QWORD *)v23 == -1;
          *(_DWORD *)(a2 + 32) = v26;
          if ( !v10 )
            --*(_DWORD *)(a2 + 36);
          *(_QWORD *)v23 = v7;
          *(__m128i *)(v23 + 8) = _mm_loadu_si128(&v34);
          goto LABEL_26;
        }
        v27 = v20;
LABEL_44:
        sub_20201F0((__int64 **)(a2 + 24), v27, v20, v21, v8, v9);
        sub_21CF730((__int64 *)(a2 + 24), (__int64 *)&v33, &v32);
        v7 = (__int64)v33;
        v21 = a2 + 24;
        v8 = *(_QWORD *)(a2 + 24);
        v20 = *(unsigned int *)(a2 + 40);
        v26 = *(_DWORD *)(a2 + 32) + 1;
        v23 = v32.m128_u64[0];
        goto LABEL_30;
      }
    }
    else
    {
      v32.m128_u64[0] = 0;
    }
    v27 = 2 * v20;
    goto LABEL_44;
  }
  *a1 = v33;
  return a1;
}
