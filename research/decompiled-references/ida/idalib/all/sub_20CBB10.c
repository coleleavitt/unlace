__int64 __fastcall sub_20CBB10(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 *v6; // rsi
  __int64 v7; // r9
  int v9; // esi
  int v10; // r11d
  __int64 v11; // r9
  __m128 v12; // [rsp+0h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 7) & 0x10) == 0 )
    return 0;
  v1 = ***(_QWORD ***)(a1 + 8);
  v2 = *(unsigned int *)(v1 + 176);
  v3 = v1 + 160;
  v4 = *(_QWORD *)(v1 + 160);
  if ( (_DWORD)v2 )
  {
    v5 = (v2 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
    v6 = (__int64 *)(v4 + 16LL * v5);
    v7 = *v6;
    if ( a1 == *v6 )
    {
LABEL_4:
      sub_20CBAA0(&v12, v6, (_QWORD *)(16 * v2 + v4), v3, 1);
      return *(_QWORD *)(v12.m128_u64[0] + 8);
    }
    v9 = 1;
    if ( v7 != -4096 )
    {
      do
      {
        v10 = v9 + 1;
        v5 = (v2 - 1) & (v9 + v5);
        v6 = (__int64 *)(v4 + 16LL * v5);
        v11 = *v6;
        if ( a1 == *v6 )
          goto LABEL_4;
        v9 = v10;
      }
      while ( v11 != -4096 );
    }
  }
  sub_20CBAA0(&v12, (_QWORD *)(v4 + 16LL * (unsigned int)v2), (_QWORD *)(v4 + 16LL * (unsigned int)v2), v3, 1);
  return *(_QWORD *)(v12.m128_u64[0] + 8);
}
