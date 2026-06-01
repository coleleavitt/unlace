/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D42B0
// Address: 0x000D42B0

//----- (000D42B0) --------------------------------------------------------
int __cdecl sub_D42B0(int a1, char **a2)
{
  int result; // eax
  char *v3; // ecx
  unsigned int v4; // eax
  char *v5; // eax
  size_t v6; // eax
  _DWORD *v7; // esi
  char *v8; // ecx
  unsigned int v9; // eax
  char *v10; // eax
  char *v11; // ecx
  unsigned int v12; // eax
  char *v13; // eax
  char *v14; // ecx
  unsigned int v15; // eax
  char *v16; // eax
  size_t v17; // eax
  char *v18; // ecx
  const char *v19; // eax
  size_t v20; // eax
  size_t v21; // eax

  result = *(_DWORD *)(a1 + 8);
  switch ( result )
  {
    case 0:
    case 1:
    case 2:
      v3 = a2[1];
      v4 = (unsigned int)a2[2];
      if ( (unsigned int)(v3 + 70) >= v4 )
      {
        v6 = 2 * v4;
        if ( v6 < (unsigned int)(v3 + 70) )
          v6 = (size_t)(v3 + 70);
        a2[2] = (char *)v6;
        v5 = (char *)realloc(*a2, v6);
        *a2 = v5;
        v3 = a2[1];
      }
      else
      {
        v5 = *a2;
      }
      v7 = a2 + 1;
      memcpy(&v3[(_DWORD)v5], "std::basic_string<char, std::char_traits<char>, std::allocator<char> >", 0x46u);
      result = 70;
      goto LABEL_27;
    case 3:
      v8 = a2[1];
      v9 = (unsigned int)a2[2];
      if ( (unsigned int)(v8 + 49) >= v9 )
      {
        v17 = 2 * v9;
        if ( v17 < (unsigned int)(v8 + 49) )
          v17 = (size_t)(v8 + 49);
        a2[2] = (char *)v17;
        v10 = (char *)realloc(*a2, v17);
        *a2 = v10;
        v8 = a2[1];
      }
      else
      {
        v10 = *a2;
      }
      v18 = &v8[(_DWORD)v10];
      v7 = a2 + 1;
      v19 = "std::basic_istream<char, std::char_traits<char> >";
      goto LABEL_26;
    case 4:
      v14 = a2[1];
      v15 = (unsigned int)a2[2];
      if ( (unsigned int)(v14 + 49) >= v15 )
      {
        v21 = 2 * v15;
        if ( v21 < (unsigned int)(v14 + 49) )
          v21 = (size_t)(v14 + 49);
        a2[2] = (char *)v21;
        v16 = (char *)realloc(*a2, v21);
        *a2 = v16;
        v14 = a2[1];
      }
      else
      {
        v16 = *a2;
      }
      v18 = &v14[(_DWORD)v16];
      v7 = a2 + 1;
      v19 = "std::basic_ostream<char, std::char_traits<char> >";
LABEL_26:
      memcpy(v18, v19, 0x31u);
      result = 49;
      goto LABEL_27;
    case 5:
      v11 = a2[1];
      v12 = (unsigned int)a2[2];
      if ( (unsigned int)(v11 + 50) >= v12 )
      {
        v20 = 2 * v12;
        if ( v20 < (unsigned int)(v11 + 50) )
          v20 = (size_t)(v11 + 50);
        a2[2] = (char *)v20;
        v13 = (char *)realloc(*a2, v20);
        *a2 = v13;
        v11 = a2[1];
      }
      else
      {
        v13 = *a2;
      }
      v7 = a2 + 1;
      memcpy(&v11[(_DWORD)v13], "std::basic_iostream<char, std::char_traits<char> >", 0x32u);
      result = 50;
LABEL_27:
      *v7 += result;
      break;
    default:
      return result;
  }
  return result;
}
