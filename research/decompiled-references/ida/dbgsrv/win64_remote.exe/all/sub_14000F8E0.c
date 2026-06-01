/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000F8E0
// Address: 0x000000014000F8E0

//----- (000000014000F8E0) ----------------------------------------------------
__int64 __fastcall sub_14000F8E0(__int64 a1, int a2, void *a3, const void *a4, unsigned int nSize)
{
  double v5; // xmm2_8
  bool v6; // zf
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 i; // rcx
  unsigned __int64 v15; // r8
  SIZE_T v16; // r12
  unsigned int v17; // r15d
  SIZE_T v18; // r14
  SIZE_T v19; // rax
  BOOL v20; // eax
  DWORD LastError; // eax
  BOOL v22; // eax
  BOOL v23; // edi
  DWORD v24; // eax
  _QWORD *v25; // rax
  _QWORD *v26; // rbx
  void *j; // rdi
  __int64 **v28; // rdx
  __int64 k; // rax
  __int64 *m; // rdx
  DWORD flOldProtect; // [rsp+30h] [rbp-61h] BYREF
  SIZE_T NumberOfBytesRead; // [rsp+38h] [rbp-59h] BYREF
  LPCVOID lpBuffer; // [rsp+40h] [rbp-51h]
  struct _MEMORY_BASIC_INFORMATION v35; // [rsp+48h] [rbp-49h] BYREF
  __int64 Buffer[2]; // [rsp+80h] [rbp-11h] BYREF

  v6 = *(_QWORD *)(a1 + 376) == 0;
  lpBuffer = a4;
  if ( v6 && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  if ( a4 )
  {
    v11 = *(_QWORD *)(a1 + 408);
    v12 = v11;
    v13 = *(_QWORD *)(v11 + 8);
    for ( i = v13; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
    {
      v15 = *(_QWORD *)(i + 32);
      if ( v15 >= (unsigned __int64)a3 )
      {
        if ( *(_BYTE *)(v12 + 25) && (unsigned __int64)a3 < v15 )
          v12 = i;
        v11 = i;
      }
      else
      {
        i += 16;
      }
    }
    if ( !*(_BYTE *)(v12 + 25) )
      v13 = *(_QWORD *)v12;
    while ( !*(_BYTE *)(v13 + 25) )
    {
      if ( (unsigned __int64)a3 >= *(_QWORD *)(v13 + 32) )
      {
        v13 = *(_QWORD *)(v13 + 16);
      }
      else
      {
        v12 = v13;
        v13 = *(_QWORD *)v13;
      }
    }
    Buffer[1] = v12;
    Buffer[0] = v11;
    sub_14000C530((_QWORD *)(a1 + 408), Buffer);
    sub_14001BC80(a1, 0);
    v16 = *(unsigned int *)(a1 + 392);
    v17 = 0;
    v18 = -1;
    if ( *(_QWORD *)(a1 + 792) == -1 )
    {
      v19 = -1;
    }
    else
    {
      NumberOfBytesRead = 0;
      flOldProtect = -1;
      while ( 1 )
      {
        v20 = ReadProcessMemory(*(HANDLE *)(a1 + 792), a3, Buffer, v16, &NumberOfBytesRead);
        if ( flOldProtect != -1 )
          break;
        if ( v20 )
          goto LABEL_35;
        LastError = GetLastError();
        if ( LastError == 998 )
        {
          NumberOfBytesRead = 0;
        }
        else if ( LastError != 299 )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", a3);
          goto LABEL_35;
        }
        if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a3, &v35, 0x30u) )
        {
          NumberOfBytesRead = 0;
          goto LABEL_35;
        }
        if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a3, v16, 0x20u, &flOldProtect) )
        {
          sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", a3, v16, "read");
          goto LABEL_35;
        }
      }
      if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a3, v16, flOldProtect, &flOldProtect) )
        sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a3);
LABEL_35:
      v19 = NumberOfBytesRead;
    }
    if ( v19 == (int)v16 && !memcmp(Buffer, *(const void **)(a1 + 384), (int)v16) )
    {
      if ( *(_QWORD *)(a1 + 792) != -1 )
      {
        NumberOfBytesRead = 0;
        flOldProtect = -1;
        while ( 1 )
        {
          v22 = WriteProcessMemory(*(HANDLE *)(a1 + 792), a3, lpBuffer, nSize, &NumberOfBytesRead);
          v23 = v22;
          if ( flOldProtect != -1 )
            break;
          if ( v22 )
            goto LABEL_53;
          v24 = GetLastError();
          if ( v24 == 998 )
          {
            NumberOfBytesRead = 0;
          }
          else if ( v24 != 299 )
          {
            sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Write", a3);
            LOBYTE(v17) = NumberOfBytesRead == nSize;
            goto LABEL_59;
          }
          if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), a3, &v35, 0x30u) )
          {
            NumberOfBytesRead = 0;
            LOBYTE(v17) = nSize == 0;
            goto LABEL_59;
          }
          if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a3, nSize, 0x40u, &flOldProtect) )
          {
            sub_140043190(
              a1,
              (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)",
              a3,
              nSize,
              "write");
            LOBYTE(v17) = NumberOfBytesRead == nSize;
            goto LABEL_59;
          }
        }
        if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), a3, nSize, flOldProtect, &flOldProtect) )
          sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", a3);
        if ( v23 )
LABEL_53:
          FlushInstructionCache(*(HANDLE *)(a1 + 792), a3, nSize);
        v18 = NumberOfBytesRead;
      }
      LOBYTE(v17) = v18 == nSize;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 1193) )
        sub_140012410(a1, (struct __crt_locale_pointers *)"%a: breakpoint vanished from memory\n", v5);
      v17 = 1;
    }
LABEL_59:
    v25 = *(_QWORD **)(a1 + 1088);
    v26 = (_QWORD *)*v25;
    if ( (_QWORD *)*v25 != v25 )
    {
      do
      {
        for ( j = (void *)v26[5]; *((int *)v26 + 19) > 0; --*((_DWORD *)v26 + 19) )
          ResumeThread(j);
        v28 = (__int64 **)v26[2];
        if ( *((_BYTE *)v28 + 25) )
        {
          for ( k = v26[1]; !*(_BYTE *)(k + 25); k = *(_QWORD *)(k + 8) )
          {
            if ( v26 != *(_QWORD **)(k + 16) )
              break;
            v26 = (_QWORD *)k;
          }
          v26 = (_QWORD *)k;
        }
        else
        {
          v26 = (_QWORD *)v26[2];
          for ( m = *v28; !*((_BYTE *)m + 25); m = (__int64 *)*m )
            v26 = m;
        }
      }
      while ( v26 != *(_QWORD **)(a1 + 1088) );
    }
    return v17;
  }
  else if ( sub_1400436A0((_QWORD *)a1, (unsigned __int64)a3, a2) )
  {
    return 1;
  }
  else
  {
    return (unsigned __int8)sub_140052060((__int64 *)a1, (__int64)a3, a2);
  }
}
// 14000FCDF: variable 'v5' is possibly undefined
// 1400CB61C: using guessed type char byte_1400CB61C;
