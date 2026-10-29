/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478A5F
// Address: 0x00478A5F

//----- (00478A5F) --------------------------------------------------------
int __cdecl sub_478A5F(
        int a1,
        unsigned __int16 *a2,
        DWORD dwMapFlags,
        CHAR *lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpDestStr,
        int cchDest,
        UINT CodePage,
        int a9)
{
  int v9; // esi
  int v10; // eax
  UINT v11; // edi
  int result; // eax
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  void *v16; // esp
  WCHAR *v17; // ebx
  WCHAR *v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // esi
  unsigned int v22; // ecx
  unsigned int v23; // eax
  void *v24; // esp
  WCHAR *v25; // edi
  WCHAR *v26; // eax
  int v27; // eax
  _DWORD v28[3]; // [esp+0h] [ebp-14h] BYREF
  int cchWideChar; // [esp+Ch] [ebp-8h]

  v9 = cbMultiByte;
  if ( cbMultiByte > 0 )
  {
    v10 = sub_47EFB3(lpMultiByteStr, cbMultiByte);
    v9 = v10 + 1;
    if ( v10 >= cbMultiByte )
      v9 = v10;
  }
  v11 = CodePage;
  if ( !CodePage )
  {
    v11 = *(_DWORD *)(*(_DWORD *)a1 + 8);
    CodePage = v11;
  }
  result = sub_47B3EB(v11, 8 * (a9 != 0) + 1, lpMultiByteStr, v9, nullptr, 0);
  v13 = result;
  cchWideChar = result;
  if ( result )
  {
    v14 = 2 * result + 8;
    v15 = 2 * result < v14 ? v14 : 0;
    if ( (2 * v13 < v14 ? v14 : 0) == 0 )
    {
      v17 = nullptr;
      goto LABEL_16;
    }
    if ( v15 > 0x400 )
    {
      v18 = (WCHAR *)sub_479531(2 * v13 < v14 ? v14 : 0);
      v17 = v18;
      if ( v18 )
      {
        *(_DWORD *)v18 = 56797;
        goto LABEL_13;
      }
    }
    else
    {
      v16 = alloca(v15);
      v17 = (WCHAR *)v28;
      if ( v28 )
      {
        v28[0] = 52428;
LABEL_13:
        v17 += 4;
      }
    }
    v13 = cchWideChar;
LABEL_16:
    if ( !v17 )
      goto LABEL_38;
    if ( !sub_47B3EB(v11, 1u, lpMultiByteStr, v9, v17, v13) )
      goto LABEL_38;
    v19 = cchWideChar;
    v20 = sub_47906A(a2, dwMapFlags, v17, cchWideChar, nullptr, 0, 0, 0, 0);
    v21 = v20;
    if ( !v20 )
      goto LABEL_38;
    if ( (dwMapFlags & 0x400) != 0 )
    {
      if ( !cchDest )
        goto LABEL_39;
      if ( v20 <= cchDest )
      {
        v21 = sub_47906A(a2, dwMapFlags, v17, v19, lpDestStr, cchDest, 0, 0, 0);
        if ( v21 )
          goto LABEL_39;
      }
      goto LABEL_38;
    }
    v22 = 2 * v20 + 8;
    v23 = 2 * v20 < v22 ? v22 : 0;
    if ( (2 * v21 < v22 ? v22 : 0) == 0 )
    {
      v25 = nullptr;
LABEL_32:
      if ( v25 && sub_47906A(a2, dwMapFlags, v17, cchWideChar, v25, v21, 0, 0, 0) )
      {
        v27 = cchDest
            ? sub_47B467(CodePage, 0, v25, v21, (LPSTR)lpDestStr, cchDest, nullptr, nullptr)
            : sub_47B467(CodePage, 0, v25, v21, nullptr, 0, nullptr, nullptr);
        v21 = v27;
        if ( v27 )
        {
          sub_478C92((int)v25);
          goto LABEL_39;
        }
      }
      goto LABEL_37;
    }
    if ( v23 > 0x400 )
    {
      v26 = (WCHAR *)sub_479531(2 * v21 < v22 ? v22 : 0);
      v25 = v26;
      if ( v26 )
      {
        *(_DWORD *)v26 = 56797;
        goto LABEL_30;
      }
    }
    else
    {
      v24 = alloca(v23);
      v25 = (WCHAR *)v28;
      if ( v28 )
      {
        v28[0] = 52428;
LABEL_30:
        v25 += 4;
        goto LABEL_32;
      }
    }
LABEL_37:
    sub_478C92((int)v25);
LABEL_38:
    v21 = 0;
LABEL_39:
    sub_478C92((int)v17);
    return v21;
  }
  return result;
}
