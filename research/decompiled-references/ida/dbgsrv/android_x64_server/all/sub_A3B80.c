/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3B80
// Address: 0x00000000000A3B80

//----- (00000000000A3B80) ----------------------------------------------------
__int64 **__fastcall sub_A3B80(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  __int64 **v3; // r12
  __int64 *v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  void *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rbx

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
  v7 = (void *)a2[5];
  if ( v7 )
  {
    v8 = a2[6];
    if ( v8 )
    {
      sub_9AA40((__int64)v7);
      if ( v8 != 1 )
      {
        v9 = v8 - 1;
        v10 = 48;
        do
        {
          sub_9AA40(v10 + a2[5]);
          v10 += 48;
          --v9;
        }
        while ( v9 );
      }
      v7 = (void *)a2[5];
    }
    a2[6] = 0;
    qfree(v7);
  }
  operator delete(a2);
  return v3;
}
