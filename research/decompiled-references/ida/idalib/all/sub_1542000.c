__int64 __fastcall sub_1542000(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, unsigned __int8 a6)
{
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v19; // rcx
  unsigned __int64 v20; // rax

  v12 = sub_2239B50(a4, a5);
  v13 = *(_QWORD *)(a1 + 56);
  v14 = a5 - *(_QWORD *)(*(_QWORD *)(*a4 + 24LL * (unsigned int)(v12 - 1)) + 8LL);
  v15 = (4LL * *(_QWORD *)(a1 + 64)) >> 2;
  if ( 4LL * *(_QWORD *)(a1 + 64) <= 0 )
  {
    v16 = *(_DWORD **)(a1 + 56);
  }
  else
  {
    v16 = *(_DWORD **)(a1 + 56);
    do
    {
      while ( 1 )
      {
        v17 = v15 >> 1;
        v18 = &v16[v15 >> 1];
        if ( (unsigned int)v14 <= *v18 )
          break;
        v16 = v18 + 1;
        v15 = v15 - v17 - 1;
        if ( v15 <= 0 )
          goto LABEL_5;
      }
      v15 >>= 1;
    }
    while ( v17 );
  }
LABEL_5:
  v19 = *(unsigned int *)(a1 + 16);
  v20 = (unsigned int)(((__int64)v16 - v13) >> 2);
  if ( v20 < *(_QWORD *)(a1 + 48) )
    v19 = (unsigned int)(v14 - *v16 + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 24 * v20));
  return *(_QWORD *)(sub_1C58840(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL), a2, a3, v19, a6) + 56);
}
