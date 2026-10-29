__int64 __fastcall sub_710540(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  _QWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r13
  int v15; // r15d
  __int64 result; // rax
  __int64 v17; // r12
  __int64 v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int8 v22; // al
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rdi
  __m128i v28; // [rsp+0h] [rbp-68h] BYREF
  __m128i v29; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30; // [rsp+20h] [rbp-48h] BYREF

  v3 = _mm_loadl_epi64((const __m128i *)(a1 + 8));
  v28.m128i_i64[0] = a3;
  v30 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, v3);
  if ( a3 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    ++*(_DWORD *)(a3 + 8);
    if ( !v4 || (v5 = *(unsigned int *)(v4 - 4), !(_DWORD)v5) )
    {
      v11 = v28.m128i_i64[0];
      v12 = (*(_DWORD *)(v28.m128i_i64[0] + 8))-- == 1;
      if ( v12 )
LABEL_44:
        sub_15D7BC0(v3.m128i_i64[0], v11);
      goto LABEL_17;
    }
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( !v4 || (v5 = *(unsigned int *)(v4 - 4), !(_DWORD)v5) )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 40LL))(*(_QWORD *)(a1 + 24));
      v14 = *(_QWORD *)(a1 + 8);
      v15 = v26;
      v29 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v28), (__m128i)(unsigned __int64)v14);
LABEL_40:
      if ( !v15 )
        return 0;
      goto LABEL_19;
    }
  }
  v6 = 8 * v5;
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v4 + v7);
    if ( !*(_WORD *)(v8 + 4) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, __m128i *))(**(_QWORD **)(a1 + 24) + 64LL))(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(v4 + v7),
             &v29) )
      {
        sub_14EC390(a1 + 32, v8, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL), &v30);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
          *(_QWORD *)(a1 + 24),
          v29.m128i_u32[0],
          v30.m128i_i64[0],
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 856LL));
        goto LABEL_33;
      }
      if ( !*(_WORD *)(v8 + 4) )
      {
        v9 = *(_QWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( v9 )
        {
          if ( *v9 == 0x800000000LL && *(_DWORD *)(v8 + 24) == 1 )
          {
            v10 = *(_QWORD *)(v8 + 32);
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __m128i *))(**(_QWORD **)(a1 + 24) + 64LL))(
                   *(_QWORD *)(a1 + 24),
                   v10,
                   &v29) )
            {
              sub_14EC390(a1 + 32, v10, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL), &v30);
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
                *(_QWORD *)(a1 + 24),
                v29.m128i_u32[0],
                v30.m128i_i64[0],
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL));
LABEL_33:
              v24 = v30.m128i_i64[0];
              if ( v30.m128i_i64[0] )
              {
                v25 = v30.m128i_i64[1];
                v12 = (*(_DWORD *)(v30.m128i_i64[0] + 8))-- == 1;
                if ( v12 )
                  sub_15D7BC0(v25, v24);
              }
              return 1;
            }
          }
        }
      }
    }
    v7 += 8;
    if ( v6 == v7 )
      break;
    v4 = *(_QWORD *)(a2 + 16);
  }
  v11 = v30.m128i_i64[0];
  if ( v30.m128i_i64[0] )
  {
    v3.m128i_i64[0] = v30.m128i_i64[1];
    v12 = (*(_DWORD *)(v30.m128i_i64[0] + 8))-- == 1;
    if ( v12 )
      goto LABEL_44;
  }
LABEL_17:
  v13 = (*(__int64 (__fastcall **)(_QWORD, double))(**(_QWORD **)(a1 + 24) + 40LL))(
          *(_QWORD *)(a1 + 24),
          *(double *)v3.m128i_i64);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = v13;
  v29 = _mm_unpacklo_epi64((__m128i)v28.m128i_u64[0], (__m128i)(unsigned __int64)v14);
  if ( !v28.m128i_i64[0] )
    goto LABEL_40;
  ++*(_DWORD *)(v28.m128i_i64[0] + 8);
  result = 0;
  if ( !v15 )
  {
LABEL_29:
    v23 = v28.m128i_i64[0];
    v28.m128i_i32[3] = *(_DWORD *)(v28.m128i_i64[0] + 8);
    v12 = v28.m128i_i32[3] == 1;
    *(_DWORD *)(v28.m128i_i64[0] + 8) = v28.m128i_i32[3] - 1;
    if ( v12 )
    {
      v28.m128i_i8[12] = result;
      sub_15D7BC0(v14, v23);
      return v28.m128i_u8[12];
    }
    return result;
  }
LABEL_19:
  v17 = v14;
  v18 = 0;
  v19 = 0;
  v28.m128i_i64[0] = (__int64)&v30;
  while ( 1 )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 48LL))(*(_QWORD *)(a1 + 24), v19);
    if ( (unsigned __int8)sub_15D2CB0(v17, v20) )
    {
      v21 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(
                        *(_QWORD *)(a1 + 24),
                        v19);
      v30.m128i_i64[0] = v18;
      v30.m128i_i64[1] = v14;
      v22 = sub_710040(a1, v21, &v29, (__int64 *)v28.m128i_i64[0]);
      v14 = v30.m128i_i64[1];
      v18 = v30.m128i_i64[0];
      if ( v22 )
        break;
    }
    if ( ++v19 == v15 )
    {
      result = 0;
      goto LABEL_25;
    }
    v17 = *(_QWORD *)(a1 + 8);
  }
  v27 = *(_QWORD *)(a1 + 24);
  v28.m128i_i8[0] = v22;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v27 + 80LL))(
    v27,
    v19,
    v29.m128i_i64[0],
    v30.m128i_i64[0]);
  result = v28.m128i_u8[0];
LABEL_25:
  if ( v18 && (v12 = *(_DWORD *)(v18 + 8) == 1, --*(_DWORD *)(v18 + 8), v12) )
  {
    v28.m128i_i8[12] = result;
    sub_15D7BC0(v14, v18);
    v14 = v29.m128i_i64[1];
    v28.m128i_i64[0] = v29.m128i_i64[0];
    result = v28.m128i_u8[12];
  }
  else
  {
    v14 = v29.m128i_i64[1];
    v28.m128i_i64[0] = v29.m128i_i64[0];
  }
  if ( v28.m128i_i64[0] )
    goto LABEL_29;
  return result;
}

