unsigned __int64 __fastcall sub_EAEE30(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v6; // edi
  int *v7; // r9
  unsigned __int64 v8; // r12
  int *v9; // rdx
  unsigned __int64 result; // rax
  int v11; // edx
  __m128 v12[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 8;
  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & a2;
    v7 = (int *)(v5 + 56LL * v6);
    if ( a2 == *v7 )
    {
LABEL_3:
      sub_EAEDD0(v12, v7, (int *)(v5 + 56 * v4), v2, 1);
      v8 = v12[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v7 )
    {
      v11 = 1;
      do
      {
        v6 = (v4 - 1) & (v11 + v6);
        v7 = (int *)(v5 + 56LL * v6);
        if ( a2 == *v7 )
          goto LABEL_3;
        ++v11;
      }
      while ( *v7 );
    }
  }
  sub_EAEDD0(v12, (int *)(v5 + 56LL * (unsigned int)v4), (int *)(v5 + 56LL * (unsigned int)v4), v2, 1);
  v8 = v12[0].m128_u64[0];
LABEL_4:
  v9 = (int *)(*(_QWORD *)(a1 + 8) + 56LL * *(unsigned int *)(a1 + 24));
  sub_EAEDD0(v12, v9, v9, v2, 1);
  result = v8 + 8;
  if ( v12[0].m128_u64[0] == v8 )
    return 0;
  return result;
}

