__int64 __fastcall sub_5FE190(__int64 a1)
{
  _QWORD *v2; // rbp
  unsigned int v3; // eax
  int v4; // r12d
  void *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rsi
  const char *v9; // r13
  char *v10; // r14
  unsigned int v11; // r12d
  __int64 v12; // rdi
  const char *v13; // rsi
  unsigned int v14; // [rsp+Ch] [rbp-12Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-128h] BYREF
  __int128 v16; // [rsp+18h] [rbp-120h]
  __int16 v17; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v18; // [rsp+108h] [rbp-30h]

  v2 = *(_QWORD **)(a1 + 1480);
  v18 = __readfsqword(0x28u);
  sub_375980(0x7D0u);
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
          v11 = getinf(16);
        }
        else if ( (HIBYTE(v16) & 0x20) != 0 && ((unsigned __int16)(v17 - 2) <= 1u || v17 == 9) )
        {
          v9 = "BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL,DWORD fdwReason,LPVOID lpReserved);";
          v10 = "DllEntryPoint";
          v11 = getinf(16);
        }
        else
        {
          if ( (unsigned __int16)(v17 - 10) > 3u )
            goto LABEL_18;
          v13 = "uefi";
          if ( (unsigned __int8)getinf_flag(3, 4) )
            v13 = "uefi64";
          if ( !(unsigned __int8)sub_62F3C0(a1, v13) )
          {
LABEL_18:
            getinf(16);
            goto LABEL_3;
          }
          v9 = "EFI_STATUS _ModuleEntryPoint (EFI_HANDLE ImageHandle,EFI_SYSTEM_TABLE  *SystemTable);";
          v10 = "_ModuleEntryPoint";
          v11 = getinf(16);
        }
        if ( (get_flags_ex(v11, 4) & 0x4000) == 0 )
          set_name(v11, v10);
        v12 = v2[1];
        if ( *(int *)(v12 + 16) > 0 )
        {
          sub_5FD400(v12, v11, (__int64)v9);
          upd_abits(v11, 3254779904LL, &loc_2000000);
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
      sub_5FD4A0(*(_QWORD *)(a1 + 1480), v4, (const char *)ptr);
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
    v7 = (unsigned int)sub_5ED3B0(v2, v6);
  setinf(99, v7);
  return sub_5FD970();
}

