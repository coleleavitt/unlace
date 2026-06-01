__int64 __fastcall sub_E30160(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  int v12; // esi
  int v13; // r10d
  __int64 v14; // r8
  __m128 v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( v3 == *v7 )
    {
LABEL_3:
      sub_CE95E0(v15, v7, (_QWORD *)(16 * v4 + v5), a1 + 8, 1);
      v9 = v15[0].m128_u64[0];
      goto LABEL_4;
    }
    v12 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v13 = v12 + 1;
        v6 = (v4 - 1) & (v12 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v14 = *v7;
        if ( v3 == *v7 )
          goto LABEL_3;
        v12 = v13;
      }
      while ( v14 != -4096 );
    }
  }
  sub_CE95E0(v15, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), a1 + 8, 1);
  v9 = v15[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_CE95E0(v15, v10, v10, a1 + 8, 1);
  if ( v15[0].m128_u64[0] == v9 )
    return 0;
  else
    return *(_QWORD *)(v9 + 8);
}
