/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_83284
// Address: 0x00083284

//----- (00083284) --------------------------------------------------------
int *__fastcall sub_83284(int *a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  int *v5; // r0
  unsigned int *v6; // r1
  int *v7; // r0
  unsigned int *v9; // r3
  int v10; // r2
  unsigned int v11; // r3
  _BYTE v12[4]; // [sp+4h] [bp-4h] BYREF

  v3 = (_DWORD *)*a2;
  v4 = *a1;
  if ( *a1 != *a2 )
  {
    v5 = v3 - 3;
    v6 = v3 - 1;
    if ( (int)*(v3 - 1) < 0 )
    {
      v3 = sub_82CC0((int)v5, (int)v12, 0);
      v4 = *a1;
    }
    else if ( v5 != std::string::_Rep::_S_empty_rep_storage )
    {
      if ( &_pthread_key_create )
      {
        __dmb(0xBu);
        do
          v11 = __ldrex(v6);
        while ( __strex(v11 + 1, v6) );
        __dmb(0xBu);
        v4 = *a1;
        v7 = (int *)(*a1 - 12);
        if ( v7 == std::string::_Rep::_S_empty_rep_storage )
          goto LABEL_5;
LABEL_9:
        v9 = (unsigned int *)(v4 - 4);
        __dmb(0xBu);
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        __dmb(0xBu);
LABEL_12:
        if ( v10 <= 0 )
          sub_822E4(v7);
        goto LABEL_5;
      }
      v7 = (int *)(v4 - 12);
      ++*(v3 - 1);
      if ( (int *)(v4 - 12) == std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_5;
LABEL_15:
      v10 = *(_DWORD *)(v4 - 4);
      *(_DWORD *)(v4 - 4) = v10 - 1;
      goto LABEL_12;
    }
    v7 = (int *)(v4 - 12);
    if ( (int *)(v4 - 12) == std::string::_Rep::_S_empty_rep_storage )
    {
LABEL_5:
      *a1 = (int)v3;
      return a1;
    }
    if ( &_pthread_key_create )
      goto LABEL_9;
    goto LABEL_15;
  }
  return a1;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
