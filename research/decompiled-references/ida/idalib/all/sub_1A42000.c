__int64 __fastcall sub_1A42000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edx
  __int64 result; // rax
  int v10; // eax
  __int64 v12; // rbp
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __m128i v20[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = *(_DWORD *)(a1 + 10136);
  v7 = *(_QWORD *)(a1 + 10120);
  v19 = a2;
  if ( !v6 )
    goto LABEL_5;
  a4 = (unsigned int)(v6 - 1);
  v8 = a4 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  a6 = *(_QWORD *)(v7 + 8LL * v8);
  result = 1;
  if ( a2 == a6 )
    return result;
  v10 = 1;
  if ( a6 == -4096 )
  {
LABEL_5:
    v12 = a1 + 10120;
    if ( a2 == *(_QWORD *)(a1 + 10936) || a2 == *(_QWORD *)(a1 + 10944) )
      goto LABEL_20;
    v13 = *(_DWORD *)(a2 + 36);
    if ( v13 == 6 )
      return 0;
    v14 = *(unsigned int *)(a1 + 10152);
    if ( !(_DWORD)v14 )
      return 0;
    v15 = *(_QWORD *)(a1 + 10144) + 48 * v14;
    v16 = *(_QWORD *)(v15 - 40);
    if ( !v16 )
      return 0;
    if ( *(_DWORD *)(v16 + 36) == 8 )
    {
      a2 = v19;
      v16 = sub_FEEE40(*(_QWORD *)(v15 - 40));
      v13 = *(_DWORD *)(v19 + 36);
    }
    if ( v13 == 8 )
    {
      a2 = sub_FEEE40(a2);
      v19 = a2;
    }
    v17 = *(_QWORD *)(a1 + 10144);
    v7 = v17 + 48LL * *(unsigned int *)(a1 + 10152);
    if ( v17 != v7 )
    {
      a4 = 0;
      do
      {
        v18 = a2 == *(_QWORD *)(v17 + 8);
        v17 += 48;
        a4 += v18;
      }
      while ( v7 != v17 );
      if ( a4 )
        goto LABEL_20;
    }
    if ( sub_A956B0(*(_QWORD *)(a1 + 248), a2, v16) )
    {
LABEL_20:
      sub_1A41E40(v20, v12, (__int64)&v19, a4, v7, a6);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = a4 & (v10 + v8);
      a6 = *(_QWORD *)(v7 + 8LL * v8);
      if ( a2 == a6 )
        return 1;
      ++v10;
      if ( a6 == -4096 )
        goto LABEL_5;
    }
  }
}
