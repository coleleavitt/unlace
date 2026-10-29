unsigned __int64 __fastcall sub_D64EE0(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // r8d
  int *v7; // rsi
  int v8; // edi
  int v10; // esi
  int v11; // r11d
  int v12; // edi
  __m128 v13; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v2 )
  {
    v5 = *a2;
    v6 = (v2 - 1) & (37 * *a2);
    v7 = (int *)(v4 + 16LL * v6);
    v8 = *v7;
    if ( v5 == *v7 )
    {
LABEL_3:
      sub_D64E50(&v13, v7, (int *)(16 * v2 + v4), a1, 1);
      return v13.m128_u64[0];
    }
    v10 = 1;
    if ( v8 != -1 )
    {
      do
      {
        v11 = v10 + 1;
        v6 = (v2 - 1) & (v10 + v6);
        v7 = (int *)(v4 + 16LL * v6);
        v12 = *v7;
        if ( v5 == *v7 )
          goto LABEL_3;
        v10 = v11;
      }
      while ( v12 != -1 );
    }
  }
  sub_D64E50(&v13, (int *)(v4 + 16LL * (unsigned int)v2), (int *)(v4 + 16LL * (unsigned int)v2), a1, 1);
  return v13.m128_u64[0];
}

