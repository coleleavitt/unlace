unsigned __int64 __fastcall sub_4CFA10(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  void *v4; // rdi
  char *v5; // rax
  __int64 v6; // rdx
  __m128i v7; // xmm0
  char v8; // r14
  const char *v9; // r8
  const char *v10; // rdx
  int v11; // eax
  char v13; // [rsp+7h] [rbp-81h]
  __int64 v14; // [rsp+8h] [rbp-80h]
  void *v15; // [rsp+10h] [rbp-78h] BYREF
  __int128 v16; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v18; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 1672) + 608LL) && *(_QWORD *)(a2 + 8) > 1u )
  {
    v14 = *(_QWORD *)(a1 + 1720);
    do
    {
      v2 = *(_QWORD *)(v14 + 272);
      v3 = *(_QWORD *)(v14 + 280);
      if ( v2 == v3 )
        break;
      v13 = 0;
      do
      {
        v8 = *(_BYTE *)(v2 + 80);
        if ( v8 )
        {
          v15 = nullptr;
          v9 = haystack;
          ptr = nullptr;
          v16 = 0;
          v18 = 0;
          if ( *(_QWORD *)(v2 + 64) )
            v9 = *(const char **)(v2 + 56);
          v10 = haystack;
          if ( *(_QWORD *)(a2 + 8) )
            v10 = *(const char **)a2;
          v11 = sub_89FD20(&ptr, v2, v10, 512, v9, &v15);
          if ( v11 < 0 )
            sub_368890();
          v4 = ptr;
          if ( v11 )
          {
            v5 = *(char **)a2;
            v6 = *(_QWORD *)(a2 + 16);
            v13 = v8;
            v7 = _mm_loadu_si128(&v18);
            *(_QWORD *)a2 = ptr;
            ptr = v5;
            v4 = v5;
            v18.m128i_i64[1] = v6;
            *(__m128i *)(a2 + 8) = v7;
          }
          if ( v4 )
          {
            v18.m128i_i64[0] = 0;
            qfree(v4);
          }
          if ( v15 )
          {
            *(_QWORD *)&v16 = 0;
            qfree(v15);
          }
        }
        v2 += 88;
      }
      while ( v3 != v2 );
    }
    while ( v13 );
  }
  return v19 - __readfsqword(0x28u);
}
