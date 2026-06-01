__int64 __fastcall sub_15AF3B0(__int64 a1, __int64 a2, int a3, _QWORD *a4, int *a5, _BYTE *a6)
{
  __int64 v6; // r15
  __int64 result; // rax
  int v8; // eax

  if ( ((unsigned __int8)a2 & (*(_BYTE *)(a1 + 3) >> 2) & 0x1F) != 0 )
  {
    if ( (*a6 & 1) != 0 )
    {
      switch ( a2 )
      {
        case 1LL:
          *a4 = "const";
          goto LABEL_12;
        case 2LL:
          *a4 = "restrict";
          goto LABEL_12;
        case 4LL:
          *a4 = "volatile";
          goto LABEL_12;
        case 8LL:
          *a4 = "__unaligned";
          goto LABEL_12;
        case 16LL:
          *a4 = "_Atomic";
LABEL_12:
          v8 = 137;
          goto LABEL_13;
        default:
          goto LABEL_23;
      }
    }
    switch ( a2 )
    {
      case 1LL:
        *a4 = "const";
        v8 = 97;
        goto LABEL_13;
      case 2LL:
        *a4 = "restrict";
        v8 = 97;
        goto LABEL_13;
      case 4LL:
        *a4 = "volatile";
        v8 = 97;
        goto LABEL_13;
      case 8LL:
        *a4 = "__unaligned";
        v8 = 97;
        goto LABEL_13;
      case 16LL:
        *a4 = "_Atomic";
        v8 = 97;
LABEL_13:
        *a5 = v8;
        return 1;
      default:
        goto LABEL_23;
    }
  }
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a1 + 3) & 0x83 | (4 * (a2 & 0x1F | (*(_BYTE *)(a1 + 3) >> 2) & 0x1F));
  switch ( a2 )
  {
    case 1LL:
      *(_DWORD *)(a1 + 220) = a3;
      result = 0;
      break;
    case 2LL:
      *(_DWORD *)(a1 + 224) = a3;
      result = 0;
      break;
    case 4LL:
      *(_DWORD *)(a1 + 228) = a3;
      result = 0;
      break;
    case 8LL:
      *(_DWORD *)(a1 + 236) = a3;
      result = 0;
      break;
    case 16LL:
      *(_DWORD *)(a1 + 232) = a3;
      result = 0;
      break;
    default:
LABEL_23:
      ++*(_DWORD *)(v6 + 8);
      BUG();
  }
  return result;
}
