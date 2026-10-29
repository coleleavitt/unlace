__int64 __fastcall sub_3CD420(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  volatile signed __int32 *v7; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = *(_QWORD **)(v2 + 8 * i);
        if ( v5 )
        {
          v6 = v5[10];
          *v5 = 0;
          v5[11] = 0;
          if ( v6 )
            qfree();
          v7 = (volatile signed __int32 *)v5[9];
          if ( v7 )
            sub_3CB2E0(v7);
          if ( v5[2] )
          {
            v5[3] = 0;
            qfree();
          }
          operator delete(v5, 0x60u);
          v2 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree();
  }
  return result;
}
