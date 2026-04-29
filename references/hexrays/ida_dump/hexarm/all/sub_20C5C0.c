__int64 __fastcall sub_20C5C0(__int64 a1, __m128i *a2, __int64 a3, __m128i a4, __m128 a5, __m128 a6)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // r13
  _QWORD v17[2]; // [rsp+0h] [rbp-68h] BYREF
  __m128i v18; // [rsp+10h] [rbp-58h] BYREF
  __int64 v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v21; // [rsp+38h] [rbp-30h]

  v7 = *(_DWORD *)(a3 + 8);
  v21 = __readfsqword(0x28u);
  v8 = a3;
  if ( v7 == 65 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32);
    do
      v8 = sub_2577B0(a1, v8);
    while ( *(int *)(v8 + 8) <= 69 );
  }
  else
  {
    if ( v7 <= 69 )
      return 0;
    v9 = 0;
  }
  v10 = (__int64 *)sub_2576B0(a1, v8);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *v10;
  if ( *(_QWORD *)(v11 + 40) == v12 )
    return 0;
  while ( 1 )
  {
    if ( v12 != -1 && v12 != *(_QWORD *)(v11 + 40) )
    {
      v17[0] = &off_4D96B0;
      v17[1] = 0;
      v18 = 0u;
      v19 = 0;
      v20 = v12;
      if ( (unsigned int)sub_11F660(v11, (__int64)v17) )
        break;
    }
    if ( *(_DWORD *)(v8 + 8) != 73 )
      return 0;
    v8 = *(_QWORD *)(v8 + 24);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)v8;
  }
  if ( a2 )
  {
    a4 = _mm_load_si128(&v18);
    *a2 = a4;
  }
  v13 = *(_QWORD *)(a1 + 8);
  if ( v9 )
    return sub_20C080(v13, v9, a2, *(double *)a4.m128i_i64, a5, a6);
  v15 = *(_QWORD *)(v13 + 432);
  v16 = v15 + 104LL * *(_QWORD *)(v13 + 440);
  if ( v16 == v15 )
    return 0;
  while ( 1 )
  {
    result = sub_20C080(v13, v15, a2, *(double *)a4.m128i_i64, a5, a6);
    if ( (_BYTE)result )
      break;
    v15 += 104;
    if ( v16 == v15 )
      return 0;
    v13 = *(_QWORD *)(a1 + 8);
  }
  return result;
}
