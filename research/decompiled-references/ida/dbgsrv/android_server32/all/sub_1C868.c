/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C868
// Address: 0x0001C868

//----- (0001C868) --------------------------------------------------------
int __fastcall sub_1C868(int a1, int a2, int a3)
{
  _DWORD *v5; // r1
  _DWORD *v6; // r2
  _DWORD *v7; // r0
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r0
  int v14; // r2
  unsigned int v15; // r0
  bool v16; // zf
  int v17; // r1
  int v18; // r2
  _DWORD *v19; // r7
  int v20; // [sp+8h] [bp-40h]
  int v21; // [sp+Ch] [bp-3Ch]
  int v23; // [sp+18h] [bp-30h] BYREF
  int v24; // [sp+1Ch] [bp-2Ch]
  int v25; // [sp+20h] [bp-28h]
  char v26; // [sp+24h] [bp-24h]
  int v27; // [sp+28h] [bp-20h]
  int v28; // [sp+2Ch] [bp-1Ch]
  int v29; // [sp+30h] [bp-18h]
  int v30; // [sp+34h] [bp-14h]
  int v31; // [sp+38h] [bp-10h]
  int v32; // [sp+3Ch] [bp-Ch]
  int v33; // [sp+40h] [bp-8h]
  int v34; // [sp+44h] [bp-4h]

  v5 = (_DWORD *)(a1 + 916);
  v6 = *(_DWORD **)(a1 + 916);
  if ( !v6 )
    goto LABEL_10;
  v7 = (_DWORD *)(a1 + 916);
  do
  {
    v8 = v6[4];
    if ( v8 >= a2 )
      v7 = v6;
    v9 = v6 + 1;
    if ( v8 >= a2 )
      v9 = v6;
    v6 = (_DWORD *)*v9;
  }
  while ( *v9 );
  if ( v7 != v5 && v7[4] <= a2 )
  {
    v7[10] = a3;
    v11 = nullptr;
    v26 = 0;
    v24 = 0;
    v23 = -1;
    v25 = -1;
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = 0;
    v29 = 0;
    v28 = 0;
    v27 = 0;
    set_debug_event_code((int)&v23, 4);
    if ( (v27 & 0xFFFFFFF) != 2 && (v27 & 0xFFFFFFF) != 4 )
    {
      if ( !under_debugger )
        interr(3296);
      __debugbreak();
    }
    v28 = 0;
    v12 = *(_DWORD *)(a1 + 968);
    v26 = 1;
    v23 = v12;
    v24 = a2;
    v25 = -1;
    if ( 16 * v27 )
    {
      v13 = *(_DWORD *)(a1 + 64);
      v21 = *(_DWORD *)(a1 + 60);
      v20 = v13;
      v14 = 93 * ((v13 - v21) >> 2) - 1;
      if ( v13 == v21 )
        v14 = v13 - v21;
      v15 = *(_DWORD *)(a1 + 76) + *(_DWORD *)(a1 + 72);
      v16 = v14 == v15;
      v17 = *(_DWORD *)(a1 + 60);
      v18 = v20;
      if ( v16 )
      {
        sub_25954((void **)(a1 + 56));
        v15 = *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 76);
        v17 = *(_DWORD *)(a1 + 60);
        v18 = *(_DWORD *)(a1 + 64);
      }
      if ( v18 != v17 )
        v11 = (_DWORD *)(*(_DWORD *)(v17 + 4 * (v15 / 0x5D)) + 44 * (v15 % 0x5D));
      *v11 = -1;
      v11[1] = 0;
      v19 = v11 + 2;
      *v19 = -1;
      *((_BYTE *)v19 + 4) = 0;
      v19[2] = 0;
      copy_debug_event((int)(v19 - 2), (int)&v23);
      *(_BYTE *)(a1 + 1020) = 0;
      ++*(_DWORD *)(a1 + 76);
    }
    if ( a3 == 3 )
      sub_1E190((_DWORD *)a1, a2);
    free_debug_event(&v23);
  }
  else
  {
LABEL_10:
    sub_1BBA0((int)"unknown thread %d died\n", a2);
  }
  return _stack_chk_guard - v34;
}
// E0550: using guessed type char under_debugger;
