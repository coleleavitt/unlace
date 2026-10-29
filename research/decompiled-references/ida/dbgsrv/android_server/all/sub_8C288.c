/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C288
// Address: 0x000000000008C288

//----- (000000000008C288) ----------------------------------------------------
bool __fastcall sub_8C288(__int64 a1, pthread_mutex_t *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8; // x23
  const void *v9; // x21
  char *elf_debug_file_directory; // x0
  char *v11; // x21
  size_t v12; // x0
  void *align; // x1
  unsigned __int64 v14; // x23
  size_t v15; // x22
  int v16; // w19
  pthread_mutex_t dest; // [xsp+0h] [xbp-60h] BYREF

  dest.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (sub_8BF94(a1, (__int64)a2, a3) & 1) != 0 )
    return 1;
  memset(&dest, 0, 24);
  if ( !a4 || &dest == (pthread_mutex_t *)a4 )
    goto LABEL_9;
  v8 = *(_QWORD *)(a4 + 8);
  if ( v8 < 2 )
  {
    *(&dest.__align + 1) = 0;
    goto LABEL_9;
  }
  v9 = *(const void **)a4;
  dest.__align = (__int64)qvector_reserve(&dest, nullptr, v8, 1u);
  *(&dest.__align + 1) = v8;
  memmove((void *)dest.__align, v9, v8 - 1);
  *(_BYTE *)(dest.__align + v8 - 1) = 0;
  if ( *(&dest.__align + 1) <= 1uLL )
  {
LABEL_9:
    elf_debug_file_directory = get_elf_debug_file_directory();
    v11 = elf_debug_file_directory;
    if ( elf_debug_file_directory && (v12 = strlen(elf_debug_file_directory)) != 0 )
    {
      align = (void *)dest.__align;
      v14 = v12 + 1;
      v15 = v12;
      if ( *(&dest.__align + 2) < v12 + 1 )
      {
        align = qvector_reserve(&dest, (void *)dest.__align, v14, 1u);
        dest.__align = (__int64)align;
      }
      *(&dest.__align + 1) = v14;
      memmove(align, v11, v15);
      *(_BYTE *)(dest.__align + v15) = 0;
    }
    else
    {
      *(&dest.__align + 1) = 0;
    }
  }
  v16 = sub_8C430(a2, a3, (char **)&dest);
  if ( dest.__align )
  {
    *(&dest.__align + 1) = 0;
    qfree((void *)dest.__align);
    dest.__align = 0;
    *(&dest.__align + 2) = 0;
  }
  return v16 >= 0;
}
