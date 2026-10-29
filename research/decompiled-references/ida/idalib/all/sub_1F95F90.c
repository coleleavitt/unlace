__int64 __fastcall sub_1F95F90(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // [rsp+8h] [rbp-30h]

  v3 = (__int64 *)(a2 + 24);
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 12), *(_QWORD *)(a1 + 16));
  sub_1F6F570(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 16));
  sub_9B9C90(*(_QWORD *)(a1 + 16), *(_DWORD *)(a2 + 20) & 0x1FFFFFFF);
  v4 = a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24;
  if ( v4 != a2 + 24 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 16);
      v6 = sub_1F92240(*(_QWORD *)(a1 + 8), *v3);
      v7 = *((unsigned int *)v5 + 2);
      if ( v7 + 1 > (unsigned __int64)*((unsigned int *)v5 + 3) )
      {
        v12 = v6;
        sub_2237220(v5, v5 + 2, v7 + 1, 8);
        v7 = *((unsigned int *)v5 + 2);
        v8 = *v5;
        v6 = v12;
      }
      else
      {
        v8 = *v5;
      }
      ++v3;
      *(_QWORD *)(v8 + 8 * v7) = v6;
      ++*((_DWORD *)v5 + 2);
    }
    while ( (__int64 *)v4 != v3 );
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(a2 + 23) & 0x40) == 0 )
    return sub_1F6B920(v9);
  v10 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
  if ( !v10 )
    return sub_1F6B920(v9);
  sub_9B9C90(v9, 1);
  return sub_183F100(a1 + 24, v10);
}
