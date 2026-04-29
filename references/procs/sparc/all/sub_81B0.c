__int64 __fastcall sub_81B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 result; // rax
  int v11; // ecx
  int v12; // edx
  unsigned __int64 v13; // rdx
  char v14; // dl
  char v15; // dl

  *(_BYTE *)(a3 + 5) = a5;
  result = a4;
  v11 = a4 & 0x2000;
  v12 = (a4 >> 14) & 0x1F;
  *(_WORD *)(a3 + 6) = v12;
  if ( a6 )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    if ( !v11 )
    {
      *(_BYTE *)(a3 + 1) = 3;
      v15 = result & 0x1F;
      result = (unsigned __int8)((unsigned int)result >> 5);
      *(_BYTE *)(a3 + 32) = v15;
      *(_QWORD *)(a3 + 8) = result;
      return result;
    }
    LOWORD(v12) = *(_WORD *)(a3 + 6);
    goto LABEL_4;
  }
  if ( v11 )
  {
LABEL_4:
    *(_BYTE *)(a3 + 1) = (_WORD)v12 == 0 ? 2 : 4;
    v13 = result & 0x1FFF;
    if ( (result & 0x1000) != 0 )
      v13 = result | 0xFFFFFFFFFFFFE000LL;
    *(_QWORD *)(a3 + 16) = v13;
    *(_DWORD *)(a2 + 28) |= 0x800u;
    return result;
  }
  *(_BYTE *)(a3 + 1) = 3;
  v14 = result & 0x1F;
  result = (unsigned __int8)((unsigned int)result >> 5);
  *(_BYTE *)(a3 + 32) = v14;
  *(_QWORD *)(a3 + 8) = result;
  if ( (*(_BYTE *)(a1 + 160) & 1) != 0 && result )
  {
    *(_WORD *)(a2 + 24) = 0;
    return 0;
  }
  return result;
}
