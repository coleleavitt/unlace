__int64 __fastcall sub_AF5C30(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax

  switch ( a2 )
  {
    case 4LL:
      v3 = 0;
      if ( *(_DWORD *)a1 != 1701736302 )
        return 0;
      break;
    case 13LL:
      if ( *(_QWORD *)a1 != 0x5F6C6C756E6E6F6ELL )
        return 0;
      if ( *(_DWORD *)(a1 + 8) != 1869771365 )
        return 0;
      v3 = 1;
      if ( *(_BYTE *)(a1 + 12) != 114 )
        return 0;
      break;
    case 11LL:
      if ( *(_QWORD *)a1 != 0x7365725F6C6C756ELL || *(_WORD *)(a1 + 8) != 27765 || (v3 = 2, *(_BYTE *)(a1 + 10) != 116) )
      {
        if ( *(_QWORD *)a1 != 0x7365725F6F72657ALL )
          return 0;
        if ( *(_WORD *)(a1 + 8) != 27765 )
          return 0;
        v3 = 3;
        if ( *(_BYTE *)(a1 + 10) != 116 )
          return 0;
      }
      break;
    default:
      if ( a2 != 14
        || *(_QWORD *)a1 != 0x5F6F72657A6E6F6ELL
        || *(_DWORD *)(a1 + 8) != 1970496882
        || *(_WORD *)(a1 + 12) != 29804 )
      {
        return 0;
      }
      v3 = 4;
      break;
  }
  *a3 = v3;
  return 1;
}

