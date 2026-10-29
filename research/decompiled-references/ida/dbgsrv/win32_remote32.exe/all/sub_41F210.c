/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41F210
// Address: 0x0041F210

//----- (0041F210) --------------------------------------------------------
char __userpurge sub_41F210@<al>(int this@<ecx>, int ebx0@<ebx>, int a2, int a3, unsigned int *a4, char *a5, char a6)
{
  void **v9; // esi
  unsigned int v10; // eax
  void **v11; // esi
  unsigned int v12; // eax
  int v13; // ecx
  _BYTE *v14; // eax
  signed int v15; // eax
  LPVOID v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  _BYTE *v19; // eax
  char v20; // al
  char *v21; // esi
  _BYTE v22[8]; // [esp+Ch] [ebp-58h] BYREF
  __int128 v23; // [esp+14h] [ebp-50h]
  char v24[8]; // [esp+24h] [ebp-40h] BYREF
  __int128 v25; // [esp+2Ch] [ebp-38h]
  _BYTE v26[8]; // [esp+3Ch] [ebp-28h] BYREF
  LPVOID v27; // [esp+44h] [ebp-20h]
  unsigned int v28; // [esp+48h] [ebp-1Ch]
  unsigned int v29; // [esp+4Ch] [ebp-18h]
  int v30; // [esp+54h] [ebp-10h]
  int v31; // [esp+60h] [ebp-4h]
  unsigned int v32; // [esp+6Ch] [ebp+8h]
  char v33; // [esp+7Fh] [ebp+1Bh]

  if ( a3 < 0 )
  {
    if ( a3 == -1 || -a3 >= (unsigned int)dword_4B4060 )
      goto LABEL_3;
  }
  else if ( (unsigned int)a3 >= *(_DWORD *)(*(_DWORD *)(this + 4) + 4) )
  {
LABEL_3:
    sub_45CB10(0, "?");
    sub_45CC20(88);
    sub_41FBD0((LPVOID *)this, ebx0);
    return 0;
  }
  v9 = (void **)(this + 36);
  v30 = *(_DWORD *)(this + 16);
  v10 = *(_DWORD *)(this + 40) + 1;
  if ( v10 > *(_DWORD *)(this + 44) )
    *v9 = sub_453B00(this + 36, *v9, v10, 4u);
  *((_DWORD *)*v9 + (*(_DWORD *)(this + 40))++) = v30;
  v23 = 0;
  v11 = (void **)(this + 12);
  LODWORD(v23) = a2;
  v31 = 0;
  v22[0] = 5;
  ++*(_DWORD *)(a2 + 8);
  v12 = *(_DWORD *)(this + 16) + 1;
  if ( v12 > *(_DWORD *)(this + 20) )
    *v11 = sub_453B00(this + 12, *v11, v12, 0x18u);
  v13 = 3 * *(_DWORD *)(this + 16);
  v14 = *v11;
  v14[8 * v13] = 2;
  *(_OWORD *)&v14[8 * v13 + 8] = 0;
  ++*(_DWORD *)(this + 16);
  sub_424B40(&v14[8 * v13], (int)v22);
  v26[0] = 7;
  v27 = nullptr;
  v28 = 0;
  v15 = a4[1];
  v29 = 0;
  v32 = v15;
  if ( v15 )
  {
    v16 = sub_4539E0(v15);
    v29 = v32;
    v27 = v16;
    sub_464310((unsigned int)v16, *a4, v32);
    v28 = v32;
  }
  v17 = *(_DWORD *)(this + 16) + 1;
  LOBYTE(v31) = 2;
  if ( v17 > *(_DWORD *)(this + 20) )
    *v11 = sub_453B00(this + 12, *v11, v17, 0x18u);
  v18 = 3 * *(_DWORD *)(this + 16);
  v19 = *v11;
  v19[8 * v18] = 2;
  *(_OWORD *)&v19[8 * v18 + 8] = 0;
  ++*(_DWORD *)(this + 16);
  sub_424B40(&v19[8 * v18], (int)v26);
  v20 = a6;
  v21 = a5;
  if ( !a6 )
  {
    v24[0] = 2;
    v25 = 0;
    sub_423670(v24, a5);
    LOBYTE(v31) = 4;
    sub_4234F0((char *)this, v24);
    LOBYTE(v31) = 5;
    sub_423B70((int)v24);
    v20 = 0;
    LOBYTE(v31) = 2;
  }
  if ( !v20 )
    v21 = nullptr;
  v33 = sub_420C30((_DWORD *)this, ebx0, v21, nullptr, a3);
  LOBYTE(v31) = 6;
  sub_423B70((int)v26);
  v31 = 7;
  sub_423B70((int)v22);
  return v33;
}
// 4B4060: using guessed type int dword_4B4060;
