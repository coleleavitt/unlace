unsigned __int64 __fastcall sub_A86BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r9
  int v10; // esi
  int v11; // r11d
  __int64 v12; // r9
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1 + 22840;
  v3 = *(_QWORD *)(a1 + 22840);
  v4 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v5 = *(unsigned int *)(a1 + 22856);
  if ( (_DWORD)v5 )
  {
    v6 = (v5 - 1) & (v4 ^ (v4 >> 9));
    v7 = (__int64 *)(v3 + 56LL * v6);
    v8 = *v7;
    if ( v4 == *v7 )
    {
LABEL_3:
      sub_A869E0(&v13, v7, (_QWORD *)(v3 + 56 * v5), v2, 1);
      return v13.m128_u64[0] + 8;
    }
    v10 = 1;
    if ( v8 )
    {
      do
      {
        v11 = v10 + 1;
        v6 = (v5 - 1) & (v10 + v6);
        v7 = (__int64 *)(v3 + 56LL * v6);
        v12 = *v7;
        if ( v4 == *v7 )
          goto LABEL_3;
        v10 = v11;
      }
      while ( v12 );
    }
  }
  sub_A869E0(&v13, (_QWORD *)(v3 + 56 * v5), (_QWORD *)(v3 + 56 * v5), v2, 1);
  return v13.m128_u64[0] + 8;
}
