/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51694
// Address: 0x00051694

//----- (00051694) --------------------------------------------------------
int __fastcall sub_51694(int a1, char *a2)
{
  unsigned int v4; // r10
  int v5; // r11
  _DWORD *v6; // r0
  char **v7; // r4
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r0
  int v10; // r0
  int v11; // r5
  size_t v12; // r6
  void *v13; // r8
  char *v14; // r3
  char v15; // r9
  char *v16; // r1
  char v17; // r5
  char *v18; // r2
  _DWORD *v20; // r0
  unsigned __int8 *v21; // r3
  _DWORD *v22; // r0
  unsigned int *v23; // r3
  int v24; // r2
  char *v25; // r3
  char *v26; // r1
  char *v27; // r0
  char *v28; // r5
  unsigned __int8 *v29; // [sp+8h] [bp-Ch] BYREF

  sub_4CA28(&v29, a2);
  v4 = sub_80B04(v29, *((_DWORD *)v29 - 3), -955291385);
  v5 = v4 % *(_DWORD *)(a1 + 620);
  v6 = sub_51360((_DWORD *)(a1 + 616), v5, (const void **)&v29, v4);
  if ( v6 && *v6 )
  {
    v7 = (char **)(*v6 + 8);
    v8 = v29;
    v9 = v29 - 12;
    if ( v29 - 12 == (unsigned __int8 *)std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_4;
  }
  else
  {
    v20 = sub_805CC(0x18u);
    v21 = v29;
    *v20 = 0;
    v20[1] = v21;
    v20[2] = 0;
    v20[3] = 0;
    v20[4] = 0;
    v29 = (unsigned __int8 *)&std::string::_Rep::_S_empty_rep_storage[3];
    v22 = sub_515C8((_DWORD *)(a1 + 616), v5, v4, v20);
    v8 = v29;
    v7 = (char **)(v22 + 2);
    v9 = v29 - 12;
    if ( v29 - 12 == (unsigned __int8 *)std::string::_Rep::_S_empty_rep_storage )
      goto LABEL_4;
  }
  if ( &_pthread_key_create )
  {
    v23 = (unsigned int *)(v8 - 4);
    __dmb(0xBu);
    do
      v24 = __ldrex(v23);
    while ( __strex(v24 - 1, v23) );
    __dmb(0xBu);
  }
  else
  {
    v24 = *((_DWORD *)v8 - 1);
    *((_DWORD *)v8 - 1) = v24 - 1;
  }
  if ( v24 <= 0 )
    sub_80648(v9);
LABEL_4:
  v10 = sub_4D35C(a1, a2);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_DWORD *)(v10 + 4);
    v13 = (void *)v12;
    if ( v12 )
    {
      v13 = sub_77E84(*(_DWORD *)(v10 + 4));
      memcpy(v13, *(const void **)v11, v12);
    }
    v14 = v7[1];
    v15 = *(_BYTE *)(v11 + 12);
    v16 = *v7;
    v17 = *(_BYTE *)(v11 + 13);
    if ( v14 + 1 > v7[2] )
    {
      v16 = (char *)sub_77EB0((int)v7, v16, (unsigned int)(v14 + 1), 0x10u);
      v14 = v7[1];
      *v7 = v16;
    }
    v18 = &v16[16 * (_DWORD)v14];
    *(_DWORD *)v18 = v13;
    *((_DWORD *)v18 + 1) = v12;
    *((_DWORD *)v18 + 2) = v12;
    v18[12] = v15;
    v18[13] = v17;
    ++v7[1];
  }
  else
  {
    v25 = v7[1];
    v26 = *v7;
    if ( v25 + 1 > v7[2] )
    {
      v27 = (char *)sub_77EB0((int)v7, v26, (unsigned int)(v25 + 1), 0x10u);
      v25 = v7[1];
      v26 = v27;
      *v7 = v27;
    }
    v28 = &v26[16 * (_DWORD)v25];
    *(_DWORD *)v28 = 0;
    *((_DWORD *)v28 + 1) = 0;
    *((_DWORD *)v28 + 2) = 0;
    v28[12] = 0;
    v28[13] = 0;
    ++v7[1];
  }
  return 0;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
