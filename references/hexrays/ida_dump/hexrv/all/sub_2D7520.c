unsigned __int64 __fastcall sub_2D7520(__int64 a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rax
  bool v4; // zf
  __int64 v5; // rax
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // r13
  __m128i v10; // xmm0
  char v11; // al
  __m128i v12; // xmm0
  int v13; // eax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbp
  __m128i v18; // xmm1
  char v19; // al
  __m128i v20; // xmm1
  __m128i v21; // xmm0
  __int64 v22; // rdi
  int v23; // eax
  __int64 v24; // rax
  char v26; // al
  __m128i v27; // xmm0
  int v28; // eax
  __m128i v29; // [rsp+0h] [rbp-98h] BYREF
  __int64 (__fastcall **v30)(); // [rsp+10h] [rbp-88h] BYREF
  __m128i v31; // [rsp+18h] [rbp-80h] BYREF
  __int64 v32; // [rsp+28h] [rbp-70h]
  __m128i v33; // [rsp+30h] [rbp-68h] BYREF
  char v34; // [rsp+40h] [rbp-58h]
  __m128i v35; // [rsp+48h] [rbp-50h] BYREF
  int v36; // [rsp+58h] [rbp-40h]
  __int64 v37; // [rsp+60h] [rbp-38h]
  unsigned __int64 v38; // [rsp+68h] [rbp-30h]

  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v38 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  v31 = v2;
  v32 = v3;
  LOBYTE(v3) = *(_BYTE *)(a1 + 48);
  v33 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v34 = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 16) == 0;
  v36 = v3;
  v30 = off_4B5600;
  v5 = *(_QWORD *)(a1 + 80);
  v35 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v37 = v5;
  if ( v4 )
LABEL_12:
    std::__throw_bad_function_call();
  v6 = a1 - 88;
  while ( (*(int (__fastcall **)(__int64, __int64 (__fastcall ***)(), __int64))(a2 + 24))(a2, &v30, v6) < 0 )
  {
    v7 = _mm_loadu_si128((const __m128i *)(v6 + 8));
    v8 = *(_QWORD *)(v6 + 112);
    v9 = *(_QWORD *)(v6 + 24);
    *(_QWORD *)(v6 + 24) = 0;
    *(__m128i *)(v6 + 96) = v7;
    v10 = _mm_loadu_si128((const __m128i *)(v6 + 32));
    *(_OWORD *)(v6 + 32) = 0;
    if ( v8 )
    {
      *(_QWORD *)(v6 + 120) = 0;
      v29 = v10;
      qfree(v8);
      v10 = _mm_load_si128(&v29);
    }
    v11 = *(_BYTE *)(v6 + 48);
    *(__m128i *)(v6 + 120) = v10;
    v12 = _mm_loadu_si128((const __m128i *)(v6 + 56));
    v6 -= 88;
    *(_QWORD *)(v6 + 200) = v9;
    *(_BYTE *)(v6 + 224) = v11;
    v13 = *(_DWORD *)(v6 + 160);
    *(__m128i *)(v6 + 232) = v12;
    *(_DWORD *)(v6 + 248) = v13;
    *(_QWORD *)(v6 + 256) = *(_QWORD *)(v6 + 168);
    if ( !*(_QWORD *)(a2 + 16) )
      goto LABEL_12;
  }
  v14 = _mm_loadu_si128(&v31);
  v15 = *(_QWORD *)(v6 + 112);
  v16 = v6 + 88;
  v17 = v32;
  v18 = _mm_load_si128(&v33);
  v32 = 0;
  *(__m128i *)(v16 + 8) = v14;
  v33 = 0;
  if ( v15 )
  {
    *(_QWORD *)(v16 + 32) = 0;
    v29 = v18;
    qfree(v15);
    v19 = v34;
    v20 = _mm_load_si128(&v29);
    *(_QWORD *)(v16 + 24) = v17;
    v21 = _mm_loadu_si128(&v35);
    v22 = v32;
    *(_BYTE *)(v16 + 48) = v19;
    v23 = v36;
    *(__m128i *)(v16 + 32) = v20;
    *(_DWORD *)(v16 + 72) = v23;
    v24 = v37;
    *(__m128i *)(v16 + 56) = v21;
    *(_QWORD *)(v16 + 80) = v24;
    v30 = off_4B3C98;
    if ( v22 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v22);
    }
  }
  else
  {
    v26 = v34;
    v27 = _mm_loadu_si128(&v35);
    *(_QWORD *)(v16 + 24) = v17;
    *(__m128i *)(v16 + 32) = v18;
    *(_BYTE *)(v16 + 48) = v26;
    v28 = v36;
    *(__m128i *)(v16 + 56) = v27;
    *(_DWORD *)(v16 + 72) = v28;
    *(_QWORD *)(v16 + 80) = v37;
  }
  return v38 - __readfsqword(0x28u);
}
