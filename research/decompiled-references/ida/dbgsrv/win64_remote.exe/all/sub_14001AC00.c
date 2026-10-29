/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001AC00
// Address: 0x000000014001AC00

//----- (000000014001AC00) ----------------------------------------------------
__int64 __fastcall sub_14001AC00(__int64 a1, void *a2)
{
  _QWORD *v4; // r15
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 i; // rcx
  SIZE_T v9; // rbp
  SIZE_T v10; // rax
  BOOL ProcessMemory; // eax
  DWORD LastError; // eax
  __int64 v13; // rbx
  __int64 *v14; // rsi
  _BYTE *v15; // r8
  _BOOL8 v16; // rdx
  __int64 *v17; // r9
  __int64 *v18; // rax
  _QWORD *v19; // rax
  DWORD flOldProtect[4]; // [rsp+30h] [rbp-88h] BYREF
  SIZE_T NumberOfBytesRead[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _MEMORY_BASIC_INFORMATION v22; // [rsp+50h] [rbp-68h] BYREF
  __int64 Buffer; // [rsp+80h] [rbp-38h] BYREF

  v4 = (_QWORD *)(a1 + 1072);
  v5 = *(_QWORD *)(a1 + 1072);
  v6 = *(_QWORD *)(v5 + 8);
  for ( i = v5; !*(_BYTE *)(v6 + 25); v6 = *(_QWORD *)v6 )
  {
    if ( *(_QWORD *)(v6 + 32) >= (unsigned __int64)a2 )
      i = v6;
    else
      v6 += 16LL;
  }
  if ( *(_BYTE *)(i + 25) || (unsigned __int64)a2 < *(_QWORD *)(i + 32) || i == v5 )
  {
    LODWORD(Buffer) = 1;
    v9 = *(unsigned int *)(a1 + 392);
    if ( *(_QWORD *)(a1 + 792) == -1 )
    {
      v10 = -1;
    }
    else
    {
      NumberOfBytesRead[0] = 0;
      flOldProtect[0] = -1;
      while ( 1 )
      {
        ProcessMemory = ReadProcessMemory(*(HANDLE *)(a1 + 792), a2, (char *)&Buffer + 4, v9, NumberOfBytesRead);
        if ( flOldProtect[0] != -1 )
          break;
        if ( ProcessMemory )
          goto LABEL_25;
        LastError = GetLastError();
        if ( LastError == 998 )
        {
          NumberOfBytesRead[0] = 0;
        }
        else if ( LastError != 299 )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", a2);
          goto LABEL_25;
        }
        if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a2, &v22, 0x30u) )
        {
          NumberOfBytesRead[0] = 0;
          goto LABEL_25;
        }
        if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v9, 0x20u, flOldProtect) )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", a2, v9, "read");
          goto LABEL_25;
        }
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v9, flOldProtect[0], flOldProtect) )
        sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a2);
LABEL_25:
      v10 = NumberOfBytesRead[0];
    }
    if ( v10 == (int)v9 )
    {
      v13 = Buffer;
      v14 = (__int64 *)*v4;
      v15 = *(_BYTE **)(*v4 + 8LL);
      v16 = 0;
      v17 = (__int64 *)*v4;
      if ( !v15[25] )
      {
        v18 = *(__int64 **)(*v4 + 8LL);
        do
        {
          v15 = v18;
          i = v18[4];
          if ( i >= (unsigned __int64)a2 )
            v17 = v18;
          else
            v18 += 2;
          v16 = i >= (unsigned __int64)a2;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
      v22.BaseAddress = v15;
      LODWORD(v22.AllocationBase) = v16;
      if ( *((_BYTE *)v17 + 25) || (unsigned __int64)a2 < v17[4] )
      {
        if ( v4[1] == 0x555555555555555LL )
          unknown_libname_1(i, v16);
        NumberOfBytesRead[0] = (SIZE_T)v4;
        NumberOfBytesRead[1] = 0;
        v19 = operator new(0x30u);
        v19[4] = a2;
        v19[5] = v13;
        *v19 = v14;
        v19[1] = v14;
        v19[2] = v14;
        *((_WORD *)v19 + 12) = 0;
        *(_OWORD *)NumberOfBytesRead = *(_OWORD *)&v22.BaseAddress;
        sub_140003FC0(v4, (__int64)NumberOfBytesRead, (__int64)v19);
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    ++*(_DWORD *)(i + 40);
    return 2;
  }
}
// 14001AEDD: variable 'i' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
