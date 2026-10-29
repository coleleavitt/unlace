/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49008
// Address: 0x00049008

//----- (00049008) --------------------------------------------------------
void __fastcall sub_49008(int a1, _BYTE *a2)
{
  int v4; // r10
  _DWORD *v5; // r0
  int *v6; // r0
  int v7; // r3
  const char *v8; // r9
  const char *v9; // r8
  size_t v10; // r0
  size_t v11; // r11
  size_t v12; // r0
  size_t v13; // r9
  size_t v14; // r11
  void *v15; // r8
  void *v16; // r6
  size_t v17; // [sp+4h] [bp-30h]
  unsigned int v18; // [sp+Ch] [bp-28h] BYREF
  unsigned __int8 v19[8]; // [sp+10h] [bp-24h] BYREF
  void *v20; // [sp+18h] [bp-1Ch] BYREF
  size_t v21; // [sp+1Ch] [bp-18h]
  int v22; // [sp+20h] [bp-14h]
  int v23; // [sp+24h] [bp-10h]

  v21 = 0;
  v20 = nullptr;
  v22 = 0;
  v23 = 0;
  v19[0] = 2;
  v18 = -1;
  v4 = sub_70B7C();
  v5 = *(_DWORD **)(a1 + 56);
  if ( !v5 )
  {
    sub_45758(v19);
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    v19[0] = 7;
    sub_48E9C(a2, "file", v19, 0);
    sub_45758(v19);
LABEL_13:
    v19[0] = 7;
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    goto LABEL_10;
  }
  v6 = sub_3EE38(v5, *(_DWORD *)(a1 + 60), &v18);
  v7 = *(_DWORD *)(a1 + 56);
  v8 = (const char *)v6;
  if ( *(_DWORD *)(v7 + 4) )
    v9 = *(const char **)v7;
  else
    v9 = (const char *)&dword_8DB98;
  sub_45758(v19);
  if ( v8 )
  {
    v10 = strlen(v8);
    v11 = v10;
    v19[0] = 7;
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    if ( v10 )
    {
      v17 = v10 + 1;
      v20 = sub_78018((int)&v20, nullptr, v10 + 1, 1u);
      v21 = v17;
      memmove(v20, v8, v11);
      *((_BYTE *)v20 + v11) = 0;
    }
  }
  else
  {
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    v19[0] = 7;
  }
  sub_48E9C(a2, "file", v19, 0);
  sub_45758(v19);
  if ( !v9 )
    goto LABEL_13;
  v12 = strlen(v9);
  v13 = v12;
  v19[0] = 7;
  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  if ( v12 )
  {
    v14 = v12 + 1;
    v20 = sub_78018((int)&v20, nullptr, v12 + 1, 1u);
    v21 = v14;
    memmove(v20, v9, v13);
    *((_BYTE *)v20 + v13) = 0;
  }
LABEL_10:
  sub_48E9C(a2, "func", v19, 0);
  v15 = (void *)v18;
  sub_45758(v19);
  v20 = v15;
  v19[0] = 2;
  sub_48E9C(a2, "line", v19, 0);
  v16 = *(void **)(a1 + 60);
  sub_45758(v19);
  v20 = v16;
  v19[0] = 2;
  sub_48E9C(a2, "pc", v19, 0);
  sub_70B98(v4);
  sub_45758(v19);
}
// 8DB98: using guessed type int dword_8DB98;
