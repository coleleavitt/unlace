__int64 __fastcall sub_EB53D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 *v13; // rdx
  int v14; // eax
  int v15; // r9d
  __int64 v16; // [rsp+8h] [rbp-40h] BYREF
  __m128 v17[3]; // [rsp+10h] [rbp-38h] BYREF

  v16 = a2;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 1LL) & 2) == 0 )
    return 1;
  v8 = *(unsigned int *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 24);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (37 * a3);
    v11 = (__int64 *)(v9 + 16LL * v10);
    if ( a3 == *v11 )
    {
LABEL_5:
      sub_EB5360(v17, v11, (__int64 *)(16 * v8 + v9), a1 + 24, 1);
      v12 = v17[0].m128_u64[0];
      goto LABEL_6;
    }
    if ( *v11 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v15 = 1;
      do
      {
        v10 = (v8 - 1) & (v15 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        if ( a3 == *v11 )
          goto LABEL_5;
        ++v15;
      }
      while ( *v11 != 0x7FFFFFFFFFFFFFFFLL );
    }
  }
  sub_EB5360(v17, (__int64 *)(v9 + 16LL * (unsigned int)v8), (__int64 *)(v9 + 16LL * (unsigned int)v8), a1 + 24, 1);
  v12 = v17[0].m128_u64[0];
LABEL_6:
  v13 = (__int64 *)(*(_QWORD *)(a1 + 24) + 16LL * *(unsigned int *)(a1 + 40));
  sub_EB5360(v17, v13, v13, a1 + 24, 1);
  if ( v17[0].m128_u64[0] == v12 )
    return 1;
  LOBYTE(v14) = sub_EB4250((_QWORD *)(v12 + 8), &v16);
  return v14 ^ 1u;
}

