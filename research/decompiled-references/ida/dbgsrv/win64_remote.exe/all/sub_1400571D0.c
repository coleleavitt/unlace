/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400571D0
// Address: 0x00000001400571D0

//----- (00000001400571D0) ----------------------------------------------------
char *__fastcall sub_1400571D0(unsigned __int16 a1)
{
  __int64 v1; // rbp
  HMODULE LibraryA; // rax
  HMODULE v3; // rsi
  HMODULE v4; // rax
  FARPROC *v5; // rbx
  int v6; // edi
  FARPROC ProcAddress; // rax
  const CHAR *v9; // [rsp+20h] [rbp-268h]
  _QWORD v10[2]; // [rsp+28h] [rbp-260h] BYREF
  __int64 (__fastcall *v11)(struct in_addr *, unsigned int, char *, rsize_t, char *, size_t, char); // [rsp+38h] [rbp-250h]
  const char *v12; // [rsp+40h] [rbp-248h]
  __int64 (__fastcall *v13)(void *); // [rsp+48h] [rbp-240h]
  CHAR LibFileName[272]; // [rsp+50h] [rbp-238h] BYREF
  CHAR Buffer[272]; // [rsp+160h] [rbp-128h] BYREF

  v10[0] = sub_140056B50;
  v1 = a1;
  v10[1] = "getnameinfo";
  v11 = sub_140056FA0;
  v12 = "freeaddrinfo";
  v13 = (__int64 (__fastcall *)(void *))sub_140056B00;
  v9 = "getaddrinfo";
  if ( !dword_1400CB5D4 )
  {
    if ( GetSystemDirectoryA(Buffer, 0x104u) )
    {
      strcpy_s(LibFileName, 0x10Cu, Buffer);
      strcat_s(LibFileName, 0x10Cu, "\\ws2_32");
      LibraryA = LoadLibraryA(LibFileName);
      v3 = LibraryA;
      if ( LibraryA )
      {
        if ( GetProcAddress(LibraryA, "getaddrinfo") )
          goto LABEL_9;
        FreeLibrary(v3);
      }
      strcpy_s(LibFileName, 0x10Cu, Buffer);
      strcat_s(LibFileName, 0x10Cu, "\\wship6");
      v4 = LoadLibraryA(LibFileName);
      v3 = v4;
      if ( v4 )
      {
        if ( !GetProcAddress(v4, "getaddrinfo") )
        {
          FreeLibrary(v3);
          goto LABEL_14;
        }
LABEL_9:
        v5 = (FARPROC *)v10;
        v6 = 0;
        while ( 1 )
        {
          ProcAddress = GetProcAddress(v3, (LPCSTR)*(v5 - 1));
          *v5 = ProcAddress;
          if ( !ProcAddress )
            break;
          ++v6;
          v5 += 2;
          if ( v6 >= 3 )
          {
            off_1400C8730 = (__int64 (__fastcall *)(char *, char *))v10[0];
            off_1400C8740 = v11;
            off_1400C8750 = v13;
            goto LABEL_14;
          }
        }
        FreeLibrary(v3);
      }
    }
LABEL_14:
    dword_1400CB5D4 = 1;
  }
  return (&off_1400C8728)[2 * v1 + 1];
}
// 1400C8728: using guessed type char *off_1400C8728;
// 1400C8730: using guessed type __int64 (__fastcall *off_1400C8730)(char *Source, char *String);
// 1400C8740: using guessed type _UNKNOWN *off_1400C8740;
// 1400C8750: using guessed type __int64 (__fastcall *off_1400C8750)(void *Block);
// 1400CB5D4: using guessed type int dword_1400CB5D4;
