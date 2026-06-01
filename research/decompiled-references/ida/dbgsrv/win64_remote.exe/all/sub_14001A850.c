/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A850
// Address: 0x000000014001A850

//----- (000000014001A850) ----------------------------------------------------
void __fastcall sub_14001A850(__int64 a1, void *a2, char a3)
{
  _QWORD *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 i; // rbx
  SIZE_T v10; // r15
  SIZE_T v11; // rax
  BOOL v12; // eax
  BOOL v13; // ebp
  DWORD LastError; // eax
  __int64 v15; // rax
  __int64 **v16; // r8
  __int64 j; // rcx
  __int64 *k; // r8
  void *v19; // rax
  _QWORD *v20; // [rsp+30h] [rbp-78h]
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+38h] [rbp-70h] BYREF
  DWORD flOldProtect; // [rsp+B0h] [rbp+8h] BYREF
  SIZE_T NumberOfBytesWritten; // [rsp+C8h] [rbp+20h] BYREF

  v5 = (_QWORD *)(a1 + 1072);
  v20 = (_QWORD *)(a1 + 1072);
  v6 = *(_QWORD *)(a1 + 1072);
  v7 = *(_QWORD *)(v6 + 8);
  for ( i = v6; !*(_BYTE *)(v7 + 25); v7 = *(_QWORD *)v7 )
  {
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)a2 )
      i = v7;
    else
      v7 += 16;
  }
  if ( *(_BYTE *)(i + 25) || (unsigned __int64)a2 < *(_QWORD *)(i + 32) || i == v6 )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(1488);
  }
  if ( (*(_DWORD *)(i + 40))-- == 1 )
  {
    if ( a3 )
    {
      v10 = *(unsigned int *)(a1 + 392);
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
          v12 = WriteProcessMemory(*(HANDLE *)(a1 + 792), a2, (LPCVOID)(i + 44), v10, &NumberOfBytesWritten);
          v13 = v12;
          if ( flOldProtect != -1 )
            break;
          if ( v12 )
            goto LABEL_27;
          LastError = GetLastError();
          if ( LastError == 998 )
          {
            NumberOfBytesWritten = 0;
          }
          else if ( LastError != 299 )
          {
            sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Write", a2);
            goto LABEL_28;
          }
          if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a2, &Buffer, 0x30u) )
          {
            NumberOfBytesWritten = 0;
            goto LABEL_28;
          }
          if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v10, 0x40u, &flOldProtect) )
          {
            sub_140043190(
              a1,
              (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)",
              a2,
              v10,
              "write");
            goto LABEL_28;
          }
        }
        if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a2, v10, flOldProtect, &flOldProtect) )
          sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a2);
        if ( v13 )
LABEL_27:
          FlushInstructionCache(*(HANDLE *)(a1 + 792), a2, v10);
LABEL_28:
        v11 = NumberOfBytesWritten;
        v5 = v20;
      }
      if ( v11 != (int)v10 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(1489);
      }
    }
    v15 = i;
    v16 = *(__int64 ***)(i + 16);
    if ( *((_BYTE *)v16 + 25) )
    {
      for ( j = *(_QWORD *)(i + 8); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
      {
        if ( v15 != *(_QWORD *)(j + 16) )
          break;
        v15 = j;
      }
    }
    else
    {
      for ( k = *v16; !*((_BYTE *)k + 25); k = (__int64 *)*k )
        ;
    }
    v19 = (void *)sub_14000C8A0(v5, i);
    j_j_free(v19);
  }
}
// 1400CB61C: using guessed type char byte_1400CB61C;
