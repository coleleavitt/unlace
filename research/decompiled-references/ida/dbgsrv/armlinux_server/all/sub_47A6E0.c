/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A6E0
// Address: 0x000000000047A6E0

//----- (000000000047A6E0) ----------------------------------------------------
__int64 __fastcall sub_47A6E0(__int64 result)
{
  unsigned int *v1; // x19
  unsigned int *v2; // x1
  unsigned int v3; // w2
  int v4; // w1
  unsigned int *v5; // x20

  v1 = (unsigned int *)result;
  if ( !&_pthread_key_create )
  {
    v4 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 8) = v4 - 1;
    if ( v4 != 1 )
      return result;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    result = v1[3];
    v1[3] = result - 1;
    goto LABEL_10;
  }
  v2 = (unsigned int *)(result + 8);
  do
    v3 = __ldaxr(v2);
  while ( __stlxr(v3 - 1, v2) );
  if ( v3 == 1 )
  {
    v5 = (unsigned int *)(result + 12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
    do
      result = __ldaxr(v5);
    while ( __stlxr(result - 1, v5) );
LABEL_10:
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v1 + 24LL))(v1);
  }
  return result;
}
