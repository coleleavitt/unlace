__int64 __fastcall sub_370F70(__int64 a1, const char *a2)
{
  char *v2; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  const char *v13; // rsi
  __int64 v14; // rbx
  __int64 *v15; // rbx
  bool v16; // zf
  __int64 v17; // rax
  __int64 *v18; // r12
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  __int128 v21; // [rsp+8h] [rbp-30h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]

  v2 = *(char **)a1;
  v22 = __readfsqword(0x28u);
  if ( v2 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v2[40 * i];
        v7 = *((_QWORD *)v6 + 2);
        if ( v7 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v7, a2);
          v2 = *(char **)a1;
        }
      }
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v2, a2);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + 336LL) = 1;
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = v8 + 40 * j;
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 24) = 0;
          qfree(v12, a2);
          v8 = *(_QWORD *)(a1 + 40);
        }
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v8, a2);
    *(_QWORD *)(a1 + 40) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  v13 = nullptr;
  v14 = *(_QWORD *)(a1 + 24);
  v21 = 0;
  v20 = 0;
  v20 = qvector_reserve(&v20, 0, 1, 8);
  *(_QWORD *)(v20 + 8 * v21) = v14;
  v15 = (__int64 *)v20;
  v16 = (_QWORD)v21 == -1;
  v17 = v21 + 1;
  *(_QWORD *)&v21 = v21 + 1;
  if ( !v16 )
  {
    v18 = (__int64 *)(v20 + 8 * v17);
    if ( (__int64 *)v20 != v18 )
    {
      do
      {
        v13 = (const char *)*v15;
        sub_370AA0(a1, *v15++, 1);
      }
      while ( v18 != v15 );
    }
    sub_370D50((char **)a1, v13);
    v15 = (__int64 *)v20;
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 336LL) = 1;
  }
  if ( v15 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v15, v13);
  }
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + 336LL) = 1;
  return 1;
}
