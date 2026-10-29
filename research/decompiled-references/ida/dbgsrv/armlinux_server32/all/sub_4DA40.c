/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DA40
// Address: 0x0004DA40

//----- (0004DA40) --------------------------------------------------------
void __fastcall sub_4DA40(int a1, char *a2)
{
  _DWORD *v2; // r8
  int *v4; // r5
  unsigned __int8 *v5; // r0
  int *v6; // r8
  int v7; // r11
  int v8; // r2
  int v9; // r10
  int **v10; // r12
  int *i; // r6
  int v12; // r9
  int v13; // r1
  void *v14; // r0
  int v15; // r3
  void *v16; // r0
  int v17; // r1
  int *v18; // r3
  unsigned int *v19; // r2
  int v20; // r3
  unsigned int *v21; // r3
  int v22; // r2
  unsigned int v23; // [sp+4h] [bp-18h]
  unsigned __int8 *v24; // [sp+10h] [bp-Ch] BYREF

  if ( *(_BYTE *)(a1 + 644) )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(303);
  }
  v2 = *(_DWORD **)(a1 + 612);
  sub_4CBA8(&v24, a2);
  v4 = (int *)sub_4D4A4(v2, &v24);
  v5 = v24 - 12;
  if ( v24 - 12 == (unsigned __int8 *)std::string::_Rep::_S_empty_rep_storage )
    goto LABEL_6;
  if ( &_pthread_key_create )
  {
    v19 = (unsigned int *)(v24 - 4);
    __dmb(0xBu);
    do
      v20 = __ldrex(v19);
    while ( __strex(v20 - 1, v19) );
    __dmb(0xBu);
  }
  else
  {
    v20 = *((_DWORD *)v24 - 1);
    *((_DWORD *)v24 - 1) = v20 - 1;
  }
  if ( v20 > 0 )
  {
LABEL_6:
    if ( !v4 )
      return;
  }
  else
  {
    sub_809EC(v5);
    if ( !v4 )
      return;
  }
  v6 = *(int **)(a1 + 612);
  v23 = v6[1];
  v7 = *v6;
  v8 = 4 * (v4[6] % v23);
  v9 = v4[6] % v23;
  v10 = (int **)(*v6 + v8);
  for ( i = *v10; v4 != (int *)*i; i = (int *)*i )
    ;
  v12 = *v4;
  if ( *(int **)(*v6 + v8) != i )
  {
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 24) % v23;
      if ( v9 != v13 )
      {
        *(_DWORD *)(v7 + 4 * v13) = i;
        v12 = *v4;
      }
    }
    goto LABEL_14;
  }
  if ( !v12 )
  {
    v18 = i;
    goto LABEL_22;
  }
  v17 = *(_DWORD *)(v12 + 24) % (unsigned int)v6[1];
  if ( v9 != v17 )
  {
    *(_DWORD *)(v7 + 4 * v17) = i;
    v10 = (int **)(*v6 + v8);
    v18 = *(int **)(*v6 + 4 * v9);
LABEL_22:
    if ( v18 == v6 + 2 )
      v6[2] = v12;
    *v10 = nullptr;
    v12 = *v4;
  }
LABEL_14:
  *i = v12;
  v14 = (void *)v4[2];
  if ( v14 )
  {
    v4[3] = 0;
    sub_77F70(v14);
  }
  v15 = v4[1];
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v21 = (unsigned int *)(v15 - 4);
      __dmb(0xBu);
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      __dmb(0xBu);
    }
    else
    {
      v22 = *(_DWORD *)(v15 - 4);
      *(_DWORD *)(v15 - 4) = v22 - 1;
    }
    if ( v22 <= 0 )
      sub_809EC(v16);
  }
  sub_809EC(v4);
  --v6[3];
}
// D6C20: using guessed type char under_debugger;
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
