__int64 __fastcall dwarf_hasattr(__int64 *a1, __int16 a2, _DWORD *a3, __int64 a4)
{
  _QWORD **v5; // rdx
  _QWORD *v6; // rdx
  int v8; // eax
  __int16 v9; // [rsp+6h] [rbp-22h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v11[1] = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  if ( !a1 )
  {
    _dwarf_error(0, a4, 52);
    return 1;
  }
  v5 = (_QWORD **)a1[2];
  if ( !v5 )
  {
    _dwarf_error(0, a4, 104);
    return 1;
  }
  v6 = *v5;
  if ( !v6 || *v6 != 3959286781LL )
  {
    _dwarf_error_string(
      0,
      a4,
      81,
      "DW_DLE_DBG_NULL: accesing a cu context, Dwarf_Debug either null or it containsa stale Dwarf_Debug pointer");
    return 1;
  }
  v8 = sub_51B30(a1, a2, &v9, &v10, v11, a4);
  if ( v8 == 1 )
    return 1;
  *a3 = v8 != -1;
  return 0;
}

