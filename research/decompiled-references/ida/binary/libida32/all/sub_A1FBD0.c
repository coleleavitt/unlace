__int64 __fastcall sub_A1FBD0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v8; // rax
  unsigned __int8 v9; // bp
  __int64 result; // rax
  __m128i si128; // xmm1
  __int64 v12; // rbp
  size_t v13; // r13
  __int64 v14; // rax
  const void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  void (__fastcall *v18)(__int64 *, __int64 (__fastcall ***)(), _QWORD); // rbp
  unsigned int v19; // eax
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  void (__fastcall *v23)(__int64 *, void **); // rcx
  __int64 v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  void (__fastcall *v27)(__int64 *, void **, _QWORD); // r12
  unsigned int v28; // eax
  char v29; // [rsp+7h] [rbp-131h] BYREF
  __int64 v30; // [rsp+8h] [rbp-130h] BYREF
  void *s1[2]; // [rsp+10h] [rbp-128h] BYREF
  __int64 (__fastcall **v32)(); // [rsp+20h] [rbp-118h] BYREF
  __int64 v33; // [rsp+28h] [rbp-110h]
  __int128 v34; // [rsp+30h] [rbp-108h]
  __int64 v35; // [rsp+40h] [rbp-F8h]
  char v36; // [rsp+48h] [rbp-F0h]
  int v37; // [rsp+4Ch] [rbp-ECh]
  void **p_ptr; // [rsp+50h] [rbp-E8h]
  void *ptr; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v40; // [rsp+68h] [rbp-D0h] BYREF
  _WORD v41[96]; // [rsp+78h] [rbp-C0h] BYREF

  v8 = *a1;
  v29 = 1;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(v8 + 16))(a1);
  if ( v9 )
    v9 = *(_BYTE *)(a3 + 32) ^ 1;
  result = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a3 + 32) )
      goto LABEL_5;
  }
  else if ( !*(_BYTE *)(a3 + 32) )
  {
    v40.m128i_i8[8] = 0;
    si128 = _mm_load_si128((const __m128i *)&v40.m128i_u64[1]);
    *(_QWORD *)a3 = a3 + 16;
    *(_QWORD *)(a3 + 8) = 0;
    *(_BYTE *)(a3 + 32) = 1;
    *(__m128i *)(a3 + 16) = si128;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
             a1,
             a2,
             a5,
             v9,
             &v29,
             &v30);
  if ( !(_BYTE)result )
  {
LABEL_5:
    if ( v29 )
      return sub_9FDD90(a3, a4);
    return result;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1)
    && (v12 = sub_2254E80(a1), *(_DWORD *)(v12 + 32) == 1)
    && (v13 = j__strlen("<none>"),
        v14 = *(_QWORD *)(v12 + 80),
        ptr = *(void **)(v12 + 72),
        v40.m128i_i64[0] = v14,
        v15 = (const void *)sub_A1D7F0((__int64)&ptr, 32),
        v13 == v16)
    && (!v13 || !memcmp(v15, "<none>", v13)) )
  {
    sub_9FDD90(a3, a4);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
  {
    p_ptr = &ptr;
    v40 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v32 = &off_2BC1F40;
    v34 = 0;
    ptr = v41;
    LODWORD(v33) = 2;
    v36 = 0;
    v37 = 1;
    v35 = 0;
    sub_2257B70(&v32, 0, 0, 0);
    v24 = sub_2254970(a1);
    sub_2255010(a3, v24, &v32);
    v25 = p_ptr[1];
    s1[0] = *p_ptr;
    v26 = *a1;
    s1[1] = v25;
    v27 = *(void (__fastcall **)(__int64 *, void **, _QWORD))(v26 + 216);
    v28 = sub_A1E000((_BYTE *)s1[0], (size_t)v25, 1);
    v27(a1, s1, v28);
    v32 = (__int64 (__fastcall **)())&unk_2C4C288;
    sub_2257A60(&v32);
    if ( ptr != v41 )
      free(ptr);
  }
  else
  {
    v17 = *a1;
    v32 = nullptr;
    v33 = 0;
    v18 = *(void (__fastcall **)(__int64 *, __int64 (__fastcall ***)(), _QWORD))(v17 + 216);
    v19 = sub_A1E000(nullptr, 0, 1);
    v18(a1, &v32, v19);
    v20 = sub_2254970(a1);
    v21 = (void *)sub_2255030(v32, v33, v20, a3);
    if ( v22 )
    {
      v23 = *(void (__fastcall **)(__int64 *, void **))(*a1 + 248);
      v41[4] = 261;
      ptr = v21;
      v40.m128i_i64[0] = v22;
      v23(a1, &ptr);
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v30);
}

