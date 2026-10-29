void __fastcall sub_11EC410(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rax
  const char **v6; // rax
  char *v7; // rdx
  char *v8; // r14
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64, const char **); // rdx
  __int64 v11; // rax
  unsigned __int8 (__fastcall *v12)(__int64, const char **); // rdx
  __int64 v13; // rax
  unsigned __int8 (__fastcall *v14)(__int64, void **); // rdx
  __int64 v15; // rax
  unsigned __int8 (__fastcall *v16)(__int64, const char **); // rdx
  __int64 v17; // rax
  _QWORD v18[4]; // [rsp+20h] [rbp-198h] BYREF
  __int16 v19; // [rsp+40h] [rbp-178h]
  _QWORD v20[4]; // [rsp+50h] [rbp-168h] BYREF
  __int16 v21; // [rsp+70h] [rbp-148h]
  _QWORD v22[4]; // [rsp+80h] [rbp-138h] BYREF
  __int16 v23; // [rsp+A0h] [rbp-118h]
  const char *v24; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v25; // [rsp+B8h] [rbp-100h]
  __int16 v26; // [rsp+D0h] [rbp-E8h]
  void *ptr; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-D0h]
  _WORD v29[96]; // [rsp+F8h] [rbp-C0h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 608LL))(a1);
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = sub_10DCD30(a2, 0x878u);
    if ( v5 )
    {
      v6 = *(const char ***)(v5 + 48);
      v7 = nullptr;
      v8 = (char *)*v6;
      if ( *v6 )
        v7 = &v8[j__strlen(*v6)];
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      ptr = v29;
      sub_A1FE50(&ptr, v8, v7);
      v26 = 257;
      v22[0] = "libstdc++.dylib";
      v23 = 259;
      v20[0] = "lib";
      v21 = 259;
      v18[0] = "usr";
      v19 = 259;
      sub_228A3B0(&ptr, v18, v20, v22, &v24);
      v9 = sub_112C5D0(a1);
      v10 = *(unsigned __int8 (__fastcall **)(__int64, const char **))(*(_QWORD *)v9 + 96LL);
      v26 = 261;
      v24 = (const char *)ptr;
      v25 = si128.m128i_i64[0];
      if ( !v10(v9, &v24) )
      {
        sub_228A5F0(&ptr, 0);
        v26 = 257;
        v23 = 257;
        v21 = 257;
        v18[0] = "libstdc++.6.dylib";
        v19 = 259;
        sub_228A3B0(&ptr, v18, v20, v22, &v24);
        v15 = sub_112C5D0(a1);
        v16 = *(unsigned __int8 (__fastcall **)(__int64, const char **))(*(_QWORD *)v15 + 96LL);
        v24 = (const char *)ptr;
        v26 = 261;
        v25 = si128.m128i_i64[0];
        if ( v16(v15, &v24) )
        {
          v26 = 261;
          v24 = (const char *)ptr;
          v25 = si128.m128i_i64[0];
          v17 = sub_10DA6C0(a2, (__int64)&v24);
          sub_10DC5D0(a3, v17);
          if ( ptr != v29 )
            free(ptr);
          return;
        }
      }
      if ( ptr != v29 )
        free(ptr);
    }
    v11 = sub_112C5D0(a1);
    v12 = *(unsigned __int8 (__fastcall **)(__int64, const char **))(*(_QWORD *)v11 + 96LL);
    v26 = 259;
    v24 = "/usr/lib/libstdc++.dylib";
    if ( !v12(v11, &v24)
      && (v13 = sub_112C5D0(a1),
          v14 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 96LL),
          ptr = "/usr/lib/libstdc++.6.dylib",
          v29[4] = 259,
          v14(v13, &ptr)) )
    {
      sub_10DC5D0(a3, (__int64)"/usr/lib/libstdc++.6.dylib");
    }
    else
    {
      sub_10DC5D0(a3, (__int64)"-lstdc++");
    }
  }
  else
  {
    sub_10DC5D0(a3, (__int64)"-lc++");
    if ( sub_10DCD30(a2, 0x29Fu) )
      sub_10DC5D0(a3, (__int64)"-lc++experimental");
  }
}
