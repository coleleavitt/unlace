/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E92B8
// Address: 0x00000000000E92B8

//----- (00000000000E92B8) ----------------------------------------------------
_DWORD *__fastcall sub_E92B8(_DWORD *result, __int64 a2)
{
  __int64 v3; // x8
  _QWORD *v4; // x20
  unsigned __int64 v5; // x10
  _DWORD *v6; // x0
  size_t v7; // x1
  __int64 v8; // x8
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x0
  size_t v16; // x1
  char *v17; // x8
  const char *v18; // x9
  _DWORD *v19; // x0
  size_t v20; // x1
  _DWORD *v21; // x0
  size_t v22; // x1
  __int128 v23; // q0
  __int128 v24; // q1
  __int128 v25; // q2

  switch ( result[3] )
  {
    case 0:
    case 1:
    case 2:
      v4 = (_QWORD *)(a2 + 8);
      v3 = *(_QWORD *)(a2 + 8);
      v5 = *(_QWORD *)(a2 + 16);
      if ( v3 + 70 >= v5 )
      {
        v6 = *(_DWORD **)a2;
        if ( 2 * v5 >= v3 + 70 )
          v7 = 2 * v5;
        else
          v7 = v3 + 70;
        *(_QWORD *)(a2 + 16) = v7;
        result = realloc(v6, v7);
        v3 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      qmemcpy((char *)result + v3, "std::basic_string<char, std::char_traits<char>, std::allocator<char> >", 70);
      v8 = 70;
      goto LABEL_31;
    case 3:
      v4 = (_QWORD *)(a2 + 8);
      v9 = *(_QWORD *)(a2 + 8);
      v10 = *(_QWORD *)(a2 + 16);
      if ( v9 + 49 >= v10 )
      {
        v15 = *(_DWORD **)a2;
        if ( 2 * v10 >= v9 + 49 )
          v16 = 2 * v10;
        else
          v16 = v9 + 49;
        *(_QWORD *)(a2 + 16) = v16;
        result = realloc(v15, v16);
        v9 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v17 = (char *)result + v9;
      v18 = "std::basic_istream<char, std::char_traits<char> >";
      goto LABEL_30;
    case 4:
      v4 = (_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(_QWORD *)(a2 + 16);
      if ( v13 + 49 >= v14 )
      {
        v21 = *(_DWORD **)a2;
        if ( 2 * v14 >= v13 + 49 )
          v22 = 2 * v14;
        else
          v22 = v13 + 49;
        *(_QWORD *)(a2 + 16) = v22;
        result = realloc(v21, v22);
        v13 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      v17 = (char *)result + v13;
      v18 = "std::basic_ostream<char, std::char_traits<char> >";
LABEL_30:
      v23 = *(_OWORD *)v18;
      v24 = *((_OWORD *)v18 + 1);
      v25 = *((_OWORD *)v18 + 2);
      v17[48] = 62;
      *(_OWORD *)v17 = v23;
      *((_OWORD *)v17 + 1) = v24;
      *((_OWORD *)v17 + 2) = v25;
      v8 = 49;
      goto LABEL_31;
    case 5:
      v4 = (_QWORD *)(a2 + 8);
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *(_QWORD *)(a2 + 16);
      if ( v11 + 50 >= v12 )
      {
        v19 = *(_DWORD **)a2;
        if ( 2 * v12 >= v11 + 50 )
          v20 = 2 * v12;
        else
          v20 = v11 + 50;
        *(_QWORD *)(a2 + 16) = v20;
        result = realloc(v19, v20);
        v11 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)a2 = result;
      }
      else
      {
        result = *(_DWORD **)a2;
      }
      qmemcpy((char *)result + v11, "std::basic_iostream<char, std::char_traits<char> >", 50);
      v8 = 50;
LABEL_31:
      *v4 += v8;
      break;
    default:
      return result;
  }
  return result;
}
