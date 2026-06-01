__int64 __fastcall dwarf_get_fde_info_for_reg3_c(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        __m128i *a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _QWORD *v12; // rbp
  __int64 v17; // r12
  unsigned int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int v22; // [rsp+8h] [rbp-50h]
  size_t v23; // [rsp+10h] [rbp-48h]

  if ( !a1 )
  {
    _dwarf_error(0, a12, 92);
    return 1;
  }
  v12 = *(_QWORD **)(a1 + 80);
  if ( !v12 || *v12 != 3959286781LL )
  {
    _dwarf_error_string(0, a12, 93, "DW_DLE_FDE_DBG_NULL: An fde contains a stale Dwarf_Debug ");
    return 1;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( *(_QWORD *)(a1 + 288) == a3 )
    {
      v17 = a2;
      goto LABEL_12;
    }
    free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 296) = 0;
  }
  v23 = v12[1040];
  if ( (unsigned int)sub_25080((__int64)v12, (_QWORD *)(a1 + 192), v23, a12) )
    return 1;
  v17 = a2;
  if ( a2 >= v23 )
  {
    free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    _dwarf_error(v12, a12, 96);
    return 1;
  }
  v18 = sub_28C40(a1, a3, a1 + 192, v12[1041], a10, a11, a12);
  if ( v18 )
  {
    v22 = v18;
    free(*(void **)(a1 + 272));
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = 0;
    *(_DWORD *)(a1 + 296) = 0;
    return v22;
  }
LABEL_12:
  v19 = v17 << 6;
  if ( a6 )
    *a6 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + v19 + 8);
  if ( a7 )
    *a7 = *(_QWORD *)(*(_QWORD *)(a1 + 272) + v19 + 16);
  if ( a9 )
    *a9 = *(_QWORD *)(a1 + 192);
  if ( a8 )
  {
    v20 = *(_QWORD *)(a1 + 272);
    *a8 = _mm_loadu_si128((const __m128i *)(v20 + v19 + 32));
    a8[1] = _mm_loadu_si128((const __m128i *)(v20 + v19 + 48));
  }
  *a4 = *(_BYTE *)(*(_QWORD *)(a1 + 272) + v19 + 1);
  *a5 = *(char *)(*(_QWORD *)(a1 + 272) + v19);
  *(_DWORD *)(a1 + 296) = 1;
  *(_QWORD *)(a1 + 288) = a3;
  return 0;
}

