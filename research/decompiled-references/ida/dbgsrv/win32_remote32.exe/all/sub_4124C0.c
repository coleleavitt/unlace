/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4124C0
// Address: 0x004124C0

//----- (004124C0) --------------------------------------------------------
unsigned int __userpurge sub_4124C0@<eax>(int a1@<ecx>, int a2@<ebx>, __m128i a3@<xmm0>, LPCVOID lpAddress, int a5)
{
  LPCVOID v6; // eax
  unsigned int *v7; // edi
  unsigned int v8; // ecx
  unsigned int result; // eax
  DWORD v10; // ecx
  char v11; // dl
  char v12; // al
  unsigned __int8 v13; // cl
  bool v14; // zf
  unsigned __int8 v15; // al
  int v16; // edx
  unsigned __int8 v17; // al
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // al
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // al
  char v22; // dl
  char v23; // cl
  CHAR *v24; // eax
  int v25; // eax
  _BYTE *v26; // ecx
  unsigned int v27; // kr00_4
  signed int v28; // eax
  unsigned int *v29; // edi
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // kr04_4
  unsigned int v33; // eax
  LPVOID v34; // eax
  const char *v35; // eax
  const char *v36; // eax
  void *v37; // [esp-10h] [ebp-4D0h]
  int v38; // [esp-4h] [ebp-4C4h]
  _DWORD v39[13]; // [esp+Ch] [ebp-4B4h] BYREF
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+40h] [ebp-480h] BYREF
  int v41; // [esp+5Ch] [ebp-464h] BYREF
  _DWORD v42[2]; // [esp+60h] [ebp-460h] BYREF
  struct _SYSTEM_INFO SystemInfo; // [esp+68h] [ebp-458h] BYREF
  unsigned int *v44; // [esp+8Ch] [ebp-434h]
  unsigned int Protect; // [esp+90h] [ebp-430h] BYREF
  _BYTE *v46; // [esp+94h] [ebp-42Ch] BYREF
  DWORD v47; // [esp+98h] [ebp-428h]
  int v48; // [esp+9Ch] [ebp-424h]
  _BYTE v49[4]; // [esp+A0h] [ebp-420h] BYREF
  PVOID BaseAddress; // [esp+A4h] [ebp-41Ch]
  int v51; // [esp+A8h] [ebp-418h]
  DWORD v52; // [esp+ACh] [ebp-414h]
  unsigned __int16 v53[512]; // [esp+B0h] [ebp-410h] BYREF
  int v54; // [esp+4BCh] [ebp-4h]

  v6 = lpAddress;
  v7 = (unsigned int *)a5;
  v51 = (int)lpAddress;
  v44 = (unsigned int *)a5;
  if ( !dword_4B6A14 )
  {
    GetSystemInfo(&SystemInfo);
    ::lpAddress = (LPCVOID)SystemInfo.dwAllocationGranularity;
    dword_4B6A14 = (int)SystemInfo.lpMaximumApplicationAddress;
    v6 = (LPCVOID)v51;
  }
  if ( VirtualQueryEx(*(HANDLE *)(a1 + 452), v6, &Buffer, 0x1Cu) )
  {
LABEL_7:
    v8 = (unsigned int)Buffer.BaseAddress + Buffer.RegionSize;
    BaseAddress = Buffer.BaseAddress;
    v51 = (int)Buffer.BaseAddress + Buffer.RegionSize;
    if ( (PVOID)((unsigned int)Buffer.BaseAddress + Buffer.RegionSize) <= Buffer.BaseAddress )
    {
      if ( (char *)Buffer.BaseAddress + Buffer.RegionSize == Buffer.BaseAddress )
      {
        result = v8 + 1;
        goto LABEL_52;
      }
      v8 = -1;
      v51 = -1;
    }
    Protect = Buffer.Protect;
    if ( sub_4190C0((_DWORD *)a1, a2, (unsigned int)Buffer.BaseAddress, v8, &Protect) )
    {
      sub_43C900(a1, (int)"   masked protect=0x%x\n", Protect);
      v10 = Protect;
      Buffer.Protect = Protect;
    }
    else
    {
      v10 = Buffer.Protect;
    }
    v52 = v10;
    if ( (Buffer.State & 0x12000) != 0x10000 && (v10 & 1) == 0 )
    {
      v11 = v10;
      *(_DWORD *)a5 = BaseAddress;
      *(_DWORD *)(a5 + 4) = v51;
      *(_BYTE *)(a5 + 36) = 1;
      BaseAddress = (PVOID)(v10 & 0xFFFFFF08);
      v12 = v10 & 2;
      v13 = 6;
      v14 = (v11 & 4) == 0;
      v15 = 2 * v12;
      v16 = 6;
      if ( v14 )
        v13 = v15;
      if ( !(_BYTE)BaseAddress )
        v16 = v13;
      BaseAddress = (PVOID)v16;
      v17 = v16;
      v18 = v16 | 1;
      if ( (v52 & 0x10) == 0 )
        v18 = v17;
      BaseAddress = (PVOID)(v18 | 5);
      v19 = v18;
      v20 = v18 | 5;
      if ( (v52 & 0x20) == 0 )
        v20 = v19;
      BaseAddress = (PVOID)(v20 | 7);
      v21 = v20;
      v22 = v20 | 7;
      if ( (v52 & 0x40) == 0 )
        v22 = v21;
      LOBYTE(v52) = v52 & 0x80;
      v23 = v22 | 7;
      if ( !(_BYTE)v52 )
        v23 = v22;
      *(_BYTE *)(a5 + 37) = v23;
      v24 = (CHAR *)sub_412440((_DWORD **)(a1 + 524), (unsigned int *)a5);
      if ( v24
        || (v24 = (CHAR *)sub_412440((_DWORD **)(a1 + 532), (unsigned int *)a5)) != nullptr
        || (v24 = (CHAR *)sub_412440((_DWORD **)(a1 + 540), (unsigned int *)a5)) != nullptr
        || (v24 = (CHAR *)sub_412440((_DWORD **)(a1 + 548), (unsigned int *)a5)) != nullptr
        || (v38 = *(_DWORD *)a5,
            LOBYTE(v53[0]) = 0,
            sub_411D20((_DWORD *)a1, a3, v53, 0x400u, nullptr, 0, v38),
            v24 = (CHAR *)v53,
            LOBYTE(v53[0])) )
      {
        v35 = sub_456590(v24);
        sub_401590(a5 + 8, v35);
      }
      else if ( sub_412170(a1, a3, *(char **)a5, v53, 0x400u) )
      {
        v25 = sub_40CD20(a1, a3, *(char **)a5);
        v26 = nullptr;
        BaseAddress = (PVOID)v25;
        v46 = nullptr;
        v47 = 0;
        v48 = 0;
        v54 = 0;
        v27 = strlen((const char *)v53);
        v28 = v27 + 1;
        if ( v27 != -1 )
        {
          v26 = sub_453B00((int)&v46, nullptr, v27 + 1, 1u);
          v28 = v27 + 1;
          v46 = v26;
        }
        v47 = v28;
        sub_464310((unsigned int)v26, (unsigned int)v53, v27);
        v46[v27] = 0;
        v29 = v44;
        v54 = 1;
        v41 = a1;
        memset(&SystemInfo, 0, 12);
        v42[0] = *v44;
        v42[1] = BaseAddress;
        v52 = v47;
        if ( v47 )
        {
          SystemInfo.dwOemId = (DWORD)sub_4539E0(v47);
          SystemInfo.lpMinimumApplicationAddress = (LPVOID)v52;
          sub_464310(SystemInfo.dwOemId, (unsigned int)v46, v52);
          SystemInfo.dwPageSize = v52;
        }
        memset(&SystemInfo.lpMaximumApplicationAddress, 0, 24);
        LOBYTE(v54) = 4;
        if ( v46 )
        {
          v47 = 0;
          sub_453A20(v46);
          v46 = nullptr;
          v48 = 0;
        }
        LOBYTE(v54) = 3;
        v30 = sub_4090A0((int)v39, v42, (int)&v41);
        LOBYTE(v54) = 5;
        sub_408F80((int *)(a1 + 540), (int)v49, v30);
        LOBYTE(v54) = 3;
        sub_409C70(v39);
        v31 = (int)(v29 + 2);
        v52 = (DWORD)(v29 + 2);
        v32 = strlen((const char *)v53);
        if ( v32 )
        {
          v33 = v32 + 1;
          if ( v32 + 1 > *(_DWORD *)(v31 + 8) )
          {
            v34 = sub_453B00(v31, *(void **)v31, v32 + 1, 1u);
            v31 = v52;
            *(_DWORD *)v52 = v34;
            v33 = v32 + 1;
          }
          *(_DWORD *)(v31 + 4) = v33;
          sub_464310(*(_DWORD *)v31, (unsigned int)v53, v32);
          *(_BYTE *)(v32 + *(_DWORD *)v52) = 0;
        }
        else
        {
          *(_DWORD *)(v31 + 4) = 0;
        }
        v54 = 6;
        if ( SystemInfo.dwOemId )
          sub_453A20((void *)SystemInfo.dwOemId);
        v7 = v44;
        v54 = -1;
      }
      v36 = sub_412440((_DWORD **)(a1 + 556), v7);
      sub_401590((int)(v7 + 5), v36);
      return v51;
    }
    result = v51;
LABEL_52:
    *(_DWORD *)(a5 + 4) = -1;
    *(_DWORD *)a5 = -1;
    return result;
  }
  while ( !v51 && dword_4B6A14 )
  {
    v37 = *(void **)(a1 + 452);
    v51 = (int)::lpAddress;
    if ( VirtualQueryEx(v37, ::lpAddress, &Buffer, 0x1Cu) )
      goto LABEL_7;
  }
  return -1;
}
// 4B6A14: using guessed type int dword_4B6A14;
