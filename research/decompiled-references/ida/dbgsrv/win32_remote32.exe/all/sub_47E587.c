/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47E587
// Address: 0x0047E587

//----- (0047E587) --------------------------------------------------------
BOOL __cdecl sub_47E587(
        _DWORD *a1,
        DWORD dwInfoType,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWORD lpCharType,
        UINT CodePage,
        int a7)
{
  UINT v7; // ebx
  BOOL StringTypeW; // edi
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  void *v12; // esp
  __m128i *v13; // esi
  __m128i *v14; // eax
  int v15; // eax
  _DWORD v17[3]; // [esp+0h] [ebp-28h] BYREF
  _DWORD v18[3]; // [esp+Ch] [ebp-1Ch] BYREF
  char v19; // [esp+18h] [ebp-10h]
  int cchWideChar; // [esp+1Ch] [ebp-Ch]
  int v21; // [esp+20h] [ebp-8h]

  sub_467FF8((int)v18, a1);
  v7 = CodePage;
  if ( !CodePage )
    v7 = *(_DWORD *)(v18[1] + 8);
  StringTypeW = 0;
  v9 = sub_47B3EB(v7, 8 * (a7 != 0) + 1, lpMultiByteStr, cbMultiByte, nullptr, 0);
  cchWideChar = v9;
  if ( v9 )
  {
    v10 = 2 * v9;
    v21 = 2 * v9;
    v11 = 2 * v9 < (unsigned int)(2 * v9 + 8) ? 2 * v9 + 8 : 0;
    if ( !v11 )
    {
      v13 = nullptr;
LABEL_13:
      if ( v13 )
      {
        sub_464890(v13, 0, v10);
        v15 = sub_47B3EB(v7, 1u, lpMultiByteStr, cbMultiByte, (LPWSTR)v13, cchWideChar);
        if ( v15 )
          StringTypeW = GetStringTypeW(dwInfoType, (LPCWCH)v13, v15, lpCharType);
      }
      sub_478C92((int)v13);
      goto LABEL_17;
    }
    if ( v11 > 0x400 )
    {
      v14 = (__m128i *)sub_479531(v11);
      v13 = v14;
      if ( v14 )
      {
        v14->m128i_i32[0] = 56797;
        goto LABEL_10;
      }
    }
    else
    {
      v12 = alloca(v11);
      v13 = (__m128i *)v17;
      if ( v17 )
      {
        v17[0] = 52428;
LABEL_10:
        v13 = (__m128i *)((char *)v13 + 8);
      }
    }
    v10 = v21;
    goto LABEL_13;
  }
LABEL_17:
  if ( v19 )
    *(_DWORD *)(v18[0] + 848) &= ~2u;
  return StringTypeW;
}
