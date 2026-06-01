__int64 __fastcall dwarf_length_of_cu_header(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // ebx
  int v14; // r9d
  __int64 v15; // rax
  unsigned __int64 v17; // rbx
  __int64 v20; // [rsp+18h] [rbp-60h]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v22[9]; // [rsp+30h] [rbp-48h] BYREF

  v22[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    v6 = *(_QWORD *)(a1 + 360);
    v7 = *(_QWORD *)(a1 + 368);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 592);
    v7 = *(_QWORD *)(a1 + 600);
  }
  v8 = v6 + a2;
  v22[0] = 0;
  v9 = v7 + v6;
  v10 = v8 + 4;
  if ( v9 < v8 + 4 )
    goto LABEL_20;
  (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v22, v8, 4);
  v11 = v22[0];
  if ( v22[0] == 0xFFFFFFFFLL )
  {
    v22[0] = 0;
    v17 = v8 + 12;
    if ( v9 < v17 )
      goto LABEL_20;
    (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v22, v10, 8);
    v11 = v22[0];
    if ( v7 < v22[0] )
      goto LABEL_18;
    v10 = v17;
    v11 = v22[0] + 12LL;
    v13 = 4;
    v12 = 8;
    v14 = 8;
LABEL_8:
    if ( v7 >= v11 )
      goto LABEL_9;
LABEL_18:
    _dwarf_create_area_len_error(a1, a5, v11, v7);
    return 1;
  }
  if ( !v22[0] )
  {
    if ( *(_BYTE *)(a1 + 8360) && *(_BYTE *)(a1 + 232) == 8 )
    {
      v10 = v8 + 8;
      if ( v9 < v8 + 8 )
        goto LABEL_20;
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(a1 + 8296))(v22, v8, 8);
      v11 = v22[0];
      if ( v7 < v22[0] )
        goto LABEL_18;
      v11 = v22[0] + 8LL;
      v12 = 8;
      v13 = 0;
      v14 = 8;
    }
    else
    {
      v11 = 4;
      v12 = 4;
      v13 = 0;
      v14 = 4;
    }
    goto LABEL_8;
  }
  if ( v7 < v22[0] )
    goto LABEL_18;
  v11 = v22[0] + 4LL;
  v12 = 4;
  v13 = 0;
  v14 = 4;
  if ( v7 < v22[0] + 4LL )
    goto LABEL_18;
LABEL_9:
  LOWORD(v22[0]) = 0;
  if ( v9 < v10 + 2 )
  {
LABEL_20:
    _dwarf_error_string(a1, a5, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
    return 1;
  }
  v21 = v14;
  v20 = v12;
  (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v22, v10, 2);
  if ( LOWORD(v22[0]) == 5 )
  {
    LOBYTE(v22[0]) = 0;
    if ( v9 >= v10 + 3 )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64))(a1 + 8296))(v22, v10 + 2, 1);
      switch ( LOBYTE(v22[0]) )
      {
        case 1:
        case 3:
          v15 = v20 + v21 + v13 + 2 + 2;
          goto LABEL_14;
        case 2:
        case 6:
          v15 = v21 + v13 + 2 + 2 * v20 + 10;
          goto LABEL_14;
        case 4:
        case 5:
          v15 = v20 + v21 + v13 + 2 + 10;
          goto LABEL_14;
        default:
          _dwarf_error(a1, a5, 386);
          return 1;
      }
    }
    goto LABEL_20;
  }
  if ( LOWORD(v22[0]) == 4 )
  {
    v15 = v13 + 2 * v21 + 3;
    if ( !a3 )
      v15 += v20 + 8;
  }
  else
  {
    v15 = 0;
    if ( LOWORD(v22[0]) <= 3u )
      v15 = v13 + 2 * v21 + 3;
  }
LABEL_14:
  *a4 = v15;
  return 0;
}

