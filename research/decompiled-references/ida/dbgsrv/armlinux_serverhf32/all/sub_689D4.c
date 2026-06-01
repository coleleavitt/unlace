/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_689D4
// Address: 0x000689D4

//----- (000689D4) --------------------------------------------------------
_DWORD *__fastcall sub_689D4(_DWORD *result)
{
  _DWORD *v1; // r4
  unsigned int *v2; // r3
  unsigned int v3; // r2
  int v4; // r3
  unsigned int v5; // r3
  unsigned int *v6; // r5

  v1 = result;
  if ( !&_pthread_key_create )
  {
    v4 = result[1];
    result[1] = v4 - 1;
    if ( v4 != 1 )
      return result;
    result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 8))(result);
    v5 = v1[2];
    v1[2] = v5 - 1;
    goto LABEL_11;
  }
  v2 = result + 1;
  __dmb(0xBu);
  do
    v3 = __ldrex(v2);
  while ( __strex(v3 - 1, v2) );
  __dmb(0xBu);
  if ( v3 == 1 )
  {
    v6 = result + 2;
    result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 8))(result);
    __dmb(0xBu);
    do
      v5 = __ldrex(v6);
    while ( __strex(v5 - 1, v6) );
    __dmb(0xBu);
LABEL_11:
    if ( v5 == 1 )
      return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*v1 + 12))(v1);
  }
  return result;
}
