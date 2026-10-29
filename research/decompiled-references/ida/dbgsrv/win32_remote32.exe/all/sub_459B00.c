/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_459B00
// Address: 0x00459B00

//----- (00459B00) --------------------------------------------------------
char __stdcall sub_459B00(int a1, LPCCH lpMultiByteStr, UINT CodePage, UINT a4)
{
  const CHAR *v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  WCHAR *v10; // eax
  LPWSTR v11; // edx
  const CHAR *v12; // ebx
  const CHAR *v13; // esi
  int v14; // eax
  char v15; // bl
  unsigned int v16; // esi
  unsigned int v17; // eax
  int v19; // [esp-4h] [ebp-38h]
  LPWSTR lpWideCharStr; // [esp+10h] [ebp-24h] BYREF
  unsigned int v21; // [esp+14h] [ebp-20h]
  unsigned int v22; // [esp+18h] [ebp-1Ch]
  LPCCH lpDefaultChar; // [esp+1Ch] [ebp-18h]
  int cchWideChar; // [esp+20h] [ebp-14h]
  char v25; // [esp+27h] [ebp-Dh] BYREF
  int v26; // [esp+30h] [ebp-4h]

  lpWideCharStr = nullptr;
  v21 = 0;
  v22 = 0;
  v26 = 0;
  v4 = &v25;
  v25 = 95;
  if ( a4 == 65001 )
    v4 = nullptr;
  lpDefaultChar = v4;
  v5 = strlen(lpMultiByteStr);
  v6 = MultiByteToWideChar(CodePage, 0, lpMultiByteStr, v5, nullptr, 0);
  v7 = a1;
  cchWideChar = v6;
  if ( v6 <= 0 )
  {
    v12 = lpMultiByteStr;
  }
  else
  {
    v8 = v21;
    v9 = v6 + 1;
    if ( v6 + 1 <= v21 )
    {
      if ( v6 + 1 != v21 )
      {
        a1 = 0;
        if ( v6 + 1 >= v21 )
        {
          if ( v6 + 1 > v21 )
            sub_456550((int)&lpWideCharStr, v9, &a1);
        }
        else
        {
          v21 = v6 + 1;
        }
      }
    }
    else
    {
      if ( v9 <= v22 )
      {
        v11 = lpWideCharStr;
      }
      else
      {
        v10 = (WCHAR *)sub_453B00((int)&lpWideCharStr, lpWideCharStr, v6 + 1, 2u);
        v8 = v21;
        v11 = v10;
        lpWideCharStr = v10;
      }
      sub_464890((__m128i *)&v11[v8], 0, 2 * (v9 - v8));
      v21 = v9;
    }
    v12 = lpMultiByteStr;
    v19 = cchWideChar;
    lpWideCharStr[cchWideChar] = 0;
    if ( MultiByteToWideChar(CodePage, 0, v12, v5, lpWideCharStr, v19) > 0 )
    {
      v13 = lpDefaultChar;
      v14 = WideCharToMultiByte(a4, 0, lpWideCharStr, v21 != 0 ? v21 - 1 : 0, nullptr, 0, lpDefaultChar, nullptr);
      if ( v14 > 0 )
      {
        sub_415CB0(v7, v14);
        if ( WideCharToMultiByte(
               a4,
               0,
               lpWideCharStr,
               v21 != 0 ? v21 - 1 : 0,
               *(LPSTR *)v7,
               *(_DWORD *)(v7 + 4) != 0 ? *(_DWORD *)(v7 + 4) - 1 : 0,
               v13,
               nullptr) > 0 )
        {
          v15 = 1;
          goto LABEL_26;
        }
      }
    }
  }
  if ( v12 && (v16 = strlen(v12)) != 0 )
  {
    v17 = v16 + 1;
    if ( v16 + 1 > *(_DWORD *)(v7 + 8) )
    {
      *(_DWORD *)v7 = sub_453B00(v7, *(void **)v7, v16 + 1, 1u);
      v17 = v16 + 1;
    }
    *(_DWORD *)(v7 + 4) = v17;
    sub_464310(*(_DWORD *)v7, (unsigned int)v12, v16);
    *(_BYTE *)(v16 + *(_DWORD *)v7) = 0;
  }
  else
  {
    *(_DWORD *)(v7 + 4) = 0;
  }
  v15 = 0;
LABEL_26:
  v26 = 2;
  if ( lpWideCharStr )
  {
    v21 = 0;
    sub_453A20(lpWideCharStr);
  }
  return v15;
}
