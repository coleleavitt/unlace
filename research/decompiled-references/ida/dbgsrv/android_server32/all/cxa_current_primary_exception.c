/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: cxa_current_primary_exception
// Address: 0x000902E8

//----- (000902E8) --------------------------------------------------------
int _cxa_current_primary_exception()
{
  int *v0; // r0
  int v1; // r1
  unsigned __int64 v2; // kr00_8
  int result; // r0
  unsigned int v4; // r2

  v0 = (int *)((int (*)(void))_cxa_get_globals_fast)();
  if ( !v0 )
    return 0;
  v1 = *v0;
  if ( !*v0 )
    return 0;
  v2 = *(_QWORD *)(v1 + 40);
  if ( v2 >> 8 != 0x434C4E47432B2BLL )
    return 0;
  if ( (unsigned __int8)v2 == 1 )
    v1 = *(_DWORD *)v1 - 128;
  __dmb(0xBu);
  result = v1 + 128;
  do
    v4 = __ldrex((unsigned int *)v1);
  while ( __strex(v4 + 1, (unsigned int *)v1) );
  __dmb(0xBu);
  return result;
}
