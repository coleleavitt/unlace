/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82490
// Address: 0x00082490

//----- (00082490) --------------------------------------------------------
void __fastcall sub_82490(_DWORD *a1, size_t a2, int a3, int a4)
{
  int v6; // r5
  unsigned int v8; // r1
  int v9; // r3
  unsigned int v11; // r5
  size_t v12; // r7
  int v13; // r3
  _DWORD *v14; // r0
  _DWORD *v15; // r3
  _BYTE *v16; // r9
  _BYTE *v17; // r1
  _BYTE *v18; // r2
  _BYTE *v19; // r0
  size_t v20; // r11
  size_t v21; // r4
  bool v22; // zf
  size_t v23; // r11
  size_t v24; // r4
  unsigned int *v25; // r2
  int v26; // r3
  _DWORD *v27; // [sp+4h] [bp-10h]

  v6 = a4 - a3;
  v8 = *(_DWORD *)(*a1 - 8);
  v9 = *(_DWORD *)(*a1 - 12);
  v11 = v6 + v9;
  v12 = v9 - a2 - a3;
  if ( v11 > v8 )
  {
LABEL_4:
    v14 = sub_821F8(v11, v8);
    v15 = v14;
    v16 = v14 + 3;
    if ( a2 )
    {
      v17 = (_BYTE *)*a1;
      if ( a2 != 1 )
      {
        v27 = v14;
        memcpy(v14 + 3, v17, a2);
        v15 = v27;
        v18 = (_BYTE *)*a1;
        if ( !v12 )
        {
LABEL_8:
          v19 = v18 - 12;
          if ( v18 - 12 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
          {
            if ( &_pthread_key_create )
            {
              v25 = (unsigned int *)(v18 - 4);
              __dmb(0xBu);
              do
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              __dmb(0xBu);
            }
            else
            {
              v26 = *((_DWORD *)v18 - 1);
              *((_DWORD *)v18 - 1) = v26 - 1;
            }
            if ( v26 <= 0 )
              sub_822E4(v19);
          }
          *a1 = v16;
          goto LABEL_10;
        }
LABEL_13:
        v20 = a4 + a2 + 12;
        v21 = a2 + a3;
        if ( v12 == 1 )
          *((_BYTE *)v15 + v20) = v18[v21];
        else
          memcpy((char *)v15 + v20, &v18[v21], v12);
        v18 = (_BYTE *)*a1;
        goto LABEL_8;
      }
      *((_BYTE *)v14 + 12) = *v17;
    }
    v18 = (_BYTE *)*a1;
    if ( !v12 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v13 = *(_DWORD *)(*a1 - 4);
  __dmb(0xBu);
  if ( v13 > 0 )
  {
    v8 = *(_DWORD *)(*a1 - 8);
    goto LABEL_4;
  }
  v22 = v12 == 0;
  if ( v12 )
    v22 = a4 == a3;
  v16 = (_BYTE *)*a1;
  if ( !v22 )
  {
    v23 = a4 + a2;
    v24 = a2 + a3;
    if ( v12 == 1 )
      v16[v23] = v16[v24];
    else
      memmove(&v16[v23], &v16[v24], v12);
    v16 = (_BYTE *)*a1;
  }
LABEL_10:
  if ( v16 - 12 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
  {
    *((_DWORD *)v16 - 3) = v11;
    *((_DWORD *)v16 - 1) = 0;
    v16[v11] = 0;
  }
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
