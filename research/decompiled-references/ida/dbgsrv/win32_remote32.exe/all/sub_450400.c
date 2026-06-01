/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450400
// Address: 0x00450400

//----- (00450400) --------------------------------------------------------
int __userpurge sub_450400@<eax>(int a1@<ebx>, int a2@<edi>, unsigned __int16 a3)
{
  HMODULE LibraryA; // eax
  HMODULE v4; // edi
  HMODULE v5; // eax
  int v6; // esi
  FARPROC ProcAddress; // eax
  LPCSTR lpProcName; // [esp+0h] [ebp-230h]
  _DWORD v10[2]; // [esp+4h] [ebp-22Ch]
  int (__stdcall *v11)(int, int, int, int, int, int, int); // [esp+Ch] [ebp-224h]
  const char *v12; // [esp+10h] [ebp-220h]
  void (__stdcall *v13)(LPVOID *); // [esp+14h] [ebp-21Ch]
  CHAR LibFileName[268]; // [esp+18h] [ebp-218h] BYREF
  CHAR Buffer[264]; // [esp+124h] [ebp-10Ch] BYREF

  lpProcName = "getaddrinfo";
  v10[0] = sub_44FE00;
  v10[1] = "getnameinfo";
  v11 = (int (__stdcall *)(int, int, int, int, int, int, int))sub_4501C0;
  v12 = "freeaddrinfo";
  v13 = sub_44FDB0;
  if ( !dword_4B70DC )
  {
    if ( GetSystemDirectoryA(Buffer, 0x104u) )
    {
      sub_46C78C(a1, a2, LibFileName, 268, (int)Buffer);
      sub_46C7E6(a1, a2, LibFileName, 268, (int)"\\ws2_32");
      LibraryA = LoadLibraryA(LibFileName);
      v4 = LibraryA;
      if ( LibraryA )
      {
        if ( GetProcAddress(LibraryA, "getaddrinfo") )
          goto LABEL_8;
        FreeLibrary(v4);
      }
      sub_46C78C((int)GetProcAddress, (int)v4, LibFileName, 268, (int)Buffer);
      sub_46C7E6((int)GetProcAddress, (int)v4, LibFileName, 268, (int)"\\wship6");
      v5 = LoadLibraryA(LibFileName);
      v4 = v5;
      if ( v5 )
      {
        if ( !GetProcAddress(v5, "getaddrinfo") )
        {
LABEL_12:
          FreeLibrary(v4);
          goto LABEL_13;
        }
LABEL_8:
        v6 = 0;
        while ( 1 )
        {
          ProcAddress = GetProcAddress(v4, (LPCSTR)v10[2 * v6 - 1]);
          v10[2 * v6] = ProcAddress;
          if ( !ProcAddress )
            goto LABEL_12;
          if ( ++v6 >= 3 )
          {
            off_4B5098 = (int (__stdcall *)(char *, char *, int, int))v10[0];
            off_4B50A0 = v11;
            off_4B50A8 = (int (__stdcall *)(int))v13;
            break;
          }
        }
      }
    }
LABEL_13:
    dword_4B70DC = 1;
  }
  return (int)*(&off_4B5098 + 2 * a3);
}
// 4B5098: using guessed type int (__stdcall *off_4B5098)(char *cp, char *name, int, int);
// 4B50A0: using guessed type int (__stdcall *off_4B50A0)(int, int, int, int, int, int, int);
// 4B50A8: using guessed type int (__stdcall *off_4B50A8)(int);
// 4B70DC: using guessed type int dword_4B70DC;
