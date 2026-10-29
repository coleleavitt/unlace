/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E4230
// Address: 0x00000000000E4230

//----- (00000000000E4230) ----------------------------------------------------
__int64 __fastcall sub_E4230(__int64 a1, char **a2)
{
  __int64 result; // rax
  char *v4; // rcx
  unsigned __int64 v5; // rsi
  char *v6; // rax
  char *v7; // rcx
  unsigned __int64 v8; // rsi
  char *v9; // rax
  char *v10; // rcx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // rsi
  char *v15; // rax
  unsigned __int64 v16; // rsi
  char *v17; // rcx
  unsigned __int64 v18; // rsi
  char *v19; // rax
  size_t v20; // rsi
  _QWORD *v21; // rbx
  size_t v22; // rsi
  size_t v23; // rsi
  size_t v24; // rsi
  __int64 v25; // rdx
  size_t v26; // rsi
  size_t v27; // rsi

  result = *(unsigned int *)(a1 + 12);
  switch ( *(_DWORD *)(a1 + 12) )
  {
    case 0:
      v4 = a2[1];
      v5 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v4 + 14) >= v5 )
      {
        v20 = 2 * v5;
        if ( v20 < (unsigned __int64)(v4 + 14) )
          v20 = (size_t)(v4 + 14);
        a2[2] = (char *)v20;
        v6 = (char *)realloc(*a2, v20);
        *a2 = v6;
        v4 = a2[1];
      }
      else
      {
        v6 = *a2;
      }
      v21 = a2 + 1;
      qmemcpy(&v4[(_QWORD)v6], "std::allocator", 14);
      result = 14;
      goto LABEL_39;
    case 1:
      v7 = a2[1];
      v8 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v7 + 17) >= v8 )
      {
        v22 = 2 * v8;
        if ( v22 < (unsigned __int64)(v7 + 17) )
          v22 = (size_t)(v7 + 17);
        a2[2] = (char *)v22;
        v9 = (char *)realloc(*a2, v22);
        *a2 = v9;
        v7 = a2[1];
      }
      else
      {
        v9 = *a2;
      }
      v21 = a2 + 1;
      qmemcpy(&v7[(_QWORD)v9], "std::basic_string", 17);
      result = 17;
      goto LABEL_39;
    case 2:
      v10 = a2[1];
      v11 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v10 + 11) >= v11 )
      {
        v23 = 2 * v11;
        if ( v23 < (unsigned __int64)(v10 + 11) )
          v23 = (size_t)(v10 + 11);
        a2[2] = (char *)v23;
        v12 = (char *)realloc(*a2, v23);
        *a2 = v12;
        v10 = a2[1];
      }
      else
      {
        v12 = *a2;
      }
      v21 = a2 + 1;
      qmemcpy(&v10[(_QWORD)v12], "std::string", 11);
      result = 11;
      goto LABEL_39;
    case 3:
      v13 = a2[1];
      v14 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v13 + 12) >= v14 )
      {
        v24 = 2 * v14;
        if ( v24 < (unsigned __int64)(v13 + 12) )
          v24 = (size_t)(v13 + 12);
        a2[2] = (char *)v24;
        v15 = (char *)realloc(*a2, v24);
        *a2 = v15;
        v13 = a2[1];
      }
      else
      {
        v15 = *a2;
      }
      v21 = a2 + 1;
      v25 = 0x7473693A3A647473LL;
      goto LABEL_34;
    case 4:
      v13 = a2[1];
      v16 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v13 + 12) >= v16 )
      {
        v26 = 2 * v16;
        if ( v26 < (unsigned __int64)(v13 + 12) )
          v26 = (size_t)(v13 + 12);
        a2[2] = (char *)v26;
        v15 = (char *)realloc(*a2, v26);
        *a2 = v15;
        v13 = a2[1];
      }
      else
      {
        v15 = *a2;
      }
      v21 = a2 + 1;
      v25 = 0x74736F3A3A647473LL;
LABEL_34:
      *(_QWORD *)&v13[(_QWORD)v15] = v25;
      *(_DWORD *)&v13[(_QWORD)v15 + 8] = 1835099506;
      result = 12;
      goto LABEL_39;
    case 5:
      v17 = a2[1];
      v18 = (unsigned __int64)a2[2];
      if ( (unsigned __int64)(v17 + 13) >= v18 )
      {
        v27 = 2 * v18;
        if ( v27 < (unsigned __int64)(v17 + 13) )
          v27 = (size_t)(v17 + 13);
        a2[2] = (char *)v27;
        v19 = (char *)realloc(*a2, v27);
        *a2 = v19;
        v17 = a2[1];
      }
      else
      {
        v19 = *a2;
      }
      v21 = a2 + 1;
      qmemcpy(&v17[(_QWORD)v19], "std::iostream", 13);
      result = 13;
LABEL_39:
      *v21 += result;
      break;
    default:
      return result;
  }
  return result;
}
