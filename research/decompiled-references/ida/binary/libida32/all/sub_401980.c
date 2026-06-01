__int64 __fastcall sub_401980(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // cl
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  int *v11; // r15
  int *v12; // r13
  int *v13; // rax
  __int64 v14; // rdx
  void (__fastcall *v15)(__m128i **, const __m128i **, int); // rax
  __int64 v16; // r14
  __int64 v17; // rbp
  int v18; // [rsp+1Ch] [rbp-7Ch] BYREF
  __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __m128i v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  LODWORD(v1) = 0;
  v2 = *(_BYTE *)(a1 + 52);
  v23 = __readfsqword(0x28u);
  if ( (v2 & 0x10) == 0 )
    return (unsigned int)v1;
  v4 = v2 & 7;
  if ( v4 )
    v5 = 1 << (v4 - 1);
  else
    v5 = (unsigned __int8)getinf(61);
  v6 = 8 * v5;
  v7 = -1;
  if ( v6 <= 63 )
    v7 = (1LL << v6) - 1;
  v19 = 0;
  v22 = 0u;
  v21 = 0;
  v8 = (_QWORD *)operator new(0x18u);
  *v8 = a1;
  v9 = _mm_loadl_epi64((const __m128i *)off_2AFDAE0);
  v8[1] = &v19;
  v8[2] = v7;
  *(_QWORD *)&v21 = v8;
  v10 = *(_QWORD *)(a1 + 32);
  v22 = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)sub_3FEEC0);
  if ( !v10 )
    goto LABEL_13;
  v11 = *(int **)(a1 + 24);
  v12 = &v11[v10];
  if ( v11 == v12 )
    goto LABEL_13;
  v13 = *(int **)(a1 + 24);
  v14 = 0;
  do
  {
    v1 = *v13;
    if ( !(_DWORD)v1 )
    {
      sub_3FF1D0((__m128i **)&v21, (const __m128i **)&v21, 3);
      return (unsigned int)v1;
    }
    ++v13;
    v14 += v1;
  }
  while ( v12 != v13 );
  if ( v14 != *(_QWORD *)(a1 + 8) )
  {
LABEL_13:
    v15 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_3FF1D0;
    LODWORD(v1) = 0;
LABEL_14:
    v15((__m128i **)&v21, (const __m128i **)&v21, 3);
    return (unsigned int)v1;
  }
  v15 = (void (__fastcall *)(__m128i **, const __m128i **, int))sub_3FF1D0;
  v16 = 0;
  do
  {
    v17 = *v11;
    v20 = v16;
    v18 = v17;
    if ( !v15 )
      std::__throw_bad_function_call();
    LODWORD(v1) = ((__int64 (__fastcall *)(__int128 *, __int64 *, int *))v22.m128i_i64[1])(&v21, &v20, &v18);
    v15 = (void (__fastcall *)(__m128i **, const __m128i **, int))v22.m128i_i64[0];
    if ( (_DWORD)v1 )
      break;
    ++v11;
    v16 += v17;
  }
  while ( v12 != v11 );
  if ( v22.m128i_i64[0] )
    goto LABEL_14;
  return (unsigned int)v1;
}

