/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C190
// Address: 0x0040C190

//----- (0040C190) --------------------------------------------------------
SIZE_T __userpurge sub_40C190@<eax>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        LPVOID lpBaseAddress,
        void *lpBuffer,
        SIZE_T nSize,
        unsigned __int8 a6,
        char a7)
{
  BOOL v10; // eax
  bool v11; // cl
  DWORD LastError; // eax
  const char *v13; // eax
  const char *v14; // eax
  void *v15; // [esp-20h] [ebp-48h]
  SIZE_T NumberOfBytesWritten; // [esp+4h] [ebp-24h] BYREF
  DWORD flOldProtect; // [esp+8h] [ebp-20h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+Ch] [ebp-1Ch] BYREF
  bool nSizea; // [esp+34h] [ebp+Ch]

  if ( *(_DWORD *)(a1 + 452) == -1 )
    return -1;
  if ( a7 )
    sub_416D20((int **)a1, 0);
  NumberOfBytesWritten = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    v15 = *(void **)(a1 + 452);
    v10 = a6
        ? WriteProcessMemory(v15, lpBaseAddress, lpBuffer, nSize, &NumberOfBytesWritten)
        : ReadProcessMemory(v15, lpBaseAddress, lpBuffer, nSize, &NumberOfBytesWritten);
    v11 = v10;
    nSizea = v10;
    if ( flOldProtect != -1 )
      break;
    if ( v10 )
      goto LABEL_26;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesWritten = 0;
    }
    else if ( LastError != 299 )
    {
      v13 = "Write";
      if ( !a6 )
        v13 = "Read";
      sub_43C950(a2, a1, (int)"%sProcessMemory(%p)", v13, lpBaseAddress);
      goto LABEL_25;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 452), lpBaseAddress, &Buffer, 0x1Cu) )
    {
      NumberOfBytesWritten = 0;
      goto LABEL_25;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 452), lpBaseAddress, nSize, 32 * (a6 + 1), &flOldProtect) )
    {
      v14 = "write";
      if ( !a6 )
        v14 = "read";
      sub_43C950(a2, a1, (int)"VirtualProtectEx1(%08p, size=%d for %s)", lpBaseAddress, nSize, v14);
      goto LABEL_25;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 452), lpBaseAddress, nSize, flOldProtect, &flOldProtect) )
    sub_43C950(a2, a1, (int)"VirtualProtectEx2(%p)", lpBaseAddress);
LABEL_25:
  v11 = nSizea;
LABEL_26:
  if ( a6 && v11 )
    FlushInstructionCache(*(HANDLE *)(a1 + 452), lpBaseAddress, nSize);
  if ( a7 )
    sub_4161F0((int **)a1, 0);
  return NumberOfBytesWritten;
}
