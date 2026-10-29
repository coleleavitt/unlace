__int64 __fastcall sub_EAB770(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r15
  __int64 v4; // r11
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdi
  _DWORD *v8; // r13
  unsigned __int64 v9; // r8
  unsigned int *v10; // r14
  unsigned int v11; // esi
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  int v14; // edx
  unsigned __int64 v15; // r11
  _DWORD *v16; // r8
  _DWORD *v17; // r12
  int v18; // eax
  unsigned int v19; // eax
  int v20; // edx
  unsigned __int64 v21; // rbx
  __int64 result; // rax
  bool v23; // dl
  __int64 v24; // rcx
  _QWORD *v25; // rsi
  int v26; // esi
  _DWORD v27[638]; // [rsp+0h] [rbp-9F8h] BYREF

  v3 = *a2;
  v4 = a2[1] - *a2;
  memset(v27, 0x8Bu, 0x9C0u);
  v5 = 0;
  v6 = v4 >> 2;
  v7 = v6 + 1;
  if ( v6 + 1 < 0x270 )
    v7 = 624;
  do
  {
    while ( 1 )
    {
      v8 = &v27[v5 % 0x270];
      v9 = v5 % 0x270;
      v10 = &v27[(v5 + 306) % 0x270];
      v11 = 1664525 * (((*v10 ^ v27[(v5 - 1) % 0x270] ^ *v8) >> 27) ^ *v10 ^ v27[(v5 - 1) % 0x270] ^ *v8);
      v12 = v11 + *v10;
      v13 = &v27[(v5 + 317) % 0x270];
      if ( v5 )
        break;
      v26 = v6 + v11;
      *v10 = v12;
      v5 = 1;
      *v13 += v26;
      *v8 = v26;
    }
    v14 = v11 + v9;
    if ( v5 <= v6 )
      v14 = *(_DWORD *)(v3 + 4 * v5 - 4) + v11 + v9;
    ++v5;
    *v10 = v12;
    *v13 += v14;
    *v8 = v14;
  }
  while ( v7 > v5 );
  v15 = v7 + 624;
  if ( v7 < v7 + 624 )
  {
    do
    {
      v16 = &v27[v7 % 0x270];
      v17 = &v27[(v7 + 306) % 0x270];
      v18 = *v17 + v27[(v7 - 1) % 0x270];
      v19 = 1566083941 * ((*v16 + v18) ^ ((unsigned int)(*v16 + v18) >> 27));
      *v17 ^= v19;
      v20 = v19 - v7 % 0x270;
      v21 = v7 + 317;
      ++v7;
      v27[v21 % 0x270] ^= v20;
      *v16 = v20;
    }
    while ( v15 != v7 );
  }
  result = 0;
  v23 = 1;
  do
  {
    while ( 1 )
    {
      v24 = (unsigned int)v27[result];
      v25 = &a1[result];
      *v25 = v24;
      if ( !v23 )
        break;
      v23 = v24 == 0;
      if ( result )
        goto LABEL_15;
      result = 1;
      v23 = (*a1 & 0xFFFFFFFF80000000LL) == 0;
    }
    if ( ++result == 624 )
      goto LABEL_12;
    v25[1] = (unsigned int)v27[result];
LABEL_15:
    ++result;
  }
  while ( result != 624 );
  if ( v23 )
  {
    result = 0x80000000LL;
    *a1 = 0x80000000LL;
  }
LABEL_12:
  a1[624] = 624;
  return result;
}

