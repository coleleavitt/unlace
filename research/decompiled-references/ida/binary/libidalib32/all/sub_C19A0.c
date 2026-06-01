__int64 __fastcall sub_C19A0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  _QWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  __int64 j; // r12
  _QWORD *v10; // rbx

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 96);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = (_QWORD *)(v2 + (i << 6));
        if ( v5[4] )
        {
          v5[5] = 0;
          qfree();
        }
        if ( v5[1] )
        {
          v5[2] = 0;
          qfree();
        }
        v2 = *(_QWORD *)(a1 + 88);
      }
    }
    *(_QWORD *)(a1 + 96) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = (_QWORD *)(v7 + (j << 6));
        if ( v10[4] )
        {
          v10[5] = 0;
          qfree();
        }
        if ( v10[1] )
        {
          v10[2] = 0;
          qfree();
        }
        v7 = *(_QWORD *)(a1 + 64);
      }
    }
    *(_QWORD *)(a1 + 72) = 0;
    result = qfree();
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}

