bool __fastcall sub_C1D2F0(__int64 a1, __int64 a2)
{
  bool result; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int8 v5; // cl
  unsigned __int16 *v6; // rdi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdi
  int v11; // eax
  _QWORD v12[3]; // [rsp+0h] [rbp-18h] BYREF

  v12[0] = a1;
  v12[1] = a2;
  result = sub_A4F700(v12);
  if ( !result )
    return 1;
  if ( !v12[0] )
  {
LABEL_11:
    v6 = nullptr;
    goto LABEL_12;
  }
  v3 = v12[0] & 3;
  if ( (v12[0] & 3) == 0 )
  {
    v4 = v12[0] & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v12[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v5 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (unsigned int)v5 - 40 <= 6 )
        return !sub_9B48E0(v4);
      if ( v5 != 30 )
        return (*(_BYTE *)(v4 + 28) & 0x7D) == 29 || (unsigned int)v5 - 34 <= 5;
      return 1;
    }
    goto LABEL_11;
  }
  if ( v3 == 2 || v3 == 3 )
    return 1;
  v6 = (unsigned __int16 *)(v12[0] & 0xFFFFFFFFFFFFFFFCLL);
LABEL_12:
  v7 = *v6;
  v8 = (unsigned int)(v7 + 503);
  LOWORD(v8) = (v7 + 503) & 0x1FF;
  switch ( v8 )
  {
    case 0LL:
    case 2LL:
    case 9LL:
    case 20LL:
    case 28LL:
    case 45LL:
    case 118LL:
      return result;
    case 30LL:
      result = *((_QWORD *)v6 + 2) != 0 && *((_QWORD *)v6 + 3) == 0;
      break;
    case 39LL:
      v10 = *((_QWORD *)v6 + 2);
      result = 0;
      if ( (v10 & 4) != 0 )
        result = (unsigned int)sub_B99CC0(v10 & 0xFFFFFFFFFFFFFFF8LL) == 3;
      break;
    case 67LL:
      result = 0;
      if ( (v6[12] & 4) != 0 )
        result = ((*((_BYTE *)v6 + 1) >> 1) & 3) == 1;
      break;
    case 80LL:
      v11 = sub_BFBE70((__int64)v6);
      if ( v11 == 206 || v11 == 225 )
        return 1;
      result = v11 == 1063 || v11 == 218;
      break;
    case 108LL:
      v9 = *((_QWORD *)v6 + 2);
      result = 0;
      if ( !*(_DWORD *)(v9 + 112) )
        result = (*(_BYTE *)(v9 + 49) & 0x40) == 0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
