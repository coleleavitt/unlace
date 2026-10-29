__int64 __fastcall sub_E43DC0(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // r15
  unsigned __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  void **v10; // rax
  const char *v11; // rax
  void **v12; // rax
  __int64 v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+10h] [rbp-D8h]
  __int64 v18; // [rsp+10h] [rbp-D8h]
  __int64 v19; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-C0h]
  int v21; // [rsp+30h] [rbp-B8h]
  void *v22[4]; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v23; // [rsp+60h] [rbp-88h] BYREF
  int v24; // [rsp+70h] [rbp-78h] BYREF
  __int16 v25; // [rsp+80h] [rbp-68h] BYREF
  __int64 v26; // [rsp+88h] [rbp-60h]
  __int64 v27; // [rsp+90h] [rbp-58h]
  int v28; // [rsp+98h] [rbp-50h]

  v2 = (_QWORD *)(a2 + 24);
  result = *(_WORD *)(a2 + 2) >> 4;
  v4 = a2 + 24 + 8 * result;
  if ( a2 + 24 != v4 )
  {
    do
    {
      v6 = *v2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*v2 & 4) != 0 )
      {
        v9 = *v2 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        sub_E3A830(&v23, v9);
        sub_E35650((__int64)&v25, &v23);
        v10 = (void **)j__strlen("id");
        sub_E35C20((void ***)v22, (void **)"id", v10);
        v18 = sub_220A4E0(&v19, v22);
        sub_2207560(v18);
        sub_2205840(v18, &v25);
        if ( v22[0] )
          sub_E34850((void **)v22[0]);
        sub_2207560(&v25);
        if ( (int *)v23.m128i_i64[0] != &v24 )
          operator delete((void *)v23.m128i_i64[0]);
        v11 = (const char *)sub_EC59F0(v6);
        sub_E35B80((__int64)&v25, v11);
        v12 = (void **)j__strlen("kind");
        sub_E35C20((void ***)&v23, (void **)"kind", v12);
        v13 = sub_220A4E0(&v19, &v23);
        sub_2207560(v13);
        sub_2205840(v13, &v25);
        if ( v23.m128i_i64[0] )
          sub_E34850((void **)v23.m128i_i64[0]);
        sub_2207560(&v25);
        v14 = *a1 + 1048;
        v25 = 7;
        v15 = v19;
        v19 = 0;
        v26 = v15;
        v16 = v20;
        v20 = 0;
        v27 = v16;
        LODWORD(v16) = v21;
        v21 = 0;
        v28 = v16;
        sub_2208D80(v14, &v25);
        sub_2207560(&v25);
        result = sub_E395A0(&v19);
      }
      else
      {
        v17 = *a1;
        sub_E43670((__int64)&v23, *a1, *v2 & 0xFFFFFFFFFFFFFFF8LL);
        v25 = 7;
        v7 = v23.m128i_i64[0];
        v23.m128i_i64[0] = 0;
        v26 = v7;
        v8 = v23.m128i_i64[1];
        v23.m128i_i64[1] = 0;
        v27 = v8;
        LODWORD(v8) = v24;
        v24 = 0;
        v28 = v8;
        sub_2208D80(v17 + 1048, &v25);
        sub_2207560(&v25);
        result = sub_E395A0(v23.m128i_i64);
      }
      ++v2;
    }
    while ( (_QWORD *)v4 != v2 );
  }
  return result;
}

