void __fastcall sub_2092460(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  int v6; // r12d
  _QWORD *v7; // rax
  __int64 i; // rdx
  __int64 *v9; // rbx
  __int64 *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  __int64 *v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *a1;
  v4 = *(unsigned int *)(a2 + 8);
  v5 = *(unsigned int *)(*a1 + 2700);
  if ( v5 != v4 )
  {
    v6 = *(_DWORD *)(*a1 + 2700);
    if ( v5 >= v4 )
    {
      if ( v5 > *(unsigned int *)(a2 + 12) )
      {
        sub_2237220(a2, a2 + 16, *(unsigned int *)(*a1 + 2700), 16);
        v4 = *(unsigned int *)(a2 + 8);
        v3 = *a1;
      }
      v7 = (_QWORD *)(*(_QWORD *)a2 + 16 * v4);
      for ( i = 16 * v5 + *(_QWORD *)a2; (_QWORD *)i != v7; *(v7 - 1) = 0 )
      {
        *v7 = 0;
        v7 += 2;
      }
    }
    *(_DWORD *)(a2 + 8) = v6;
  }
  sub_E37610(v16, *(__int64 **)(v3 + 2688), *(_DWORD *)(v3 + 2696) == 0);
  sub_2092420(v16, v16[0], 1);
  v9 = v16[0];
  sub_E37610(v16, (__int64 *)(*(_QWORD *)(*a1 + 2688) + 8LL * *(unsigned int *)(*a1 + 2696)), 1);
  sub_2092420(v16, v16[0], 1);
  v10 = v16[0];
  if ( v9 != v16[0] )
  {
    v11 = *v9;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)v11;
        v13 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(v11 + 8));
        *v13 = v11 + 16;
        v11 = v9[1];
        v13[1] = v12;
        v14 = v9 + 1;
        if ( v11 == -8 || !v11 )
          break;
        ++v9;
        if ( v10 == v14 )
          return;
      }
      v15 = v9 + 2;
      do
      {
        do
        {
          v11 = *v15;
          v9 = v15++;
        }
        while ( v11 == -8 );
      }
      while ( !v11 );
    }
    while ( v10 != v9 );
  }
}
