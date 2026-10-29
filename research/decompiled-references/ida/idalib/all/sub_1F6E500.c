unsigned __int64 __fastcall sub_1F6E500(__int64 a1, int a2)
{
  __int64 v3; // rdx
  _DWORD *v4; // r10
  __int64 v5; // r9
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 88LL) + 316LL) > (a2 & 0x7FFFFFFFu) || !a2 )
    return (unsigned int)__ROL4__(a2, 1);
  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD **)(v3 + 1648);
  v5 = 16LL * *(unsigned int *)(v3 + 1656);
  v6 = v4;
  v7 = v5 >> 4;
  if ( !v5 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v8 = v7 >> 1;
      v9 = &v6[4 * (v7 >> 1)];
      if ( 0x7FFFFFFF - (a2 & 0x7FFFFFFFu) < *v9 )
        break;
      v6 = v9 + 4;
      v7 = v7 - v8 - 1;
      if ( v7 <= 0 )
        goto LABEL_7;
    }
    v7 >>= 1;
  }
  while ( v8 );
LABEL_7:
  v10 = v6 - 4;
  if ( v4 == v6 )
LABEL_12:
    v10 = &v6[(unsigned __int64)v5 / 4];
  v11 = *((_DWORD **)v10 + 1);
  v12 = v11[412];
  v13 = (unsigned int)(*v11 + 1);
  v14 = v12 - 2;
  if ( v14 )
    return (unsigned int)__ROL4__(a2 - v14, 1) | (unsigned __int64)(v13 << 32);
  else
    return (unsigned int)__ROL4__(a2, 1);
}
