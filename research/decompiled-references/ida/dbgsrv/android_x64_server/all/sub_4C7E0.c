/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C7E0
// Address: 0x000000000004C7E0

//----- (000000000004C7E0) ----------------------------------------------------
__int64 **__fastcall sub_4C7E0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 **v3; // rbx
  __int64 *v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  void *v7; // rdi

  v2 = (__int64 *)a2[1];
  if ( v2 )
  {
    do
    {
      v3 = (__int64 **)v2;
      v2 = (__int64 *)*v2;
    }
    while ( v2 );
  }
  else
  {
    v3 = (__int64 **)a2[2];
    if ( *v3 != a2 )
    {
      v4 = a2 + 2;
      do
      {
        v5 = *v4;
        v3 = *(__int64 ***)(v5 + 16);
        v6 = *v3 == (__int64 *)v5;
        v4 = (__int64 *)(v5 + 16);
      }
      while ( !v6 );
    }
  }
  if ( *(__int64 **)a1 == a2 )
    *(_QWORD *)a1 = v3;
  --*(_QWORD *)(a1 + 16);
  sub_4C430(*(__int64 **)(a1 + 8), a2);
  v7 = (void *)a2[9];
  if ( v7 )
  {
    a2[10] = 0;
    qfree(v7);
  }
  operator delete(a2);
  return v3;
}
