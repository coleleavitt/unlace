/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064730
// Address: 0x0000000100064730

//----- (0000000100064730) ----------------------------------------------------
__int64 *__fastcall sub_100064730(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 *v3; // r14
  __int64 *v4; // rax
  bool v5; // zf
  void *v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r12

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
  v6 = (void *)a2[5];
  if ( v6 )
  {
    v7 = a2[6];
    if ( v7 )
    {
      v8 = 0;
      do
      {
        sub_10000A1B0((char **)(v8 + a2[5]));
        v8 += 48;
        --v7;
      }
      while ( v7 );
      v6 = (void *)a2[5];
    }
    a2[6] = 0;
    qfree(v6);
  }
  operator delete(a2);
  return v3;
}
