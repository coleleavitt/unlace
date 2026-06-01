/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400116A0
// Address: 0x00000001400116A0

//----- (00000001400116A0) ----------------------------------------------------
__int64 __fastcall sub_1400116A0(__int64 a1, __int64 *a2, unsigned int a3, DWORD a4)
{
  __int64 result; // rax
  void *v9; // r12
  __int64 *v10; // r14
  __int64 *v11; // rax
  __int64 *i; // rdi
  __int64 *v13; // rsi
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  void *v18; // rdi
  BOOL v19; // eax
  DWORD LastError; // eax
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // ebx
  SIZE_T NumberOfBytesRead; // [rsp+30h] [rbp-41h] BYREF
  _BYTE v25[2]; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int16 v26; // [rsp+3Ah] [rbp-37h]
  unsigned __int8 v27; // [rsp+3Ch] [rbp-35h]
  unsigned __int8 v28; // [rsp+3Fh] [rbp-32h]
  _BYTE SelectorEntry[2]; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int16 v30; // [rsp+42h] [rbp-2Fh]
  unsigned __int8 v31; // [rsp+44h] [rbp-2Dh]
  unsigned __int8 v32; // [rsp+47h] [rbp-2Ah]
  __int64 Buffer; // [rsp+48h] [rbp-29h] BYREF
  void *Block[2]; // [rsp+50h] [rbp-21h] BYREF
  __int128 v35; // [rsp+60h] [rbp-11h]
  struct _MEMORY_BASIC_INFORMATION v36; // [rsp+70h] [rbp-1h] BYREF
  DWORD flOldProtect; // [rsp+D0h] [rbp+5Fh] BYREF

  if ( !*(_QWORD *)(a1 + 376) && (*(_DWORD *)(a1 + 632) & 0x80000) != 0 && sub_14005C830() )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(30191);
  }
  result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 624LL))(a1, a3);
  v9 = (void *)result;
  if ( result != -1 )
  {
    v10 = *(__int64 **)(a1 + 1088);
    v11 = (__int64 *)v10[1];
    for ( i = v10; !*((_BYTE *)v11 + 25); v11 = (__int64 *)*v11 )
    {
      if ( *((_DWORD *)v11 + 8) >= a3 )
        i = v11;
      else
        v11 += 2;
    }
    if ( *((_BYTE *)i + 25) || a3 < *((_DWORD *)i + 8) )
      i = *(__int64 **)(a1 + 1088);
    v13 = nullptr;
    if ( i != v10 )
      v13 = i + 5;
    *(_OWORD *)Block = 0;
    v35 = 0;
    if ( !v13 || !sub_140019680(v13, (__int64)Block, 2) )
      goto LABEL_50;
    v14 = *(unsigned __int16 *)(*((_QWORD *)&v35 + 1) + 64LL);
    if ( a4 == v14 )
    {
      v15 = 48;
      if ( i != v10 )
        v15 = (__int64)(i + 11);
      if ( (*(_BYTE *)v15 & 2) == 0 )
        goto LABEL_25;
    }
    if ( a4 == *(unsigned __int16 *)(*((_QWORD *)&v35 + 1) + 62LL) )
    {
      v16 = 48;
      if ( i != v10 )
        v16 = (__int64)(i + 11);
      if ( (*(_BYTE *)v16 & 2) != 0 )
      {
LABEL_25:
        v17 = 8;
        if ( i != v10 )
          v17 = (__int64)(i + 6);
        v18 = (void *)(*(_QWORD *)(a1 + 24) & *(_QWORD *)v17);
        if ( a4 == v14 )
          goto LABEL_44;
        if ( *(_QWORD *)(a1 + 792) != -1 )
        {
          NumberOfBytesRead = 0;
          flOldProtect = -1;
          while ( 1 )
          {
            v19 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v18, &Buffer, 8u, &NumberOfBytesRead);
            if ( flOldProtect != -1 )
              break;
            if ( v19 )
              goto LABEL_42;
            LastError = GetLastError();
            if ( LastError == 998 )
            {
              NumberOfBytesRead = 0;
            }
            else if ( LastError != 299 )
            {
              sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v18);
              goto LABEL_42;
            }
            if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v18, &v36, 0x30u) )
            {
              NumberOfBytesRead = 0;
              goto LABEL_42;
            }
            if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v18, 8u, 0x20u, &flOldProtect) )
            {
              sub_140043190(
                a1,
                (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)",
                v18,
                8,
                "read");
              goto LABEL_42;
            }
          }
          if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v18, 8u, flOldProtect, &flOldProtect) )
            sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v18);
LABEL_42:
          if ( NumberOfBytesRead == 8 )
          {
            v18 = (void *)(Buffer & *(_QWORD *)(a1 + 24));
LABEL_44:
            *a2 = (__int64)v18;
LABEL_53:
            v23 = 1;
LABEL_54:
            if ( Block[0] )
            {
              Block[1] = nullptr;
              j_free(Block[0]);
            }
            return v23;
          }
        }
LABEL_59:
        v23 = -1;
        goto LABEL_54;
      }
    }
    if ( (v13[6] & 2) != 0 )
    {
      if ( !(unsigned int)qword_1400CAE90(v9, a4, v25) )
      {
LABEL_47:
        if ( GetLastError() == 50 )
        {
          *a2 = 0;
          goto LABEL_53;
        }
        sub_140043190(a1, (struct __crt_locale_pointers *)"GetThreadSelectorEntry");
        goto LABEL_59;
      }
      v21 = v27 | (v28 << 8);
      v22 = v26;
    }
    else
    {
LABEL_50:
      if ( !GetThreadSelectorEntry(v9, a4, SelectorEntry) )
        goto LABEL_47;
      v21 = v31 | (v32 << 8);
      v22 = v30;
    }
    *a2 = v22 | (v21 << 16);
    goto LABEL_53;
  }
  return result;
}
// 1400CAE90: using guessed type __int64 (__fastcall *qword_1400CAE90)(_QWORD, _QWORD, _QWORD);
// 1400CB61C: using guessed type char byte_1400CB61C;
