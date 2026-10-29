/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000DBB0
// Address: 0x000000014000DBB0

//----- (000000014000DBB0) ----------------------------------------------------
__int64 __fastcall sub_14000DBB0(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  int v6; // r14d
  __int64 *v7; // rdx
  __int64 *v8; // rax
  __int64 *i; // rcx
  __int64 *v10; // rdi
  void *v11; // rdi
  BOOL ProcessMemory; // eax
  DWORD LastError; // eax
  size_t v14; // r15
  void *v15; // rax
  SIZE_T v16; // r15
  void *v17; // r12
  size_t v18; // rsi
  _QWORD *v19; // r15
  const char *v20; // rsi
  void *v21; // rdi
  BOOL v22; // eax
  DWORD v23; // eax
  _QWORD *v24; // rdi
  unsigned int v25; // ebx
  DWORD flOldProtect; // [rsp+30h] [rbp-D0h] BYREF
  SIZE_T NumberOfBytesRead[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD *v29; // [rsp+48h] [rbp-B8h]
  size_t Size[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  _QWORD *v32; // [rsp+68h] [rbp-98h]
  struct _MEMORY_BASIC_INFORMATION v33; // [rsp+70h] [rbp-90h] BYREF
  size_t v34; // [rsp+A0h] [rbp-60h]
  __int128 v35; // [rsp+A8h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  void *v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  void *v41; // [rsp+E8h] [rbp-18h]
  __int128 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  __int128 v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+20h]
  _DWORD Buffer[12]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v47; // [rsp+160h] [rbp+60h]
  struct _MEMORY_BASIC_INFORMATION v48; // [rsp+168h] [rbp+68h] BYREF
  struct __crt_locale_pointers Src[64]; // [rsp+1A0h] [rbp+A0h] BYREF

  v29 = a4;
  v32 = a3;
  v6 = 0;
  v7 = *(__int64 **)(a1 + 1088);
  v8 = (__int64 *)v7[1];
  for ( i = v7; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
  {
    if ( *((_DWORD *)v8 + 8) >= a2 )
      i = v8;
    else
      v8 += 2;
  }
  if ( *((_BYTE *)i + 25) || a2 < *((_DWORD *)i + 8) )
    i = v7;
  v10 = nullptr;
  if ( i != v7 )
    v10 = i + 5;
  if ( !v10 )
    return 0;
  v11 = (void *)(*(_QWORD *)(a1 + 24) & v10[1]);
  if ( *(_QWORD *)(a1 + 792) == -1 )
    return 0;
  NumberOfBytesRead[0] = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    ProcessMemory = ReadProcessMemory(*(HANDLE *)(a1 + 792), v11, Buffer, 0x38u, NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( ProcessMemory )
      goto LABEL_26;
    LastError = GetLastError();
    if ( LastError == 998 )
    {
      NumberOfBytesRead[0] = 0;
    }
    else if ( LastError != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v11);
      goto LABEL_26;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v11, &v48, 0x30u) )
    {
      NumberOfBytesRead[0] = 0;
      goto LABEL_26;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, 0x38u, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v11, 56, "read");
      goto LABEL_26;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v11, 0x38u, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v11);
LABEL_26:
  if ( NumberOfBytesRead[0] != 56 || (void *)(v47 & *(_QWORD *)(a1 + 24)) != v11 )
    return 0;
  sub_14005B0A0(Src, 1024, "TIB[%08X]", a2);
  *(_OWORD *)Size = 0;
  v31 = 0;
  v14 = strlen((const char *)Src);
  v15 = nullptr;
  if ( v14 != -1 )
  {
    v15 = sub_14005ABE0((__int64)Size, nullptr, v14 + 1, 1u);
    Size[0] = (size_t)v15;
  }
  Size[1] = v14 + 1;
  memcpy(v15, Src, v14);
  *(_BYTE *)(Size[0] + v14) = 0;
  v38 = a1;
  v39 = v11;
  v16 = (unsigned int)dword_1400C6038;
  v40 = (unsigned int)dword_1400C6038;
  v17 = nullptr;
  v41 = nullptr;
  v42 = 0;
  v18 = Size[1];
  if ( Size[1] )
  {
    v17 = sub_14005AAA0(Size[1]);
    v41 = v17;
    *((_QWORD *)&v42 + 1) = v18;
    memcpy(v17, (const void *)Size[0], v18);
    *(_QWORD *)&v42 = v18;
  }
  else
  {
    v18 = v42;
  }
  v43 = 0;
  v44 = 0;
  v45 = 0;
  if ( Size[0] )
  {
    Size[1] = 0;
    j_free((void *)Size[0]);
    Size[0] = 0;
    v31 = 0;
  }
  v33.BaseAddress = v11;
  v33.AllocationBase = (PVOID)a1;
  *(_QWORD *)&v33.AllocationProtect = v11;
  v33.RegionSize = v16;
  *(_OWORD *)&v33.State = 0;
  v34 = 0;
  if ( v18 )
  {
    *(_QWORD *)&v33.State = sub_14005AAA0(v18);
    v34 = v18;
    memcpy(*(void **)&v33.State, v17, v18);
    *(_QWORD *)&v33.Type = v18;
  }
  v35 = 0;
  v36 = 0;
  v37 = v45;
  v19 = v32;
  sub_140009E20(v32, (__int64)NumberOfBytesRead, (__int64)&v33);
  if ( *(_QWORD *)&v33.State )
    j_free(*(void **)&v33.State);
  v20 = pNodeName;
  if ( (unsigned int)sub_14001DA00(a1) != 1 )
  {
    v24 = v29;
    goto LABEL_59;
  }
  v21 = (void *)Buffer[0];
  if ( *(_QWORD *)(a1 + 792) == -1 )
  {
    v24 = v29;
LABEL_57:
    v20 = "x64";
    goto LABEL_59;
  }
  NumberOfBytesRead[0] = 0;
  flOldProtect = -1;
  while ( 1 )
  {
    v22 = ReadProcessMemory(*(HANDLE *)(a1 + 792), v21, &v48, 0x1Cu, NumberOfBytesRead);
    if ( flOldProtect != -1 )
      break;
    if ( v22 )
      goto LABEL_54;
    v23 = GetLastError();
    if ( v23 == 998 )
    {
      NumberOfBytesRead[0] = 0;
    }
    else if ( v23 != 299 )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"%sProcessMemory(%p)", "Read", v21);
      goto LABEL_54;
    }
    if ( !VirtualQueryEx(*(HANDLE *)(a1 + 792), v21, &v33, 0x30u) )
    {
      NumberOfBytesRead[0] = 0;
      goto LABEL_54;
    }
    if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v21, 0x1Cu, 0x20u, &flOldProtect) )
    {
      sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx1(%08p, size=%d for %s)", v21, 28, "read");
      goto LABEL_54;
    }
  }
  if ( !VirtualProtectEx(*(HANDLE *)(a1 + 792), v21, 0x1Cu, flOldProtect, &flOldProtect) )
    sub_140043190(a1, (struct __crt_locale_pointers *)"VirtualProtectEx2(%p)", v21);
LABEL_54:
  v24 = v29;
  if ( NumberOfBytesRead[0] != 28 )
    goto LABEL_57;
  v33.AllocationBase = (PVOID)HIDWORD(v48.BaseAddress);
  *(_QWORD *)&v33.AllocationProtect = LODWORD(v48.AllocationBase);
  v6 = sub_140011DF0(a1, a2, v19, v29, (__int64)&v33, pNodeName);
  v20 = "x64";
LABEL_59:
  v25 = sub_140011DF0(a1, a2, v19, v24, (__int64)Buffer, v20) + v6;
  if ( v17 )
    j_free(v17);
  return v25;
}
// 1400C6038: using guessed type int dword_1400C6038;
