__int64 __fastcall sub_E31D10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // r10d
  _QWORD *v6; // r9
  int v8; // ecx
  __m128 v9[2]; // [rsp+0h] [rbp-28h] BYREF

  v2 = a1 + 592;
  if ( *(char *)(a2 + 29) < 0 )
    a2 = sub_B72720(a2);
  v3 = *(unsigned int *)(a1 + 608);
  v4 = *(_QWORD *)(a1 + 592);
  if ( (_DWORD)v3 )
  {
    v5 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (_QWORD *)(v4 + 16LL * v5);
    if ( a2 == *v6 )
    {
LABEL_5:
      sub_E31CA0(v9, v6, (_QWORD *)(16 * v3 + v4), v2, 1);
      return *(_QWORD *)(v9[0].m128_u64[0] + 8);
    }
    if ( *v6 != -4096 )
    {
      v8 = 1;
      do
      {
        v5 = (v3 - 1) & (v8 + v5);
        v6 = (_QWORD *)(v4 + 16LL * v5);
        if ( a2 == *v6 )
          goto LABEL_5;
        ++v8;
      }
      while ( *v6 != -4096 );
    }
  }
  sub_E31CA0(v9, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), v2, 1);
  return *(_QWORD *)(v9[0].m128_u64[0] + 8);
}
