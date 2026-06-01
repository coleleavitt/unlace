__int64 __fastcall sub_56B5A0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  unsigned int *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned int *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi

  result = 0xFFFFFFFFLL;
  v5 = *(_QWORD *)(a1 + 152);
  if ( v5 == 0xFFFFFFFFLL )
  {
    v13 = *(_QWORD *)(a1 + 80);
    v14 = *(unsigned int *)(a1 + 72);
    v15 = a1 + 72;
    *(_QWORD *)(v15 + 80) = v13;
    result = sub_5716E0(v15, v13 + v14);
    v5 = *(_QWORD *)(a1 + 152);
  }
  v6 = *(unsigned int **)(a1 + 40);
  if ( v6 )
  {
    v7 = *(v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = *(_QWORD *)(a1 + 88);
      result = v8 + v5 + *v6;
      *(_QWORD *)result = (*a2 << v6[1]) | *(_QWORD *)result & *((_QWORD *)v6 + 2);
      if ( (_DWORD)v7 != 1 )
      {
        v9 = 1;
        do
        {
          v10 = v9;
          v11 = a2[v9++];
          v12 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 32 * v10);
          result = v8 + v5 + *v12;
          *(_QWORD *)result = (v11 << v12[1]) | *((_QWORD *)v12 + 2) & *(_QWORD *)result;
        }
        while ( v9 != v7 );
      }
    }
  }
  return result;
}

