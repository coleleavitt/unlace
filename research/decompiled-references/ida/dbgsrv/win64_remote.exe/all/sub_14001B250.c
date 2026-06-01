/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001B250
// Address: 0x000000014001B250

//----- (000000014001B250) ----------------------------------------------------
char __fastcall sub_14001B250(__int64 a1, __int64 a2, void *a3)
{
  double v3; // xmm2_8
  int v7; // eax
  SIZE_T v8; // r15
  void *v9; // rbx
  const void *v10; // r12
  int v11; // eax
  BOOL v12; // eax
  BOOL v13; // esi
  DWORD LastError; // eax
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+30h] [rbp-68h] BYREF
  DWORD flOldProtect; // [rsp+A8h] [rbp+10h] BYREF
  SIZE_T NumberOfBytesWritten; // [rsp+B0h] [rbp+18h] BYREF

  sub_140011CE0(a1, (_QWORD *)a2, -1);
  *(_QWORD *)(a2 + 40) = a3;
  v7 = sub_14001AC00(a1, a3);
  if ( !v7 )
    goto LABEL_24;
  if ( v7 != 2 )
  {
    v8 = *(unsigned int *)(a1 + 392);
    v9 = *(void **)(a2 + 40);
    v10 = *(const void **)(a1 + 384);
    if ( *(_QWORD *)(a1 + 792) == -1 )
    {
      v11 = -1;
    }
    else
    {
      NumberOfBytesWritten = 0;
      flOldProtect = -1;
      while ( 1 )
      {
        v12 = WriteProcessMemory(*(HANDLE *)(a1 + 792), v9, v10, v8, &NumberOfBytesWritten);
        v13 = v12;
        if ( flOldProtect != -1 )
          break;
        if ( v12 )
          goto LABEL_19;
        LastError = GetLastError();
        if ( LastError == 998 )
        {
          NumberOfBytesWritten = 0;
        }
        else if ( LastError != 299 )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Write", v9);
          goto LABEL_20;
        }
        if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v9, &Buffer, 0x30u) )
        {
          NumberOfBytesWritten = 0;
          goto LABEL_20;
        }
        if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v9, v8, 0x40u, &flOldProtect) )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v9, v8, "write");
          goto LABEL_20;
        }
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v9, v8, flOldProtect, &flOldProtect) )
        sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v9);
      if ( v13 )
LABEL_19:
        FlushInstructionCache(*(HANDLE *)(a1 + 792), v9, v8);
LABEL_20:
      v11 = NumberOfBytesWritten;
    }
    if ( v11 <= 0 )
      goto LABEL_24;
    if ( v11 != (_DWORD)v8 )
    {
      sub_14001A850(a1, *(void **)(a2 + 40), 0);
LABEL_24:
      sub_140043130(
        a1,
        (struct __crt_locale_pointers *)"%a: set_thread_bpt() failed to pause thread %d\n",
        v3,
        *(_DWORD *)(a2 + 32));
      *(_QWORD *)(a2 + 40) = -1;
      return 0;
    }
  }
  return 1;
}
// 14001B47A: variable 'v3' is possibly undefined
