unsigned __int64 __fastcall sub_B6D6D0(__int64 a1, __int64 *a2)
{
  char v3; // r10
  __int64 v4; // r11
  __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 *v8; // rsi
  unsigned int v10; // r9d
  unsigned int v11; // eax
  int v12; // edx
  __int64 v13; // r9
  int v14; // eax
  __m128 v15; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_BYTE *)a1 & 1;
  if ( !v3 )
  {
    v10 = *(_DWORD *)(a1 + 16);
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v10;
    if ( !v10 )
      goto LABEL_10;
    v4 = *a2;
    v12 = v10 - 1;
    v7 = (v10 - 1) & (((unsigned int)*a2 >> 4) ^ ((unsigned int)*a2 >> 9));
    v8 = (__int64 *)(v5 + 16LL * v7);
    if ( v4 == *v8 )
    {
LABEL_6:
      v6 = 16LL * v11;
      goto LABEL_3;
    }
    if ( *v8 == -1 )
    {
LABEL_10:
      v13 = 16LL * v10;
      goto LABEL_8;
    }
LABEL_12:
    v14 = 1;
    while ( 1 )
    {
      v7 = v12 & (v14 + v7);
      v8 = (__int64 *)(v5 + 16LL * v7);
      if ( *v8 == v4 )
        break;
      ++v14;
      if ( *v8 == -1 )
      {
        if ( !v3 )
        {
          v10 = *(_DWORD *)(a1 + 16);
          goto LABEL_10;
        }
        v13 = 64;
        goto LABEL_8;
      }
    }
    if ( !v3 )
    {
      v11 = *(_DWORD *)(a1 + 16);
      goto LABEL_6;
    }
    v6 = 64;
    goto LABEL_3;
  }
  v4 = *a2;
  v5 = a1 + 8;
  v6 = 64;
  v7 = ((unsigned __int8)((unsigned int)*a2 >> 9) ^ (unsigned __int8)((unsigned int)*a2 >> 4)) & 3;
  v8 = (__int64 *)(v5
                 + 16LL * (((unsigned __int8)((unsigned int)*a2 >> 9) ^ (unsigned __int8)((unsigned int)*a2 >> 4)) & 3));
  if ( v4 == *v8 )
  {
LABEL_3:
    sub_AA8A70(&v15, v8, (__int64 *)(v5 + v6), a1, 1);
    return v15.m128_u64[0];
  }
  v13 = 64;
  v12 = 3;
  if ( *v8 != -1 )
    goto LABEL_12;
LABEL_8:
  sub_AA8A70(&v15, (__int64 *)(v5 + v13), (__int64 *)(v5 + v13), a1, 1);
  return v15.m128_u64[0];
}

