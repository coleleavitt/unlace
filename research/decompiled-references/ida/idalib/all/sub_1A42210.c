bool __fastcall sub_1A42210(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // rsi
  int v15; // esi
  __int64 v16; // r8
  __int64 v17; // [rsp+8h] [rbp-30h] BYREF
  __int64 v18[4]; // [rsp+18h] [rbp-20h] BYREF

  v6 = a3;
  v17 = a2;
  if ( (_BYTE)a3 )
  {
    if ( (unsigned __int8)sub_1A42000(a1, a2, a3, a4, a5, a6) )
      return 1;
  }
  else if ( a2 )
  {
    a4 = *(unsigned int *)(a2 + 416);
    a3 = *(_QWORD *)(a1 + 11128);
    if ( a4 < (*(_QWORD *)(a1 + 11136) - a3) >> 2 )
    {
      if ( *(_DWORD *)(a3 + 4 * a4) )
        return 1;
    }
  }
  v7 = sub_1A416F0(a1, (__int64 *)a2, a3, a4, a5, a6);
  v8 = (__int64 *)v7;
  if ( !*(_DWORD *)(v7 + 8) )
    return 0;
  v10 = *(_QWORD *)v7;
  v11 = *(_DWORD *)(v7 + 16);
  if ( v11 )
  {
    v12 = v11 - 1;
    v13 = (v11 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
    v14 = *(_QWORD *)(v10 + 8LL * v13);
    if ( v17 == v14 )
      return 1;
    if ( v14 != -4096 )
    {
      v15 = 1;
      do
      {
        v13 = v12 & (v15 + v13);
        v16 = *(_QWORD *)(v10 + 8LL * v13);
        if ( v17 == v16 )
          return 1;
        ++v15;
      }
      while ( v16 != -4096 );
    }
  }
  if ( ((*(_DWORD *)(v17 + 36) - 6) & 0xFFFFFFFD) == 0 )
  {
    v18[0] = sub_FEEE40(v17);
    if ( sub_1A3F8D0(v8, v18) )
      return 1;
  }
  if ( v6 )
    return 0;
  return sub_1A3FC10((__int64)v8, &v17);
}
