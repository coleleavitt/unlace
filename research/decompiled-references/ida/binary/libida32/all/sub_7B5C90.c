unsigned __int64 __fastcall sub_7B5C90(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rcx
  unsigned int v8; // r13d
  unsigned int v9; // ecx
  __int64 v10; // rbp
  const __m128i *v11; // rbx
  unsigned int i; // r15d
  __m128i *v13; // r12
  __int64 v15; // [rsp+8h] [rbp-F0h]
  __int64 v16; // [rsp+10h] [rbp-E8h]
  __m128i v17; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return v18 - __readfsqword(0x28u);
  v3 = qword_2CA1698;
  if ( !a2[1] )
    return v18 - __readfsqword(0x28u);
  v16 = a2[1];
  v4 = 0;
  while ( 2 )
  {
    v5 = *a2 + 1104 * v4;
    v6 = *(_DWORD *)v5;
    if ( !v2 )
    {
      if ( !under_debugger )
        interr(1777);
      BUG();
    }
    if ( !v6
      || (v7 = (unsigned int)(v6 - 1), v8 = -1, (unsigned int)v7 < *(_DWORD *)(v2 + 104))
      && (v2 = *(_QWORD *)(v2 + 112) + 8 * v7) != 0 )
    {
      v8 = -1;
      v9 = *(_DWORD *)(v5 + 4);
      if ( v9 < *(_DWORD *)(v2 + 4) - *(_DWORD *)v2 )
        v8 = v9 + *(_DWORD *)v2;
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
        if ( v11->m128i_i32[1] || (v11->m128i_i8[12] & 0x40) != 0 )
          goto LABEL_15;
        v13 = &v17;
        v17 = _mm_loadu_si128(v11);
      }
      else
      {
        v13 = nullptr;
      }
      if ( (unsigned __int8)sub_3CFC30(v3, v8, v10, i) )
      {
        if ( (unsigned __int8)is_off(v10, i)
          && (v13->m128i_i8[12] & 0x4F) == 2
          && (unsigned __int8)get_default_reftype(v8) == 9 )
        {
          v13->m128i_i32[3] = v13->m128i_i32[3] & 0xFFFFFFB0 | 9;
        }
        set_opinfo(v8, i, v10, v13, 0);
      }
LABEL_15:
      v11 = (const __m128i *)((char *)v11 + 136);
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

