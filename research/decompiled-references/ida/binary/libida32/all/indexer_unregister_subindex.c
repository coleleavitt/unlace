unsigned __int64 __fastcall indexer_unregister_subindex(unsigned __int64 a1)
{
  __int64 v1; // r12
  unsigned __int64 v2; // rbp
  __int64 *v3; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r9
  unsigned __int64 v7; // rtt
  __int64 **v8; // r10
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  _QWORD *v15; // rdi

  v15 = *(_QWORD **)(**(_QWORD **)(qword_2CA1698 + 1480) + 1688LL);
  if ( !*(_BYTE *)(*(_QWORD *)(*v15 + 1480LL) + 601LL) )
    return 0;
  v1 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1688LL);
  v2 = a1;
  v3 = sub_41F560(v15 + 5, a1);
  result = 0;
  if ( v3 )
  {
    v5 = v15[6];
    v6 = v15[5];
    v7 = v3[1];
    v8 = (__int64 **)(v6 + 8 * (v7 % v5));
    v9 = v7 % v5;
    v10 = *v8;
    do
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
    while ( v3 != v10 );
    v12 = *v3;
    if ( *v8 == v11 )
    {
      if ( v12 )
      {
        v10 = (__int64 *)(*(_QWORD *)(v12 + 8) % v5);
        if ( (__int64 *)v9 != v10 )
        {
          *(_QWORD *)(v6 + 8LL * (_QWORD)v10) = v11;
          *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * v9) = 0;
          v12 = *v3;
        }
      }
      else
      {
        *v8 = nullptr;
        v12 = *v3;
      }
    }
    else if ( v12 )
    {
      v10 = (__int64 *)(*(_QWORD *)(v12 + 8) % v5);
      if ( (__int64 *)v9 != v10 )
      {
        *(_QWORD *)(v6 + 8LL * (_QWORD)v10) = v11;
        v12 = *v3;
      }
    }
    *v11 = v12;
    v13 = v3[2];
    if ( v13 )
      (*(void (__fastcall **)(__int64, unsigned __int64, __int64 *, __int64 *, unsigned __int64))(*(_QWORD *)v13 + 8LL))(
        v13,
        v5,
        v10,
        v11,
        v9);
    operator delete(v3, 0x18u);
    --*(_QWORD *)(v1 + 64);
    return v2;
  }
  return result;
}

