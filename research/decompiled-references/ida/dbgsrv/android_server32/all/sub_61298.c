/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61298
// Address: 0x00061298

//----- (00061298) --------------------------------------------------------
int __fastcall sub_61298(int a1)
{
  _DWORD *v2; // r0
  const char *v3; // r4
  int v4; // r6
  int *v5; // r0
  void **v6; // r0
  int v7; // r3
  char *v8; // r0
  char *v9; // r0
  __int64 v10; // r2
  int v11; // r2
  bool v12; // r0
  unsigned int v13; // r1
  int *v15; // [sp+18h] [bp-268h]
  void *v16; // [sp+1Ch] [bp-264h] BYREF
  int v17; // [sp+20h] [bp-260h]
  int v18; // [sp+24h] [bp-25Ch]
  _DWORD *v19[3]; // [sp+28h] [bp-258h] BYREF
  char v20; // [sp+34h] [bp-24Ch]
  _UNKNOWN **v21; // [sp+38h] [bp-248h] BYREF
  void *v22; // [sp+3Ch] [bp-244h]
  int v23; // [sp+40h] [bp-240h]
  int v24; // [sp+44h] [bp-23Ch]
  int v25; // [sp+70h] [bp-210h]
  unsigned __int16 v26; // [sp+74h] [bp-20Ch]
  unsigned __int16 v27; // [sp+76h] [bp-20Ah]
  int v28; // [sp+7Ch] [bp-204h]
  int v29; // [sp+80h] [bp-200h]
  unsigned __int16 v30; // [sp+84h] [bp-1FCh]
  unsigned __int16 v31; // [sp+86h] [bp-1FAh]
  int v32; // [sp+274h] [bp-Ch]

  v2 = *(_DWORD **)a1;
  if ( v2 && v2[1] == 1 )
  {
    if ( v2[3] )
      v3 = (const char *)v2[2];
    else
      v3 = &byte_B3CBE;
    v5 = open_linput(v3, 0);
    if ( v5 )
    {
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      v21 = &off_DA024;
      v4 = 1;
      v15 = v5;
      if ( sub_59A30((int)&v21, (int)v5, 1, 1) )
      {
        v6 = (void **)(a1 + 52);
        v7 = *(_DWORD *)(a1 + 56);
        if ( *(_DWORD *)(a1 + 60) >= (unsigned int)(v7 + 1) )
        {
          v8 = (char *)*v6;
        }
        else
        {
          v8 = (char *)qvector_reserve((int)v6, *v6, v7 + 1, 0x68u);
          *(_DWORD *)(a1 + 52) = v8;
          v7 = *(_DWORD *)(a1 + 56);
        }
        v9 = &v8[104 * v7];
        *((_DWORD *)v9 + 3) = 0;
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 5) = 0;
        memset(v9, 0, 0x68u);
        ++*(_DWORD *)(a1 + 56);
        v17 = 0;
        v16 = nullptr;
        v18 = 0;
        if ( v28 )
        {
          LODWORD(v10) = 18 * v29 + v28;
          HIDWORD(v10) = __CFADD__(18 * v29, v28);
          sub_6214C((int)&v16, v15, v10, 0);
        }
        v20 = 0;
        v19[1] = (_DWORD *)a1;
        v19[2] = &v16;
        v19[0] = &off_D9FF8;
        if ( v25 == 23126 )
          v11 = v32 + 40;
        else
          v11 = v32 + v30 + 24;
        sub_624E0((unsigned int)&v21, v15, v11, v27, v19);
        v12 = 1;
        if ( v26 != 512 )
        {
          v12 = 1;
          if ( v26 != 34404 )
            v12 = v26 == 43620;
        }
        v13 = v31;
        *(_BYTE *)(a1 + 96) = v12;
        *(_BYTE *)(a1 + 97) = v13 >> 15;
        if ( !v20 )
          v4 = 0;
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
          v18 = 0;
          v16 = nullptr;
        }
      }
      else
      {
        v4 = 0;
        sub_1BBA0((int)"Failed to read PE header from: %s\n", v3);
      }
      v21 = &off_DA024;
      if ( v22 )
      {
        v23 = 0;
        qfree(v22);
        v24 = 0;
        v22 = nullptr;
      }
      close_linput(v15);
    }
    else
    {
      sub_1BBA0((int)"Cannot open file: %s.\n", v3);
      return 0;
    }
  }
  else
  {
    sub_1BBA0((int)"Input source is not local file.\n");
    return 0;
  }
  return v4;
}
// B3CBE: using guessed type char byte_B3CBE;
// D9FF8: using guessed type _UNKNOWN *off_D9FF8;
// DA024: using guessed type _UNKNOWN *off_DA024;
