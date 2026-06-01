/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140014CE0
// Address: 0x0000000140014CE0

//----- (0000000140014CE0) ----------------------------------------------------
__int64 __fastcall sub_140014CE0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 BaseAddress; // rsi
  unsigned __int64 v7; // r14
  char v8; // cl
  char v10; // dl
  char v11; // cl
  char v12; // cl
  char v13; // r8
  char v14; // cl
  char v15; // r8
  char v16; // cl
  char v17; // dl
  char v18; // cl
  const char *v19; // rax
  unsigned __int8 *v20; // rcx
  __int64 v21; // r13
  size_t v22; // r15
  void *v23; // rax
  unsigned __int64 v24; // r12
  void *v25; // r15
  void *lpMinimumApplicationAddress; // rsi
  _QWORD *v27; // rax
  size_t v28; // rax
  const char *v29; // rax
  const char *v30; // rsi
  size_t v31; // rax
  const char *v32; // rax
  const char *v33; // rsi
  size_t v34; // rax
  unsigned int Protect; // [rsp+30h] [rbp-D0h] BYREF
  struct _SYSTEM_INFO SystemInfo; // [rsp+38h] [rbp-C8h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  void *v41; // [rsp+B8h] [rbp-48h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  __int128 v43; // [rsp+D0h] [rbp-30h]
  __int128 v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+F0h] [rbp-10h]
  _QWORD v46[4]; // [rsp+100h] [rbp+0h] BYREF
  void *Block[2]; // [rsp+120h] [rbp+20h]
  void *v48; // [rsp+130h] [rbp+30h]
  __int128 v49; // [rsp+138h] [rbp+38h]
  __int128 v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+158h] [rbp+58h]
  _BYTE v52[16]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int8 Src[1024]; // [rsp+170h] [rbp+70h] BYREF

  if ( !qword_1400CAED8 )
  {
    GetSystemInfo(&SystemInfo);
    LODWORD(lpAddress) = SystemInfo.dwAllocationGranularity;
    qword_1400CAED8 = (__int64)SystemInfo.lpMaximumApplicationAddress;
  }
  if ( VirtualQueryEx(*(HANDLE *)(a1 + 792), (LPCVOID)a2, &Buffer, 0x30u) )
  {
LABEL_7:
    BaseAddress = (unsigned __int64)Buffer.BaseAddress;
    v7 = (unsigned __int64)Buffer.BaseAddress + Buffer.RegionSize;
    if ( (char *)Buffer.BaseAddress + Buffer.RegionSize <= Buffer.BaseAddress )
    {
      if ( (char *)Buffer.BaseAddress + Buffer.RegionSize == Buffer.BaseAddress )
      {
        *(_QWORD *)a3 = -1;
        *(_QWORD *)(a3 + 8) = -1;
        return (v7 + 1) & *(_QWORD *)(a1 + 24);
      }
    }
    else if ( v7 < *(_QWORD *)(a1 + 24) )
    {
      goto LABEL_10;
    }
    v7 = -1;
LABEL_10:
    Protect = Buffer.Protect;
    if ( sub_14001E810(a1, (__int64)Buffer.BaseAddress & *(_QWORD *)(a1 + 24), v7 & *(_QWORD *)(a1 + 24), &Protect) )
    {
      sub_140043130(a1, (struct __crt_locale_pointers *)"   masked protect=0x%x\n", Protect);
      v8 = Protect;
      Buffer.Protect = Protect;
    }
    else
    {
      v8 = Buffer.Protect;
    }
    if ( (Buffer.State & 0x12000) == 0x10000 || (v8 & 1) != 0 )
    {
      *(_QWORD *)a3 = -1;
      *(_QWORD *)(a3 + 8) = -1;
      return v7 & *(_QWORD *)(a1 + 24);
    }
    *(_QWORD *)a3 = BaseAddress & *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a3 + 8) = v7 & *(_QWORD *)(a1 + 24);
    *(_BYTE *)(a3 + 72) = ((int)sub_14001DA00(a1) <= 0) + 1;
    v10 = 6;
    v11 = 6;
    if ( (Buffer.Protect & 4) == 0 )
      v11 = 2 * (Buffer.Protect & 2);
    if ( (Buffer.Protect & 8) == 0 )
      v10 = v11;
    v12 = v10 | 1;
    if ( (Buffer.Protect & 0x10) == 0 )
      v12 = v10;
    v13 = v12;
    v14 = v12 | 5;
    if ( (Buffer.Protect & 0x20) == 0 )
      v14 = v13;
    v15 = v14;
    v16 = v14 | 7;
    if ( (Buffer.Protect & 0x40) == 0 )
      v16 = v15;
    v17 = v16;
    v18 = v16 | 7;
    if ( SLOBYTE(Buffer.Protect) >= 0 )
      v18 = v17;
    *(_BYTE *)(a3 + 73) = v18;
    v19 = sub_140014C10(a1, (_QWORD **)(a1 + 928), (unsigned __int64 *)a3);
    if ( v19
      || (v19 = sub_140014C10(a1, (_QWORD **)(a1 + 944), (unsigned __int64 *)a3)) != nullptr
      || (v19 = sub_140014C10(a1, (_QWORD **)(a1 + 960), (unsigned __int64 *)a3)) != nullptr
      || (v19 = sub_140014C10(a1, (_QWORD **)(a1 + 976), (unsigned __int64 *)a3)) != nullptr )
    {
      v20 = (unsigned __int8 *)v19;
    }
    else
    {
      Src[0] = 0;
      sub_140013BB0((_QWORD *)a1, Src, 0x400u, nullptr, 0, *(_QWORD *)a3);
      if ( !Src[0] )
      {
        if ( sub_1400142F0(a1, *(_QWORD *)a3, Src, 0x400u) )
        {
          v21 = (unsigned int)sub_14000E260(a1, *(_QWORD *)a3);
          memset(&SystemInfo, 0, 24);
          v22 = strlen((const char *)Src);
          v23 = nullptr;
          if ( v22 != -1 )
          {
            v23 = sub_14005ABE0((__int64)&SystemInfo, nullptr, v22 + 1, 1u);
            *(_QWORD *)&SystemInfo.dwOemId = v23;
          }
          SystemInfo.lpMinimumApplicationAddress = (LPVOID)(v22 + 1);
          memcpy(v23, Src, v22);
          *(_BYTE *)(*(_QWORD *)&SystemInfo.dwOemId + v22) = 0;
          v38 = a1;
          v24 = *(_QWORD *)a3;
          v39 = *(_QWORD *)a3;
          v40 = v21;
          v25 = nullptr;
          v41 = nullptr;
          v42 = 0;
          lpMinimumApplicationAddress = SystemInfo.lpMinimumApplicationAddress;
          if ( SystemInfo.lpMinimumApplicationAddress )
          {
            v25 = sub_14005AAA0((signed __int64)SystemInfo.lpMinimumApplicationAddress);
            v41 = v25;
            *((_QWORD *)&v42 + 1) = lpMinimumApplicationAddress;
            memcpy(v25, *(const void **)&SystemInfo.dwOemId, (size_t)lpMinimumApplicationAddress);
            *(_QWORD *)&v42 = lpMinimumApplicationAddress;
          }
          else
          {
            lpMinimumApplicationAddress = (void *)v42;
          }
          v43 = 0;
          v44 = 0;
          v45 = 0;
          if ( *(_QWORD *)&SystemInfo.dwOemId )
          {
            SystemInfo.lpMinimumApplicationAddress = nullptr;
            j_free(*(void **)&SystemInfo.dwOemId);
            *(_QWORD *)&SystemInfo.dwOemId = 0;
            SystemInfo.lpMaximumApplicationAddress = nullptr;
          }
          v27 = (_QWORD *)(a1 + 960);
          v46[0] = v24;
          v46[1] = a1;
          v46[2] = v24;
          v46[3] = v21;
          *(_OWORD *)Block = 0;
          v48 = nullptr;
          if ( lpMinimumApplicationAddress )
          {
            Block[0] = sub_14005AAA0((signed __int64)lpMinimumApplicationAddress);
            v48 = lpMinimumApplicationAddress;
            memcpy(Block[0], v25, (size_t)lpMinimumApplicationAddress);
            Block[1] = lpMinimumApplicationAddress;
            v27 = (_QWORD *)(a1 + 960);
          }
          v49 = 0;
          v50 = 0;
          v51 = v45;
          sub_140009E20(v27, (__int64)v52, (__int64)v46);
          if ( Block[0] )
            j_free(Block[0]);
          v28 = strlen((const char *)Src);
          if ( v28 )
            sub_140001810(a3 + 16, Src, v28);
          else
            *(_QWORD *)(a3 + 24) = 0;
          if ( v25 )
            j_free(v25);
        }
        goto LABEL_59;
      }
      v20 = Src;
    }
    v29 = sub_14005D9D0(v20);
    v30 = v29;
    if ( v29 && (v31 = strlen(v29)) != 0 )
      sub_140001810(a3 + 16, v30, v31);
    else
      *(_QWORD *)(a3 + 24) = 0;
LABEL_59:
    v32 = sub_140014C10(a1, (_QWORD **)(a1 + 992), (unsigned __int64 *)a3);
    v33 = v32;
    if ( v32 && (v34 = strlen(v32)) != 0 )
      sub_140001810(a3 + 40, v33, v34);
    else
      *(_QWORD *)(a3 + 48) = 0;
    return v7 & *(_QWORD *)(a1 + 24);
  }
  while ( !a2 && qword_1400CAED8 )
  {
    a2 = (unsigned int)lpAddress;
    if ( VirtualQueryEx(*(HANDLE *)(a1 + 792), (LPCVOID)(unsigned int)lpAddress, &Buffer, 0x30u) )
      goto LABEL_7;
  }
  return -1;
}
// 1400CAED8: using guessed type __int64 qword_1400CAED8;
