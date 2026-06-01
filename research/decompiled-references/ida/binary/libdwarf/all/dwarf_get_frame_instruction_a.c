__int64 __fastcall dwarf_get_frame_instruction_a(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        _BYTE *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        __m128i *a13,
        __int64 a14)
{
  __int64 v15; // r10
  unsigned int v17; // edx
  __int64 v18; // rax

  if ( a1 )
  {
    v15 = *a1;
    if ( *a1 )
    {
      v17 = -1;
      if ( a2 >= a1[3] )
        return v17;
      v18 = *(_QWORD *)(a1[2] + 8 * a2);
      if ( v18 )
      {
        *a3 = *(_QWORD *)(v18 + 8);
        *a4 = *(_BYTE *)v18;
        *a5 = *(_QWORD *)(v18 + 24);
        *a6 = *(_QWORD *)(v18 + 32);
        *a7 = *(_QWORD *)(v18 + 40);
        *a8 = *(_QWORD *)(v18 + 48);
        *a9 = *(_QWORD *)(v18 + 56);
        *a10 = *(_QWORD *)(v18 + 64);
        if ( a11 )
          *a11 = *(_QWORD *)(v18 + 72);
        if ( a12 )
          *a12 = *(_QWORD *)(v18 + 80);
        v17 = 0;
        *a13 = _mm_loadu_si128((const __m128i *)(v18 + 88));
        a13[1] = _mm_loadu_si128((const __m128i *)(v18 + 104));
        return v17;
      }
      _dwarf_error_string(
        v15,
        a14,
        485,
        "DW_DLE_CFA_INSTRUCTION_ERROR: instr array missing calling dwarf_get_frame_instruction");
    }
    else
    {
      _dwarf_error_string(
        0,
        a14,
        485,
        "DW_DLE_CFA_INSTRUCTION_ERROR: Head missing Dwarf_Debug field  calling dwarf_get_frame_instruction");
    }
  }
  else
  {
    _dwarf_error_string(
      0,
      a14,
      485,
      "DW_DLE_CFA_INSTRUCTION_ERROR: Head argument NULL  calling dwarf_get_frame_instruction");
  }
  return 1;
}

