void __fastcall sub_231D20(__int64 a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // r13
  __int64 j; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi

  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 80 * i);
        v7 = v6[5];
        if ( v7 )
        {
          v6[6] = 0;
          qfree(v7, a2);
        }
        v8 = v6[2];
        if ( v8 )
        {
          v6[3] = 0;
          qfree(v8, a2);
        }
        v3 = *(_QWORD *)(a1 + 88);
      }
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3, a2);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 72);
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = (_QWORD *)(v9 + 80 * j);
        v13 = v12[5];
        if ( v13 )
        {
          v12[6] = 0;
          qfree(v13, a2);
        }
        v14 = v12[2];
        if ( v14 )
        {
          v12[3] = 0;
          qfree(v14, a2);
        }
        v9 = *(_QWORD *)(a1 + 64);
      }
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v9, a2);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_BYTE *)(a1 + 56) = 1;
}
