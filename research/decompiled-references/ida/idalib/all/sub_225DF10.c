void __fastcall sub_225DF10(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  __int64 *v4; // rax
  __int64 v5; // rbp
  bool v6; // zf
  __int64 v7; // rdx
  __int64 *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // rax
  char *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r15
  _QWORD *v22; // rax
  __int64 v23; // rdi
  char *v24; // rdx
  __int64 *v25; // r13
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // [rsp+10h] [rbp-1C8h]
  __int64 v30; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-1B0h]
  __int16 v32; // [rsp+40h] [rbp-198h]
  _BYTE v33[32]; // [rsp+50h] [rbp-188h] BYREF
  __int16 v34; // [rsp+70h] [rbp-168h]
  _BYTE v35[32]; // [rsp+80h] [rbp-158h] BYREF
  __int16 v36; // [rsp+A0h] [rbp-138h]
  __m128i v37; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-118h] BYREF
  _BYTE *v39; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v40[32]; // [rsp+E0h] [rbp-F8h] BYREF
  char *s; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  _BYTE v43[192]; // [rsp+118h] [rbp-C0h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = *(__int64 **)a2;
    v5 = *(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8);
    if ( v3 == 1 )
    {
      v24 = v43;
      s = v43;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( (__int64 *)v5 == v4 )
      {
        v11 = *(_BYTE **)(a1 + 48);
        v12 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        v25 = v4;
        do
        {
          v26 = *v25;
          LOWORD(v39) = 257;
          v25 += 2;
          v30 = v26;
          v27 = *(v25 - 1);
          v36 = 257;
          v31 = v27;
          v34 = 257;
          v32 = 261;
          sub_228A3B0(&s, &v30, v33, v35, &v37);
        }
        while ( (__int64 *)v5 != v25 );
        v11 = *(_BYTE **)(a1 + 48);
        v12 = *(_QWORD *)(a1 + 56);
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
          sub_2236E10((__int64)&s, v43, si128.m128i_i64[0] + 1, 1);
        v24 = &s[si128.m128i_i64[0]];
      }
      *v24 = 0;
    }
    else
    {
      v6 = v3 == 2;
      v7 = 0;
      if ( v6 )
        v7 = a1;
      v28 = v7;
      s = v43;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      if ( (__int64 *)v5 == v4 )
      {
        v11 = *(_BYTE **)(v7 + 48);
        v12 = *(_QWORD *)(v7 + 56);
        v14 = v43;
      }
      else
      {
        v8 = v4;
        do
        {
          v32 = 261;
          v36 = 257;
          v9 = *v8;
          v8 += 2;
          v34 = 257;
          v30 = v9;
          v10 = *(v8 - 1);
          LOWORD(v39) = 257;
          v31 = v10;
          sub_228A3B0(&s, &v30, v33, v35, &v37);
        }
        while ( (__int64 *)v5 != v8 );
        v11 = *(_BYTE **)(v28 + 48);
        v12 = *(_QWORD *)(v28 + 56);
        v13 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
        {
          sub_2236E10((__int64)&s, v43, si128.m128i_i64[0] + 1, 1);
          v13 = si128.m128i_i64[0];
        }
        v14 = &s[v13];
      }
      *v14 = 0;
    }
    v15 = s;
    v16 = -1;
    v37.m128i_i64[0] = (__int64)&v38;
    if ( s )
      v16 = (__int64)&v15[j__strlen(s)];
    sub_2259A00(&v37, v15, v16);
    v39 = v40;
    sub_2259A00(&v39, v11, (__int64)&v11[v12]);
    v40[16] = 0;
    sub_225DC50(a3, &v37);
    sub_225C120((__int64)&v37);
    if ( s != v43 )
      free(s);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 56);
    v18 = *(_QWORD *)(a1 + 48);
    if ( v17 != v18 )
    {
      v19 = *(unsigned int *)(a2 + 8);
      do
      {
        v20 = *(_QWORD *)(*(_QWORD *)v18 + 24LL);
        v21 = *(_QWORD *)(*(_QWORD *)v18 + 16LL);
        if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        {
          sub_2237220(a2, (const void *)(a2 + 16), v19 + 1, 16);
          v19 = *(unsigned int *)(a2 + 8);
        }
        v22 = (_QWORD *)(*(_QWORD *)a2 + 16 * v19);
        *v22 = v21;
        v18 += 8;
        v22[1] = v20;
        v23 = *(_QWORD *)(v18 - 8);
        ++*(_DWORD *)(a2 + 8);
        sub_225DF10(v23, a2, a3);
        v19 = (unsigned int)(*(_DWORD *)(a2 + 8) - 1);
        *(_DWORD *)(a2 + 8) = v19;
      }
      while ( v17 != v18 );
    }
  }
}
