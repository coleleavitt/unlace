__int64 __fastcall sub_D8A4C0(__int64 a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned int v5; // edx
  int *v6; // r9
  int v8; // edi
  __m128 v9; // [rsp+0h] [rbp-18h] BYREF

  v2 = a1 + 432;
  v3 = *(unsigned int *)(a1 + 448);
  v4 = *(_QWORD *)(a1 + 432);
  if ( (_DWORD)v3 )
  {
    v5 = (v3 - 1) & (37 * a2);
    v6 = (int *)(v4 + 24LL * v5);
    if ( *v6 == a2 )
    {
LABEL_3:
      sub_D8A460(&v9, v6, (int *)(v4 + 24 * v3), v2, 1);
      return *(_QWORD *)(v9.m128_u64[0] + 8);
    }
    if ( *v6 != -1 )
    {
      v8 = 1;
      do
      {
        v5 = (v3 - 1) & (v8 + v5);
        v6 = (int *)(v4 + 24LL * v5);
        if ( *v6 == a2 )
          goto LABEL_3;
        ++v8;
      }
      while ( *v6 != -1 );
    }
  }
  sub_D8A460(&v9, (int *)(v4 + 24 * v3), (int *)(v4 + 24 * v3), v2, 1);
  return *(_QWORD *)(v9.m128_u64[0] + 8);
}
