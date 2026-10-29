__int64 __fastcall sub_758E20(__int64 a1, __int64 a2, int *a3)
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
      if ( *(_QWORD *)a1 != 0x5F6C6C756E6E6F6ELL || *(_QWORD *)(a1 + 5) != 0x726F7272655F6C6CLL )
        return 0;
      v3 = 1;
      break;
    case 11LL:
      if ( *(_QWORD *)a1 != 0x7365725F6C6C756ELL || (v3 = 2, *(_DWORD *)(a1 + 7) != 1953265011) )
      {
        if ( *(_QWORD *)a1 != 0x7365725F6F72657ALL )
          return 0;
        v3 = 3;
        if ( *(_DWORD *)(a1 + 7) != 1953265011 )
          return 0;
      }
      break;
    default:
      if ( a2 != 14 || *(_QWORD *)a1 != 0x5F6F72657A6E6F6ELL || *(_QWORD *)(a1 + 6) != 0x746C757365725F6FLL )
        return 0;
      v3 = 4;
      break;
  }
  *a3 = v3;
  return 1;
}

