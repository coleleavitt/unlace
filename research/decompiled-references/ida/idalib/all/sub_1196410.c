const char *__fastcall sub_1196410(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE *v8; // rax
  __int64 v9; // rax
  const char *v10; // rbx
  size_t v11; // rax
  size_t v12; // rbp
  _BYTE *v13; // rax
  unsigned __int64 v14; // rax
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-B8h] BYREF
  _WORD v18[16]; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h] BYREF
  __int16 v21; // [rsp+50h] [rbp-68h]
  __m128i v22[2]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v23; // [rsp+80h] [rbp-38h]

  v4 = sub_10DE660(a1, 0x2BAu, 0x22Au);
  if ( v4 )
  {
    v5 = v4;
    if ( (unsigned __int8)sub_21B9810(v4, 698) )
    {
      v8 = **(_BYTE ***)(v5 + 48);
      v21 = 257;
      if ( *v8 )
      {
        v19.m128i_i64[0] = (__int64)v8;
        LOBYTE(v21) = 3;
      }
      v18[8] = 259;
      v17.m128i_i64[0] = (__int64)"-fdebug-compilation-dir=";
      sub_A41580(v22, &v17, &v19, 257, v6, v7);
      v9 = sub_10DA6C0(a1, (__int64)v22);
      sub_10DC5D0(a2, v9);
    }
    else
    {
      sub_21B5A40(v5, a1, a2);
    }
  }
  else
  {
    (*(void (__fastcall **)(__m128i *, __int64))(*(_QWORD *)a3 + 80LL))(&v19, a3);
    if ( (v21 & 1) == 0 )
    {
      sub_C05100((__int64)&v17, "-fdebug-compilation-dir=", (__int64)&v19);
      v22[0].m128i_i64[0] = (__int64)&v17;
      v23 = 260;
      v16 = sub_10DA6C0(a1, (__int64)v22);
      sub_10DC5D0(a2, v16);
      if ( (_WORD *)v17.m128i_i64[0] != v18 )
        operator delete((void *)v17.m128i_i64[0]);
      if ( (v21 & 1) == 0 && (__int64 *)v19.m128i_i64[0] != &v20 )
        operator delete((void *)v19.m128i_i64[0]);
    }
  }
  v10 = *(const char **)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 8) - 8);
  if ( v10 )
  {
    v11 = strlen(v10);
    v12 = v11;
    if ( v11 )
    {
      v13 = memchr(v10, 61, v11);
      if ( v13 )
      {
        v14 = v13 - v10 + 1;
        if ( v14 > v12 )
          v14 = v12;
        v10 += v14;
      }
    }
  }
  return v10;
}
