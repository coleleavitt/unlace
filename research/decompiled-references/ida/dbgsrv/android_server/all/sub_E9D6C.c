/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E9D6C
// Address: 0x00000000000E9D6C

//----- (00000000000E9D6C) ----------------------------------------------------
_DWORD *__fastcall sub_E9D6C(_DWORD *result, __int64 a2)
{
  __int64 v3; // x8
  _QWORD *v4; // x20
  unsigned __int64 v5; // x10
  __int64 v6; // x8
  unsigned __int64 v7; // x10
  __int64 v8; // x8
  unsigned __int64 v9; // x10
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x10
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x0
  size_t v16; // x1
  __int64 v17; // x8
  _DWORD *v18; // x0
  size_t v19; // x1
  char *v20; // x8
  _DWORD *v21; // x0
  size_t v22; // x1
  char *v23; // x8
  _DWORD *v24; // x0
  size_t v25; // x1
  const char *v26; // x9
  _DWORD *v27; // x0
  size_t v28; // x1
  __int64 v29; // x9
  char *v30; // x8
  _DWORD *v31; // x0
  size_t v32; // x1

  switch ( result[3] )
  {
    case 0:
      v4 = (_QWORD *)(a2 + 8);
      v3 = *(_QWORD *)(a2 + 8);
      v5 = *(_QWORD *)(a2 + 16);
      if ( v3 + 14 >= v5 )
      {
        v15 = *(_DWORD **)a2;
        if ( 2 * v5 >= v3 + 14 )
          v16 = 2 * v5;
        else
          v16 = v3 + 14;
        *(_QWORD *)(a2 + 16) = v16;
        result = realloc(v15, v16);
        v3 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      qmemcpy((char *)result + v3, "std::allocator", 14);
      v17 = 14;
      goto LABEL_45;
    case 1:
      v4 = (_QWORD *)(a2 + 8);
      v6 = *(_QWORD *)(a2 + 8);
      v7 = *(_QWORD *)(a2 + 16);
      if ( v6 + 17 >= v7 )
      {
        v18 = *(_DWORD **)a2;
        if ( 2 * v7 >= v6 + 17 )
          v19 = 2 * v7;
        else
          v19 = v6 + 17;
        *(_QWORD *)(a2 + 16) = v19;
        result = realloc(v18, v19);
        v6 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v20 = (char *)result + v6;
      v20[16] = 103;
      *(_OWORD *)v20 = *(_OWORD *)"std::basic_string";
      v17 = 17;
      goto LABEL_45;
    case 2:
      v4 = (_QWORD *)(a2 + 8);
      v8 = *(_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)(a2 + 16);
      if ( v8 + 11 >= v9 )
      {
        v21 = *(_DWORD **)a2;
        if ( 2 * v9 >= v8 + 11 )
          v22 = 2 * v9;
        else
          v22 = v8 + 11;
        *(_QWORD *)(a2 + 16) = v22;
        result = realloc(v21, v22);
        v8 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v23 = (char *)result + v8;
      v23[10] = 103;
      *((_WORD *)v23 + 4) = 28265;
      *(_QWORD *)v23 = *(_QWORD *)"std::string";
      v17 = 11;
      goto LABEL_45;
    case 3:
      v4 = (_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a2 + 16);
      if ( v10 + 12 >= v11 )
      {
        v24 = *(_DWORD **)a2;
        if ( 2 * v11 >= v10 + 12 )
          v25 = 2 * v11;
        else
          v25 = v10 + 12;
        *(_QWORD *)(a2 + 16) = v25;
        result = realloc(v24, v25);
        v10 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v26 = "std::istream";
      goto LABEL_39;
    case 4:
      v4 = (_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      if ( v10 + 12 >= v12 )
      {
        v27 = *(_DWORD **)a2;
        if ( 2 * v12 >= v10 + 12 )
          v28 = 2 * v12;
        else
          v28 = v10 + 12;
        *(_QWORD *)(a2 + 16) = v28;
        result = realloc(v27, v28);
        v10 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v26 = "std::ostream";
LABEL_39:
      v29 = *(_QWORD *)v26;
      v30 = (char *)result + v10;
      *((_DWORD *)v30 + 2) = 1835099506;
      *(_QWORD *)v30 = v29;
      v17 = 12;
      goto LABEL_45;
    case 5:
      v4 = (_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 + 13 >= v14 )
      {
        v31 = *(_DWORD **)a2;
        if ( 2 * v14 >= v13 + 13 )
          v32 = 2 * v14;
        else
          v32 = v13 + 13;
        *(_QWORD *)(a2 + 16) = v32;
        result = realloc(v31, v32);
        v13 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      qmemcpy((char *)result + v13, "std::iostream", 13);
      v17 = 13;
LABEL_45:
      *v4 += v17;
      break;
    default:
      return result;
  }
  return result;
}
