/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_84D00
// Address: 0x00084D00

//----- (00084D00) --------------------------------------------------------
size_t __cdecl sub_84D00(int a1, char *a2, char *s)
{
  _DWORD *v3; // eax
  void *v4; // edi
  char *v5; // edi
  size_t v6; // eax
  _BYTE *v7; // eax
  _BYTE *v8; // esi
  _DWORD *v9; // eax
  int v10; // eax
  size_t v11; // edi
  FILE *v12; // eax
  size_t v13; // eax
  const char *v14; // ecx
  int v15; // eax
  unsigned int v17; // [esp+14h] [ebp-38h]
  size_t v18; // [esp+14h] [ebp-38h]
  FILE *v19; // [esp+18h] [ebp-34h]
  void *v20; // [esp+1Ch] [ebp-30h]
  int v21[4]; // [esp+20h] [ebp-2Ch] BYREF
  void *src; // [esp+30h] [ebp-1Ch] BYREF
  _BYTE v23[23]; // [esp+35h] [ebp-17h] BYREF

  *(_DWORD *)&v23[3] = __readgsdword(0x14u);
  v3 = open_linput(a2, 0);
  if ( v3 )
  {
    v4 = v3;
    v17 = calc_file_crc32((int)v3);
    close_linput(v4);
  }
  else
  {
    v17 = -1;
  }
  sub_96B40((int)v21, 51);
  v5 = &byte_DCEE2;
  if ( s )
    v5 = s;
  v6 = strlen(v5);
  sub_3A950(v21, v5, v6 + 1);
  v7 = pack_dd(&src, (unsigned int)v23, v17);
  sub_3A950(v21, &src, v7 - (_BYTE *)&src);
  v8 = (_BYTE *)(a1 + 100);
  v9 = (_DWORD *)(*(int (__cdecl **)(int, int, int *))(*(_DWORD *)(a1 + 100) + 8))(a1 + 100, 51, v21);
  if ( !v9 )
  {
    v18 = 0;
    goto LABEL_17;
  }
  src = (char *)v9 + 5;
  v20 = v9;
  v10 = unpack_dd((unsigned int *)&src, (unsigned int)v9 + *v9 + 5);
  v11 = v10;
  if ( !v10 )
  {
LABEL_15:
    v18 = 0;
    goto LABEL_16;
  }
  LOBYTE(v10) = 1;
  v18 = v10;
  if ( v11 != 1 )
  {
    v12 = fopenWB(a2);
    if ( v12 )
    {
      v19 = v12;
      v13 = qfwrite(v12, src, v11);
      LOBYTE(v13) = v13 == v11;
      v18 = v13;
      v14 = "failed";
      if ( (_BYTE)v13 )
        v14 = "success";
      sub_7C0C0(v8, "Updated kernel debugger stub: %s\n", v14);
      qfclose(v19);
      goto LABEL_16;
    }
    v15 = qerrstr(-1);
    sub_84F60(v8, "Could not update the kernel debugger stub.\n%s", v15);
    goto LABEL_15;
  }
LABEL_16:
  qfree(v20);
LABEL_17:
  if ( v21[0] )
  {
    v21[1] = 0;
    qfree((void *)v21[0]);
    v21[0] = 0;
    v21[2] = 0;
  }
  return v18;
}
// DCEE2: using guessed type char byte_DCEE2;
