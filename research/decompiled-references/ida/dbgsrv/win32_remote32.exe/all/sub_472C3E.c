/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472C3E
// Address: 0x00472C3E

//----- (00472C3E) --------------------------------------------------------
int __cdecl sub_472C3E(_DWORD *a1, int *a2, LPCWSTR lpFileName, DWORD dwShareMode, int a5, char a6)
{
  int v7; // eax
  struct _RTL_CRITICAL_SECTION_DEBUG *v8; // edi
  int v9; // eax
  DWORD LastError; // eax
  DWORD FileType; // eax
  DWORD v12; // esi
  int v13; // eax
  int v14; // ecx
  char v15; // al
  bool v16; // zf
  int v17; // eax
  int v18; // esi
  int v19; // ecx
  int v20; // eax
  int v21; // esi
  HANDLE v22; // edx
  DWORD v23; // eax
  int v24; // eax
  int v25; // [esp-24h] [ebp-74h]
  __int64 v26[5]; // [esp-20h] [ebp-70h] BYREF
  DWORD dwCreationDisposition[6]; // [esp+Ch] [ebp-44h] BYREF
  _DWORD v28[6]; // [esp+24h] [ebp-2Ch] BYREF
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+3Ch] [ebp-14h] BYREF
  HANDLE hObject; // [esp+48h] [ebp-8h]
  char v31; // [esp+4Eh] [ebp-2h] BYREF
  char v32; // [esp+4Fh] [ebp-1h]

  qmemcpy(v28, (const void *)sub_472A1A((int)dwCreationDisposition, dwShareMode, a5, a6), sizeof(v28));
  if ( v28[3] == -1 )
  {
    *sub_46B971() = 0;
    *a2 = -1;
    return *sub_46B984();
  }
  v7 = sub_473520();
  *a2 = v7;
  if ( v7 == -1 )
  {
    *sub_46B971() = 0;
    *a2 = -1;
    *sub_46B984() = 24;
    return *sub_46B984();
  }
  SecurityAttributes.lpSecurityDescriptor = nullptr;
  SecurityAttributes.nLength = 12;
  *a1 = 1;
  SecurityAttributes.bInheritHandle = ((dwShareMode >> 7) & 1) == 0;
  qmemcpy(&v26[1], v28, 0x18u);
  v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)sub_472985(
                                               lpFileName,
                                               &SecurityAttributes,
                                               v26[1],
                                               HIDWORD(v26[1]),
                                               v26[2],
                                               HIDWORD(v26[2]),
                                               v26[3]);
  hObject = v8;
  if ( v8 == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1 )
  {
    if ( (v28[1] & 0xC0000000) != 0xC0000000
      || (dwShareMode & 1) == 0
      || (v28[1] &= ~0x80000000,
          qmemcpy(&v26[1], v28, 0x18u),
          v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)sub_472985(
                                                       lpFileName,
                                                       &SecurityAttributes,
                                                       v26[1],
                                                       HIDWORD(v26[1]),
                                                       v26[2],
                                                       HIDWORD(v26[2]),
                                                       v26[3]),
          hObject = v8,
          v8 == (struct _RTL_CRITICAL_SECTION_DEBUG *)-1) )
    {
      v9 = (int)*(&dword_4B7B38 + (*a2 >> 6));
      *(_BYTE *)(v9 + 56 * (*a2 & 0x3F) + 40) &= ~1u;
      LastError = GetLastError();
      sub_46B94E(LastError);
      return *sub_46B984();
    }
  }
  FileType = GetFileType(v8);
  if ( !FileType )
  {
    v12 = GetLastError();
    sub_46B94E(v12);
    v13 = *a2 >> 6;
    v14 = 56 * (*a2 & 0x3F);
    HIDWORD(v26[3]) = v8;
    *((_BYTE *)&(*(&dword_4B7B38 + v13))[1].LockSemaphore + v14) &= ~1u;
    CloseHandle((HANDLE)HIDWORD(v26[3]));
    if ( !v12 )
      *sub_46B984() = 13;
    return *sub_46B984();
  }
  if ( FileType == 2 )
  {
    v15 = LOBYTE(v28[0]) | 0x40;
  }
  else
  {
    v16 = FileType == 3;
    v15 = v28[0];
    if ( v16 )
      v15 = LOBYTE(v28[0]) | 8;
  }
  HIDWORD(v26[3]) = v8;
  LODWORD(v26[3]) = *a2;
  v32 = v15;
  sub_47346B(v26[3], v8);
  v17 = *a2;
  v32 |= 1u;
  LOBYTE(v28[0]) = v32;
  *((_BYTE *)&(*(&dword_4B7B38 + (v17 >> 6)))[1].LockSemaphore + 56 * (v17 & 0x3F)) = v32;
  *((_BYTE *)&(*(&dword_4B7B38 + (*a2 >> 6)))[1].LockSemaphore + 56 * (*a2 & 0x3F) + 1) = 0;
  if ( (dwShareMode & 2) != 0 )
  {
    v18 = sub_472B94((int)a2, (int)v8, *a2);
    if ( v18 )
    {
      HIDWORD(v26[3]) = *a2;
LABEL_22:
      sub_47325E((int)a2, SHIDWORD(v26[3]));
      return v18;
    }
  }
  v31 = 0;
  v26[3] = __PAIR64__(&v31, dwShareMode);
  v25 = *a2;
  qmemcpy(v26, v28, 0x18u);
  v18 = sub_472732(v25, v26[0], HIDWORD(v26[0]), v26[1], SHIDWORD(v26[1]), v26[2], SHIDWORD(v26[2]), dwShareMode, &v31);
  if ( v18 )
  {
    HIDWORD(v26[3]) = *a2;
    goto LABEL_22;
  }
  *((_BYTE *)&(*(&dword_4B7B38 + (*a2 >> 6)))[1].LockSemaphore + 56 * (*a2 & 0x3F) + 1) = v31;
  v19 = (int)*(&dword_4B7B38 + (*a2 >> 6));
  *(_BYTE *)(v19 + 56 * (*a2 & 0x3F) + 45) ^= (*(_BYTE *)(v19 + 56 * (*a2 & 0x3F) + 45) ^ BYTE2(dwShareMode)) & 1;
  if ( (v32 & 0x48) == 0 && (dwShareMode & 8) != 0 )
  {
    v20 = (int)*(&dword_4B7B38 + (*a2 >> 6));
    *(_BYTE *)(v20 + 56 * (*a2 & 0x3F) + 40) |= 0x20u;
  }
  v21 = v28[1];
  if ( (v28[1] & 0xC0000000) == 0xC0000000 && (dwShareMode & 1) != 0 )
  {
    CloseHandle(hObject);
    v28[1] = v21 & 0x7FFFFFFF;
    qmemcpy(&v26[1], v28, 0x18u);
    v22 = sub_472985(lpFileName, &SecurityAttributes, v26[1], HIDWORD(v26[1]), v26[2], HIDWORD(v26[2]), v26[3]);
    if ( v22 == (HANDLE)-1 )
    {
      v23 = GetLastError();
      sub_46B94E(v23);
      v24 = (int)*(&dword_4B7B38 + (*a2 >> 6));
      *(_BYTE *)(v24 + 56 * (*a2 & 0x3F) + 40) &= ~1u;
      sub_473633(*a2);
      return *sub_46B984();
    }
    *((_DWORD *)&(*(&dword_4B7B38 + (*a2 >> 6)))[1].DebugInfo + 14 * (*a2 & 0x3F)) = v22;
  }
  return 0;
}
