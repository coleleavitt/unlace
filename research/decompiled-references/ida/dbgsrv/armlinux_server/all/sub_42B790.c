/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B790
// Address: 0x000000000042B790

//----- (000000000042B790) ----------------------------------------------------
unsigned int *__fastcall sub_42B790(__int64 a1, int a2, const char *a3)
{
  __int64 v6; // x1
  unsigned int *v7; // x19
  unsigned int *v8; // x2
  const char *v9; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v12; // [xsp+48h] [xbp-18h]
  __int64 v13; // [xsp+50h] [xbp-10h]

  if ( !*(_BYTE *)(a1 + 168) )
    sub_4068C0();
  v7 = *(unsigned int **)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  ptr = nullptr;
  v12 = 0;
  v13 = 0;
  v8 = v7;
  if ( !(v6 << 6) )
    return nullptr;
  do
  {
    while ( v7[1] != a2 )
    {
      v7 += 16;
      if ( v7 == &v8[16 * v6] )
        goto LABEL_10;
    }
    v12 = 0;
    sub_42B750((__int64 *)a1, (__int64)&ptr, v7);
    v9 = (const char *)ptr;
    if ( !v12 )
      v9 = (const char *)&qword_4B2D48;
    if ( !strcmp(v9, a3) )
      goto LABEL_11;
    v8 = *(unsigned int **)(a1 + 32);
    v6 = *(_QWORD *)(a1 + 40);
    v7 += 16;
  }
  while ( v7 != &v8[16 * v6] );
LABEL_10:
  v7 = nullptr;
LABEL_11:
  if ( ptr )
  {
    v12 = 0;
    j__free(ptr);
  }
  return v7;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
