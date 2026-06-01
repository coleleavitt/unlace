/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C4DC
// Address: 0x000000000007C4DC

//----- (000000000007C4DC) ----------------------------------------------------
__int64 __fastcall sub_7C4DC(__int64 ***a1, _QWORD *a2)
{
  __int64 *v2; // x20
  __int64 ***v3; // x23
  const char *v5; // x22
  __int64 ***v6; // x19
  __int64 **v7; // x25
  const char *v8; // x0
  int v9; // w0
  const char *v10; // x1
  __int64 **v12; // x9
  __int64 **v13; // x8
  __int64 v14; // x9
  __int64 *v15; // x10
  __int64 **v16; // t1
  __int64 **v17; // x0

  v3 = a1 + 1;
  v2 = (__int64 *)a1[1];
  if ( !v2 )
    return 0;
  v5 = a2[1] ? (const char *)*a2 : &byte_F154B;
  v6 = a1 + 1;
  v7 = a1[1];
  do
  {
    if ( v7[5] )
      v8 = (const char *)v7[4];
    else
      v8 = &byte_F154B;
    v9 = strcmp(v8, v5);
    if ( v9 >= 0 )
      v6 = (__int64 ***)v7;
    v7 = (__int64 **)v7[v9 < 0];
  }
  while ( v7 );
  if ( v6 == v3 )
    return 0;
  v10 = v6[5] ? (const char *)v6[4] : &byte_F154B;
  if ( strcmp(v5, v10) < 0 )
    return 0;
  v12 = v6[1];
  if ( v12 )
  {
    do
    {
      v13 = v12;
      v12 = (__int64 **)*v12;
    }
    while ( v12 );
  }
  else
  {
    v14 = (__int64)(v6 + 2);
    v13 = v6[2];
    if ( *v13 != (__int64 *)v6 )
    {
      do
      {
        v15 = *(__int64 **)v14;
        v16 = *(__int64 ***)(*(_QWORD *)v14 + 16LL);
        v14 = *(_QWORD *)v14 + 16LL;
        v13 = v16;
      }
      while ( *v16 != v15 );
    }
  }
  if ( *a1 == (__int64 **)v6 )
    *a1 = v13;
  a1[2] = (__int64 **)((char *)a1[2] - 1);
  sub_4AD74(v2, (__int64 *)v6);
  free_idcv((__int64 *)v6 + 7);
  v17 = v6[4];
  if ( v17 )
  {
    v6[5] = nullptr;
    qfree(v17);
  }
  operator delete(v6);
  return 1;
}
// F154B: using guessed type char byte_F154B;
