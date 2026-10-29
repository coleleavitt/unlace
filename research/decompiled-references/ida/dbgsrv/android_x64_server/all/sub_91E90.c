/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_91E90
// Address: 0x0000000000091E90

//----- (0000000000091E90) ----------------------------------------------------
__int64 __fastcall sub_91E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rbx
  char *v7; // r12
  const void *v8; // r13
  const char *elf_debug_file_directory; // rax
  size_t v10; // rax
  size_t v11; // r12
  void *v12; // r13
  void *v13; // rax
  void *dest[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-38h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  LOBYTE(v4) = 1;
  if ( (unsigned __int8)sub_91B50(a1, a2, a3) )
    return (unsigned int)v4;
  *(_OWORD *)dest = 0;
  v16 = 0;
  if ( !a4 || dest == (void **)a4 )
    goto LABEL_9;
  v7 = *(char **)(a4 + 8);
  if ( !v7 || (LODWORD(v4) = (_DWORD)v7 - 1, v7 == (_BYTE *)&dword_0 + 1) )
  {
    dest[1] = nullptr;
    goto LABEL_9;
  }
  v8 = *(const void **)a4;
  dest[0] = qvector_reserve((__int64)dest, nullptr, (unsigned __int64)v7, 1u);
  dest[1] = v7;
  memmove(dest[0], v8, (size_t)(v7 - 1));
  *((_BYTE *)dest[0] + (unsigned __int64)v7 - 1) = 0;
  if ( dest[1] <= (char *)&dword_0 + 1 )
  {
LABEL_9:
    elf_debug_file_directory = get_elf_debug_file_directory();
    v4 = elf_debug_file_directory;
    if ( elf_debug_file_directory && (v10 = strlen(elf_debug_file_directory)) != 0 )
    {
      v11 = v10;
      v12 = (void *)(v10 + 1);
      v13 = dest[0];
      if ( v16 < (unsigned __int64)v12 )
      {
        v13 = qvector_reserve((__int64)dest, (char *)dest[0], (unsigned __int64)v12, 1u);
        dest[0] = v13;
      }
      dest[1] = v12;
      memmove(v13, v4, v11);
      *((_BYTE *)dest[0] + v11) = 0;
    }
    else
    {
      dest[1] = nullptr;
    }
  }
  LOBYTE(v4) = (int)sub_92050(a2, a3, (__int64)dest) >= 0;
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v16 = 0;
  }
  return (unsigned int)v4;
}
// 91FF6: variable 'v4' is possibly undefined
// 0: using guessed type int dword_0;
