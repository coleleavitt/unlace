__int64 __fastcall sub_2038650(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  _QWORD *v11; // rdi
  unsigned __int64 v12; // r13
  _QWORD *v13; // rdx
  int v15; // esi
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 8) )
  {
    sub_2038010(a1, a2, a3, a4, a5, a6);
    *(_QWORD *)(a1 + 8) = 0;
  }
  if ( *(_QWORD *)(a1 + 16) && !*(_BYTE *)(a1 + 24) )
    sub_20379B0(a1, a2, a3, a4, a5, a6);
  v8 = *(unsigned int *)(a1 + 152);
  v9 = *(_QWORD *)(a1 + 136);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v11 = (_QWORD *)(v9 + 16LL * v10);
    if ( a2 == *v11 )
    {
LABEL_8:
      sub_20336F0(v16, v11, (_QWORD *)(16 * v8 + v9), a1 + 136, 1);
      v12 = v16[0].m128_u64[0];
      goto LABEL_9;
    }
    if ( *v11 != -4096 )
    {
      v15 = 1;
      do
      {
        v10 = (v8 - 1) & (v15 + v10);
        v11 = (_QWORD *)(v9 + 16LL * v10);
        if ( a2 == *v11 )
          goto LABEL_8;
        ++v15;
      }
      while ( *v11 != -4096 );
    }
  }
  sub_20336F0(v16, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), a1 + 136, 1);
  v12 = v16[0].m128_u64[0];
LABEL_9:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 136) + 16LL * *(unsigned int *)(a1 + 152));
  sub_20336F0(v16, v13, v13, a1 + 136, 1);
  if ( v16[0].m128_u64[0] == v12 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v12 + 8);
}
