__int64 __fastcall sub_2038930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned int v11; // ecx
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdx
  int v16; // esi
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_2038010(a1, a2, a3, a4, a5, a6);
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 24) )
  {
    v9 = a1 + 104;
    sub_20379B0(a1, a2, a3, a4, a5, a6);
    v8 = *(unsigned int *)(a1 + 120);
    v10 = *(_QWORD *)(a1 + 104);
    if ( !(_DWORD)v8 )
      goto LABEL_11;
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 120);
    v9 = a1 + 104;
    v10 = *(_QWORD *)(a1 + 104);
    if ( !(_DWORD)v8 )
      goto LABEL_11;
  }
  v11 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (_QWORD *)(v10 + 16LL * v11);
  if ( a2 == *v12 )
  {
LABEL_7:
    sub_20336F0(v17, v12, (_QWORD *)(16 * v8 + v10), v9, 1);
    v13 = v17[0].m128_u64[0];
    goto LABEL_8;
  }
  if ( *v12 != -4096 )
  {
    v16 = 1;
    do
    {
      v11 = (v8 - 1) & (v16 + v11);
      v12 = (_QWORD *)(v10 + 16LL * v11);
      if ( a2 == *v12 )
        goto LABEL_7;
      ++v16;
    }
    while ( *v12 != -4096 );
  }
LABEL_11:
  sub_20336F0(v17, (_QWORD *)(v10 + 16LL * (unsigned int)v8), (_QWORD *)(v10 + 16LL * (unsigned int)v8), v9, 1);
  v13 = v17[0].m128_u64[0];
LABEL_8:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL * *(unsigned int *)(a1 + 120));
  sub_20336F0(v17, v14, v14, v9, 1);
  if ( v17[0].m128_u64[0] == v13 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v13 + 8);
}
