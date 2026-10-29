__int64 __fastcall dwarf_get_fde_info_for_cfa_reg3_c(
        __int64 a1,
        unsigned __int64 a2,
        _BYTE *a3,
        _QWORD *a4,
        _QWORD *a5,
        _QWORD *a6,
        __m128i *a7,
        _QWORD *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  _QWORD *v14; // rdi
  unsigned int v18; // eax
  void *v19; // rdi
  unsigned int v20; // [rsp+8h] [rbp-E0h]
  __int64 v21; // [rsp+40h] [rbp-A8h] BYREF
  char v22; // [rsp+48h] [rbp-A0h]
  char v23; // [rsp+49h] [rbp-9Fh]
  __int64 v24; // [rsp+50h] [rbp-98h]
  __int64 v25; // [rsp+58h] [rbp-90h]
  __m128i v26; // [rsp+68h] [rbp-80h] BYREF
  __m128i v27; // [rsp+78h] [rbp-70h] BYREF
  void *ptr; // [rsp+90h] [rbp-58h]
  unsigned __int64 v29; // [rsp+A8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !a1 )
  {
    _dwarf_error(0, a11, 92);
    return 1;
  }
  v14 = *(_QWORD **)(a1 + 80);
  if ( !v14 || *v14 != 3959286781LL )
  {
    _dwarf_error_string(0, a11, 93, "DW_DLE_FDE_DBG_NULL: An fde contains a stale Dwarf_Debug ");
    return 1;
  }
  if ( (unsigned int)sub_25080((__int64)v14, &v21, v14[1040], a11) )
    return 1;
  v18 = sub_28C40(a1, a2, (__int64)&v21, v14[1041], a9, a10, a11);
  v19 = ptr;
  if ( v18 )
  {
    v20 = v18;
    free(ptr);
    return v20;
  }
  else
  {
    if ( a5 )
      *a5 = v24;
    if ( a6 )
      *a6 = v25;
    if ( a8 )
      *a8 = v21;
    if ( a7 )
    {
      *a7 = _mm_loadu_si128(&v26);
      a7[1] = _mm_loadu_si128(&v27);
    }
    *a3 = v23;
    *a4 = v22;
    free(v19);
    return 0;
  }
}

