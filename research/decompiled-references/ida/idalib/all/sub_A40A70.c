void __fastcall sub_A40A70(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  void *v4; // rax
  __int64 v5; // rdx
  void (__fastcall *v6)(__int64 *, void **); // rcx
  __int64 v7; // rax
  void *v8; // rdx
  __int64 v9; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-118h] BYREF
  __int64 (__fastcall **v11)(); // [rsp+10h] [rbp-108h] BYREF
  __int64 v12; // [rsp+18h] [rbp-100h]
  __int128 v13; // [rsp+20h] [rbp-F8h]
  __int64 v14; // [rsp+30h] [rbp-E8h]
  char v15; // [rsp+38h] [rbp-E0h]
  int v16; // [rsp+3Ch] [rbp-DCh]
  void **p_ptr; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-C0h]
  char v20; // [rsp+68h] [rbp-B0h] BYREF
  __int16 v21; // [rsp+70h] [rbp-A8h]

  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
  {
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v11 = &off_2BEBEE0;
    v13 = 0;
    ptr = &v20;
    LODWORD(v12) = 2;
    v15 = 0;
    v16 = 1;
    v14 = 0;
    sub_227B8B0(&v11, 0, 0, 0);
    v7 = sub_22786B0(a1);
    sub_2278BD0(a2, v7, &v11);
    v8 = p_ptr[1];
    v10[0] = *p_ptr;
    v9 = *a1;
    v10[1] = v8;
    (*(void (__fastcall **)(__int64 *, _QWORD *, _QWORD))(v9 + 216))(a1, v10, 0);
    v11 = (__int64 (__fastcall **)())&unk_2C76288;
    sub_227B7A0(&v11);
    if ( ptr != &v20 )
      free(ptr);
  }
  else
  {
    v2 = *a1;
    v11 = nullptr;
    v12 = 0;
    (*(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)(), _QWORD))(v2 + 216))(a1, &v11, 0);
    v3 = sub_22786B0(a1);
    v4 = (void *)sub_2278CB0(v11, v12, v3, a2);
    if ( v5 )
    {
      v6 = *(void (__fastcall **)(__int64 *, void **))(*a1 + 248);
      v21 = 261;
      ptr = v4;
      si128.m128i_i64[0] = v5;
      v6(a1, &ptr);
    }
  }
}
