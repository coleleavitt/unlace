__int64 __fastcall sub_33100(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned __int16 v8; // r15
  __int64 result; // rax
  __int64 v10; // rax
  _QWORD **v11; // rsi
  const char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rax
  __int64 v19; // [rsp+18h] [rbp-80h] BYREF
  __int64 v20; // [rsp+20h] [rbp-78h] BYREF
  __int64 v21; // [rsp+28h] [rbp-70h] BYREF
  _BYTE v22[40]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v23; // [rsp+58h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 288);
  v23 = __readfsqword(0x28u);
  v19 = 0;
  v20 = 0;
  v21 = 0;
  if ( a2 < 0 )
  {
    dwarfstring_constructor(v22);
    v12 = "DW_DLE_LINE_COUNT_WRONG Call to %s finds an Impossible file number ";
LABEL_16:
    dwarfstring_append_printf_s();
    v13 = dwarfstring_string(v22, v12);
    v14 = 500;
    v15 = v13;
LABEL_17:
    _dwarf_error_string(v5, a5, v14, v15);
    dwarfstring_destructor(v22);
    return 1;
  }
  v8 = *(_WORD *)(a1 + 24);
  result = dwarf_srclines_files_indexes(a1, &v19, &v20, &v21, a5);
  if ( (_DWORD)result )
    return result;
  if ( *(__int64 *)(a1 + 240) < 0 )
  {
    dwarfstring_constructor(v22);
    v12 = "DW_DLE_LINE_INDEX_WRONG Call to %s finds an Impossible base index ";
    goto LABEL_16;
  }
  if ( *(__int64 *)(a1 + 232) < 0 )
  {
    dwarfstring_constructor(v22);
    v12 = "DW_DLE_LINE_COUNT_WRONG Call to %s finds an Impossible file entry count ";
    goto LABEL_16;
  }
  if ( *(__int64 *)(a1 + 248) < 0 )
  {
    dwarfstring_constructor(v22);
    v12 = "DW_DLE_LINE_INDEX_WRONG Call to %s finds an Impossible end index ";
    goto LABEL_16;
  }
  if ( v21 <= a2 )
  {
    dwarfstring_constructor_fixed(v22, 200);
    dwarfstring_append_printf_i(v22, "DW_DLE_NO_FILE_NAME: the file number is %d ", a2);
    dwarfstring_append_printf_u(v22, "( this is a DWARF 0x%x linetable)", v8);
    dwarfstring_append_printf_i(v22, " yet the highest allowed file name index is %d.", v21 - 1);
    v17 = dwarfstring_string(v22, " yet the highest allowed file name index is %d.", v16);
    v14 = 140;
    v15 = v17;
    goto LABEL_17;
  }
  if ( (v8 == 0xF006 || v8 <= 4u) && !a2 )
    return 0xFFFFFFFFLL;
  v10 = v19;
  v11 = *(_QWORD ***)(a1 + 216);
  if ( a2 > v19 )
  {
    if ( (((_BYTE)a2 - (_BYTE)v19) & 1) == 0 || (v10 = v19 + 1, v11 = (_QWORD **)*v11, a2 != v19 + 1) )
    {
      do
      {
        v10 += 2;
        v11 = (_QWORD **)**v11;
      }
      while ( a2 != v10 );
    }
  }
  return sub_325F0(v5, (__int64)v11, a1, a3, a5);
}

