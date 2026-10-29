/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4047B0
// Address: 0x004047B0

//----- (004047B0) --------------------------------------------------------
int __userpurge sub_4047B0@<eax>(HMODULE *a1@<ecx>, __m128i a2@<xmm0>, _DWORD *a3)
{
  unsigned int v3; // kr00_4
  const CHAR *v4; // eax
  unsigned int v5; // esi
  int v6; // esi
  const CHAR *v7; // eax
  unsigned int v8; // ebx
  LPVOID *v9; // ecx
  HRESULT Instance; // eax
  bool v11; // zf
  int v12; // esi
  HMODULE LibraryA; // eax
  HMODULE v14; // edi
  HRESULT (__stdcall *DllGetClassObject)(const IID *const, const IID *const, LPVOID *); // eax
  int v16; // esi
  const IID *v18; // [esp+10h] [ebp-30h]
  unsigned int v19; // [esp+1Ch] [ebp-24h]
  int v21; // [esp+24h] [ebp-1Ch] BYREF
  LPCSTR lpPath; // [esp+28h] [ebp-18h] BYREF
  unsigned int v23; // [esp+2Ch] [ebp-14h]
  unsigned int v24; // [esp+30h] [ebp-10h]
  int v25; // [esp+3Ch] [ebp-4h]
  char v26[260]; // [esp+40h] [ebp+0h] BYREF
  CHAR Buffer[260]; // [esp+144h] [ebp+104h] BYREF

  lpPath = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( sub_457390((unsigned int)v26, 0x104u, 43) )
  {
    v3 = strlen(v26);
    if ( v3 )
    {
      if ( v3 + 1 <= v24 )
      {
        v4 = lpPath;
      }
      else
      {
        v4 = (const CHAR *)sub_453B00((int)&lpPath, (void *)lpPath, v3 + 1, 1u);
        lpPath = v4;
      }
      v23 = v3 + 1;
      sub_464310((unsigned int)v4, (unsigned int)v26, v3);
      lpPath[v3] = 0;
      v5 = v23;
    }
    else
    {
      v5 = 0;
      v23 = 0;
    }
    v6 = v5 != 0 ? v5 - 1 : 0;
    if ( v6 + 21 <= v24 )
    {
      v7 = lpPath;
    }
    else
    {
      v7 = (const CHAR *)sub_453B00((int)&lpPath, (void *)lpPath, v6 + 21, 1u);
      lpPath = v7;
    }
    v23 = v6 + 21;
    v7[v6 + 20] = 0;
    sub_464310((unsigned int)&lpPath[v6], (unsigned int)"\\Microsoft Shared\\VC", 0x14u);
  }
  v8 = 0;
  v9 = (LPVOID *)(a1 + 3);
  v19 = 0;
  while ( 1 )
  {
    Instance = CoCreateInstance(*(&rclsid + v8), nullptr, 1u, &riid, v9);
    v11 = Instance == 0;
    if ( Instance < 0 )
      break;
LABEL_27:
    if ( v11 )
      goto LABEL_33;
    *a3 = 0;
LABEL_29:
    v19 = ++v8;
    if ( v8 >= 7 )
    {
      v16 = -2147467262;
      goto LABEL_36;
    }
    v9 = (LPVOID *)(a1 + 3);
  }
  if ( !sub_457850(a2, Buffer, 260, (char *)(&lpFileName)[v8], 0)
    && (v23 <= 1 || !SearchPathA(lpPath, (&lpFileName)[v8], nullptr, 0x104u, Buffer, nullptr)) )
  {
    goto LABEL_29;
  }
  v8 = 0;
  while ( 1 )
  {
    v12 = -2147221164;
    v18 = *(&rclsid + v8);
    LibraryA = LoadLibraryA(Buffer);
    v14 = LibraryA;
    if ( !LibraryA
      || (DllGetClassObject = (HRESULT (__stdcall *)(const IID *const, const IID *const, LPVOID *))GetProcAddress(
                                                                                                     LibraryA,
                                                                                                     "DllGetClassObject")) != nullptr
      && (v12 = DllGetClassObject(v18, (const IID *const)dword_4A44A0, (LPVOID *)&v21), v12 >= 0)
      && (v12 = (*(int (__stdcall **)(int, _DWORD, const IID *, HMODULE *))(*(_DWORD *)v21 + 12))(v21, 0, &riid, a1 + 3),
          (*(void (__stdcall **)(int))(*(_DWORD *)v21 + 8))(v21),
          v12 >= 0) )
    {
      *a1 = v14;
    }
    else
    {
      FreeLibrary(v14);
    }
    if ( !v12 )
      break;
    if ( ++v8 >= 7 )
    {
      v8 = v19;
      v11 = v12 == 0;
      goto LABEL_27;
    }
  }
  if ( !byte_4B69CC )
  {
    byte_4B69CC = 1;
    sub_402760("PDB: using DIA dll \"%s\"\n");
  }
LABEL_33:
  v11 = byte_4B69CD == 0;
  *a3 = dword_489794[v8];
  if ( v11 )
  {
    byte_4B69CD = 1;
    sub_402760("PDB: DIA interface version %d.%d\n");
  }
  v16 = 0;
LABEL_36:
  v25 = 2;
  if ( lpPath )
  {
    v23 = 0;
    sub_453A20((void *)lpPath);
  }
  return v16;
}
// 40492A: conditional instruction was optimized away because %var_220.4>=2u
// 489794: using guessed type int dword_489794[];
// 4A44A0: using guessed type int dword_4A44A0[2];
// 4B69CC: using guessed type char byte_4B69CC;
// 4B69CD: using guessed type char byte_4B69CD;
