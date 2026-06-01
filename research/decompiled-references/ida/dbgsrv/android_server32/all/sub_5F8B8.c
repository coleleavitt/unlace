/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5F8B8
// Address: 0x0005F8B8

//----- (0005F8B8) --------------------------------------------------------
bool __fastcall sub_5F8B8(int a1, const char *a2, const char *a3)
{
  int *v5; // r0
  unsigned int v6; // r6
  int *v7; // r7
  size_t v8; // r0
  _BYTE *v9; // r0
  int v10; // r0
  _BYTE *v11; // r5
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r4
  int v14; // r0
  size_t v15; // r7
  _BOOL4 v16; // r6
  FILE *v17; // r0
  int v18; // r0
  const char *v19; // r2
  const char *v20; // r0
  FILE *v23; // [sp+Ch] [bp-24h]
  void *v24[3]; // [sp+18h] [bp-18h] BYREF
  void *ptr; // [sp+24h] [bp-Ch] BYREF
  _BYTE v26[3]; // [sp+29h] [bp-7h] BYREF

  v5 = open_linput(a2, 0);
  v6 = -1;
  if ( v5 )
  {
    v7 = v5;
    v6 = calc_file_crc32(v5);
    close_linput(v7);
  }
  sub_6DA58((int)v24, 51);
  if ( !a3 )
    a3 = &byte_A0742;
  v8 = strlen(a3);
  ((void (__fastcall *)(void **, const char *, size_t))loc_30B84)(v24, a3, v8 + 1);
  v9 = pack_dd(&ptr, (unsigned int)v26, v6);
  ((void (__fastcall *)(void **, void **, int))loc_30B84)(v24, &ptr, v9 - (_BYTE *)&ptr);
  v10 = *(_DWORD *)(a1 + 100);
  v11 = (_BYTE *)(a1 + 100);
  v12 = (unsigned __int8 *)(*(int (__fastcall **)(_BYTE *, int, void **))(v10 + 8))(v11, 51, v24);
  v13 = v12;
  if ( v12 )
  {
    ptr = v12 + 5;
    v14 = unpack_dd(
            (unsigned int *)&ptr,
            (unsigned int)&v12[0x10000 * ((v12[3] << 8) + v12[2]) + 5 + 256 * v12[1] + *v12]);
    v15 = v14;
    v16 = 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v17 = fopenWB(a2);
        if ( v17 )
        {
          v23 = v17;
          v18 = qfwrite(v17, ptr, v15);
          v16 = v18 == v15;
          if ( v18 == v15 )
            v19 = "success";
          else
            v19 = "failed";
          sub_5AB84(v11, "Updated kernel debugger stub: %s\n", v19);
          qfclose(v23);
        }
        else
        {
          v20 = (const char *)qerrstr(-1);
          v16 = 0;
          sub_5FA34(v11, "Could not update the kernel debugger stub.\n%s", v20);
        }
      }
    }
    else
    {
      v16 = 0;
    }
    qfree(v13);
  }
  else
  {
    v16 = 0;
  }
  if ( v24[0] )
  {
    v24[1] = nullptr;
    qfree(v24[0]);
    v24[2] = nullptr;
    v24[0] = nullptr;
  }
  return v16;
}
// A0742: using guessed type char byte_A0742;
