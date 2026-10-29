__int64 __fastcall sub_1054C50(__int64 a1, __int64 a2, char **a3)
{
  __int64 v3; // rcx
  char *v4; // rsi
  char v5; // al
  size_t v7; // rax
  size_t v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rax
  __int64 v12; // [rsp+8h] [rbp-C0h]
  __int64 v13; // [rsp+8h] [rbp-C0h]
  void *v14; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+18h] [rbp-B0h]
  __m128i v16; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v17; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v18[16]; // [rsp+40h] [rbp-88h] BYREF
  void *v19[2]; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-68h] BYREF
  __m128i v21; // [rsp+70h] [rbp-58h] BYREF
  __int64 v22; // [rsp+80h] [rbp-48h] BYREF

  v3 = a1 + 16;
  v4 = *a3;
  v16.m128i_i8[0] = 0;
  v15 = 0;
  v14 = &v16;
  v5 = *v4;
  if ( *v4 == 90 )
  {
    if ( v4[1] != 67 )
    {
LABEL_3:
      *(_QWORD *)a1 = v3;
      *(_BYTE *)(a1 + 16) = v5;
      *(_QWORD *)(a1 + 8) = 1;
      *(_BYTE *)(a1 + 17) = 0;
      return a1;
    }
    v19[0] = v20;
    sub_10388C0(v19, v4, (__int64)(v4 + 2));
    v17.m128i_i64[0] = (__int64)v18;
    v9 = j__strlen("^");
    sub_10388C0(&v17, "^", (__int64)&aVirtfunc[v9 + 11]);
    sub_1054B10(&v21, &v17, v19);
    sub_A0AAD0((__int64)&v14, &v21);
    v10 = a1 + 16;
    if ( (__int64 *)v21.m128i_i64[0] != &v22 )
    {
      operator delete((void *)v21.m128i_i64[0]);
      v10 = a1 + 16;
    }
    if ( (_BYTE *)v17.m128i_i64[0] != v18 )
    {
      v12 = v10;
      operator delete((void *)v17.m128i_i64[0]);
      v10 = v12;
    }
    if ( v19[0] != v20 )
    {
      v13 = v10;
      operator delete(v19[0]);
      v10 = v13;
    }
    v11 = (__m128i *)v14;
    ++*a3;
    *(_QWORD *)a1 = v10;
    if ( v11 == &v16 )
    {
      *(__m128i *)(a1 + 16) = _mm_load_si128(&v16);
    }
    else
    {
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 16) = v16.m128i_i64[0];
    }
    *(_QWORD *)(a1 + 8) = v15;
  }
  else
  {
    if ( v5 != 112 )
      goto LABEL_3;
    *(_QWORD *)a1 = v3;
    v7 = j__strlen("r");
    sub_10388C0((_QWORD *)a1, "r", (__int64)&aArmv7R[v7 + 6]);
    if ( v14 != &v16 )
      operator delete(v14);
  }
  return a1;
}
