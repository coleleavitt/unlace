unsigned __int64 __fastcall sub_1DBD540(
        __int64 a1,
        int a2,
        void (__fastcall *a3)(__int64, __int64 (__fastcall ***)()),
        __int64 a4)
{
  _QWORD *v6; // r14
  size_t v7; // r15
  void *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rax
  void *v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // [rsp+0h] [rbp-128h]
  void *v23; // [rsp+8h] [rbp-120h]
  __int64 (__fastcall **v24)(); // [rsp+10h] [rbp-118h] BYREF
  int v25; // [rsp+18h] [rbp-110h]
  __int128 v26; // [rsp+20h] [rbp-108h]
  __int64 v27; // [rsp+30h] [rbp-F8h]
  char v28; // [rsp+38h] [rbp-F0h]
  int v29; // [rsp+3Ch] [rbp-ECh]
  void **p_ptr; // [rsp+40h] [rbp-E8h]
  void *ptr; // [rsp+50h] [rbp-D8h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-D0h]
  _BYTE v33[192]; // [rsp+68h] [rbp-C0h] BYREF

  v25 = 2;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  ptr = v33;
  v26 = 0;
  v28 = 0;
  v24 = &off_2BEBEE0;
  v29 = 1;
  v27 = 0;
  p_ptr = &ptr;
  sub_227B8B0(&v24, 0, 0, 0);
  a3(a4, &v24);
  v6 = *(_QWORD **)(a1 + 248);
  v7 = n[0];
  v8 = ptr;
  v9 = v6[294];
  v10 = (__int64)(v6 + 294);
  v11 = v6[295];
  v12 = v6[304] + 40LL;
  v6[304] = v12;
  v13 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 && (v14 = v13 + 40, v13 + 40 <= v11) )
  {
    v6[294] = v14;
    v15 = v13 + 40;
  }
  else
  {
    v23 = v8;
    v21 = sub_986170((__int64)(v6 + 294), 40, 40, 3, (__int64)v8, v10);
    v15 = v6[294];
    v11 = v6[295];
    v13 = v21;
    v8 = v23;
    v10 = (__int64)(v6 + 294);
    v12 = v6[304];
    v14 = v15;
  }
  v16 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v6[304] = v7 + v12;
  v17 = v7 + v16;
  if ( v15 && v11 >= v17 )
  {
    v6[294] = v17;
    v18 = (void *)v16;
  }
  else
  {
    v22 = v8;
    v20 = sub_986170(v10, v7, v7, 3, (__int64)v8, v10);
    v8 = v22;
    v18 = (void *)v20;
  }
  if ( v7 )
    v18 = memmove(v18, v8, v7);
  *(_QWORD *)v13 = v18;
  *(_QWORD *)(v13 + 8) = v7;
  *(_DWORD *)(v13 + 16) = a2;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  v24 = (__int64 (__fastcall **)())&unk_2C76288;
  sub_227B7A0(&v24);
  if ( ptr != v33 )
    free(ptr);
  return v13;
}
