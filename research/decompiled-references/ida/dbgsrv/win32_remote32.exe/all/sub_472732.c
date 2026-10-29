/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472732
// Address: 0x00472732

//----- (00472732) --------------------------------------------------------
int __cdecl sub_472732(int a1, char a2, unsigned int a3, unsigned int a4, int a5, int a6, int a7, int a8, _BYTE *a9)
{
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // esi
  signed int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // eax
  WCHAR WideCharStr[2]; // [esp+Ch] [ebp-4h] BYREF

  v9 = 0;
  *a9 = 0;
  if ( *((char *)&(*(&dword_4B7B38 + (a1 >> 6)))[1].LockSemaphore + 56 * (a1 & 0x3F)) >= 0 )
    return 0;
  v10 = a8;
  if ( (a8 & 0x74000) == 0 )
  {
    *(_DWORD *)WideCharStr = 0;
    if ( sub_477C53(0, (int)a9, WideCharStr) )
    {
      sub_467F04(0, (int)a9);
      __debugbreak();
    }
    if ( (*(_DWORD *)WideCharStr & 0x74000) != 0 )
      v10 = *(_DWORD *)WideCharStr & 0x74000 | a8;
    else
      v10 = a8 | 0x4000;
  }
  v11 = v10 & 0x74000;
  if ( (v10 & 0x74000) == 0x4000 )
  {
    *a9 = 0;
    goto LABEL_18;
  }
  switch ( v11 )
  {
    case 65536:
    case 81920:
      if ( (v10 & 0x301) != 0x301 )
        break;
LABEL_16:
      *a9 = 2;
      break;
    case 131072:
    case 147456:
      goto LABEL_16;
    case 262144:
    case 278528:
      *a9 = 1;
      break;
  }
LABEL_18:
  if ( (v10 & 0x70000) == 0 || (a2 & 0x40) != 0 )
    return 0;
  v12 = a3 & 0xC0000000;
  v13 = 0;
  v14 = 0;
  if ( (a3 & 0xC0000000) != 0x40000000 )
  {
    if ( v12 == 0x80000000 )
      goto LABEL_29;
    if ( v12 != -1073741824 )
      return 0;
  }
  if ( !a4 )
    return 0;
  if ( a4 <= 2 )
    goto LABEL_27;
  if ( a4 > 4 )
  {
    if ( a4 != 5 )
      return 0;
LABEL_27:
    v14 = 1;
LABEL_28:
    if ( !v13 )
      goto LABEL_46;
LABEL_29:
    *(_DWORD *)WideCharStr = 0;
    v15 = sub_473D17((int)a9, a1, (__int16 *)WideCharStr, 3u);
    if ( v15 > 0 )
      v14 = v14 != 1 ? v14 : 0;
    if ( v15 == -1 )
      return *sub_46B984();
    if ( v15 != 2 )
    {
      if ( v15 != 3 )
        goto LABEL_45;
      if ( *(_DWORD *)WideCharStr == 12565487 )
      {
        *a9 = 1;
        goto LABEL_46;
      }
    }
    if ( WideCharStr[0] == 65534 )
    {
      *sub_46B984() = 22;
      return *sub_46B984();
    }
    if ( WideCharStr[0] == 65279 )
    {
      v20 = sub_474CB1(0, (int)a9, a1, 2, 0, 0);
      if ( (v21 & v20) == 0xFFFFFFFF )
        return *sub_46B984();
      *a9 = 2;
LABEL_46:
      if ( !v14 )
        return 0;
      goto LABEL_47;
    }
LABEL_45:
    v22 = sub_474CB1(0, (int)a9, a1, 0, 0, 0);
    if ( (v23 & v22) == 0xFFFFFFFF )
      return *sub_46B984();
    goto LABEL_46;
  }
  LODWORD(v16) = sub_474CB1(0, (int)a9, a1, 0, 0, 2u);
  if ( v16 )
  {
    v17 = sub_474CB1(0, (int)a9, a1, 0, 0, 0);
    if ( (v18 & v17) == 0xFFFFFFFF )
      return *sub_46B984();
    v13 = a3 >> 31;
    goto LABEL_28;
  }
LABEL_47:
  v24 = (char)*a9;
  v25 = 0;
  *(_DWORD *)WideCharStr = 0;
  v26 = v24 - 1;
  if ( v26 )
  {
    if ( v26 == 1 )
    {
      wcscpy(WideCharStr, L"﻿");
      v25 = 2;
      goto LABEL_52;
    }
  }
  else
  {
    *(_DWORD *)WideCharStr = 12565487;
    v25 = 3;
  }
  if ( v25 )
  {
LABEL_52:
    while ( 1 )
    {
      v27 = sub_474842(v9, (int)a9, a1, (_BYTE *)WideCharStr + v9, v25 - v9);
      if ( v27 == -1 )
        break;
      v9 += v27;
      if ( v25 <= v9 )
        return 0;
    }
    return *sub_46B984();
  }
  return 0;
}
// 4728A2: variable 'v16' is possibly undefined
// 4728AF: variable 'v18' is possibly undefined
// 4728FA: variable 'v21' is possibly undefined
// 472914: variable 'v23' is possibly undefined
