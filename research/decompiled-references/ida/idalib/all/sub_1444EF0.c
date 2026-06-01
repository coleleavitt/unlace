__int64 __fastcall sub_1444EF0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int *v3; // rax
  __int64 v4; // r13
  __int64 v5; // rdx
  size_t v6; // rbp
  unsigned __int64 v7; // r12
  void *v8; // rax
  int v9; // eax
  int v10; // edx
  void *v11; // rdi
  unsigned int v12; // ebx
  _QWORD v14[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v15; // [rsp+10h] [rbp-A8h] BYREF
  size_t v16; // [rsp+18h] [rbp-A0h]
  __m128i v17; // [rsp+20h] [rbp-98h] BYREF
  void *v18[2]; // [rsp+30h] [rbp-88h] BYREF
  __m128i v19; // [rsp+40h] [rbp-78h] BYREF
  void *v20; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-58h] BYREF
  int v22; // [rsp+70h] [rbp-48h]
  int v23; // [rsp+74h] [rbp-44h]

  v2 = sub_1440A00(a2, *a1);
  if ( v2 )
  {
    v3 = *(unsigned int **)(v2 + 16);
    v4 = *(_QWORD *)(*a1 + 64);
    v5 = *v3;
    v14[0] = v3 + 4;
    v14[1] = v5;
    sub_2246450(&v15, v14);
    v6 = v16;
    if ( v16 == 0x7FFFFFFFFFFFFFFFLL || v16 == 9223372036854775806LL )
      std::__throw_length_error("basic_string::append");
    v7 = v16 + 2;
    if ( v15 == &v17 )
    {
      if ( v7 <= 0xF )
        goto LABEL_5;
    }
    else if ( v7 <= v17.m128i_i64[0] )
    {
LABEL_5:
      *(_WORD *)((char *)v15 + v16) = 11565;
      goto LABEL_6;
    }
    sub_998B30((__int64)&v15, v16, 0, "--", 2u);
LABEL_6:
    v16 = v6 + 2;
    *((_BYTE *)v15 + v6 + 2) = 0;
    v18[0] = &v19;
    if ( v15 == &v17 )
    {
      v19 = _mm_load_si128(&v17);
    }
    else
    {
      v18[0] = v15;
      v19.m128i_i64[0] = v17.m128i_i64[0];
    }
    v8 = (void *)v16;
    v16 = 0;
    v17.m128i_i8[0] = 0;
    v18[1] = v8;
    v15 = &v17;
    sub_22B9ED0(&v20, v18);
    if ( v18[0] != &v19 )
      operator delete(v18[0]);
    if ( v15 != &v17 )
      operator delete(v15);
    v9 = *(_DWORD *)(v4 + 248);
    if ( v9 == 35 )
    {
      if ( !v23 )
      {
        v10 = v22;
        if ( v22 == 1 )
          goto LABEL_29;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v4 + 252) != v23 )
        goto LABEL_17;
      if ( v22 == 1 )
        goto LABEL_29;
    }
    else if ( v9 == 36 )
    {
      if ( !v23 )
      {
        if ( v22 == 2 )
          goto LABEL_29;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(v4 + 252) == v23 && v22 == 2 )
        goto LABEL_29;
    }
    else if ( !v23 )
    {
LABEL_15:
      v10 = v22;
LABEL_16:
      if ( v9 != v10 )
        goto LABEL_17;
LABEL_29:
      v11 = v20;
      v12 = 1;
      if ( v20 == v21 )
        return v12;
      goto LABEL_18;
    }
    if ( v23 == *(_DWORD *)(v4 + 252) )
      goto LABEL_15;
LABEL_17:
    v11 = v20;
    v12 = 0;
    if ( v20 == v21 )
      return v12;
LABEL_18:
    operator delete(v11);
    return v12;
  }
  return 0;
}
