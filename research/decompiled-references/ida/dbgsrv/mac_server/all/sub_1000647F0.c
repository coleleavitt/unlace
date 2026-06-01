/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000647F0
// Address: 0x00000001000647F0

//----- (00000001000647F0) ----------------------------------------------------
__int64 *__fastcall sub_1000647F0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r14
  __int64 *v4; // rax
  bool v5; // zf
  void *v6; // rdi
  void *v7; // rdi

  v2 = (__int64 *)a2[1];
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
  else
  {
    v4 = a2;
    do
    {
      v3 = (__int64 *)v4[2];
      v5 = *v3 == (_QWORD)v4;
      v4 = v3;
    }
    while ( !v5 );
  }
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = v3;
  --*(_QWORD *)(a1 + 16);
  sub_10000C9E0(*(__int64 **)(a1 + 8), a2);
  v6 = (void *)a2[10];
  if ( v6 )
  {
    a2[11] = 0;
    qfree(v6);
    a2[10] = 0;
    a2[12] = 0;
  }
  v7 = (void *)a2[6];
  if ( v7 )
  {
    a2[7] = 0;
    qfree(v7);
  }
  operator delete(a2);
  return v3;
}
