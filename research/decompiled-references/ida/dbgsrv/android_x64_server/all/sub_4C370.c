/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C370
// Address: 0x000000000004C370

//----- (000000000004C370) ----------------------------------------------------
__int64 __fastcall sub_4C370(__int64 ***a1, unsigned __int64 *a2)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 *v8; // rdx
  __int64 **v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf

  v3 = (__int64 *)a1[1];
  if ( !v3 )
    return 0;
  v4 = *a2;
  v5 = (__int64 *)(a1 + 1);
  v6 = v3;
  do
  {
    if ( v6[4] >= v4 )
      v5 = v6;
    v6 = (__int64 *)v6[v6[4] < v4];
  }
  while ( v6 );
  if ( v5 == (__int64 *)(a1 + 1) )
    return 0;
  if ( v4 < v5[4] )
    return 0;
  v8 = (__int64 *)v5[1];
  if ( v8 )
  {
    do
    {
      v9 = (__int64 **)v8;
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
  }
  else
  {
    v9 = (__int64 **)v5[2];
    if ( *v9 != v5 )
    {
      v10 = (__int64)(v5 + 2);
      do
      {
        v9 = *(__int64 ***)(*(_QWORD *)v10 + 16LL);
        v11 = *v9 == *(__int64 **)v10;
        v10 = *(_QWORD *)v10 + 16LL;
      }
      while ( !v11 );
    }
  }
  if ( *a1 == (__int64 **)v5 )
    *a1 = v9;
  a1[2] = (__int64 **)((char *)a1[2] - 1);
  sub_4C430(v3, v5);
  operator delete(v5);
  return 1;
}
