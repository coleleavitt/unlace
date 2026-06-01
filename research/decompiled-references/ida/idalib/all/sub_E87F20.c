void __fastcall sub_E87F20(__int64 *a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // r15
  char v8; // al
  __int64 v9; // rax
  _QWORD *v10; // r13
  __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r10
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  _BYTE *v21; // rsi
  size_t v22; // rdx
  void *v23; // rdi
  __int64 v24; // r9
  _BYTE *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  _BYTE *v28; // rdx
  size_t v29; // rcx
  unsigned __int64 v30; // [rsp+0h] [rbp-398h]
  __int64 v32; // [rsp+10h] [rbp-388h]
  __int64 v33; // [rsp+10h] [rbp-388h]
  __int64 v34; // [rsp+18h] [rbp-380h]
  __int64 v35; // [rsp+18h] [rbp-380h]
  void *v36[2]; // [rsp+20h] [rbp-378h] BYREF
  __int64 v37; // [rsp+30h] [rbp-368h] BYREF
  __m128i v38; // [rsp+40h] [rbp-358h] BYREF
  __m128i v39; // [rsp+50h] [rbp-348h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+60h] [rbp-338h] BYREF
  int v41; // [rsp+68h] [rbp-330h]
  __int128 v42; // [rsp+70h] [rbp-328h] BYREF
  __int64 v43; // [rsp+80h] [rbp-318h]
  char v44; // [rsp+88h] [rbp-310h]
  int v45; // [rsp+8Ch] [rbp-30Ch]
  void **p_ptr; // [rsp+90h] [rbp-308h]
  void *ptr; // [rsp+A0h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-2F0h] BYREF
  _BYTE v49[72]; // [rsp+B8h] [rbp-2E0h] BYREF
  __m128i v50; // [rsp+100h] [rbp-298h] BYREF
  _OWORD v51[40]; // [rsp+110h] [rbp-288h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 != 13 )
    v7 = 0;
  if ( *(_BYTE *)(v6 + 16) != 10 )
  {
    if ( v8 == 10 )
      v6 = sub_F63050(v6, a2, 0, a4);
    else
      v6 = 0;
  }
  v9 = sub_A97D20(*(_QWORD *)(*a1 + 8), a2);
  v10 = (_QWORD *)a1[1];
  v30 = v9;
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 80LL))(v10) + v10[4] - v10[2];
  if ( *(_BYTE *)(a2 + 16) == 58
    || (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 17448LL) + 248LL) - 37) > 1
    || !v7 )
  {
    goto LABEL_12;
  }
  if ( v30 == 64 )
  {
    if ( ((*(_WORD *)(v7 + 18) >> 3) & 0x1FF) == 0x1C6 )
    {
      v16 = j__strlen("__m64");
      sub_E7C870((__int64)a1, 2, "__m64", v16, 0, 0);
    }
    goto LABEL_12;
  }
  if ( v30 <= 0x7F )
    goto LABEL_12;
  v12 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
  if ( v12 == 481 )
  {
    sub_E78EA0(&ptr, v30);
    sub_E7ED70(&v50, "__m", &ptr);
    sub_E7C870((__int64)a1, 2, v50.m128i_i64[0], v50.m128i_u64[1], 0, 0);
    if ( (_OWORD *)v50.m128i_i64[0] != v51 )
      operator delete((void *)v50.m128i_i64[0]);
    v23 = ptr;
    if ( ptr != &si128.m128i_u64[1] )
      goto LABEL_38;
    goto LABEL_12;
  }
  if ( v12 == 454 )
  {
    sub_E78EA0(&v40, v30);
    sub_E7ED70((__m128i *)&ptr, "__m", &v40);
    v24 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] != 0x7FFFFFFFFFFFFFFFLL )
    {
      v25 = ptr;
      v26 = si128.m128i_i64[0] + 1;
      if ( ptr == &si128.m128i_u64[1] )
        v27 = 15;
      else
        v27 = si128.m128i_u64[1];
      if ( v26 > v27 )
      {
        v34 = si128.m128i_i64[0] + 1;
        v32 = si128.m128i_i64[0];
        sub_998B30((__int64)&ptr, si128.m128i_u64[0], 0, nullptr, 1u);
        v26 = v34;
        v24 = v32;
        v25 = ptr;
      }
      v25[v24] = 105;
      si128.m128i_i64[0] = v26;
      *((_BYTE *)ptr + v24 + 1) = 0;
      v28 = ptr;
      v50.m128i_i64[0] = (__int64)v51;
      if ( ptr == &si128.m128i_u64[1] )
      {
        v28 = v51;
        v51[0] = _mm_load_si128((const __m128i *)&si128.m128i_u64[1]);
      }
      else
      {
        v50.m128i_i64[0] = (__int64)ptr;
        *(_QWORD *)&v51[0] = si128.m128i_i64[1];
      }
      v29 = si128.m128i_i64[0];
      ptr = &si128.m128i_u64[1];
      si128.m128i_i64[0] = 0;
      v50.m128i_i64[1] = v29;
      si128.m128i_i8[8] = 0;
      sub_E7C870((__int64)a1, 2, v28, v29, 0, 0);
      if ( (_OWORD *)v50.m128i_i64[0] != v51 )
        operator delete((void *)v50.m128i_i64[0]);
      if ( ptr != &si128.m128i_u64[1] )
        operator delete(ptr);
      v23 = v40;
      if ( v40 != (__int64 (__fastcall **)())&v42 )
        goto LABEL_38;
      goto LABEL_12;
    }
