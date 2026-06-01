/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_16A14
// Address: 0x00016A14

//----- (00016A14) --------------------------------------------------------
_DWORD *__fastcall sub_16A14(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  _DWORD *v5; // r3
  int v6; // r6
  int i; // r4
  void *v8; // r0
  char *v9; // r3

  v2 = (void *)ptr[266];
  *ptr = &off_D049C;
  if ( v2 )
  {
    ptr[267] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)ptr[263];
  if ( v3 )
  {
    ptr[264] = 0;
    sub_77F70(v3);
  }
  v4 = (void *)ptr[260];
  if ( v4 )
  {
    ptr[261] = 0;
    sub_77F70(v4);
  }
  v5 = (_DWORD *)ptr[257];
  if ( v5 )
  {
    v6 = ptr[258];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (void *)v5[3 * i];
        v9 = (char *)&v5[3 * i];
        if ( v8 )
        {
          *((_DWORD *)v9 + 1) = 0;
          sub_77F70(v8);
        }
        v5 = (_DWORD *)ptr[257];
      }
    }
    ptr[258] = 0;
    sub_77F70(v5);
  }
  sub_808A0(ptr);
  return ptr;
}
// D049C: using guessed type _UNKNOWN *off_D049C;
