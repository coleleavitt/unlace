__int64 __fastcall sub_1C24350(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rdx

  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
      result = a1[2329];
      break;
    case 1:
      result = sub_A63CE0(a1);
      break;
    case 2:
      result = sub_A63D20(a1);
      break;
    case 3:
      result = a1[2347];
      break;
    case 4:
      result = a1[2341];
      break;
    case 5:
      result = a1[2330];
      break;
    case 6:
      result = sub_A64980((__int64)a1, *(unsigned int *)(a2 + 12), 1);
      break;
    case 7:
      result = sub_A64980((__int64)a1, *(unsigned int *)(a2 + 12), 0);
      break;
    case 8:
      v2 = *(_DWORD *)(a2 + 12);
      if ( v2 == 32 )
      {
        result = a1[2350];
      }
      else if ( v2 == 64 )
      {
        result = a1[2351];
      }
      else
      {
        result = a1[2381];
      }
      break;
    case 9:
      result = a1[2380];
      break;
    default:
      result = 0;
      break;
  }
  if ( *(_BYTE *)(a2 + 20) )
  {
    v4 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v4 )
    {
      if ( *(_BYTE *)(a2 + 25) )
        result = sub_A980E0(a1, result, v4, *(unsigned int *)(a2 + 28));
      else
        result = sub_A980E0(a1, result, v4, 1);
    }
  }
  if ( *(_BYTE *)(a2 + 10) )
    result = result & 7 | 1 | result & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_BYTE *)(a2 + 8) )
    return sub_A70010((__int64)a1, result);
  return result;
}
