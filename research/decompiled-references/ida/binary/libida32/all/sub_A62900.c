__int64 __fastcall sub_A62900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v14; // edi
  int v15; // r10d
  __int64 v16; // r8
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 2112;
  v4 = *(unsigned int *)(a1 + 2128);
  v5 = *(_QWORD *)(a1 + 2112);
  if ( !(_DWORD)v4 )
    goto LABEL_10;
  v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v7 = (__int64 *)(v5 + 16LL * v6);
  v8 = *v7;
  if ( a2 != *v7 )
  {
    v14 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v6 = (v4 - 1) & (v14 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v16 = *v7;
        if ( a2 == *v7 )
          goto LABEL_3;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
LABEL_10:
    sub_9C00D0(v17, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), v2, 1);
    v9 = v17[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_9C00D0(v17, v7, (_QWORD *)(16 * v4 + v5), v2, 1);
  v9 = v17[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 2112) + 16LL * *(unsigned int *)(a1 + 2128));
  sub_9C00D0(v17, v10, v10, v2, 1);
  if ( v17[0].m128_u64[0] == v9 )
    return 1;
  v11 = *(_QWORD *)(a1 + 2136);
  v12 = v11 + 16LL * *(unsigned int *)(v9 + 8);
  if ( v12 == 16LL * *(unsigned int *)(a1 + 2144) + v11 )
    return 1;
  else
    return *(unsigned int *)(v12 + 8);
}

