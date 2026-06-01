/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AD78
// Address: 0x0005AD78

//----- (0005AD78) --------------------------------------------------------
int __fastcall sub_5AD78(int a1)
{
  _DWORD *v1; // r2
  int v2; // r4
  const char *v5; // r10
  void **v6; // r8
  int v7; // r3
  char *v8; // r0
  int v9; // r3
  unsigned int v10; // r2
  int v11; // r2
  void *v12; // r0
  bool v13; // zf
  char v14; // r3
  int v15; // r2
  void *v16; // [sp+Ch] [bp-268h] BYREF
  int v17; // [sp+10h] [bp-264h]
  int v18; // [sp+14h] [bp-260h]
  _DWORD *v19[3]; // [sp+18h] [bp-25Ch] BYREF
  unsigned __int8 v20; // [sp+24h] [bp-250h]
  _UNKNOWN **v21; // [sp+28h] [bp-24Ch] BYREF
  void *v22; // [sp+2Ch] [bp-248h]
  int v23; // [sp+30h] [bp-244h]
  int v24; // [sp+34h] [bp-240h]
  int v25; // [sp+60h] [bp-214h]
  unsigned __int16 v26; // [sp+64h] [bp-210h]
  unsigned __int16 v27; // [sp+66h] [bp-20Eh]
  unsigned int v28; // [sp+6Ch] [bp-208h]
  int v29; // [sp+70h] [bp-204h]
  unsigned __int16 v30; // [sp+74h] [bp-200h]
  unsigned __int16 v31; // [sp+76h] [bp-1FEh]
  int v32; // [sp+264h] [bp-10h]

  v1 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 && v1[1] == 1 )
  {
    if ( v1[3] )
      v5 = (const char *)v1[2];
    else
      v5 = (const char *)&dword_8DA5C;
    v6 = (void **)sub_74920((int)v5, 0);
    if ( v6 )
    {
      v22 = nullptr;
      v23 = 0;
      v24 = 0;
      v21 = &off_CFE60;
      v2 = sub_582F4((int)&v21, (int)v6, 1, 1);
      if ( v2 )
      {
        v7 = *(_DWORD *)(a1 + 56);
        v8 = *(char **)(a1 + 52);
        if ( (unsigned int)(v7 + 1) > *(_DWORD *)(a1 + 60) )
        {
          v8 = (char *)sub_77EB0(a1 + 52, *(void **)(a1 + 52), v7 + 1, 0x68u);
          v7 = *(_DWORD *)(a1 + 56);
          *(_DWORD *)(a1 + 52) = v8;
        }
        memset(&v8[104 * v7], 0, 0x68u);
        v9 = *(_DWORD *)(a1 + 56);
        v10 = v28;
        v16 = nullptr;
        v17 = 0;
        *(_DWORD *)(a1 + 56) = v9 + 1;
        v18 = 0;
        if ( v10 )
          sub_5AC8C((int)&v16, (int)v6, v10 + (unsigned __int64)(unsigned int)(18 * v29), 0);
        v19[1] = (_DWORD *)a1;
        v19[2] = &v16;
        v19[0] = &off_CFF78;
        v20 = 0;
        if ( v25 == 23126 )
          v11 = v32 + 40;
        else
          v11 = v30 + v32 + 24;
        sub_58738((int)&v21, (int)v6, v11, v27, v19);
        v12 = v16;
        v13 = v26 == 512;
        if ( v26 != 512 )
          v13 = v26 == 34404;
        v2 = v20;
        v14 = v13;
        v15 = v31 >> 15;
        if ( v26 == 43620 )
          v14 |= 1u;
        *(_BYTE *)(a1 + 96) = v14;
        *(_BYTE *)(a1 + 97) = v15;
        if ( v12 )
        {
          v17 = 0;
          sub_77E08(v12);
        }
      }
      else
      {
        sub_1700C((int)"Failed to read PE header from: %s\n", v5);
      }
      v21 = &off_CFE60;
      if ( v22 )
      {
        v23 = 0;
        sub_77E08(v22);
      }
      sub_749E8(v6);
    }
    else
    {
      v2 = 0;
      sub_1700C((int)"Cannot open file: %s.\n", v5);
    }
  }
  else
  {
    v2 = 0;
    sub_1700C((int)"Input source is not local file.\n");
  }
  return v2;
}
// 8DA5C: using guessed type int dword_8DA5C;
// CFE60: using guessed type _UNKNOWN *off_CFE60;
// CFF78: using guessed type _UNKNOWN *off_CFF78;
