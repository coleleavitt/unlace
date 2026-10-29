__int64 __fastcall sub_61A2C0(__int64 a1)
{
  _QWORD *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbp
  void *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rsi
  const char *v9; // r13
  char *v10; // r14
  void *v11; // rbp
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-130h] BYREF
  void *ptr; // [rsp+10h] [rbp-128h] BYREF
  __int128 v16; // [rsp+18h] [rbp-120h]
  __int16 v17; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v18; // [rsp+108h] [rbp-30h]

  v2 = *(_QWORD **)(a1 + 1672);
  v18 = __readfsqword(0x28u);
  sub_3792E0(0x7D0u);
  if ( (getinf(57) & 0xF) != 0 )
  {
    if ( (unsigned int)getinf(5) == 11 )
    {
      netnode_check(&v14, "$ PE header", 0, 0);
      if ( netnode_valobj(v14, &ptr, 248) > 0 )
      {
        if ( v17 == 1 )
        {
          v9 = "NTSTATUS __stdcall DriverEntry(PDRIVER_OBJECT DriverObject,PUNICODE_STRING RegistryPath);";
          v10 = "DriverEntry";
          v11 = (void *)getinf(16);
        }
        else if ( (HIBYTE(v16) & 0x20) != 0 && ((unsigned __int16)(v17 - 2) <= 1u || v17 == 9) )
        {
          v9 = "BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpReserved);";
          v10 = "DllEntryPoint";
          v11 = (void *)getinf(16);
        }
        else
        {
          if ( (unsigned __int16)(v17 - 10) > 3u )
            goto LABEL_18;
          v13 = "uefi";
          if ( (unsigned __int8)getinf_flag(3, 4) )
            v13 = "uefi64";
          if ( !(unsigned __int8)sub_64C9C0(a1, v13) )
          {
LABEL_18:
            getinf(16);
            goto LABEL_3;
          }
          v9 = "EFI_STATUS _ModuleEntryPoint (EFI_HANDLE ImageHandle,EFI_SYSTEM_TABLE  *SystemTable);";
          v10 = "_ModuleEntryPoint";
          v11 = (void *)getinf(16);
        }
        if ( (get_flags_ex(v11, 4) & 0x4000) == 0 )
          set_name((int)v11, v10);
        v12 = v2[1];
        if ( *(int *)(v12 + 16) > 0 )
        {
          sub_619510(v12, (__int64)v11, (__int64)v9);
          upd_abits(v11, -1040187392, 0x2000000u);
        }
      }
    }
LABEL_3:
    ptr = nullptr;
    v16 = 0;
    v3 = getinf(18);
    v4 = v3;
    if ( v3 == -1 || get_ea_name(&ptr, v3, 512, 0) <= 0 )
    {
      v5 = ptr;
      if ( !ptr )
        goto LABEL_6;
    }
    else
    {
      sub_6195B0(*(_QWORD *)(a1 + 1672), v4, (const char *)ptr);
      v5 = ptr;
      if ( !ptr )
        goto LABEL_6;
    }
    *(_QWORD *)&v16 = 0;
    qfree(v5);
  }
LABEL_6:
  v6 = getinf(99);
  v7 = v6;
  if ( (v6 & 0xFFFFFFEF) == 0 )
    v7 = (unsigned int)sub_609270(v2, v6);
  setinf(99, v7);
  return sub_619A80();
}
