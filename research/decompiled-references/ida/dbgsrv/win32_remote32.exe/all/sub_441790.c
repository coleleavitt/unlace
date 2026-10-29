/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_441790
// Address: 0x00441790

//----- (00441790) --------------------------------------------------------
void __thiscall sub_441790(int this, int a2, signed int a3, int a4)
{
  _BYTE *v5; // eax
  int v6; // ecx
  unsigned int v7[2]; // [esp+Ch] [ebp-34h] BYREF
  void *v8; // [esp+14h] [ebp-2Ch]
  int v9; // [esp+18h] [ebp-28h]
  int v10; // [esp+1Ch] [ebp-24h]
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  _BYTE v13[5]; // [esp+28h] [ebp-18h] BYREF
  _BYTE v14[3]; // [esp+2Dh] [ebp-13h] BYREF
  int v15; // [esp+3Ch] [ebp-4h]

  v12 = a4;
  v5 = sub_4540B0(v13, (unsigned int)v14, a3);
  sub_401600(a2, (unsigned int)v13, v5 - v13);
  if ( a3 <= 0 )
  {
    sub_406150(a2, v12);
  }
  else
  {
    v7[0] = 24;
    v7[1] = 4;
    v8 = nullptr;
    v9 = 0;
    v10 = 0;
    v11 = -1;
    v6 = *(_DWORD *)(this + 256);
    v15 = 0;
    (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)v6 + 272))(v6, v7);
    sub_449860(a2, v7);
    if ( *(_BYTE *)(this + 104) )
      sub_402760("RPC: append_start_or_attach idaregs.nregs %zu\n");
    sub_449CC0(a2, (_DWORD *)(*(_DWORD *)(this + 256) + 264));
    v15 = 1;
    if ( v8 )
    {
      v9 = 0;
      sub_453A20(v8);
    }
  }
}
