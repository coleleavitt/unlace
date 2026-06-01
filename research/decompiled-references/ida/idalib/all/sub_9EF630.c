__int64 __fastcall sub_9EF630(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 *v5; // rax
  __int64 *v6; // rbx
  unsigned int **v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  unsigned int **v11; // r13
  unsigned int *v12; // rax
  unsigned int **j; // rbx
  unsigned int *v14; // rbp
  __int64 *v16; // r13
  unsigned int *v17; // r15
  __int64 *i; // rbp
  unsigned int *v19; // rax
  __int64 *v20; // r14
  __int64 v21; // [rsp+0h] [rbp-60h] BYREF
  void *src[2]; // [rsp+8h] [rbp-58h] BYREF
  __int64 *v23; // [rsp+18h] [rbp-48h]

  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  *(_OWORD *)src = 0;
  v23 = nullptr;
  v4 = v3 + (v2 << 6);
  if ( v3 == v4 )
    return 0;
  v5 = nullptr;
  v6 = nullptr;
  while ( 1 )
  {
    v21 = v3;
    if ( v6 == v5 )
      break;
    *v6++ = v3;
    v3 += 64;
    src[1] = v6;
    if ( v4 == v3 )
      goto LABEL_7;
LABEL_4:
    v5 = v23;
  }
  v3 += 64;
  sub_9EF4E0((__int64)src, v6, &v21);
  v6 = (__int64 *)src[1];
  if ( v4 != v3 )
    goto LABEL_4;
LABEL_7:
  v7 = (unsigned int **)src[0];
  v8 = 0;
  if ( src[0] != v6 )
  {
    v9 = (char *)v6 - (char *)src[0];
    _BitScanReverse64(&v10, ((char *)v6 - (char *)src[0]) >> 3);
    sub_9EA0C0((__m128i *)src[0], (char *)v6, 2LL * (int)(63 - (v10 ^ 0x3F)), a2);
    if ( v9 > 128 )
    {
      v16 = (__int64 *)(v7 + 16);
      sub_9EADB0(v7, (char *)v7 + 128, a2);
      if ( v7 + 16 != (unsigned int **)v6 )
      {
        do
        {
          v17 = (unsigned int *)*v16;
          for ( i = v16; ; i[1] = *i )
          {
            v19 = (unsigned int *)*(i - 1);
            v20 = i--;
            if ( !(unsigned __int8)sub_10246C0(a2, *v17, *v19) )
              break;
          }
          ++v16;
          *v20 = (__int64)v17;
        }
        while ( v6 != v16 );
      }
    }
    else
    {
      sub_9EADB0(v7, (char *)v6, a2);
    }
    v6 = (__int64 *)src[0];
    v11 = (unsigned int **)src[1];
    if ( src[1] == src[0] )
    {
LABEL_17:
      v8 = 0;
    }
    else
    {
      v12 = *(unsigned int **)src[0];
      for ( j = (unsigned int **)((char *)src[0] + 8); ; ++j )
      {
        if ( v11 == j )
        {
          v6 = (__int64 *)src[0];
          goto LABEL_17;
        }
        v14 = *j;
        if ( v12 )
        {
          if ( !(unsigned __int8)sub_10246C0(a2, v12[1], *v14) )
            break;
        }
        v12 = v14;
      }
      v6 = (__int64 *)src[0];
      v8 = 1;
    }
  }
  if ( v6 )
    operator delete(v6);
  return v8;
}
