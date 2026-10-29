__int64 __fastcall sub_737EA0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  unsigned int v5; // ebx
  __int64 v6; // rbp
  __int64 v7; // rdx
  unsigned int v8; // eax
  unsigned __int16 *v9; // rsi
  __int64 v10; // rcx
  unsigned __int16 *v11; // rdi
  int v12; // edx
  __int64 v13; // rdx
  unsigned __int16 *v14; // rdi
  __int64 v15; // rcx
  unsigned __int16 *v16; // r8
  int v17; // edx
  int v18; // eax

  v3 = *a2;
  if ( a3 <= 1 )
    return 0;
  v4 = v3 + 8;
  v5 = 0;
  v6 = v3 + 4LL * (unsigned int)(a3 + 1);
  do
  {
    v7 = *(unsigned __int16 *)(v4 + 2);
    v8 = *(_DWORD *)(v3 - 8);
    if ( (unsigned int)v7 >= v8
      || (v9 = (unsigned __int16 *)(v3 + v7),
          v10 = *(unsigned __int16 *)(v3 + v7),
          v11 = (unsigned __int16 *)(v3 + v7 + v10 + 2),
          v12 = *(unsigned __int16 *)(v3 + v7),
          (int)v9 + (int)v10 + 3 - (int)v3 >= v8)
      || (unsigned int)v9 + *v11 + v12 + 4 - 1 - (unsigned int)v3 >= v8
      || (v13 = *(unsigned __int16 *)(v4 - 2), (unsigned int)v13 >= v8)
      || (v14 = (unsigned __int16 *)(v3 + v13),
          v15 = *(unsigned __int16 *)(v3 + v13),
          v16 = (unsigned __int16 *)(v3 + v13 + v15 + 2),
          v17 = *(unsigned __int16 *)(v3 + v13),
          (int)v14 + (int)v15 + 3 - (int)v3 >= v8)
      || (unsigned int)v14 + *v16 + v17 + 4 - 1 - (unsigned int)v3 >= v8 )
    {
      sub_737820();
    }
    v18 = sub_736040(v14, v9);
    if ( v18 >= 0 )
      v5 |= v18 == 0 ? 256 : 128;
    v4 += 4;
  }
  while ( v4 != v6 );
  return v5;
}
