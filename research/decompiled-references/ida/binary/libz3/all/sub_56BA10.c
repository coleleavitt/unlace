__int64 __fastcall sub_56BA10(__int64 a1, _QWORD **a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbp
  unsigned int *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rsi
  __int64 v9; // rcx
  __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 152);
  v4 = *a2;
  if ( v3 == 0xFFFFFFFFLL )
  {
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(unsigned int *)(a1 + 72);
    *(_QWORD *)(a1 + 152) = v13;
    sub_5716E0(a1 + 72, v13 + v14);
    v3 = *(_QWORD *)(a1 + 152);
  }
  v5 = *(unsigned int **)(a1 + 40);
  if ( v5 )
  {
    v6 = *(v5 - 1);
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(v7 + v3 + *v5) = (*v4 << v5[1]) | *(_QWORD *)(v7 + v3 + *v5) & *((_QWORD *)v5 + 2);
      if ( (_DWORD)v6 != 1 )
      {
        for ( i = 1; i != v6; ++i )
        {
          v9 = i;
          v10 = v4[i];
          v11 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32 * v9);
          *(_QWORD *)(v7 + v3 + *v11) = (v10 << v11[1]) | *((_QWORD *)v11 + 2) & *(_QWORD *)(v7 + v3 + *v11);
        }
      }
      v3 = *(_QWORD *)(a1 + 152);
    }
  }
  v16[0] = v3;
  v15 = 0;
  sub_568330(a1 + 96, v16, &v15);
  result = v15;
  if ( *(_QWORD *)(v15 + 8) == *(_QWORD *)(a1 + 152) )
  {
    *(_QWORD *)(a1 + 152) = 0xFFFFFFFFLL;
    return 0xFFFFFFFFLL;
  }
  return result;
}

