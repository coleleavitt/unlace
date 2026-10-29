/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004DF0
// Address: 0x0000000140004DF0

//----- (0000000140004DF0) ----------------------------------------------------
__int64 __fastcall sub_140004DF0(__int64 a1, int *a2)
{
  size_t v3; // rax
  size_t v4; // rbx
  unsigned __int64 v5; // rdi
  CHAR *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  const CHAR *v9; // rax
  __int64 v10; // r15
  HRESULT Instance; // eax
  __int64 v12; // rdi
  __int64 v13; // r14
  int v14; // esi
  HMODULE LibraryA; // rax
  HMODULE v16; // rbx
  HRESULT (__stdcall *DllGetClassObject)(const IID *const, const IID *const, LPVOID *); // rax
  unsigned int v18; // ebx
  int v19; // r8d
  LPCSTR lpPath; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  int *v25; // [rsp+50h] [rbp-B0h]
  CHAR Buffer[272]; // [rsp+60h] [rbp-A0h] BYREF
  char Src[272]; // [rsp+170h] [rbp+70h] BYREF

  v25 = a2;
  lpPath = nullptr;
  v22 = 0;
  v23 = 0;
  if ( sub_14005E820(Src, 0x104u, 0x2Bu) )
  {
    v3 = strlen(Src);
    v4 = v3;
    if ( v3 )
    {
      v5 = v3 + 1;
      if ( v3 + 1 <= v23 )
      {
        v6 = (CHAR *)lpPath;
      }
      else
      {
        v6 = (CHAR *)sub_14005ABE0((__int64)&lpPath, (void *)lpPath, v3 + 1, 1u);
        lpPath = v6;
      }
      v22 = v5;
      memcpy(v6, Src, v4);
      lpPath[v4] = 0;
      v7 = v22;
    }
    else
    {
      v7 = 0;
      v22 = 0;
    }
    v8 = v7 - 1;
    if ( !v7 )
      v8 = 0;
    if ( v8 + 21 <= v23 )
    {
      v9 = lpPath;
    }
    else
    {
      v9 = (const CHAR *)sub_14005ABE0((__int64)&lpPath, (void *)lpPath, v8 + 21, 1u);
      lpPath = v9;
    }
    v22 = v8 + 21;
    v9[v8 + 20] = 0;
    memcpy((void *)&lpPath[v8], "\\Microsoft Shared\\VC", 0x14u);
  }
  v10 = 0;
  while ( 1 )
  {
    Instance = CoCreateInstance((const IID *const)*(&off_1400C6000 + v10), nullptr, 1u, &riid, (LPVOID *)(a1 + 24));
    if ( Instance < 0 )
      break;
    if ( !Instance )
      goto LABEL_36;
LABEL_30:
    *v25 = 0;
LABEL_31:
    if ( (unsigned __int64)++v10 >= 7 )
    {
      v18 = -2147467262;
      goto LABEL_39;
    }
  }
  if ( !sub_14005EC80(Buffer, 260, off_1400917D8[v10], 0)
    && (v22 <= 1 || !SearchPathA(lpPath, off_1400917D8[v10], nullptr, 0x104u, Buffer, nullptr)) )
  {
    goto LABEL_31;
  }
  v12 = 0;
  while ( 1 )
  {
    v13 = (__int64)*(&off_1400C6000 + v12);
    v14 = -2147221164;
    LibraryA = LoadLibraryA(Buffer);
    v16 = LibraryA;
    if ( !LibraryA
      || (DllGetClassObject = (HRESULT (__stdcall *)(const IID *const, const IID *const, LPVOID *))GetProcAddress(
                                                                                                     LibraryA,
                                                                                                     "DllGetClassObject")) != nullptr
      && (v14 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64 *))DllGetClassObject)(v13, qword_1400AE6A0, &v24),
          v14 >= 0)
      && (v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, const IID *, __int64))(*(_QWORD *)v24 + 24LL))(
                  v24,
                  0,
                  &riid,
                  a1 + 24),
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24),
          v14 >= 0) )
    {
      *(_QWORD *)a1 = v16;
    }
    else
    {
      FreeLibrary(v16);
    }
    if ( !v14 )
      break;
    if ( (unsigned __int64)++v12 >= 7 )
      goto LABEL_30;
  }
  if ( !byte_1400CAE30 )
  {
    byte_1400CAE30 = 1;
    sub_140002CE0((struct __crt_locale_pointers *)"PDB: using DIA dll \"%s\"\n", Buffer);
  }
  v10 = v12;
LABEL_36:
  v19 = dword_1400917B8[v10];
  *v25 = v19;
  if ( !byte_1400CAE31 )
  {
    byte_1400CAE31 = 1;
    sub_140002CE0((struct __crt_locale_pointers *)"PDB: DIA interface version %d.%d\n", v19 / 100, v19 % 100);
  }
  v18 = 0;
LABEL_39:
  if ( lpPath )
  {
    v22 = 0;
    j_free((void *)lpPath);
  }
  return v18;
}
// 1400917B8: using guessed type int dword_1400917B8[];
// 1400917D8: using guessed type char *off_1400917D8[7];
// 1400AE6A0: using guessed type __int64 qword_1400AE6A0[2];
// 1400C6000: using guessed type __int64 (*off_1400C6000)[14];
// 1400CAE30: using guessed type char byte_1400CAE30;
// 1400CAE31: using guessed type char byte_1400CAE31;
