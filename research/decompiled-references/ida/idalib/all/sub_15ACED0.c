__int64 __fastcall sub_15ACED0(char *a1, __int64 a2, unsigned int a3, int a4, char **a5, int *a6)
{
  __int64 v9; // rbp
  __int64 v10; // rcx
  char v11; // dl
  int v12; // eax
  __int64 result; // rax
  unsigned __int8 v14; // dl
  int v15; // esi
  int v16; // edx
  char v17; // al
  char *v18; // rdx
  int v19; // edx
  char *v20; // rax

  v9 = a3;
  v10 = *(_QWORD *)(a2 + 232);
  if ( (*(_BYTE *)(v10 + 47) & 0x20) == 0
    || sub_FF8450(a2 + 200, (__int64)"cl_clang_storage_class_specifiers", 33, v10)
    || (unsigned int)v9 > 6 )
  {
    goto LABEL_2;
  }
  if ( ((1LL << v9) & 0x4C) == 0 )
  {
    if ( ((1LL << v9) & 0x30) != 0 )
    {
      *a6 = 49;
      switch ( v9 )
      {
        case 0LL:
          goto LABEL_34;
        case 1LL:
          goto LABEL_32;
        case 2LL:
          goto LABEL_31;
        case 3LL:
          goto LABEL_30;
        case 4LL:
          goto LABEL_29;
        case 5LL:
          goto LABEL_27;
        case 6LL:
          goto LABEL_33;
      }
    }
LABEL_2:
    v11 = *a1;
    if ( (*a1 & 7) != 0 )
    {
      v12 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x7F000) != 0 || (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 8) == 0 )
        goto LABEL_7;
      if ( (_DWORD)v9 == 4 )
      {
        *((_DWORD *)a1 + 48) = a4;
        *((_DWORD *)a1 + 52) = a4;
        *(_DWORD *)a1 = v12 & 0xFFB80FFF | 0x32000;
        return 0;
      }
      if ( (*a1 & 7) == 4 )
      {
        v16 = *((_DWORD *)a1 + 42);
        *((_DWORD *)a1 + 48) = v16;
        *((_DWORD *)a1 + 52) = v16;
        *(_DWORD *)a1 = v12 & 0xFFB80FFF | 0x32000;
      }
      else
      {
LABEL_7:
        result = v11 & 0x27;
        LOBYTE(result) = (_BYTE)result != 34 || (_DWORD)v9 != 1;
        if ( (_BYTE)result )
        {
          v14 = v11 & 7;
          v15 = v14;
          switch ( v14 )
          {
            case 0u:
              v18 = "unspecified";
              break;
            case 1u:
              v18 = (char *)"typedef";
              break;
            case 2u:
              v18 = "extern";
              break;
            case 3u:
              v18 = "static";
              break;
            case 4u:
              v18 = "auto";
              break;
            case 5u:
              v18 = "register";
              break;
            case 6u:
              v18 = "__private_extern__";
              break;
            case 7u:
              v18 = "mutable";
              break;
          }
          *a5 = v18;
          v19 = 97;
          if ( v15 != (_DWORD)v9 )
            v19 = 4033;
          *a6 = v19;
          return result;
        }
      }
    }
    v17 = *a1;
    *((_DWORD *)a1 + 42) = a4;
    *a1 = v17 & 0xF8 | v9 & 7;
    return 0;
  }
  if ( (unsigned int)sub_FEAA90(*(_QWORD *)(a2 + 232)) > 0x77 )
    goto LABEL_2;
  *a6 = 49;
  switch ( v9 )
  {
    case 0LL:
LABEL_34:
      v20 = "unspecified";
      break;
    case 1LL:
LABEL_32:
      v20 = (char *)"typedef";
      break;
    case 2LL:
LABEL_31:
      v20 = "extern";
      break;
    case 3LL:
LABEL_30:
      v20 = "static";
      break;
    case 4LL:
LABEL_29:
      v20 = "auto";
      break;
    case 5LL:
LABEL_27:
      v20 = "register";
      break;
    case 6LL:
LABEL_33:
      v20 = "__private_extern__";
      break;
  }
  *a5 = v20;
  return 1;
}
