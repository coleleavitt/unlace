__int64 __fastcall sub_1EEE7F0(__int64 a1, unsigned int a2)
{
  _DWORD *v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // r8
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  __int64 v10; // rbp
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r13
  __int64 v13; // r12

  v3 = *(_DWORD **)(a1 + 5112);
  v4 = 16LL * *(unsigned int *)(a1 + 5120);
  v5 = v4 >> 4;
  if ( v4 )
  {
    v6 = *(_DWORD **)(a1 + 5112);
    do
    {
      while ( 1 )
      {
        v7 = v5 >> 1;
        v8 = &v6[4 * (v5 >> 1)];
        if ( a2 < *v8 )
          break;
        v6 = v8 + 4;
        v5 = v5 - v7 - 1;
        if ( v5 <= 0 )
        {
          v9 = v8;
          if ( v6 == v3 )
            goto LABEL_9;
          goto LABEL_6;
        }
      }
      v5 >>= 1;
    }
    while ( v7 );
    v9 = v6 - 4;
    if ( v6 != v3 )
      goto LABEL_6;
  }
LABEL_9:
  v9 = &v3[(unsigned __int64)v4 / 4];
LABEL_6:
  v10 = *((_QWORD *)v9 + 1);
  v11 = (unsigned __int64 *)(*(_QWORD *)(v10 + 2560) + 16LL * (a2 - *(_DWORD *)(v10 + 2556)));
  v12 = *v11;
  v13 = (unsigned int)sub_1EE4770(a1, v10, v11[1]);
  return (v13 << 32) | (unsigned int)sub_1EE4770(a1, v10, v12);
}
