void __fastcall sub_1198340(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 (__fastcall *v10)(__int64, void **); // r14
  size_t v11; // rax
  char v12; // r13
  _BYTE *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  _BYTE *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 v19; // rax
  void (__fastcall *v20)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD); // [rsp+0h] [rbp-100h]
  __int64 v21; // [rsp+8h] [rbp-F8h]
  __int64 v22; // [rsp+8h] [rbp-F8h]
  __int64 v23; // [rsp+8h] [rbp-F8h]
  __int64 v24; // [rsp+8h] [rbp-F8h]
  __int64 v25; // [rsp+10h] [rbp-F0h]
  __int64 v26; // [rsp+10h] [rbp-F0h]
  __int64 v27; // [rsp+10h] [rbp-F0h]
  void *v28[2]; // [rsp+18h] [rbp-E8h] BYREF
  _BYTE v29[16]; // [rsp+28h] [rbp-D8h] BYREF
  __m128i v30; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v31[16]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v32; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v33[16]; // [rsp+68h] [rbp-98h] BYREF
  __m128i v34; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[16]; // [rsp+88h] [rbp-78h] BYREF
  void *v36[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v38; // [rsp+B8h] [rbp-48h]

  if ( ((*(_DWORD *)(a2 + 48) - 25) & 0xFFFFFFEE) == 0 )
  {
    sub_1131210((__int64)v36, a2);
    if ( (_BYTE)v38 )
    {
      if ( v36[0] != &v37 )
        operator delete(v36[0]);
      v3 = *(_BYTE **)(a2 + 16);
      v4 = *(_QWORD *)(a2 + 24);
      v21 = *(_QWORD *)a1;
      v25 = *(_QWORD *)(a1 + 8);
      v28[0] = v29;
      sub_1189220(v28, v3, (__int64)&v3[v4]);
      sub_E7ED70(&v30, "--device-linker=", v28);
      sub_10E1980(&v32, &v30, "=");
      sub_10E1980(&v34, &v32, "-lc");
      v38 = 260;
      v36[0] = &v34;
      v5 = sub_10DA6C0(v25, (__int64)v36);
      sub_10DC5D0(v21, v5);
      if ( (_BYTE *)v34.m128i_i64[0] != v35 )
        operator delete((void *)v34.m128i_i64[0]);
      if ( (_BYTE *)v32.m128i_i64[0] != v33 )
        operator delete((void *)v32.m128i_i64[0]);
      if ( (_BYTE *)v30.m128i_i64[0] != v31 )
        operator delete((void *)v30.m128i_i64[0]);
      if ( v28[0] != v29 )
        operator delete(v28[0]);
      v6 = *(_BYTE **)(a2 + 16);
      v7 = *(_QWORD *)(a2 + 24);
      v22 = *(_QWORD *)a1;
      v26 = *(_QWORD *)(a1 + 8);
      v28[0] = v29;
      sub_1189220(v28, v6, (__int64)&v6[v7]);
      sub_E7ED70(&v30, "--device-linker=", v28);
      sub_10E1980(&v32, &v30, "=");
      sub_10E1980(&v34, &v32, "-lm");
      v38 = 260;
      v36[0] = &v34;
      v8 = sub_10DA6C0(v26, (__int64)v36);
      sub_10DC5D0(v22, v8);
      if ( (_BYTE *)v34.m128i_i64[0] != v35 )
        operator delete((void *)v34.m128i_i64[0]);
      if ( (_BYTE *)v32.m128i_i64[0] != v33 )
        operator delete((void *)v32.m128i_i64[0]);
      if ( (_BYTE *)v30.m128i_i64[0] != v31 )
        operator delete((void *)v30.m128i_i64[0]);
      if ( v28[0] != v29 )
        operator delete(v28[0]);
    }
    v9 = sub_112C5D0(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
    v10 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v9 + 96LL);
    v20 = *(void (__fastcall **)(__m128i *, __int64, _QWORD, char *, size_t, __int64, _QWORD))(*(_QWORD *)a2 + 304LL);
    v11 = j__strlen("builtins");
    v20(&v34, a2, *(_QWORD *)(a1 + 8), "builtins", v11, 1, 0);
    v38 = 260;
    v36[0] = &v34;
    v12 = v10(v9, v36);
    if ( (_BYTE *)v34.m128i_i64[0] != v35 )
      operator delete((void *)v34.m128i_i64[0]);
    if ( v12 )
    {
      v13 = *(_BYTE **)(a2 + 16);
      v14 = *(_QWORD *)(a2 + 24);
      v23 = *(_QWORD *)a1;
      v27 = *(_QWORD *)(a1 + 8);
      v28[0] = v29;
      sub_1189220(v28, v13, (__int64)&v13[v14]);
      sub_E7ED70(&v30, "--device-linker=", v28);
      sub_10E1980(&v32, &v30, "=");
      sub_10E1980(&v34, &v32, "-lclang_rt.builtins");
      v38 = 260;
      v36[0] = &v34;
      v15 = sub_10DA6C0(v27, (__int64)v36);
      sub_10DC5D0(v23, v15);
      if ( (_BYTE *)v34.m128i_i64[0] != v35 )
        operator delete((void *)v34.m128i_i64[0]);
      if ( (_BYTE *)v32.m128i_i64[0] != v33 )
        operator delete((void *)v32.m128i_i64[0]);
      if ( (_BYTE *)v30.m128i_i64[0] != v31 )
        operator delete((void *)v30.m128i_i64[0]);
      if ( v28[0] != v29 )
        operator delete(v28[0]);
      if ( *(_DWORD *)(**(_QWORD **)(a1 + 24) + 16LL) == 4 )
      {
        v16 = *(_BYTE **)(a2 + 16);
        v17 = *(_QWORD *)(a2 + 24);
        v18 = *(_QWORD *)(a1 + 8);
        v24 = *(_QWORD *)a1;
        v28[0] = v29;
        sub_1189220(v28, v16, (__int64)&v16[v17]);
        sub_E7ED70(&v30, "--device-linker=", v28);
        sub_10E1980(&v32, &v30, "=");
        sub_10E1980(&v34, &v32, "-lflang_rt.runtime");
        v38 = 260;
        v36[0] = &v34;
        v19 = sub_10DA6C0(v18, (__int64)v36);
        sub_10DC5D0(v24, v19);
        if ( (_BYTE *)v34.m128i_i64[0] != v35 )
          operator delete((void *)v34.m128i_i64[0]);
        if ( (_BYTE *)v32.m128i_i64[0] != v33 )
          operator delete((void *)v32.m128i_i64[0]);
        if ( (_BYTE *)v30.m128i_i64[0] != v31 )
          operator delete((void *)v30.m128i_i64[0]);
        if ( v28[0] != v29 )
          operator delete(v28[0]);
      }
    }
  }
}
