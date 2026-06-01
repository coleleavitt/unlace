__int64 __fastcall sub_22675C0(__int64 a1, const char **a2)
{
  __int64 v3; // rcx
  _BYTE *v4; // rdx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, void **); // rax
  unsigned int v7; // ebp
  _BYTE *v8; // r12
  __int64 v9; // rax
  int v11; // edx
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  _BYTE *v14; // rsi
  _BYTE *v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, void **); // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, void **); // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, void **); // rax
  void *v23; // [rsp+0h] [rbp-3F8h] BYREF
  __int64 v24; // [rsp+8h] [rbp-3F0h]
  _BYTE v25[16]; // [rsp+10h] [rbp-3E8h] BYREF
  __int16 v26; // [rsp+20h] [rbp-3D8h]
  void *ptr; // [rsp+30h] [rbp-3C8h] BYREF
  __m128i si128; // [rsp+38h] [rbp-3C0h]
  _BYTE v29[264]; // [rsp+48h] [rbp-3B0h] BYREF
  void *v30; // [rsp+150h] [rbp-2A8h] BYREF
  __m128i v31; // [rsp+158h] [rbp-2A0h]
  _WORD v32[132]; // [rsp+168h] [rbp-290h] BYREF
  void *v33; // [rsp+270h] [rbp-188h] BYREF
  __int64 v34; // [rsp+278h] [rbp-180h]
  __int16 v35; // [rsp+290h] [rbp-168h]
  __int64 v36; // [rsp+380h] [rbp-78h]
  _BYTE *v37; // [rsp+388h] [rbp-70h]
  __int64 v38; // [rsp+390h] [rbp-68h]
  char v39; // [rsp+3B0h] [rbp-48h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  ptr = v29;
  sub_22538C0(a2, (__int64)&ptr);
  if ( (*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 112LL))(a1, &ptr) )
  {
    v8 = ptr;
    v7 = 0;
    goto LABEL_8;
  }
  v3 = si128.m128i_i64[0];
  v4 = ptr;
  if ( *(_DWORD *)(a1 + 120) == 1 )
  {
    v5 = *(_QWORD *)(a1 + 72);
    v6 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v5 + 96LL);
    v33 = ptr;
    v35 = 261;
    v34 = si128.m128i_i64[0];
    v7 = v6(v5, &v33);
    if ( (_BYTE)v7 )
      goto LABEL_26;
    v4 = ptr;
    v3 = si128.m128i_i64[0];
  }
  sub_22668A0((__int64)&v33, a1, v4, v3);
  v7 = v39 & 1;
  if ( (v39 & 1) == 0 )
  {
    v11 = *(_DWORD *)(v36 + 8);
    if ( v11 == 1 )
    {
      v12 = v37;
      v13 = v38;
    }
    else
    {
      if ( v11 != 2 )
      {
        v7 = 1;
        goto LABEL_25;
      }
      v12 = *(_BYTE **)(v36 + 48);
      v13 = *(_QWORD *)(v36 + 56);
    }
    if ( v12 )
    {
      v23 = v25;
      sub_2259A00(&v23, v12, (__int64)&v12[v13]);
      v14 = v23;
      v15 = (char *)v23 + v24;
    }
    else
    {
      v25[0] = 0;
      v24 = 0;
      v15 = v25;
      v23 = v25;
      v14 = v25;
    }
    v30 = v32;
    v31 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
    sub_A1FE50(&v30, v14, v15);
    if ( v23 != v25 )
      operator delete(v23);
    if ( !(*(unsigned int (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 112LL))(a1, &v30) )
    {
      v16 = *(_QWORD *)(a1 + 72);
      v17 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 96LL);
      v23 = v30;
      v26 = 261;
      v24 = v31.m128i_i64[0];
      v18 = v17(v16, &v23);
      if ( (_BYTE)v18 )
      {
        v7 = v18;
      }
      else if ( !*(_DWORD *)(a1 + 120) )
      {
        v21 = *(_QWORD *)(a1 + 72);
        v22 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v21 + 96LL);
        v26 = 261;
        v23 = ptr;
        v24 = si128.m128i_i64[0];
        v7 = v22(v21, &v23);
      }
    }
    if ( v30 != v32 )
      free(v30);
    goto LABEL_24;
  }
  v8 = ptr;
  v7 = 0;
  if ( !*(_DWORD *)(a1 + 120) )
  {
    v9 = std::_V2::generic_category((std::_V2 *)&v33);
    LOBYTE(v7) = (_DWORD)v33 == 2 && v34 == v9;
    if ( (_BYTE)v7 )
    {
      v19 = *(_QWORD *)(a1 + 72);
      v20 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v19 + 96LL);
      v30 = v8;
      v32[4] = 261;
      v31.m128i_i64[0] = si128.m128i_i64[0];
      v7 = v20(v19, &v30);
LABEL_24:
      if ( (v39 & 1) == 0 )
LABEL_25:
        sub_225BE70((__int64)&v33);
LABEL_26:
      v8 = ptr;
    }
  }
LABEL_8:
  if ( v8 != v29 )
    free(v8);
  return v7;
}
