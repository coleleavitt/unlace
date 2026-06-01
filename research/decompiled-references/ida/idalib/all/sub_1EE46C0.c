__int64 __fastcall sub_1EE46C0(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // r8
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rdx
  _DWORD *v11; // rax

  if ( *(_QWORD *)(a2 + 856) )
    sub_1EDF870(a1, a2);
  v5 = *(_DWORD **)(a2 + 2512);
  v6 = 2LL * *(unsigned int *)(a2 + 2520);
  v7 = *(_DWORD **)(a2 + 2512);
  v8 = (8LL * *(unsigned int *)(a2 + 2520)) >> 3;
  if ( !(v6 * 4) )
    return (unsigned int)(v7[v6 + 1] + a3);
  do
  {
    while ( 1 )
    {
      v9 = v8 >> 1;
      v10 = &v7[2 * (v8 >> 1)];
      if ( (unsigned int)(a3 - 1) < *v10 )
        break;
      v7 = v10 + 2;
      v8 = v8 - v9 - 1;
      if ( v8 <= 0 )
      {
        v11 = v10;
        if ( v5 == v7 )
          return (unsigned int)(v7[v6 + 1] + a3);
        return (unsigned int)(v11[1] + a3);
      }
    }
    v8 >>= 1;
  }
  while ( v9 );
  v11 = v7 - 2;
  if ( v5 != v7 )
    return (unsigned int)(v11[1] + a3);
  return (unsigned int)(v7[v6 + 1] + a3);
}
