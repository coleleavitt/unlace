__int64 __fastcall dwarf_init_b(int a1, int a2, __int64 a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-54h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-50h] BYREF
  int v15; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v16[9]; // [rsp+20h] [rbp-48h] BYREF

  v16[1] = __readfsqword(0x28u);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16[0] = 0;
  v15 = 0;
  if ( !a5 )
  {
    _dwarf_error(0, a6, 465);
    return 1;
  }
  *a5 = 0;
  v10 = _dwarf_object_detector_fd_a(a1, (__int64)&v12, (__int64)&v13, (__int64)&v14, 0, (__int64)v16, (__int64)&v15);
  if ( v10 != -1 )
  {
    if ( v10 != 1 )
    {
      if ( v12 == 3 )
      {
        v10 = _dwarf_pe_setup(a1, (int)"", 3, v13, v14, v16[0], a2, a3, a4, (__int64)a5, a6);
        if ( v10 )
          return v10;
        goto LABEL_14;
      }
      if ( v12 > 3 )
      {
        if ( v12 == 5 )
          goto LABEL_8;
      }
      else
      {
        if ( v12 == 1 )
        {
          v10 = _dwarf_elf_nlsetup(a1, (int)"", 1, v13, v14, v16[0], a2, a3, a4, (__int64)a5, a6);
          if ( v10 )
            return v10;
          goto LABEL_14;
        }
        if ( v12 == 2 )
        {
LABEL_8:
          v10 = _dwarf_macho_setup(a1, (__int64)"", 0, v12, v13, v14, v16[0], a2, a3, a4, (__int64)a5, a6);
          if ( v10 )
            return v10;
LABEL_14:
          dwarf_add_debuglink_global_path();
          return v10;
        }
      }
    }
    _dwarf_error(0, a6, 412);
    return 1;
  }
  return v10;
}

