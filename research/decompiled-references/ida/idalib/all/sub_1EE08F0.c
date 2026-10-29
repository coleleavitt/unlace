__int64 __fastcall sub_1EE08F0(__int64 *a1, _DWORD **a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 v9; // rsi
  unsigned int *v10; // rdx
  __int64 result; // rax

  v2 = *a1;
  v3 = *(*a2)++;
  v4 = v3 >> 1;
  if ( (v3 & 1) == 0 )
    return *(_QWORD *)(*(_QWORD *)(v2 + 192) + 8 * (*(unsigned int *)(v2 + 200) + (__int64)-v4));
  if ( v4 )
    v4 = sub_1EDFD20(v2, a1[1], v4);
  v5 = *(_DWORD **)(v2 + 4504);
  v6 = 16LL * *(unsigned int *)(v2 + 4512);
  v7 = v6 >> 4;
  if ( !v6 )
    return 0;
  v8 = *(_DWORD **)(v2 + 4504);
  do
  {
    while ( 1 )
    {
      v9 = v7 >> 1;
      v10 = &v8[4 * (v7 >> 1)];
      if ( v4 < *v10 )
        break;
      v8 = v10 + 4;
      v7 = v7 - v9 - 1;
      if ( v7 <= 0 )
        goto LABEL_8;
    }
    v7 >>= 1;
  }
  while ( v9 );
LABEL_8:
  result = 0;
  if ( v5 != v8 && &v5[(unsigned __int64)v6 / 4] != v8 - 4 )
    return *((_QWORD *)v8 - 1);
  return result;
}
