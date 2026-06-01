void __fastcall sub_20939D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  int v5; // r13d
  _QWORD *v6; // rax
  __int64 i; // rdx
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(unsigned int *)(a1 + 2892);
  v4 = *(unsigned int *)(a2 + 8);
  if ( v3 != v4 )
  {
    v5 = *(_DWORD *)(a1 + 2892);
    if ( v3 >= v4 )
    {
      if ( v3 > *(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, *(unsigned int *)(a1 + 2892), 16);
        v4 = *(unsigned int *)(a2 + 8);
      }
      v6 = (_QWORD *)(*(_QWORD *)a2 + 16 * v4);
      for ( i = 16 * v3 + *(_QWORD *)a2; (_QWORD *)i != v6; *(v6 - 1) = 0 )
      {
        *v6 = 0;
        v6 += 2;
      }
    }
    *(_DWORD *)(a2 + 8) = v5;
  }
  sub_2093990(v15, *(__int64 **)(a1 + 2880), *(_DWORD *)(a1 + 2888) == 0);
  v8 = v15[0];
  sub_2093990(v15, (__int64 *)(*(_QWORD *)(a1 + 2880) + 8LL * *(unsigned int *)(a1 + 2888)), 1);
  v9 = v15[0];
  if ( v15[0] != v8 )
  {
    v10 = *v8;
    do
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v10;
        v12 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned __int8 *)(v10 + 8));
        *v12 = v10 + 16;
        v10 = v8[1];
        v12[1] = v11;
        v13 = v8 + 1;
        if ( !v10 || v10 == -8 )
          break;
        ++v8;
        if ( v9 == v13 )
          return;
      }
      v14 = v8 + 2;
      do
      {
        do
        {
          v10 = *v14;
          v8 = v14++;
        }
        while ( v10 == -8 );
      }
      while ( !v10 );
    }
    while ( v9 != v8 );
  }
}
