__int64 __fastcall sub_FD3B60(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int64 result; // rax
  int v8; // ebp
  unsigned __int64 v9; // rdx
  unsigned int v10; // edx

  if ( !a3 )
    goto LABEL_62;
  v3 = a3;
  v4 = a3 - 1;
  v5 = a3;
  if ( *(_BYTE *)(a2 + a3 - 1) == 45 )
  {
    v6 = a3;
LABEL_19:
    a3 = v4;
    if ( v6 <= v4 )
      a3 = v6;
    goto LABEL_14;
  }
  if ( a3 == 1 )
  {
LABEL_62:
    *(_QWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 12) = 0;
    return 1;
  }
  v6 = a3 - 2;
  if ( *(_BYTE *)(a2 + a3 - 2) == 45 )
  {
    v4 = a3 - 2;
    v6 = a3 - 1;
LABEL_10:
    if ( a3 != v6 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(a2 + v6) - 48) > 9u )
      {
        v6 = 0;
        v4 = -1;
      }
      else
      {
        a3 = v4;
        if ( v3 <= v4 )
          a3 = v3;
      }
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  while ( v6 )
  {
    v4 = v6 - 1;
    if ( *(_BYTE *)(v6 + a2 - 1) == 45 )
      goto LABEL_10;
    --v6;
  }
  v4 = -1;
LABEL_14:
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 12) = 0;
  switch ( a3 )
  {
    case 6uLL:
      if ( *(_DWORD *)a2 == 1868783981 )
      {
        v8 = 0;
        if ( *(_WORD *)(a2 + 4) == 30835 )
          break;
      }
      return 1;
    case 0xEuLL:
      if ( *(_QWORD *)a2 != 0x662D78736F63616DLL )
        return 1;
      if ( *(_DWORD *)(a2 + 8) != 1768382834 )
        return 1;
      v8 = 1;
      if ( *(_WORD *)(a2 + 12) != 25964 )
        return 1;
      break;
    case 3uLL:
      if ( *(_WORD *)a2 != 28521 || (v8 = 2, *(_BYTE *)(a2 + 2) != 115) )
      {
        if ( *(_WORD *)a2 != 25447 )
          return 1;
        v8 = 4;
        if ( *(_BYTE *)(a2 + 2) != 99 )
          return 1;
      }
      break;
    case 7uLL:
      if ( *(_DWORD *)a2 != 1668571511 || *(_WORD *)(a2 + 4) != 28520 || (v8 = 3, *(_BYTE *)(a2 + 6) != 115) )
      {
        if ( *(_DWORD *)a2 == 1937075815 && *(_WORD *)(a2 + 4) == 25972 && *(_BYTE *)(a2 + 6) == 112 )
        {
          v8 = 5;
          *(_QWORD *)(a1 + 4) = 0x8000000600000001LL;
          break;
        }
        return 1;
      }
      break;
    default:
      if ( a3 == 5 && *(_DWORD *)a2 == 1718248047 && *(_BYTE *)(a2 + 4) == 119 )
      {
        *(_DWORD *)a1 = 6;
        v8 = 6;
        *(_DWORD *)(a1 + 8) = -2147483640;
        if ( v4 == -1 )
          return 0;
        goto LABEL_27;
      }
      return 1;
  }
  *(_DWORD *)a1 = v8;
  if ( v4 == -1 )
    return 0;
LABEL_27:
  v9 = 0;
  if ( v3 >= v6 )
  {
    v5 = v6;
    v9 = v3 - v6;
  }
  result = sub_2233B90(a1 + 4, v5 + a2, v9, v4, v3, v5);
  if ( !(_BYTE)result )
  {
    if ( v8 != 6 )
      return 0;
    v10 = *(_DWORD *)(a1 + 8) & 0x7FFFFFFF;
    if ( *(_DWORD *)(a1 + 4) || v10 > 8 )
      goto LABEL_51;
    if ( v10 != 8 )
      return 0;
    if ( *(_DWORD *)(a1 + 12) & 0x7FFFFFFF | *(_DWORD *)(a1 + 16) & 0x7FFFFFFF )
    {
LABEL_51:
      *(_QWORD *)(a1 + 12) = 0;
      *(_QWORD *)(a1 + 4) = 0x8000000800000000LL;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

