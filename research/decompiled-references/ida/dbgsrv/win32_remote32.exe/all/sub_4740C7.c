/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4740C7
// Address: 0x004740C7

//----- (004740C7) --------------------------------------------------------
DWORD *__cdecl sub_4740C7(DWORD *a1, int a2, CHAR *lpMultiByteStr, int a4)
{
  int v4; // eax
  CHAR *v5; // edi
  int v6; // ebx
  CHAR *v7; // esi
  int v8; // ecx
  CHAR *v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // esi
  CHAR *v14; // ecx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  CHAR *v18; // esi
  CHAR *v19; // ecx
  CHAR v20; // dl
  int v21; // eax
  int v22; // eax
  CHAR *v23; // eax
  int v24; // esi
  char v25; // al
  char *v26; // ecx
  CHAR *v27; // esi
  bool v28; // zf
  int v29; // esi
  int v30; // edx
  int v31; // ecx
  int v33[2]; // [esp+Ch] [ebp-8Ch] BYREF
  int v34[2]; // [esp+14h] [ebp-84h] BYREF
  int v35; // [esp+1Ch] [ebp-7Ch]
  UINT CodePage; // [esp+20h] [ebp-78h]
  CHAR *v37; // [esp+24h] [ebp-74h] BYREF
  CHAR *v38; // [esp+28h] [ebp-70h]
  HANDLE hFile; // [esp+2Ch] [ebp-6Ch]
  LPCCH v40; // [esp+30h] [ebp-68h]
  LPCCH v41; // [esp+34h] [ebp-64h]
  DWORD NumberOfBytesWritten; // [esp+38h] [ebp-60h] BYREF
  const CHAR *v43; // [esp+3Ch] [ebp-5Ch]
  DWORD LastError; // [esp+40h] [ebp-58h]
  CHAR *v45; // [esp+44h] [ebp-54h]
  DWORD v46; // [esp+48h] [ebp-50h]
  int v47; // [esp+4Ch] [ebp-4Ch]
  WCHAR WideCharStr[2]; // [esp+50h] [ebp-48h] BYREF
  _DWORD v49[3]; // [esp+54h] [ebp-44h] BYREF
  char v50; // [esp+60h] [ebp-38h]
  CHAR *v51; // [esp+64h] [ebp-34h] BYREF
  __int16 v52; // [esp+68h] [ebp-30h] BYREF
  CHAR *v53; // [esp+6Ch] [ebp-2Ch]
  int v54; // [esp+70h] [ebp-28h]
  int cchWideChar; // [esp+74h] [ebp-24h]
  unsigned __int8 v56; // [esp+7Bh] [ebp-1Dh]
  CHAR Buffer[8]; // [esp+7Ch] [ebp-1Ch] BYREF
  CHAR v58[8]; // [esp+84h] [ebp-14h] BYREF
  _BYTE v59[8]; // [esp+8Ch] [ebp-Ch] BYREF

  v4 = (int)*(&dword_4B7B38 + (a2 >> 6));
  v5 = lpMultiByteStr;
  v40 = lpMultiByteStr;
  v47 = a2 >> 6;
  hFile = *(HANDLE *)(56 * (a2 & 0x3F) + v4 + 24);
  v54 = 56 * (a2 & 0x3F);
  v43 = &lpMultiByteStr[a4];
  v6 = 0;
  CodePage = GetConsoleOutputCP();
  sub_467FF8((int)v49, nullptr);
  v7 = nullptr;
  LastError = 0;
  v45 = nullptr;
  v46 = 0;
  v8 = *(_DWORD *)(v49[1] + 8);
  v35 = v8;
  v41 = lpMultiByteStr;
  if ( lpMultiByteStr >= &lpMultiByteStr[a4] )
    goto LABEL_49;
  while ( 1 )
  {
    HIBYTE(v52) = *v5;
    *(_DWORD *)WideCharStr = 0;
    cchWideChar = 1;
    v9 = (CHAR *)*(&dword_4B7B38 + v47);
    v53 = v9;
    if ( v8 == 65001 )
    {
      v10 = 0;
      v38 = &v53[v54 + 46];
      do
      {
        if ( !v53[v54 + 46 + v10] )
          break;
        ++v10;
      }
      while ( v10 < 5 );
      v11 = v43 - v5;
      cchWideChar = v10;
      if ( v10 <= 0 )
      {
        v19 = (CHAR *)(byte_4B5F20[(unsigned __int8)*v5] + 1);
        v53 = v19;
        if ( (int)v19 <= v11 )
        {
          v33[0] = 0;
          v33[1] = 0;
          v51 = v5;
          cchWideChar = (v19 == (CHAR *)4) + 1;
          if ( sub_47C30C(WideCharStr, &v51, cchWideChar, v33) == -1 )
            goto LABEL_49;
          v18 = v53;
LABEL_19:
          v5 = &v5[(_DWORD)v18 - 1];
          goto LABEL_28;
        }
        if ( v11 <= 0 )
          goto LABEL_41;
        v29 = v54;
        do
        {
          *((_BYTE *)&(*(&dword_4B7B38 + v47))[1].SpinCount + v29 + v6 + 2) = v5[v6];
          ++v6;
        }
        while ( v6 < v11 );
      }
      else
      {
        v51 = (CHAR *)(byte_4B5F20[(unsigned __int8)v53[v54 + 46]] + 1);
        v53 = &v51[-cchWideChar];
        if ( (int)&v51[-cchWideChar] <= v11 )
        {
          v12 = cchWideChar;
          v13 = 0;
          v14 = v38;
          do
          {
            v59[v13] = v14[v13];
            ++v13;
          }
          while ( v13 < v12 );
          v15 = v54;
          if ( (int)v53 > 0 )
          {
            sub_464310((unsigned int)&v59[v12], (unsigned int)v5, (unsigned int)v53);
            v15 = v54;
            v12 = cchWideChar;
          }
          v16 = v47;
          v17 = 0;
          do
            *((_BYTE *)&(*(&dword_4B7B38 + v16))[1].SpinCount + v15 + v17++ + 2) = 0;
          while ( v17 < v12 );
          v5 = (CHAR *)v41;
          v18 = v53;
          v37 = v59;
          v34[0] = 0;
          v34[1] = 0;
          cchWideChar = (v51 == (CHAR *)4) + 1;
          if ( sub_47C30C(WideCharStr, &v37, cchWideChar, v34) == -1 )
            goto LABEL_49;
          goto LABEL_19;
        }
        if ( v11 <= 0 )
          goto LABEL_41;
        v24 = v54;
        do
        {
          v25 = v5[v6];
          v26 = (char *)*(&dword_4B7B38 + v47) + v24 + v6++;
          v26[cchWideChar + 46] = v25;
          v24 = v54;
        }
        while ( v6 < v11 );
      }
      v7 = v45;
LABEL_41:
      v27 = &v7[v11];
LABEL_42:
      v28 = v50 == 0;
      v45 = v27;
      goto LABEL_50;
    }
    v20 = v9[v54 + 45];
    if ( (v20 & 4) != 0 )
    {
      v58[0] = v9[v54 + 46];
      v58[1] = *v5;
      v53[v54 + 45] = v20 & 0xFB;
      v21 = sub_4796C1(WideCharStr, v58, 2u);
      goto LABEL_27;
    }
    v56 = *v5;
    v22 = sub_478614(v54, 0);
    if ( *(__int16 *)(v22 + 2 * v56) >= 0 )
    {
      v21 = sub_4796C1(WideCharStr, v5, 1u);
LABEL_27:
      if ( v21 == -1 )
        goto LABEL_49;
      goto LABEL_28;
    }
    v51 = v5 + 1;
    if ( v5 + 1 >= v43 )
    {
      v30 = v47;
      v31 = v54;
      *((_BYTE *)&(*(&dword_4B7B38 + v47))[1].SpinCount + v54 + 2) = v56;
      *((_BYTE *)&(*(&dword_4B7B38 + v30))[1].SpinCount + v31 + 1) |= 4u;
      v27 = v7 + 1;
      goto LABEL_42;
    }
    if ( sub_4796C1(WideCharStr, v5, 2u) == -1 )
      goto LABEL_49;
    v5 = v51;
LABEL_28:
    v41 = ++v5;
    v23 = (CHAR *)sub_47B467(CodePage, 0, WideCharStr, cchWideChar, Buffer, 5, nullptr, nullptr);
    v51 = v23;
    if ( !v23 )
      goto LABEL_49;
    if ( !WriteFile(hFile, Buffer, (DWORD)v23, &NumberOfBytesWritten, nullptr) )
      break;
    v7 = &v5[v46 - (_DWORD)v40];
    v45 = v7;
    if ( NumberOfBytesWritten < (unsigned int)v51 )
      goto LABEL_49;
    if ( HIBYTE(v52) == 10 )
    {
      v52 = 13;
      if ( !WriteFile(hFile, &v52, 1u, &NumberOfBytesWritten, nullptr) )
        break;
      if ( !NumberOfBytesWritten )
        goto LABEL_49;
      ++v46;
      v45 = ++v7;
    }
    if ( v5 >= v43 )
      goto LABEL_49;
    v8 = v35;
  }
  LastError = GetLastError();
LABEL_49:
  v28 = v50 == 0;
LABEL_50:
  if ( !v28 )
    *(_DWORD *)(v49[0] + 848) &= ~2u;
  *a1 = LastError;
  a1[1] = (DWORD)v45;
  a1[2] = v46;
  return a1;
}
