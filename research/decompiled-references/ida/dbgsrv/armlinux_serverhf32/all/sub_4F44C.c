/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F44C
// Address: 0x0004F44C

//----- (0004F44C) --------------------------------------------------------
int __fastcall sub_4F44C(int *a1, int a2, int a3)
{
  int result; // r0
  char *v6; // r1
  unsigned int v7; // r9
  int *v8; // r0
  int v9; // r7
  unsigned __int8 *v10; // r3
  int *v11; // r0
  unsigned int *v12; // r3
  int v13; // r2
  unsigned __int8 *v14; // [sp+8h] [bp-Ch] BYREF

  result = sub_4F3F0(a1, a2, a3);
  if ( result != 1 )
  {
    if ( result == 2 )
      return 0;
    if ( result != -1 )
    {
      if ( *(_DWORD *)(a3 + 4) )
        v6 = *(char **)a3;
      else
        v6 = (char *)&dword_8DA5C;
      sub_4CA28(&v14, v6);
      v7 = sub_80B04(v14, *((_DWORD *)v14 - 3), -955291385);
      v8 = sub_4D0E4(a1 + 12, v7 % a1[13], (const void **)&v14, v7);
      if ( v8 )
      {
        v9 = *v8;
        v10 = v14;
        v11 = (int *)(v14 - 12);
        if ( v9 )
        {
          if ( v11 == std::string::_Rep::_S_empty_rep_storage )
          {
LABEL_10:
            result = 0;
            *(_WORD *)(a3 + 12) = *(_WORD *)(v9 + 8);
            return result;
          }
          goto LABEL_17;
        }
      }
      else
      {
        v10 = v14;
        v11 = (int *)(v14 - 12);
      }
      if ( v11 == std::string::_Rep::_S_empty_rep_storage )
        goto LABEL_15;
      v9 = 0;
LABEL_17:
      if ( &_pthread_key_create )
      {
        v12 = (unsigned int *)(v10 - 4);
        __dmb(0xBu);
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        __dmb(0xBu);
      }
      else
      {
        v13 = *((_DWORD *)v10 - 1);
        *((_DWORD *)v10 - 1) = v13 - 1;
      }
      if ( v13 <= 0 )
      {
        sub_80648(v11);
        if ( v9 )
          goto LABEL_10;
      }
      else if ( v9 )
      {
        goto LABEL_10;
      }
LABEL_15:
      *(_WORD *)(a3 + 12) = 2;
      return 0;
    }
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
