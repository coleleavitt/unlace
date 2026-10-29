/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51D7C
// Address: 0x00051D7C

//----- (00051D7C) --------------------------------------------------------
_DWORD *__fastcall sub_51D7C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0
  void **v4; // r3
  void **v5; // r4

  v2 = (void *)ptr[1038];
  ptr[1] = 0;
  ptr[2] = 0;
  ptr[5] = 0;
  *ptr = &dword_D27F0[2];
  if ( v2 )
  {
    ptr[1039] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)ptr[1035];
  if ( v3 )
  {
    ptr[1036] = 0;
    sub_77F70(v3);
  }
  v4 = (void **)ptr[1031];
  if ( ptr + 1031 != v4 )
  {
    do
    {
      v5 = (void **)*v4;
      *(_DWORD *)v4[1] = *v4;
      *((_DWORD *)*v4 + 1) = v4[1];
      sub_77F70(v4);
      v4 = v5;
      --ptr[1033];
    }
    while ( ptr + 1031 != v5 );
  }
  sub_808A0(ptr);
  return ptr;
}
// D27F0: using guessed type int dword_D27F0[4];
