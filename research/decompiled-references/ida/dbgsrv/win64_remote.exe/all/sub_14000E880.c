/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000E880
// Address: 0x000000014000E880

//----- (000000014000E880) ----------------------------------------------------
bool __fastcall sub_14000E880(__int64 a1, __int64 a2, _BYTE *a3)
{
  bool v6; // zf
  HMODULE ModuleHandleA; // rbx
  BOOL (__stdcall *CopyContext)(PCONTEXT, DWORD, PCONTEXT); // rax
  __int64 (*v9)(void); // rcx
  unsigned int (__fastcall *v10)(_QWORD, __int64, _QWORD, int *); // rax
  const char *v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _DWORD *v14; // rcx
  int v16; // [rsp+48h] [rbp+10h] BYREF
  int v17; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(a2 + 8) = 0;
  if ( *(_QWORD *)a2 )
  {
    j_free(*(void **)a2);
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = 0;
  }
  v6 = (*a3 & 0x40) == 0;
  v16 = 1232;
  if ( !v6 )
  {
    if ( *(int *)(a1 + 48) >= 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 48) = 0;
    ModuleHandleA = GetModuleHandleA("kernel32.dll");
    *(_QWORD *)a1 = GetProcAddress(ModuleHandleA, "GetEnabledXStateFeatures");
    *(_QWORD *)(a1 + 8) = GetProcAddress(ModuleHandleA, "InitializeContext");
    *(_QWORD *)(a1 + 16) = GetProcAddress(ModuleHandleA, "GetXStateFeaturesMask");
    *(_QWORD *)(a1 + 24) = GetProcAddress(ModuleHandleA, "LocateXStateFeature");
    *(_QWORD *)(a1 + 32) = GetProcAddress(ModuleHandleA, "SetXStateFeaturesMask");
    CopyContext = (BOOL (__stdcall *)(PCONTEXT, DWORD, PCONTEXT))GetProcAddress(ModuleHandleA, "CopyContext");
    v9 = *(__int64 (**)(void))a1;
    *(_QWORD *)(a1 + 40) = CopyContext;
    if ( v9
      && *(_QWORD *)(a1 + 8)
      && *(_QWORD *)(a1 + 16)
      && *(_QWORD *)(a1 + 24)
      && *(_QWORD *)(a1 + 32)
      && CopyContext )
    {
      if ( (v9() & 4) != 0 )
      {
        v10 = *(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD, int *))(a1 + 8);
        v17 = 0;
        if ( !v10(0, 1048671, 0, &v17) && GetLastError() == 122 )
        {
          *(_DWORD *)(a1 + 48) = v17;
          goto LABEL_19;
        }
        v11 = "InitializeContext failed";
      }
      else
      {
        v11 = "AVX feature not enabled";
      }
    }
    else
    {
      v11 = "Couldn't retrieve AVX functions";
    }
    sub_140002CE0((struct __crt_locale_pointers *)"%s\n", v11);
LABEL_19:
    if ( *(int *)(a1 + 48) <= 0 )
      *(_DWORD *)a3 &= ~0x40u;
    else
      v16 = *(_DWORD *)(a1 + 48);
  }
  v12 = v16;
  if ( (unsigned __int64)v16 <= *(_QWORD *)(a2 + 8) )
  {
    if ( v16 == *(_QWORD *)(a2 + 8) || (unsigned __int64)v16 >= *(_QWORD *)(a2 + 8) )
      goto LABEL_29;
  }
  else
  {
    if ( (unsigned __int64)v16 > *(_QWORD *)(a2 + 16) )
      *(_QWORD *)a2 = sub_14005ABE0(a2, *(void **)a2, v16, 1u);
    memset((void *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8)), 0, v12 - *(_QWORD *)(a2 + 8));
  }
  *(_QWORD *)(a2 + 8) = v12;
LABEL_29:
  v13 = *(unsigned int *)a3;
  v14 = *(_DWORD **)a2;
  if ( (v13 & 0x40) != 0 )
  {
    return (*(unsigned int (__fastcall **)(_DWORD *, __int64, __int64, int *))(a1 + 8))(v14, v13, a2 + 24, &v16)
        && (*(unsigned int (__fastcall **)(_QWORD, __int64))(a1 + 32))(*(_QWORD *)(a2 + 24), 4) != 0;
  }
  else
  {
    *(_QWORD *)(a2 + 24) = v14;
    v14[12] = *(_DWORD *)a3;
    return 1;
  }
}
