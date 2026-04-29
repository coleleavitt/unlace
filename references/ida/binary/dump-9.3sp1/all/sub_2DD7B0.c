unsigned __int64 __fastcall sub_2DD7B0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // r13
  __m128i v9; // xmm0
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __m128i v14; // xmm1
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-78h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-68h] BYREF
  int v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h]
  __m128i v25; // [rsp+28h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v28 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 8);
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_OWORD *)(a1 + 24) = 0;
  v23 = v2;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a2 + 16) == 0;
  v24 = v3;
  v26 = *(_QWORD *)(a1 + 40);
  v22 = off_4E2C38;
  v27 = *(_QWORD *)(a1 + 48);
  if ( v4 )
LABEL_12:
    std::__throw_bad_function_call();
  v5 = a1 - 56;
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v22, v5) < 0 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    v7 = *(_QWORD *)(v5 + 72);
    v8 = *(_QWORD *)(v5 + 16);
    v9 = _mm_loadu_si128((const __m128i *)(v5 + 24));
    *(_OWORD *)(v5 + 24) = 0;
    *(_DWORD *)(v5 + 64) = v6;
    *(_QWORD *)(v5 + 16) = 0;
    if ( v7 )
    {
      *(_QWORD *)(v5 + 80) = 0;
      v21 = v9;
      qfree(v7);
      v9 = _mm_load_si128(&v21);
    }
    v10 = *(_DWORD *)(v5 + 40);
    *(_QWORD *)(v5 + 72) = v8;
    v5 -= 56;
    *(__m128i *)(v5 + 136) = v9;
    *(_DWORD *)(v5 + 152) = v10;
    *(_DWORD *)(v5 + 156) = *(_DWORD *)(v5 + 100);
    *(_QWORD *)(v5 + 160) = *(_QWORD *)(v5 + 104);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v11 = *(_QWORD *)(v5 + 72);
  v12 = v5 + 56;
  v13 = v24;
  v14 = _mm_loadu_si128(&v25);
  v25 = 0;
  v24 = 0;
  *(_DWORD *)(v12 + 8) = v23;
  if ( v11 )
  {
    *(_QWORD *)(v12 + 24) = 0;
    v21 = v14;
    qfree(v11);
    v15 = v26;
    v16 = _mm_load_si128(&v21);
    *(_QWORD *)(v12 + 16) = v13;
    v17 = v24;
    *(_QWORD *)(v12 + 40) = v15;
    v18 = v27;
    *(__m128i *)(v12 + 24) = v16;
    *(_QWORD *)(v12 + 48) = v18;
    v22 = off_4E1370;
    if ( v17 )
    {
      v25.m128i_i64[0] = 0;
      qfree(v17);
    }
  }
  else
  {
    v20 = v26;
    *(_QWORD *)(v12 + 16) = v13;
    *(__m128i *)(v12 + 24) = v14;
    *(_QWORD *)(v12 + 40) = v20;
    *(_QWORD *)(v12 + 48) = v27;
  }
  return v28 - __readfsqword(0x28u);
}
