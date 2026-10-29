/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5090
// Address: 0x00000000004A5090

//----- (00000000004A5090) ----------------------------------------------------
__int64 __fastcall sub_4A5090(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // x0
  int v6; // w4
  bool v7; // zf

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 11:
    case 33:
    case 43:
    case 45:
    case 54:
    case 55:
    case 56:
    case 57:
    case 58:
    case 60:
    case 61:
    case 63:
    case 75:
    case 77:
      if ( a3 )
        v7 = a4 == 0;
      else
        v7 = 1;
      if ( !v7 )
        goto LABEL_5;
      return 0;
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 40:
    case 51:
    case 52:
    case 53:
    case 59:
    case 62:
    case 66:
    case 67:
    case 68:
    case 72:
    case 73:
    case 74:
      if ( a3 )
        goto LABEL_5;
      return 0;
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 41:
    case 46:
    case 47:
    case 76:
    case 78:
    case 79:
      goto LABEL_5;
    case 42:
    case 48:
      if ( !a4 )
        return 0;
LABEL_5:
      v6 = *(_DWORD *)(a1 + 40);
      if ( v6 >= *(_DWORD *)(a1 + 44) )
        return 0;
      result = *(_QWORD *)(a1 + 32) + 24LL * v6;
      *(_DWORD *)(result + 4) = 0;
      *(_DWORD *)(a1 + 40) = v6 + 1;
      *(_DWORD *)result = a2;
      *(_QWORD *)(result + 8) = a3;
      *(_QWORD *)(result + 16) = a4;
      return result;
    default:
      return 0;
  }
}
