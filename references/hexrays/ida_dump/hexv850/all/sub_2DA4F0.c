unsigned __int64 __fastcall sub_2DA4F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0
  __int64 v4; // rax
  __int64 v5; // rbx
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __m128i v17; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+10h] [rbp-88h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+20h] [rbp-78h]
  __m128i v21; // [rsp+28h] [rbp-70h] BYREF
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v26 = __readfsqword(0x28u);
  v18 = off_4B4E50;
  v19 = v2;
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v21 = v3;
  *(_OWORD *)(a1 + 24) = 0;
  v20 = v4;
  v22 = 0;
  copy_tinfo_t(&v22, a1 + 40);
  v5 = a1 - 72;
  v23 = *(_QWORD *)(a1 + 48);
  v24 = *(_DWORD *)(a1 - 72 + 128);
  v18 = off_4B6678;
  v6 = *(_QWORD *)(a2 + 16) == 0;
  v25 = *(_QWORD *)(a1 - 72 + 136);
  if ( v6 )
LABEL_12:
    std::__throw_bad_function_call();
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v18, v5) < 0 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = *(_QWORD *)(v5 + 88);
    v9 = *(_QWORD *)(v5 + 16);
    v10 = _mm_loadu_si128((const __m128i *)(v5 + 24));
    *(_OWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 80) = v7;
    *(_QWORD *)(v5 + 16) = 0;
    if ( v8 )
    {
      *(_QWORD *)(v5 + 96) = 0;
      v17 = v10;
      qfree(v8);
      v10 = _mm_load_si128(&v17);
    }
    *(_QWORD *)(v5 + 88) = v9;
    *(__m128i *)(v5 + 96) = v10;
    copy_tinfo_t(v5 + 112, v5 + 40);
    v11 = *(_QWORD *)(v5 + 48);
    v5 -= 72;
    *(_QWORD *)(v5 + 192) = v11;
    *(_DWORD *)(v5 + 200) = *(_DWORD *)(v5 + 128);
    *(_QWORD *)(v5 + 208) = *(_QWORD *)(v5 + 136);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v12 = *(_QWORD *)(v5 + 88);
  v13 = v5 + 72;
  v14 = v20;
  v15 = _mm_loadu_si128(&v21);
  v21 = 0;
  v20 = 0;
  *(_QWORD *)(v13 + 8) = v19;
  if ( v12 )
  {
    *(_QWORD *)(v13 + 24) = 0;
    v17 = v15;
    qfree(v12);
    v15 = _mm_load_si128(&v17);
  }
  *(_QWORD *)(v13 + 16) = v14;
  *(__m128i *)(v13 + 24) = v15;
  copy_tinfo_t(v13 + 40, &v22);
  v18 = off_4B4E50;
  *(_QWORD *)(v13 + 48) = v23;
  *(_DWORD *)(v13 + 56) = v24;
  *(_QWORD *)(v13 + 64) = v25;
  clear_tinfo_t(&v22);
  if ( v20 )
  {
    v21.m128i_i64[0] = 0;
    qfree(v20);
  }
  return v26 - __readfsqword(0x28u);
}
