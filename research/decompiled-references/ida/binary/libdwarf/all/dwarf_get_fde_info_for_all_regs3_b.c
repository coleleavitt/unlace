__int64 __fastcall dwarf_get_fde_info_for_all_regs3_b(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v9; // r13
  unsigned int v10; // r14d
  size_t v12; // rbp
  __m128i *v14; // rdi
  const __m128i *v15; // rax
  const __m128i *v16; // rsi
  __int8 v17; // cl
  __m128i *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int8 v22; // cl
  __m128i v23; // xmm0
  __int16 v24; // ax
  __m128i v25; // xmm0
  __int64 v26; // rax
  size_t ptr; // [rsp+60h] [rbp-B8h]
  __m128i *ptr_8; // [rsp+68h] [rbp-B0h]
  _QWORD v31[21]; // [rsp+70h] [rbp-A8h] BYREF

  v31[13] = __readfsqword(0x28u);
  memset(v31, 0, 0x60u);
  if ( !a1 )
  {
    _dwarf_error(0, a7, 92);
    return 1;
  }
  v9 = *(_QWORD **)(a1 + 80);
  if ( !v9 || *v9 != 3959286781LL )
  {
    _dwarf_error_string(0, a7, 93, "DW_DLE_FDE_DBG_NULL: An fde contains a stale Dwarf_Debug ");
    return 1;
  }
  v12 = *(unsigned __int16 *)(a3 + 56);
  ptr = v12;
  if ( v12 > v9[1040] )
    v12 = v9[1040];
  if ( (unsigned int)sub_25080((__int64)v9, v31, v12, a7) )
    return 1;
  ptr_8 = (__m128i *)calloc(*(unsigned __int16 *)(a3 + 56), 0x40u);
  if ( !ptr_8 )
  {
    free((void *)v31[10]);
    v31[9] = 0;
    v31[10] = 0;
    _dwarf_error_string(v9, a7, 62, "Failure allocating Dwarf_Regtable_Entry3_i in dwarf_get_fde_info_for_all_regs3()");
    return 1;
  }
  v14 = ptr_8;
  v10 = sub_28C40(a1, a2, (__int64)v31, v9[1041], a5, a6, a7);
  if ( !v10 )
  {
    v15 = (const __m128i *)v31[10];
    if ( v12 )
    {
      v16 = (const __m128i *)(v31[10] + (v12 << 6));
      do
      {
        v17 = v15->m128i_i8[0];
        v15 += 4;
        v14 += 4;
        v14[-4].m128i_i8[0] = v17;
        v14[-3].m128i_i64[1] = v15[-3].m128i_i64[1];
        v14[-4].m128i_i8[1] = v15[-4].m128i_i8[1];
        v14[-4].m128i_i64[1] = v15[-4].m128i_i64[1];
        v14[-3].m128i_i64[0] = v15[-3].m128i_i64[0];
        v14[-2] = _mm_loadu_si128(v15 - 2);
        v14[-1] = _mm_loadu_si128(v15 - 1);
      }
      while ( v16 != v15 );
      v14 = ptr_8;
      v18 = &ptr_8[4 * v12];
    }
    else
    {
      v18 = ptr_8;
    }
    v19 = v9[1043];
    if ( v12 < ptr )
    {
      do
      {
        ++v12;
        v18->m128i_i64[1] = v19;
        v18 += 4;
        v18[-4].m128i_i16[0] = 0;
        v18[-3].m128i_i64[0] = 0;
        v18[-3].m128i_i64[1] = 0;
        v18[-2].m128i_i64[1] = 0;
        v18[-2].m128i_i64[0] = 0;
      }
      while ( ptr != v12 );
      v14 = ptr_8;
    }
    v20 = *(_QWORD *)(a3 + 64);
    if ( *(_WORD *)(a3 + 56) )
    {
      v21 = 0;
      do
      {
        v22 = v14->m128i_i8[0];
        ++v21;
        v20 += 56;
        v14 += 4;
        *(_BYTE *)(v20 - 56) = v22;
        *(_QWORD *)(v20 - 40) = v14[-3].m128i_i64[1];
        *(_BYTE *)(v20 - 55) = v14[-4].m128i_i8[1];
        *(_WORD *)(v20 - 54) = v14[-4].m128i_i64[1];
        *(_QWORD *)(v20 - 48) = v14[-3].m128i_i64[0];
        *(__m128i *)(v20 - 32) = _mm_loadu_si128(v14 - 2);
        *(__m128i *)(v20 - 16) = _mm_loadu_si128(v14 - 1);
      }
      while ( v21 < *(unsigned __int16 *)(a3 + 56) );
      v14 = ptr_8;
    }
    v23 = _mm_loadu_si128((const __m128i *)&v31[5]);
    *(_WORD *)a3 = v31[1];
    v24 = v31[2];
    *(__m128i *)(a3 + 24) = v23;
    v25 = _mm_loadu_si128((const __m128i *)&v31[7]);
    *(_WORD *)(a3 + 2) = v24;
    v26 = v31[3];
    *(__m128i *)(a3 + 40) = v25;
    *(_QWORD *)(a3 + 8) = v26;
    *(_QWORD *)(a3 + 16) = v31[4];
    if ( a4 )
      *a4 = v31[0];
  }
  free(v14);
  free((void *)v31[10]);
  return v10;
}

