const __m128i *__fastcall sub_20B8140(const __m128i *a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  __int32 v10; // eax
  int v11; // ebp
  int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  __int64 *v15; // rsi
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  _QWORD *v18; // rcx
  __int8 *v19; // rcx
  const __m128i **v20; // rbp
  const __m128i *result; // rax
  __int64 v22; // r9
  _QWORD *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rdx
  const __m128i *v30[2]; // [rsp+8h] [rbp-80h] BYREF
  __int32 v31; // [rsp+1Ch] [rbp-6Ch] BYREF
  __m128 v32; // [rsp+20h] [rbp-68h] BYREF
  __m128 v33; // [rsp+30h] [rbp-58h] BYREF
  __m128i v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+50h] [rbp-38h]
  __int64 v36[6]; // [rsp+58h] [rbp-30h] BYREF

  v4 = a1[-1].m128i_u8[0];
  v30[0] = a1;
  if ( (v4 & 2) != 0 )
  {
    v5 = *(_QWORD *)a1[-2].m128i_i64[0];
    v33.m128_u64[0] = v5;
    v6 = a1[-2].m128i_i64[0];
  }
  else
  {
    v19 = &a1->m128i_i8[-8 * ((v4 >> 2) & 0xF)];
    v5 = *((_QWORD *)v19 - 2);
    v6 = (__int64)(v19 - 16);
    v33.m128_u64[0] = v5;
  }
  v7 = *(unsigned int *)(a2 + 16);
  v8 = *(_QWORD *)a2;
  v33.m128_u64[1] = *(_QWORD *)(v6 + 8);
  v34 = _mm_loadu_si128(a1 + 1);
  v35 = a1[2].m128i_i64[0];
  v36[0] = a1[2].m128i_i64[1];
  if ( (_DWORD)v7 )
  {
    if ( (_BYTE)v35 )
    {
      v9 = v34.m128i_u64[1];
      v10 = v34.m128i_i32[0];
    }
    else
    {
      v9 = 0;
      v10 = 0;
    }
    v32.m128_u64[0] = v9;
    v11 = v7 - 1;
    v31 = v10;
    v12 = sub_20A7870(v5, &v33.m128_i64[1], &v31, (__int64 *)&v32, v36);
    v13 = 1;
    v14 = v11 & v12;
    v15 = (__int64 *)(v8 + 8LL * v14);
    v16 = *v15;
    if ( *v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v16 == -8192 )
          goto LABEL_10;
        v17 = *(_BYTE *)(v16 - 16);
        if ( (v17 & 2) != 0 )
        {
          v18 = *(_QWORD **)(v16 - 32);
          if ( v33.m128_u64[0] != *v18 )
            goto LABEL_10;
        }
        else
        {
          v18 = (_QWORD *)(v16 + -16 - 8LL * ((v17 >> 2) & 0xF));
          if ( v33.m128_u64[0] != *v18 )
            goto LABEL_10;
        }
        if ( v33.m128_u64[1] == v18[1]
          && (_BYTE)v35 == *(_BYTE *)(v16 + 32)
          && (!(_BYTE)v35 || *(_DWORD *)(v16 + 16) == v34.m128i_i32[0] && v34.m128i_i64[1] == *(_QWORD *)(v16 + 24))
          && v36[0] == *(_QWORD *)(v16 + 40) )
        {
          sub_2081FC0(&v32, v15, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
          v20 = (const __m128i **)v32.m128_u64[0];
          goto LABEL_16;
        }
LABEL_10:
        v14 = v11 & (v13 + v14);
        v15 = (__int64 *)(v8 + 8LL * v14);
        v16 = *v15;
        if ( *v15 == -4096 )
          break;
        ++v13;
      }
    }
    v8 = *(_QWORD *)a2;
    v7 = *(unsigned int *)(a2 + 16);
  }
  sub_2081FC0(&v32, (_QWORD *)(v8 + 8 * v7), (_QWORD *)(v8 + 8 * v7), a2, 1);
  v20 = (const __m128i **)v32.m128_u64[0];
LABEL_16:
  sub_2081FC0(
    &v32,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (const __m128i **)v32.m128_u64[0] == v20 || (result = *v20) == nullptr )
  {
    if ( (unsigned __int8)sub_207FA20((__int64 *)a2, v30, (const __m128i ***)&v32) )
    {
      sub_2081FC0(&v33, v32.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v30[0];
    }
    v23 = (_QWORD *)v32.m128_u64[0];
    v24 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v25 = *(unsigned int *)(a2 + 16);
    v33.m128_u64[0] = v32.m128_u64[0];
    v26 = (unsigned int)(4 * v24);
    if ( (unsigned int)v26 >= 3 * (int)v25 )
    {
      sub_20860C0(a2, 2 * v25, v24, (unsigned int)(2 * v25), v26, v22);
    }
    else
    {
      v27 = (unsigned int)(v25 - *(_DWORD *)(a2 + 12) - v24);
      if ( (unsigned int)v27 > (unsigned int)v25 >> 3 )
      {
LABEL_21:
        v28 = *v23 == -4096;
        *(_DWORD *)(a2 + 8) = v24;
        if ( !v28 )
          --*(_DWORD *)(a2 + 12);
        *v23 = v30[0];
        v29 = *(_QWORD *)a2;
        v32.m128_u64[0] = (unsigned __int64)v23;
        sub_2081FC0(&v33, v23, (_QWORD *)(v29 + 8 * v25), a2, 1);
        return v30[0];
      }
      sub_20860C0(a2, v25, v24, v27, v26, v22);
    }
    sub_207FA20((__int64 *)a2, v30, (const __m128i ***)&v33);
    v25 = *(unsigned int *)(a2 + 16);
    v23 = (_QWORD *)v33.m128_u64[0];
    LODWORD(v24) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_21;
  }
  return result;
}
