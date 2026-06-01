void __fastcall sub_110A970(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  void *v3; // rdx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64 *, void **, _QWORD); // rbp
  unsigned int v6; // eax
  __int64 v7; // rax
  void (__fastcall *v8)(__int64 *, __int64 (__fastcall ***)(), _QWORD); // r12
  unsigned int v9; // eax
  __int64 v10; // rax
  void *v11; // rax
  __int64 v12; // rdx
  void (__fastcall *v13)(__int64 *, void **); // rcx
  void *s1[2]; // [rsp+0h] [rbp-118h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-108h] BYREF
  __int64 v16; // [rsp+18h] [rbp-100h]
  __int128 v17; // [rsp+20h] [rbp-F8h]
  __int64 v18; // [rsp+30h] [rbp-E8h]
  char v19; // [rsp+38h] [rbp-E0h]
  int v20; // [rsp+3Ch] [rbp-DCh]
  void **p_ptr; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  char v24; // [rsp+68h] [rbp-B0h] BYREF
  __int16 v25; // [rsp+70h] [rbp-A8h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
  {
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v15 = &off_2BEBEE0;
    v17 = 0;
    ptr = &v24;
    LODWORD(v16) = 2;
    v19 = 0;
    v20 = 1;
    v18 = 0;
    sub_227B8B0(&v15, 0, 0, 0);
    v2 = sub_22786B0(a1);
    sub_2278D50(a2, v2, &v15);
    v3 = p_ptr[1];
    s1[0] = *p_ptr;
    v4 = *a1;
    s1[1] = v3;
    v5 = *(void (__fastcall **)(__int64 *, void **, _QWORD))(v4 + 216);
    v6 = sub_A41D40((_BYTE *)s1[0], (size_t)v3, 1);
    v5(a1, s1, v6);
    v15 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v15);
    if ( ptr != &v24 )
      free(ptr);
  }
  else
  {
    v7 = *a1;
    v15 = nullptr;
    v16 = 0;
    v8 = *(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)(), _QWORD))(v7 + 216);
    v9 = sub_A41D40(nullptr, 0, 1);
    v8(a1, &v15, v9);
    v10 = sub_22786B0(a1);
    v11 = (void *)sub_2278D70(v15, v16, v10, a2);
    if ( v12 )
    {
      v13 = *(void (__fastcall **)(__int64 *, void **))(*a1 + 248);
      v25 = 261;
      ptr = v11;
      si128.m128i_i64[0] = v12;
      v13(a1, &ptr);
    }
  }
}
