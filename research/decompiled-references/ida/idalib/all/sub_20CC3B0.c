const char *__fastcall sub_20CC3B0(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // r8d
  __int64 *v7; // rsi
  __int64 v8; // r9
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // r11d
  __int64 v12; // r9
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 7) & 0x10) == 0 )
    return &byte_22F0C30;
  v2 = ***(_QWORD ***)(a1 + 8);
  v3 = *(unsigned int *)(v2 + 176);
  v4 = v2 + 160;
  v5 = *(_QWORD *)(v2 + 160);
  if ( !(_DWORD)v3 )
    goto LABEL_10;
  v6 = (v3 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v7 = (__int64 *)(v5 + 16LL * v6);
  v8 = *v7;
  if ( a1 != *v7 )
  {
    v10 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v11 = v10 + 1;
        v6 = (v3 - 1) & (v10 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v12 = *v7;
        if ( a1 == *v7 )
          goto LABEL_5;
        v10 = v11;
      }
      while ( v12 != -4096 );
    }
LABEL_10:
    sub_20CBAA0(&v13, (_QWORD *)(v5 + 16LL * (unsigned int)v3), (_QWORD *)(v5 + 16LL * (unsigned int)v3), v4, 1);
    v9 = v13.m128_u64[0];
    return (const char *)(*(_QWORD *)(v9 + 8) + 16LL);
  }
LABEL_5:
  sub_20CBAA0(&v13, v7, (_QWORD *)(16 * v3 + v5), v4, 1);
  v9 = v13.m128_u64[0];
  return (const char *)(*(_QWORD *)(v9 + 8) + 16LL);
}
