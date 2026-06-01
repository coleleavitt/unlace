__int64 __fastcall sub_A61710(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v15; // rax
  int v16; // esi
  int v17; // r10d
  __int64 v18; // r8
  __int128 v19; // [rsp+0h] [rbp-48h] BYREF
  __m128 v20[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a1 + 2000;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = *(unsigned int *)(a1 + 2016);
  v6 = *(_QWORD *)(a1 + 2000);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( v4 == *v8 )
    {
LABEL_3:
      sub_A616A0(v20, v8, (_QWORD *)(16 * v5 + v6), v3, 1);
      v10 = v20[0].m128_u64[0];
      goto LABEL_4;
    }
    v16 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v17 = v16 + 1;
        v7 = (v5 - 1) & (v16 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v18 = *v8;
        if ( v4 == *v8 )
          goto LABEL_3;
        v16 = v17;
      }
      while ( v18 != -4096 );
    }
  }
  sub_A616A0(v20, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), v3, 1);
  v10 = v20[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 2000) + 16LL * *(unsigned int *)(a1 + 2016));
  sub_A616A0(v20, v11, v11, v3, 1);
  if ( v20[0].m128_u64[0] == v10 )
  {
    return 0;
  }
  else
  {
    v12 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v10 + 8) & 4) != 0 )
    {
      v13 = *(_QWORD *)v12 + 8LL * *(unsigned int *)(v12 + 8);
    }
    else
    {
      v15 = v10 + 8;
      v13 = v10 + 16;
      if ( !v12 )
        v13 = v15;
    }
    *(_QWORD *)&v19 = v13;
    return (__int64)_mm_loadh_ps((const double *)&v19);
  }
}