LABEL_60:
    std::__throw_length_error("basic_string::_M_replace_aux");
  }
  if ( v12 != 482 )
    goto LABEL_12;
  sub_E78EA0(v36, v30);
  sub_E7ED70(&v38, "__m", v36);
  v17 = v38.m128i_i64[1];
  if ( v38.m128i_i64[1] == 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_60;
  v18 = v38.m128i_i64[0];
  v19 = v38.m128i_i64[1] + 1;
  if ( (__m128i *)v38.m128i_i64[0] == &v39 )
    v20 = 15;
  else
    v20 = v39.m128i_i64[0];
  if ( v19 > v20 )
  {
    v35 = v38.m128i_i64[1] + 1;
    v33 = v38.m128i_i64[1];
    sub_998B30((__int64)&v38, v38.m128i_u64[1], 0, nullptr, 1u);
    v18 = v38.m128i_i64[0];
    v19 = v35;
    v17 = v33;
  }
  *(_BYTE *)(v18 + v17) = 100;
  v38.m128i_i64[1] = v19;
  *(_BYTE *)(v38.m128i_i64[0] + v17 + 1) = 0;
  v21 = (_BYTE *)v38.m128i_i64[0];
  v50.m128i_i64[0] = (__int64)v51;
  if ( (__m128i *)v38.m128i_i64[0] == &v39 )
  {
    v21 = v51;
    v51[0] = _mm_load_si128(&v39);
  }
  else
  {
    v50.m128i_i64[0] = v38.m128i_i64[0];
    *(_QWORD *)&v51[0] = v39.m128i_i64[0];
  }
  v22 = v38.m128i_u64[1];
  v38.m128i_i64[0] = (__int64)&v39;
  v50.m128i_i64[1] = v38.m128i_i64[1];
  v38.m128i_i64[1] = 0;
  v39.m128i_i8[0] = 0;
  sub_E7C970((__int64)a1, v21, v22, 0, 0);
  if ( (_OWORD *)v50.m128i_i64[0] != v51 )
    operator delete((void *)v50.m128i_i64[0]);
  if ( (__m128i *)v38.m128i_i64[0] != &v39 )
    operator delete((void *)v38.m128i_i64[0]);
  v23 = v36[0];
  if ( v36[0] != &v37 )
LABEL_38:
    operator delete(v23);
LABEL_12:
  v13 = (_QWORD *)a1[1];
  if ( v11 == (*(__int64 (__fastcall **)(_QWORD *))(*v13 + 80LL))(v13) + v13[4] - v13[2] )
  {
    v41 = 2;
    ptr = v49;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
    v42 = 0;
    v40 = &off_2BEBEE0;
    v44 = 0;
    v45 = 1;
    v43 = 0;
    p_ptr = &ptr;
    sub_227B8B0(&v40, 0, 0, 0);
    sub_E78640((__int64)&v50, *a1, (__int64)&v40);
    sub_995540(v14, "?$");
    sub_E7C4B0((__int64)&v50, "__vector", 8u);
    if ( !v7 )
      v7 = v6;
    sub_E845E0(v50.m128i_i64, v7 & 0xFFFFFFFFFFFFFFF0LL, a3, 2);
    v15 = *(unsigned int *)(a2 + 20);
    v38.m128i_i32[2] = 64;
    v38.m128i_i64[0] = v15;
    v38.m128i_i8[12] = 1;
    sub_E85820(v50.m128i_i64, (__int64)&v38, 0, 0);
    if ( v38.m128i_i32[2] > 0x40u && v38.m128i_i64[0] )
      operator delete[]((void *)v38.m128i_i64[0]);
    v38.m128i_i64[1] = 7;
    v38.m128i_i64[0] = (__int64)"__clang";
    sub_E7C870((__int64)a1, 2, ptr, si128.m128i_u64[0], (__int64)&v38, 1);
    sub_E7AB30((__int64)&v50);
    v40 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v40);
    if ( ptr != v49 )
      free(ptr);
  }
}
