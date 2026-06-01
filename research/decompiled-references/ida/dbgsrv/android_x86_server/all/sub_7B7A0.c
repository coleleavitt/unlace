/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7B7A0
// Address: 0x0007B7A0

//----- (0007B7A0) --------------------------------------------------------
bool __cdecl sub_7B7A0(int a1, int a2, _DWORD *a3, int *a4)
{
  unsigned int v4; // esi
  char *elf_debug_file_directory; // eax
  char *v6; // esi
  size_t v7; // eax
  size_t v8; // edi
  unsigned int v9; // ecx
  void *v10; // eax
  bool v12; // [esp+4h] [ebp-28h]
  const void *v13; // [esp+4h] [ebp-28h]
  unsigned int v14; // [esp+4h] [ebp-28h]
  int v15; // [esp+8h] [ebp-24h] BYREF
  unsigned int v16; // [esp+Ch] [ebp-20h]
  unsigned int v17; // [esp+10h] [ebp-1Ch]
  unsigned int v18; // [esp+18h] [ebp-14h]

  v18 = __readgsdword(0x14u);
  v12 = 1;
  if ( (unsigned __int8)sub_7B410(a1, a2, a3) )
    return v12;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( !a4 || &v15 == a4 )
    goto LABEL_8;
  v4 = a4[1];
  if ( v4 < 2 )
  {
    v16 = 0;
    goto LABEL_8;
  }
  v13 = (const void *)*a4;
  v15 = (int)qvector_reserve((int)&v15, nullptr, v4, 1u);
  v16 = v4;
  memmove((void *)v15, v13, v4 - 1);
  *(_BYTE *)(v15 + v4 - 1) = 0;
  if ( v16 <= 1 )
  {
LABEL_8:
    elf_debug_file_directory = get_elf_debug_file_directory();
    v6 = elf_debug_file_directory;
    if ( elf_debug_file_directory && (v7 = strlen(elf_debug_file_directory)) != 0 )
    {
      v8 = v7;
      v9 = v7 + 1;
      v10 = (void *)v15;
      if ( v17 < v9 )
      {
        v14 = v9;
        v10 = qvector_reserve((int)&v15, (void *)v15, v9, 1u);
        v15 = (int)v10;
        v9 = v14;
      }
      v16 = v9;
      memmove(v10, v6, v8);
      *(_BYTE *)(v15 + v8) = 0;
    }
    else
    {
      v16 = 0;
    }
  }
  v12 = sub_7B990(a2, (int)a3, (int)&v15) >= 0;
  if ( v15 )
  {
    v16 = 0;
    qfree((void *)v15);
    v15 = 0;
    v17 = 0;
  }
  return v12;
}
