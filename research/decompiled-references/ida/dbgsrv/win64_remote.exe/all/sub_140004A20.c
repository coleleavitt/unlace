/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140004A20
// Address: 0x0000000140004A20

//----- (0000000140004A20) ----------------------------------------------------
__int64 __fastcall sub_140004A20(__int64 a1, const wchar_t *a2, __int64 a3, bool a4)
{
  bool v4; // r15
  const char *v7; // rdi
  unsigned int v8; // esi
  int v9; // ebp
  const IID *v10; // rbx
  unsigned int v11; // ecx
  _DWORD *v12; // rax
  void *v14; // rcx
  const char *v15; // r8
  __int64 v16; // rbx
  const char *v17; // rax
  LPOLESTR lpsz; // [rsp+30h] [rbp-48h] BYREF
  void *Block; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-38h]
  unsigned __int64 v21; // [rsp+48h] [rbp-30h]

  v4 = a4;
  v7 = "Invalid parameter.";
  if ( a4 )
    goto LABEL_38;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 20);
  v10 = nullptr;
  v11 = 0;
  v12 = (_DWORD *)a3;
  while ( !*v12 )
  {
    ++v11;
    ++v12;
    if ( v11 >= 4 )
      goto LABEL_7;
  }
  v10 = (const IID *)a3;
LABEL_7:
  if ( !v8 && !v9 && !v10 )
    return 2147500037LL;
  v14 = nullptr;
  Block = nullptr;
  v20 = 0;
  v21 = 0;
  if ( v10 )
  {
    lpsz = nullptr;
    StringFromCLSID(v10, &lpsz);
    if ( lpsz )
    {
      sub_140061D80((__int64)&Block, lpsz, -1);
      CoTaskMemFree(lpsz);
    }
    v14 = Block;
  }
  if ( v20 <= 1 )
  {
    if ( v21 < 0x27 )
    {
      v14 = sub_14005ABE0((__int64)&Block, v14, 0x27u, 1u);
      Block = v14;
    }
    v20 = 39;
    memcpy(v14, "{00000000-0000-0000-0000-000000000000}", 0x26u);
    *((_BYTE *)Block + 38) = 0;
    v14 = Block;
  }
  if ( (dword_1400CB618 & 0x10000) != 0 )
  {
    v15 = Str1;
    if ( v20 )
      v15 = (const char *)v14;
    sub_140002CE0(
      (struct __crt_locale_pointers *)"PDB: Trying to load PDB \"%S\" (guid %s, sig 0x%08X, age 0x%08X)\n",
      a2,
      v15,
      v8,
      v9);
  }
  v16 = (*(int (__fastcall **)(__int64, const wchar_t *, const IID *, _QWORD, int))(*(_QWORD *)a1 + 40LL))(
          a1,
          a2,
          v10,
          v8,
          v9);
  if ( (dword_1400CB618 & 0x10000) != 0 )
  {
    if ( (_DWORD)v16 == -2147418113 )
    {
      v17 = "Data source has already been prepared.";
    }
    else if ( (_DWORD)v16 == -2147024809 )
    {
      v17 = "Invalid parameter.";
    }
    else if ( (int)v16 < -2140340223 || (unsigned int)(v16 + 2140340223) >= 0x19 )
    {
      v17 = (const char *)sub_14005A890(v16);
    }
    else
    {
      v17 = off_140091880[v16 + 2140340223];
    }
    sub_140002CE0((struct __crt_locale_pointers *)"PDB: loadAndValidateDataFromPdb(\"%S\"): %s\n", a2, v17);
  }
  if ( (unsigned int)(v16 + 2140340218) <= 1 )
    v4 = (unsigned int)sub_1400049D0(0) == 1;
  if ( Block )
  {
    v20 = 0;
    j_free(Block);
  }
  if ( v4 )
  {
LABEL_38:
    v16 = (*(int (__fastcall **)(__int64, const wchar_t *))(*(_QWORD *)a1 + 32LL))(a1, a2);
    if ( (dword_1400CB618 & 0x10000) != 0 )
    {
      if ( (_DWORD)v16 == -2147418113 )
      {
        v7 = "Data source has already been prepared.";
      }
      else if ( (_DWORD)v16 != -2147024809 )
      {
        if ( (int)v16 < -2140340223 || (unsigned int)(v16 + 2140340223) >= 0x19 )
          v7 = (const char *)sub_14005A890(v16);
        else
          v7 = off_140091880[v16 + 2140340223];
      }
      sub_140002CE0((struct __crt_locale_pointers *)"PDB: loadDataFromPdb(\"%S\"): %s\n", a2, v7);
    }
  }
  return (unsigned int)v16;
}
// 140091880: using guessed type char *off_140091880[25];
// 1400CB618: using guessed type int dword_1400CB618;
