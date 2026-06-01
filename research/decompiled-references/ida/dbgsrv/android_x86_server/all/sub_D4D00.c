/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D4D00
// Address: 0x000D4D00

//----- (000D4D00) --------------------------------------------------------
int __cdecl sub_D4D00(int a1, char **a2)
{
  int result; // eax
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  char *v6; // ecx
  unsigned int v7; // eax
  char *v8; // eax
  char *v9; // ecx
  unsigned int v10; // eax
  char *v11; // eax
  char *v12; // ecx
  unsigned int v13; // eax
  char *v14; // eax
  unsigned int v15; // eax
  char *v16; // ecx
  unsigned int v17; // eax
  char *v18; // eax
  size_t v19; // eax
  _DWORD *v20; // esi
  size_t v21; // eax
  size_t v22; // eax
  size_t v23; // eax
  size_t v24; // eax
  size_t v25; // eax

  result = *(_DWORD *)(a1 + 8);
  switch ( result )
  {
    case 0:
      v3 = a2[1];
      v4 = (unsigned int)a2[2];
      if ( (unsigned int)(v3 + 14) >= v4 )
      {
        v19 = 2 * v4;
        if ( v19 < (unsigned int)(v3 + 14) )
          v19 = (size_t)(v3 + 14);
        a2[2] = (char *)v19;
        v5 = (char *)realloc(*a2, v19);
        *a2 = v5;
        v3 = a2[1];
      }
      else
      {
        v5 = *a2;
      }
      v20 = a2 + 1;
      qmemcpy(&v3[(_DWORD)v5], "std::allocator", 14);
      result = 14;
      goto LABEL_39;
    case 1:
      v6 = a2[1];
      v7 = (unsigned int)a2[2];
      if ( (unsigned int)(v6 + 17) >= v7 )
      {
        v21 = 2 * v7;
        if ( v21 < (unsigned int)(v6 + 17) )
          v21 = (size_t)(v6 + 17);
        a2[2] = (char *)v21;
        v8 = (char *)realloc(*a2, v21);
        *a2 = v8;
        v6 = a2[1];
      }
      else
      {
        v8 = *a2;
      }
      v20 = a2 + 1;
      qmemcpy(&v6[(_DWORD)v8], "std::basic_string", 17);
      result = 17;
      goto LABEL_39;
    case 2:
      v9 = a2[1];
      v10 = (unsigned int)a2[2];
      if ( (unsigned int)(v9 + 11) >= v10 )
      {
        v22 = 2 * v10;
        if ( v22 < (unsigned int)(v9 + 11) )
          v22 = (size_t)(v9 + 11);
        a2[2] = (char *)v22;
        v11 = (char *)realloc(*a2, v22);
        *a2 = v11;
        v9 = a2[1];
      }
      else
      {
        v11 = *a2;
      }
      v20 = a2 + 1;
      qmemcpy(&v9[(_DWORD)v11], "std::string", 11);
      result = 11;
      goto LABEL_39;
    case 3:
      v12 = a2[1];
      v13 = (unsigned int)a2[2];
      if ( (unsigned int)(v12 + 12) >= v13 )
      {
        v23 = 2 * v13;
        if ( v23 < (unsigned int)(v12 + 12) )
          v23 = (size_t)(v12 + 12);
        a2[2] = (char *)v23;
        v14 = (char *)realloc(*a2, v23);
        *a2 = v14;
        v12 = a2[1];
      }
      else
      {
        v14 = *a2;
      }
      v20 = a2 + 1;
      *(_DWORD *)&v12[(_DWORD)v14 + 8] = 1835099506;
      *(_DWORD *)&v12[(_DWORD)v14 + 4] = 1953720634;
      goto LABEL_34;
    case 4:
      v12 = a2[1];
      v15 = (unsigned int)a2[2];
      if ( (unsigned int)(v12 + 12) >= v15 )
      {
        v24 = 2 * v15;
        if ( v24 < (unsigned int)(v12 + 12) )
          v24 = (size_t)(v12 + 12);
        a2[2] = (char *)v24;
        v14 = (char *)realloc(*a2, v24);
        *a2 = v14;
        v12 = a2[1];
      }
      else
      {
        v14 = *a2;
      }
      v20 = a2 + 1;
      *(_DWORD *)&v12[(_DWORD)v14 + 8] = 1835099506;
      *(_DWORD *)&v12[(_DWORD)v14 + 4] = 1953722170;
LABEL_34:
      *(_DWORD *)&v12[(_DWORD)v14] = 979661939;
      result = 12;
      goto LABEL_39;
    case 5:
      v16 = a2[1];
      v17 = (unsigned int)a2[2];
      if ( (unsigned int)(v16 + 13) >= v17 )
      {
        v25 = 2 * v17;
        if ( v25 < (unsigned int)(v16 + 13) )
          v25 = (size_t)(v16 + 13);
        a2[2] = (char *)v25;
        v18 = (char *)realloc(*a2, v25);
        *a2 = v18;
        v16 = a2[1];
      }
      else
      {
        v18 = *a2;
      }
      v20 = a2 + 1;
      qmemcpy(&v16[(_DWORD)v18], "std::iostream", 13);
      result = 13;
LABEL_39:
      *v20 += result;
      break;
    default:
      return result;
  }
  return result;
}
