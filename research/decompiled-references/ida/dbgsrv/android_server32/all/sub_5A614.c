/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5A614
// Address: 0x0005A614

//----- (0005A614) --------------------------------------------------------
bool __fastcall sub_5A614(int a1, int a2, int a3, int a4)
{
  _BOOL4 v6; // r7
  unsigned int v7; // r7
  void *v8; // r0
  size_t v9; // r7
  char *elf_debug_file_directory; // r0
  char *v11; // r6
  size_t v12; // r0
  size_t v13; // r7
  unsigned int v14; // r2
  void *v15; // r1
  const void *v17; // [sp+8h] [bp-20h]
  unsigned int v18; // [sp+Ch] [bp-1Ch]
  void *ptr; // [sp+18h] [bp-10h] BYREF
  unsigned int v21; // [sp+1Ch] [bp-Ch]
  unsigned int v22; // [sp+20h] [bp-8h]

  v6 = 1;
  if ( sub_5A3DC(a1, a2, a3) )
    return v6;
  v21 = 0;
  ptr = nullptr;
  v22 = 0;
  if ( !a4 || &ptr == (void **)a4 )
    goto LABEL_8;
  v7 = *(_DWORD *)(a4 + 4);
  if ( v7 < 2 )
  {
    v21 = 0;
    goto LABEL_8;
  }
  v17 = *(const void **)a4;
  v8 = qvector_reserve((int)&ptr, nullptr, v7, 1u);
  v21 = v7;
  ptr = v8;
  v9 = v7 - 1;
  memmove(v8, v17, v9);
  *((_BYTE *)ptr + v9) = 0;
  if ( v21 <= 1 )
  {
LABEL_8:
    elf_debug_file_directory = get_elf_debug_file_directory();
    v11 = elf_debug_file_directory;
    if ( elf_debug_file_directory && (v12 = strlen(elf_debug_file_directory)) != 0 )
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = ptr;
      if ( v22 < v12 + 1 )
      {
        v18 = v12 + 1;
        v15 = qvector_reserve((int)&ptr, ptr, v14, 1u);
        ptr = v15;
        v14 = v18;
      }
      v21 = v14;
      memmove(v15, v11, v13);
      *((_BYTE *)ptr + v13) = 0;
    }
    else
    {
      v21 = 0;
    }
  }
  v6 = sub_5A738(a2, a3, (int)&ptr) >= 0;
  if ( ptr )
  {
    v21 = 0;
    qfree(ptr);
    v22 = 0;
    ptr = nullptr;
  }
  return v6;
}
