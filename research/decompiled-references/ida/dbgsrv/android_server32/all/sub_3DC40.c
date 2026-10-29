/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DC40
// Address: 0x0003DC40

//----- (0003DC40) --------------------------------------------------------
int __fastcall sub_3DC40(int a1, unsigned __int8 *a2)
{
  int v3; // r1
  _BYTE *v4; // r0
  unsigned __int8 *v5; // r5
  unsigned __int8 v7[8]; // [sp+0h] [bp-20h] BYREF
  int v8; // [sp+8h] [bp-18h]
  int v9; // [sp+Ch] [bp-14h]
  int v10; // [sp+10h] [bp-10h]
  int v11; // [sp+14h] [bp-Ch]
  int v12; // [sp+1Ch] [bp-4h]

  v7[0] = 2;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = 0;
  copy_idcv(v7, a2);
  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)a1;
  }
  else
  {
    v4 = qvector_reserve(a1, *(void **)a1, v3 + 1, 0x18u);
    *(_DWORD *)a1 = v4;
    v3 = *(_DWORD *)(a1 + 4);
  }
  v4[24 * v3] = 2;
  v5 = &v4[24 * v3];
  memset(v5 + 8, 0, 0x10u);
  copy_idcv(v5, v7);
  ++*(_DWORD *)(a1 + 4);
  free_idcv(v7);
  return _stack_chk_guard - v12;
}
