/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E38D0
// Address: 0x00000000000E38D0

//----- (00000000000E38D0) ----------------------------------------------------
__int64 __fastcall sub_E38D0(__int64 a1, char **a2)
{
  __int64 result; // rax
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  size_t v7; // rsi
  _QWORD *v8; // rbx
  char *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rsi
  char *v14; // rax
  unsigned __int64 v15; // rsi
  size_t v16; // rsi
  __int128 v17; // xmm0
  size_t v18; // rsi
  size_t v19; // rsi

  result = *(unsigned int *)(a1 + 12);
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 0:
    case 1:
    case 2:
      v4 = a2[1];
      v5 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v4 + 70) >= v5 )
      {
        v7 = 2 * v5;
        if ( v7 < (unsigned __int64)(v4 + 70) )
          v7 = (size_t)(v4 + 70);
        a2[2] = (char *)v7;
        v6 = (char *)realloc(*a2, v7);
        *a2 = v6;
        v4 = a2[1];
      }
      else
      {
        v6 = *a2;
      }
      v8 = a2 + 1;
      qmemcpy(&v4[(_QWORD)v6], "std::basic_string<char, std::char_traits<char>, std::allocator<char> >", 70);
      result = 70;
      goto LABEL_27;
    case 3:
      v9 = a2[1];
      v10 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v9 + 49) >= v10 )
      {
        v16 = 2 * v10;
        if ( v16 < (unsigned __int64)(v9 + 49) )
          v16 = (size_t)(v9 + 49);
        a2[2] = (char *)v16;
        v11 = (char *)realloc(*a2, v16);
        *a2 = v11;
        v9 = a2[1];
      }
      else
      {
        v11 = *a2;
      }
      v8 = a2 + 1;
      qmemcpy(&v9[(_QWORD)v11 + 16], "am<char, std::char_traits<char> ", 32);
      v17 = xmmword_FDB7C;
      goto LABEL_26;
    case 4:
      v9 = a2[1];
      v15 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v9 + 49) >= v15 )
      {
        v19 = 2 * v15;
        if ( v19 < (unsigned __int64)(v9 + 49) )
          v19 = (size_t)(v9 + 49);
        a2[2] = (char *)v19;
        v11 = (char *)realloc(*a2, v19);
        *a2 = v11;
        v9 = a2[1];
      }
      else
      {
        v11 = *a2;
      }
      v8 = a2 + 1;
      qmemcpy(&v9[(_QWORD)v11 + 16], "am<char, std::char_traits<char> ", 32);
      v17 = xmmword_FDBAE;
LABEL_26:
      *(_OWORD *)&v9[(_QWORD)v11] = v17;
      v9[(_QWORD)v11 + 48] = 62;
      result = 49;
      goto LABEL_27;
    case 5:
      v12 = a2[1];
      v13 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v12 + 50) >= v13 )
      {
        v18 = 2 * v13;
        if ( v18 < (unsigned __int64)(v12 + 50) )
          v18 = (size_t)(v12 + 50);
        a2[2] = (char *)v18;
        v14 = (char *)realloc(*a2, v18);
        *a2 = v14;
        v12 = a2[1];
      }
      else
      {
        v14 = *a2;
      }
      v8 = a2 + 1;
      qmemcpy(&v12[(_QWORD)v14], "std::basic_iostream<char, std::char_traits<char> >", 50);
      result = 50;
LABEL_27:
      *v8 += result;
      break;
    default:
      return result;
  }
  return result;
}
// FDB7C: using guessed type __int128 xmmword_FDB7C;
// FDBAE: using guessed type __int128 xmmword_FDBAE;
