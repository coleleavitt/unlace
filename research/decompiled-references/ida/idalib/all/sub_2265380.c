void __fastcall sub_2265380(__int64 a1)
{
  _BYTE *v2; // rsi
  __int64 v3; // rdx
  int v4; // r14d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rsi
  void (__fastcall *v11)(void **, __int64, _QWORD *); // rax
  __int64 v12; // rax
  __m128i *v13; // rdi
  unsigned __int64 *v14; // rdi
  _QWORD v15[4]; // [rsp+10h] [rbp-2C8h] BYREF
  __int16 v16; // [rsp+30h] [rbp-2A8h]
  _QWORD v17[4]; // [rsp+40h] [rbp-298h] BYREF
  __int16 v18; // [rsp+60h] [rbp-278h]
  void *v19; // [rsp+70h] [rbp-268h] BYREF
  __int64 v20; // [rsp+78h] [rbp-260h]
  __m128i v21; // [rsp+80h] [rbp-258h] BYREF
  __int16 v22; // [rsp+90h] [rbp-248h]
  int v23; // [rsp+B8h] [rbp-220h]
  void *ptr; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-200h]
  __m128i v26; // [rsp+E0h] [rbp-1F8h] BYREF
  int v27; // [rsp+F0h] [rbp-1E8h]
  __int64 v28; // [rsp+168h] [rbp-170h]
  char v29; // [rsp+170h] [rbp-168h]
  void *v30; // [rsp+180h] [rbp-158h] BYREF
  __m128i si128; // [rsp+188h] [rbp-150h] BYREF
  __int64 v32; // [rsp+198h] [rbp-140h] BYREF
  int v33; // [rsp+1A0h] [rbp-138h]
  int v34; // [rsp+1A4h] [rbp-134h]

  if ( *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64) )
  {
    v34 = 0;
    si128.m128i_i64[0] = 0;
    v30 = &si128.m128i_u64[1];
    si128.m128i_i8[8] = 0;
    v33 = 9;
    sub_A0AAD0(a1 + 8, &v30);
    v14 = (unsigned __int64 *)v30;
    *(_DWORD *)(a1 + 40) = v33;
    if ( v14 != &si128.m128i_u64[1] )
      operator delete(v14);
  }
  else
  {
    v2 = *(_BYTE **)(a1 + 72);
    v3 = *(_QWORD *)(a1 + 80);
    v30 = &v32;
    v4 = 3;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&v30, v2, &v2[v3]);
    v5 = *(_QWORD *)(a1 + 56);
    LOWORD(v27) = 257;
    v6 = *(_QWORD *)(v5 + 64);
    v18 = 257;
    v22 = 257;
    v7 = *(_QWORD *)(v6 + 16);
    v8 = *(_QWORD *)(v6 + 24);
    v16 = 261;
    v15[0] = v7;
    v15[1] = v8;
    sub_228A3B0(&v30, v15, v17, &v19, &ptr);
    v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 64LL) + 8LL);
    if ( v9 != 1 )
    {
      if ( !v9 || v9 == 2 )
      {
        v4 = 2;
      }
      else
      {
        v4 = 9;
        if ( v9 == 3 )
        {
          v10 = *(_QWORD *)(a1 + 48);
          v22 = 261;
          v19 = v30;
          v20 = si128.m128i_i64[0];
          sub_2264B90((__int64)&ptr, v10, (const char **)&v19, 1, 0);
          if ( (v29 & 1) == 0 )
          {
            si128.m128i_i64[0] = 0;
            sub_A1FE50(&v30, ptr, (_BYTE *)ptr + v25);
            v11 = *(void (__fastcall **)(void **, __int64, _QWORD *))(*(_QWORD *)v28 + 16LL);
            v18 = 261;
            v17[0] = v30;
            v17[1] = si128.m128i_i64[0];
            v11(&v19, v28, v17);
            v4 = v23;
            if ( v19 != &v21 )
              operator delete(v19);
            if ( (v29 & 1) == 0 && ptr != &v26.m128i_u64[1] )
              free(ptr);
          }
        }
      }
    }
    v19 = &v21;
    sub_2259A00(&v19, v30, (__int64)v30 + si128.m128i_i64[0]);
    ptr = &v26;
    if ( v19 == &v21 )
    {
      v26 = _mm_load_si128(&v21);
    }
    else
    {
      ptr = v19;
      v26.m128i_i64[0] = v21.m128i_i64[0];
    }
    v12 = v20;
    v20 = 0;
    v21.m128i_i8[0] = 0;
    v25 = v12;
    v19 = &v21;
    v27 = v4;
    sub_A0AAD0(a1 + 8, &ptr);
    v13 = (__m128i *)ptr;
    *(_DWORD *)(a1 + 40) = v27;
    if ( v13 != &v26 )
      operator delete(v13);
    if ( v19 != &v21 )
      operator delete(v19);
    if ( v30 != &v32 )
      free(v30);
  }
}
