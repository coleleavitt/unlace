__int64 __fastcall sub_580C90(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // ecx
  __int16 v7; // cx
  unsigned __int16 v8; // ax
  bool v9; // cc
  int v10; // eax

  v2 = *a1;
  if ( (unsigned __int64)*a1 < *(_QWORD *)a2 )
    return 0xFFFFFFFFLL;
  if ( *(_QWORD *)a2 < v2 )
    return 1;
  switch ( v2 & 0xF )
  {
    case 0uLL:
    case 1uLL:
    case 2uLL:
    case 3uLL:
    case 4uLL:
    case 5uLL:
    case 6uLL:
    case 7uLL:
      return 0;
    case 8uLL:
      goto LABEL_10;
    case 9uLL:
      return sub_3C30D0((__int64)(a1 + 1), a2 + 8);
    case 0xAuLL:
      v10 = *(_DWORD *)(a2 + 8);
      v9 = *((_DWORD *)a1 + 2) < v10;
      result = *((_DWORD *)a1 + 2) > v10;
      if ( v9 )
        return 0xFFFFFFFFLL;
      return result;
    case 0xBuLL:
      v4 = *(_QWORD *)(a2 + 8);
      result = 0xFFFFFFFFLL;
      if ( a1[1] >= v4 )
      {
        result = 1;
        if ( a1[1] <= v4 )
        {
LABEL_10:
          v5 = *((_DWORD *)a1 + 4);
          v6 = *(_DWORD *)(a2 + 16);
          result = 0xFFFFFFFFLL;
          if ( v5 >= v6 )
            result = v6 < v5;
        }
      }
      break;
    case 0xCuLL:
      v7 = *(_WORD *)(a2 + 8);
      result = 0xFFFFFFFFLL;
      if ( *((__int16 *)a1 + 4) >= v7 )
      {
        result = 1;
        if ( *((__int16 *)a1 + 4) <= v7 )
        {
          v8 = *(_WORD *)(a2 + 10);
          v9 = *((_WORD *)a1 + 5) < v8;
          result = *((_WORD *)a1 + 5) > v8;
          if ( v9 )
            result = 0xFFFFFFFFLL;
        }
      }
      break;
    default:
      if ( !under_debugger )
        interr(2925);
      BUG();
  }
  return result;
}
