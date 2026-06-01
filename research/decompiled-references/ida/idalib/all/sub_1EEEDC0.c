__int64 __fastcall sub_1EEEDC0(__int64 a1, int a2, char a3)
{
  __int64 v3; // r13
  __int64 *v4; // rdx
  __int64 *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rax
  _DWORD *v11; // r10
  __int64 v12; // r9
  _DWORD *v13; // rcx
  __int64 v14; // r12
  unsigned int v15; // r9d
  unsigned __int64 v16; // r14
  char *v18; // rdi
  __int64 v19; // rax
  char *v20; // r15
  signed __int64 i; // r14
  __int64 v22; // r13
  unsigned __int64 *v23; // rbp
  int v24; // eax
  unsigned __int64 v25; // rbp
  int v26; // eax
  char *v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  char *v29; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(v3 + 316) <= (a2 & 0x7FFFFFFFu) )
  {
    v8 = *(_DWORD **)(a1 + 1648);
    v9 = 16LL * *(unsigned int *)(a1 + 1656);
    v10 = v9 >> 4;
    if ( !v9 )
      goto LABEL_27;
    v11 = *(_DWORD **)(a1 + 1648);
    do
    {
      while ( 1 )
      {
        v12 = v10 >> 1;
        v13 = &v11[4 * (v10 >> 1)];
        if ( 0x7FFFFFFF - (a2 & 0x7FFFFFFFu) < *v13 )
          break;
        v11 = v13 + 4;
        v10 = v10 - v12 - 1;
        if ( v10 <= 0 )
          goto LABEL_9;
      }
      v10 >>= 1;
    }
    while ( v12 );
LABEL_9:
    v28 = (__int64)(v11 - 4);
    if ( v11 == v8 )
LABEL_27:
      v28 = (__int64)&v8[(unsigned __int64)v9 / 4];
    v14 = *(_QWORD *)(v28 + 8);
    v15 = *(_DWORD *)(v14 + 2552);
    if ( !v15 )
      return sub_1EAB2E0(a1, v28);
    v16 = v15;
    v18 = *(char **)(v14 + 2544);
    v19 = 20LL * v15;
    v27 = v18;
    v29 = &v18[v19];
    if ( a3 )
    {
      v20 = *(char **)(v14 + 2544);
      for ( i = 0xCCCCCCCCCCCCCCCDLL * (v19 >> 2); ; i = v22 )
      {
        v22 = i >> 1;
        v23 = (unsigned __int64 *)&v20[20 * (i >> 1)];
        v24 = sub_1EE4770(a1, v14, *v23);
        if ( sub_10246C0(*(_QWORD *)(a1 + 80), a2, v24) )
        {
          if ( !v22 )
            goto LABEL_17;
        }
        else
        {
          v20 = (char *)v23 + 20;
          v22 = i - v22 - 1;
          if ( v22 <= 0 )
            goto LABEL_17;
        }
      }
    }
    while ( 1 )
    {
      v25 = v16 >> 1;
      v20 = &v27[20 * (v16 >> 1)];
      v26 = sub_1EE4770(a1, v14, *((_QWORD *)v20 + 1));
      if ( sub_10246C0(v3, v26, a2) )
      {
        v27 = v20 + 20;
        v16 = v16 - 1 - v25;
        if ( !v16 )
          goto LABEL_17;
      }
      else
      {
        if ( !v25 )
        {
LABEL_17:
          if ( v29 == v20 )
            return sub_1EAB2E0(a1, v28);
          else
            return *(_DWORD *)(v14 + 2504) - 858993459 * (unsigned int)((v20 - v18) >> 2);
        }
        v16 >>= 1;
      }
      v3 = *(_QWORD *)(a1 + 80);
    }
  }
  v4 = *(__int64 **)(a1 + 160);
  v5 = &v4[*(unsigned int *)(a1 + 168)];
  for ( result = 0; v5 != v4; result = (unsigned int)(*(_DWORD *)(v7 + 2552) + result) )
    v7 = *v4++;
  return result;
}
