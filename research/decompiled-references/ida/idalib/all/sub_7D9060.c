unsigned __int64 __fastcall sub_7D9060(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rcx
  __int64 v10; // rbp
  const __m128i *v11; // rbx
  unsigned int i; // r15d
  const __m128i *v13; // r12
  __int64 v15; // [rsp+8h] [rbp-180h]
  __int64 v16; // [rsp+10h] [rbp-178h]
  _OWORD v17[17]; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 v18; // [rsp+148h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return v18 - __readfsqword(0x28u);
  v3 = qword_2CCB598;
  if ( !a2[1] )
    return v18 - __readfsqword(0x28u);
  v16 = a2[1];
  v4 = 0;
  while ( 2 )
  {
    v5 = *a2 + 2192 * v4;
    v6 = *(_DWORD *)v5;
    if ( !v2 )
    {
      if ( !under_debugger )
        interr(1777);
      BUG();
    }
    if ( !v6
      || (v7 = (unsigned int)(v6 - 1), v8 = -1, (unsigned int)v7 < *(_DWORD *)(v2 + 128))
      && (v2 = *(_QWORD *)(v2 + 136) + 16 * v7) != 0 )
    {
      v8 = -1;
      v9 = *(unsigned int *)(v5 + 4);
      if ( v9 < *(_QWORD *)(v2 + 8) - *(_QWORD *)v2 )
        v8 = v9 + *(_QWORD *)v2;
    }
    v10 = *(_QWORD *)(v5 + 8);
    v15 = v4;
    v11 = (const __m128i *)(v5 + 16);
    for ( i = 0; i != 8; ++i )
    {
      if ( !(unsigned __int8)is_defarg(v10, i) )
        goto LABEL_15;
      if ( (unsigned __int8)is_off(v10, i) )
      {
        if ( v11->m128i_i64[1] || (v11[1].m128i_i8[8] & 0x40) != 0 )
          goto LABEL_15;
        v13 = (const __m128i *)v17;
        v17[0] = _mm_loadu_si128(v11);
        v17[1] = _mm_loadu_si128(v11 + 1);
      }
      else
      {
        v13 = nullptr;
      }
      if ( (unsigned __int8)sub_3D5790(v3, v8, v10, i) )
      {
        if ( (unsigned __int8)is_off(v10, i)
          && (v13[1].m128i_i8[8] & 0x4F) == 2
          && (unsigned __int8)get_default_reftype(v8) == 9 )
        {
          v13[1].m128i_i32[2] = v13[1].m128i_i32[2] & 0xFFFFFFB0 | 9;
        }
        set_opinfo(v8, i, v10, v13, 0);
      }
LABEL_15:
      v11 += 17;
    }
    v4 = v15 + 1;
    if ( v16 != v15 + 1 )
    {
      v2 = *(_QWORD *)(a1 + 56);
      continue;
    }
    return v18 - __readfsqword(0x28u);
  }
}
