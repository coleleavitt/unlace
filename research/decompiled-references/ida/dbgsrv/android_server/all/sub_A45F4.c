/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A45F4
// Address: 0x00000000000A45F4

//----- (00000000000A45F4) ----------------------------------------------------
__int64 __fastcall sub_A45F4(__int64 a1, __int64 a2)
{
  __int64 **v4; // x0
  __int64 **v5; // x9
  __int64 *v6; // x21
  __int64 *v7; // x10
  __int64 v8; // x10
  __int64 v9; // x11
  __int64 *v10; // t1
  __int64 *v11; // x10
  __int64 **v12; // x8
  __int64 v13; // x10
  __int64 *v14; // x11
  __int64 **v15; // t1
  __int64 *v16; // x8
  __int64 result; // x0

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(__int64 ***)(a1 + 88);
  v5 = v4 + 1;
  v6 = v4[1];
  while ( v4 + 2 != (__int64 **)v6 )
  {
    if ( v6[4] == a2 )
    {
      if ( v6[5] )
      {
        qthread_free(v6[5]);
        v4 = *(__int64 ***)(a1 + 88);
        v5 = v4 + 1;
      }
      v11 = (__int64 *)v6[1];
      if ( v11 )
      {
        do
        {
          v12 = (__int64 **)v11;
          v11 = (__int64 *)*v11;
        }
        while ( v11 );
      }
      else
      {
        v13 = (__int64)(v6 + 2);
        v12 = (__int64 **)v6[2];
        if ( *v12 != v6 )
        {
          do
          {
            v14 = *(__int64 **)v13;
            v15 = *(__int64 ***)(*(_QWORD *)v13 + 16LL);
            v13 = *(_QWORD *)v13 + 16LL;
            v12 = v15;
          }
          while ( *v15 != v14 );
        }
      }
      if ( *v5 == v6 )
        *v5 = (__int64 *)v12;
      v16 = v4[2];
      v4[3] = (__int64 *)((char *)v4[3] - 1);
      sub_4AD74(v16, v6);
      operator delete(v6);
      v4 = *(__int64 ***)(a1 + 88);
      break;
    }
    v7 = (__int64 *)v6[1];
    if ( v7 )
    {
      do
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      while ( v7 );
    }
    else
    {
      v8 = (__int64)(v6 + 2);
      if ( *(__int64 **)v6[2] == v6 )
      {
        v6 = (__int64 *)v6[2];
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)v8;
          v10 = *(__int64 **)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v6 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  result = ((__int64 (__fastcall *)(__int64 **))(*v4)[3])(v4);
  if ( a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return result;
}
