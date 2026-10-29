/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E8F0
// Address: 0x0042E8F0

//----- (0042E8F0) --------------------------------------------------------
void __thiscall sub_42E8F0(int this, unsigned int a2)
{
  char *v3; // edx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  char *v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // [esp+Ch] [ebp-34h]
  int v12; // [esp+10h] [ebp-30h]
  int v13; // [esp+14h] [ebp-2Ch]
  char v14[8]; // [esp+1Ch] [ebp-24h] BYREF
  __int128 v15; // [esp+24h] [ebp-1Ch]
  int v16; // [esp+3Ch] [ebp-4h]

  v3 = *(char **)this;
  if ( a2 < *(_DWORD *)this || a2 >= (unsigned int)&v3[40 * *(_DWORD *)(this + 8)] )
  {
    v7 = *(_DWORD *)(this + 4) + 1;
    if ( v7 > *(_DWORD *)(this + 8) )
    {
      v3 = (char *)sub_453B00(this, v3, v7, 0x28u);
      *(_DWORD *)this = v3;
    }
    v8 = &v3[40 * *(_DWORD *)(this + 4)];
    *(_DWORD *)v8 = *(_DWORD *)a2;
    v9 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)v8 + 1) = v9;
    v10 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a2 + 4) = 0;
    *((_DWORD *)v8 + 2) = v10;
    *(_DWORD *)(a2 + 8) = 0;
    v16 = 11;
    v8[16] = 2;
    *(_OWORD *)(v8 + 24) = 0;
    sub_423670(v8 + 16, (char *)(a2 + 16));
  }
  else
  {
    v11 = *(_DWORD *)a2;
    v12 = *(_DWORD *)(a2 + 4);
    v4 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    v13 = v4;
    *(_DWORD *)(a2 + 8) = 0;
    v16 = 0;
    v14[0] = 2;
    v15 = 0;
    sub_423670(v14, (char *)(a2 + 16));
    v5 = *(_DWORD *)(this + 4) + 1;
    v16 = 1;
    if ( v5 > *(_DWORD *)(this + 8) )
      *(_DWORD *)this = sub_453B00(this, *(void **)this, v5, 0x28u);
    v6 = *(_DWORD *)this + 40 * *(_DWORD *)(this + 4);
    *(_DWORD *)v6 = v11;
    *(_DWORD *)(v6 + 4) = v12;
    *(_DWORD *)(v6 + 8) = v13;
    *(_BYTE *)(v6 + 16) = 2;
    LOBYTE(v16) = 5;
    *(_OWORD *)(v6 + 24) = 0;
    sub_423670((char *)(v6 + 16), v14);
    v16 = 6;
    sub_423B70((int)v14);
    v16 = 7;
  }
  ++*(_DWORD *)(this + 4);
}
// 42EA03: conditional instruction was optimized away because %var_34.4==0
