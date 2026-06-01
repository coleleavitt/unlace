const char *__fastcall sub_22B7890(__int64 a1)
{
  void *v1; // rax
  size_t v2; // rdx
  char *v4; // rax
  size_t v5; // rdx
  size_t v6; // rbp
  int v7; // edi
  __m128i v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // r12
  size_t v12; // r13
  size_t v13; // rax
  void *s1; // [rsp+0h] [rbp-E8h] BYREF
  size_t v15; // [rsp+8h] [rbp-E0h]
  void *v16; // [rsp+10h] [rbp-D8h] BYREF
  size_t v17; // [rsp+18h] [rbp-D0h]
  __int64 v18; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v19[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int16 v20; // [rsp+50h] [rbp-98h]
  __m128i v21; // [rsp+60h] [rbp-88h] BYREF
  __int16 v22; // [rsp+80h] [rbp-68h]
  __m128i v23[5]; // [rsp+90h] [rbp-58h] BYREF

  v1 = (void *)sub_22B76B0((__int64 *)a1);
  v15 = v2;
  s1 = v1;
  if ( v2 == 4 && *(_DWORD *)s1 == 1701736302 )
  {
    j__strlen(&byte_22F0C30);
    return &byte_22F0C30;
  }
  else
  {
    v4 = sub_22B6CA0(*(_DWORD *)(a1 + 48));
    v6 = v5;
    if ( v15 >= v5 && (!v5 || !memcmp(s1, v4, v5)) )
    {
      s1 = (char *)s1 + v6;
      v15 -= v6;
    }
    if ( sub_2246AB0((__int64 *)&s1, "-", 1u, 0) != -1 )
    {
      v7 = *(_DWORD *)(a1 + 52);
      if ( v7 )
      {
        v8.m128i_i64[0] = (__int64)sub_22B7340(v7);
        v19[0].m128i_i64[0] = (__int64)"-";
        v20 = 259;
        v22 = 261;
        v21 = v8;
        sub_A41580(v23, v19, &v21, 261, v9, v10);
        sub_2253560(&v16, v23);
        v11 = (__int64 *)v16;
        v12 = v17;
        if ( sub_9EC680(&s1, v16, v17) )
        {
          v13 = v15 - v12;
          if ( v15 - v12 > v15 )
            v13 = v15;
          v15 = v13;
        }
        if ( v11 != &v18 )
          operator delete(v11);
      }
    }
    return (const char *)s1;
  }
}
