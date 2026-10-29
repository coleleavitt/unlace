/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D4A0
// Address: 0x0040D4A0

//----- (0040D4A0) --------------------------------------------------------
bool __thiscall sub_40D4A0(FARPROC *this, unsigned int a2, _BYTE *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v5; // edi
  HMODULE ModuleHandleA; // edi
  BOOL (__stdcall *CopyContext)(PCONTEXT, DWORD, PCONTEXT); // eax
  int (*v8)(void); // ecx
  int (__stdcall *v9)(_DWORD, int, _DWORD, int (__stdcall **)()); // eax
  unsigned int v10; // esi
  _DWORD *v11; // esi
  _DWORD *v13; // ecx
  int (__stdcall *v14)(); // [esp+10h] [ebp-4h] BYREF

  v3 = (_DWORD *)a2;
  *(_DWORD *)(a2 + 4) = 0;
  if ( *v3 )
  {
    sub_453A20((void *)*v3);
    *v3 = 0;
    v3[2] = 0;
  }
  v5 = a3;
  a2 = 716;
  if ( (*a3 & 0x40) != 0 )
  {
    if ( (int)*(this + 6) < 0 )
    {
      *(this + 6) = nullptr;
      ModuleHandleA = GetModuleHandleA("kernel32.dll");
      *this = GetProcAddress(ModuleHandleA, "GetEnabledXStateFeatures");
      *(this + 1) = GetProcAddress(ModuleHandleA, "InitializeContext");
      *(this + 2) = GetProcAddress(ModuleHandleA, "GetXStateFeaturesMask");
      *(this + 3) = GetProcAddress(ModuleHandleA, "LocateXStateFeature");
      *(this + 4) = GetProcAddress(ModuleHandleA, "SetXStateFeaturesMask");
      CopyContext = (BOOL (__stdcall *)(PCONTEXT, DWORD, PCONTEXT))GetProcAddress(ModuleHandleA, "CopyContext");
      v8 = *this;
      *(this + 5) = (FARPROC)CopyContext;
      if ( v8
        && *(this + 1)
        && *(this + 2)
        && *(this + 3)
        && *(this + 4)
        && CopyContext
        && (v8() & 4) != 0
        && (v9 = (int (__stdcall *)(_DWORD, int, _DWORD, int (__stdcall **)()))*(this + 1),
            v14 = nullptr,
            !v9(0, 65663, 0, &v14))
        && GetLastError() == 122 )
      {
        *(this + 6) = v14;
      }
      else
      {
        sub_402760("%s\n");
      }
      v5 = a3;
    }
    if ( (int)*(this + 6) <= 0 )
      *v5 &= ~0x40u;
    else
      a2 = (unsigned int)*(this + 6);
  }
  v10 = a2;
  if ( a2 <= v3[1] )
  {
    if ( a2 == v3[1] || a2 >= v3[1] )
      goto LABEL_27;
  }
  else
  {
    if ( a2 > v3[2] )
      *v3 = sub_453B00((int)v3, (void *)*v3, a2, 1u);
    sub_464890((__m128i *)(v3[1] + *v3), 0, v10 - v3[1]);
  }
  v3[1] = v10;
LABEL_27:
  v11 = v3 + 3;
  if ( (*v5 & 0x40) != 0 )
  {
    return ((int (__stdcall *)(_DWORD, _DWORD, _DWORD *, unsigned int *))*(this + 1))(*v3, *v5, v3 + 3, &a2)
        && ((int (__stdcall *)(_DWORD, int, _DWORD))*(this + 4))(*v11, 4, 0) != 0;
  }
  else
  {
    v13 = (_DWORD *)*v3;
    *v11 = *v3;
    *v13 = *v5;
    return 1;
  }
}
