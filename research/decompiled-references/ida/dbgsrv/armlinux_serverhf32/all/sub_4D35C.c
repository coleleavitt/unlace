/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D35C
// Address: 0x0004D35C

//----- (0004D35C) --------------------------------------------------------
int __fastcall sub_4D35C(int a1, char *a2)
{
  _DWORD *v2; // r7
  int v3; // r4
  unsigned __int8 *v4; // r0
  unsigned int *v6; // r2
  int v7; // r3
  unsigned __int8 *v8; // [sp+8h] [bp-Ch] BYREF

  v2 = *(_DWORD **)(a1 + 612);
  sub_4CA28(&v8, a2);
  v3 = sub_4D324(v2, &v8);
  v4 = v8 - 12;
  if ( v8 - 12 != (unsigned __int8 *)std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v6 = (unsigned int *)(v8 - 4);
      __dmb(0xBu);
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      __dmb(0xBu);
    }
    else
    {
      v7 = *((_DWORD *)v8 - 1);
      *((_DWORD *)v8 - 1) = v7 - 1;
    }
    if ( v7 <= 0 )
      sub_80648(v4);
  }
  if ( v3 )
    return v3 + 8;
  else
    return 0;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
