/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B524
// Address: 0x0004B524

//----- (0004B524) --------------------------------------------------------
_DWORD *__fastcall sub_4B524(int a1)
{
  _DWORD *v2; // r0
  _BYTE *v3; // r5
  _DWORD *v4; // r4
  size_t v5; // r7
  char v7; // r3
  void *v8; // r0
  const void *v9; // r1
  int *v10; // r0
  size_t v11; // r2
  int *v12; // r8
  _BYTE *v13; // r3
  unsigned int *v14; // r1
  unsigned int v15; // r3
  _BYTE *v16; // r0

  v2 = sub_808A4(0x1Cu);
  v3 = *(_BYTE **)a1;
  *v2 = 0;
  v4 = v2;
  if ( *((int *)v3 - 1) < 0 )
  {
    v10 = sub_4B49C(*((_DWORD *)v3 - 3), *((_DWORD *)v3 - 2));
    v11 = *((_DWORD *)v3 - 3);
    v12 = v10;
    v13 = v10 + 3;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        *((_BYTE *)v10 + 12) = *v3;
        v11 = *((_DWORD *)v3 - 3);
      }
      else
      {
        v16 = memcpy(v10 + 3, v3, v11);
        v11 = *((_DWORD *)v3 - 3);
        v13 = v16;
      }
    }
    v3 = v13;
    if ( v12 != std::string::_Rep::_S_empty_rep_storage )
    {
      *v12 = v11;
      v12[2] = 0;
      *((_BYTE *)v12 + v11 + 12) = 0;
    }
  }
  else if ( v3 - 12 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v14 = (unsigned int *)(v3 - 4);
      __dmb(0xBu);
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      __dmb(0xBu);
    }
    else
    {
      ++*((_DWORD *)v3 - 1);
    }
  }
  v5 = *(_DWORD *)(a1 + 8);
  v4[1] = v3;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  if ( v5 )
  {
    v8 = sub_77FEC(v5);
    v9 = *(const void **)(a1 + 4);
    v4[2] = v8;
    v4[4] = v5;
    memcpy(v8, v9, v5);
    v4[3] = v5;
  }
  v7 = *(_BYTE *)(a1 + 17);
  *((_BYTE *)v4 + 20) = *(_BYTE *)(a1 + 16);
  *((_BYTE *)v4 + 21) = v7;
  return v4;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
