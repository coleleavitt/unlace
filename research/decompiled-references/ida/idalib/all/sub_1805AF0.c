size_t __fastcall sub_1805AF0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        _BYTE *a5,
        _BYTE *a6,
        _DWORD *a7)
{
  size_t result; // rax
  unsigned __int8 *v9; // rdi
  __int64 (*v10)(void); // rax

  result = (size_t)a7;
  *a5 = 1;
  *a6 = 0;
  *a7 = 0;
  if ( a3 == 4 )
  {
    if ( j__strlen("word") == 4 && *(_DWORD *)a2 == 1685221239 )
    {
      v9 = *(unsigned __int8 **)(*(_QWORD *)a1 + 17448LL);
      v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 248LL);
      if ( (char *)v10 != (char *)sub_102B8C0 )
      {
LABEL_26:
        result = v10();
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    result = j__strlen("byte");
    if ( result == 4 && *(_DWORD *)a2 == 1702132066 )
      *a4 = 8;
  }
  else if ( a3 <= 4 )
  {
    if ( a3 == 2 )
    {
      switch ( *(_BYTE *)a2 )
      {
        case 'D':
          *a4 = 64;
          break;
        case 'H':
          *a4 = 16;
          break;
        case 'I':
          *a7 = 32;
          goto LABEL_28;
        case 'K':
          *a7 = 16;
LABEL_28:
          *a4 = (*(_BYTE *)(a2 + 1) != 73) << 7;
          break;
        case 'Q':
          *a4 = 8;
          break;
        case 'S':
          *a4 = 32;
          break;
        case 'T':
          *a7 = 8;
          *a4 = 128;
          break;
        case 'X':
          *a4 = 96;
          break;
        default:
          break;
      }
      result = *(unsigned __int8 *)(a2 + 1);
      if ( (_BYTE)result == 70 )
      {
        *a5 = 0;
      }
      else if ( (_BYTE)result == 67 )
      {
        *a5 = 0;
        *a6 = 1;
      }
      else if ( (_BYTE)result != 73 )
      {
        *a4 = 0;
      }
    }
  }
  else if ( a3 == 7 )
  {
    result = j__strlen("pointer");
    if ( result == 7 && *(_DWORD *)a2 == 1852403568 && *(_WORD *)(a2 + 4) == 25972 && *(_BYTE *)(a2 + 6) == 114 )
    {
      result = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 17448LL) + 8LL);
LABEL_21:
      *a4 = result;
    }
  }
  else if ( a3 == 11 )
  {
    result = j__strlen("unwind_word");
    if ( result == 11 )
    {
      result = 0x775F646E69776E75LL;
      if ( *(_QWORD *)a2 == 0x775F646E69776E75LL && *(_WORD *)(a2 + 8) == 29295 && *(_BYTE *)(a2 + 10) == 100 )
      {
        v9 = *(unsigned __int8 **)(*(_QWORD *)a1 + 17448LL);
        v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 240LL);
        if ( (char *)v10 != (char *)sub_102B8B0 )
          goto LABEL_26;
LABEL_20:
        result = v9[8];
        goto LABEL_21;
      }
    }
  }
  return result;
}
