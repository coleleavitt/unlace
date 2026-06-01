__int64 *__fastcall sub_996EE0(__int64 *a1, __int64 a2, __int64 *a3, unsigned int a4, _DWORD **a5)
{
  _DWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rdi
  _DWORD *v18; // [rsp+8h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+10h] [rbp-48h] BYREF
  _DWORD *v20; // [rsp+18h] [rbp-40h] BYREF

  v6 = *a5;
  v18 = v6;
  v19 = a4;
  if ( v6 )
  {
    v6[13] += 2;
    v20 = v6;
  }
  else
  {
    v20 = nullptr;
  }
  v7 = sub_994DF0((_QWORD *)a2, &v19, *a3);
  v8 = v7;
  if ( v7 && (*(_BYTE *)(v7 + 43) & 0x10) != 0 )
  {
    v9 = v7;
    do
    {
      *(_BYTE *)(v9 + 43) &= ~0x10u;
      sub_9919A0(a2, *(_QWORD *)(v9 + 8));
      v9 = *(_QWORD *)(v10 + 16);
    }
    while ( v9 && (*(_BYTE *)(v9 + 43) & 0x10) != 0 );
  }
  v11 = *(_QWORD *)(a2 + 40);
  v12 = *(_QWORD *)(a2 + 32);
  v13 = (v11 - v12) >> 3;
  if ( (_DWORD)v13 )
  {
    v14 = 0;
    v15 = 8LL * (unsigned int)(v13 - 1) + 8;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD *)(v12 + v14);
        if ( (*(_BYTE *)(v16 + 43) & 0x10) != 0 && !*(_DWORD *)(v16 + 68) )
          break;
        v14 += 8;
        if ( v15 == v14 )
          goto LABEL_14;
      }
      sub_994040((void *)v16);
      v14 += 8;
      v12 = *(_QWORD *)(a2 + 32);
    }
    while ( v15 != v14 );
LABEL_14:
    v11 = *(_QWORD *)(a2 + 40);
  }
  if ( v12 != v11 )
    *(_QWORD *)(a2 + 40) = v12;
  sub_994020(&v20);
  sub_994020(&v18);
  if ( *(_BYTE *)(a2 + 80) )
    v8 = sub_995FE0(a2, v8);
  *a1 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 68);
  return a1;
}

