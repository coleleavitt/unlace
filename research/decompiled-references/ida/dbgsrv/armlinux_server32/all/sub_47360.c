/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47360
// Address: 0x00047360

//----- (00047360) --------------------------------------------------------
void __fastcall __noreturn sub_47360(_DWORD *a1, int a2, int a3, signed int a4)
{
  int v7; // r4
  int v8; // r5
  void *v9; // r0
  void *v10; // r0
  int v11; // r7
  int v12; // r4
  int v13; // r5
  unsigned __int8 *v14; // r0
  void *v15; // r0
  int v16; // r2
  int v17; // r3
  void *v19[3]; // [sp+Ch] [bp-Ch] BYREF
  char v20[8]; // [sp+18h] [bp+0h] BYREF
  signed int v21; // [sp+20h] [bp+8h]
  int v22; // [sp+24h] [bp+Ch]
  int v23; // [sp+28h] [bp+10h]
  int v24; // [sp+2Ch] [bp+14h]

  v20[0] = 2;
  v21 = a4;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  memset(v19, 0, sizeof(v19));
  sub_471E0(v19, a4);
  if ( a4 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      sub_42624((int *)((char *)v19[0] + v7), (int *)(a3 + v7));
      ++v8;
      v7 += 24;
    }
    while ( a4 != v8 );
  }
  v9 = (void *)a1[6];
  if ( v9 )
  {
    a1[7] = 0;
    sub_77F70(v9);
    a1[6] = 0;
    a1[8] = 0;
  }
  v10 = (void *)a1[9];
  if ( v10 )
  {
    a1[10] = 0;
    sub_77F70(v10);
    a1[9] = 0;
    a1[11] = 0;
  }
  if ( a1[3] )
  {
    v11 = a1[4];
    if ( v11 )
    {
      v12 = 0;
      v13 = 0;
      do
      {
        ++v13;
        v14 = (unsigned __int8 *)(a1[3] + v12);
        v12 += 24;
        sub_45758(v14);
      }
      while ( v11 != v13 );
    }
    v15 = (void *)a1[3];
    a1[4] = 0;
    sub_77F70(v15);
    a1[3] = 0;
    a1[5] = 0;
  }
  v16 = a1[1];
  v17 = *(_DWORD *)(v16 + 68) - 1;
  *(_DWORD *)(v16 + 68) = v17;
  if ( !v17 && off_D3CF4 )
    ((void (__fastcall *)())off_D3CF4)();
  *a1 = 0;
  (*(void (__fastcall **)(void *, char *))(a2 + 4))(v19[0], v20);
  if ( under_debugger )
    __und(0xFFu);
  sub_78C64(291);
}
// D3CF4: using guessed type _UNKNOWN *off_D3CF4;
// D6C20: using guessed type char under_debugger;
