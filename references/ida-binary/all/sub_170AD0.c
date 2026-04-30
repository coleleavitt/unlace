unsigned __int64 __fastcall ida_licmgr_listener_t__::vfunc_3(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        unsigned __int8 *a11,
        void **a12)
{
  int v13; // r9d
  const char *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // r8
  const char *v21; // rdx
  __int64 v22; // rdx
  _DWORD *v24; // rax
  __int64 v25; // [rsp-8h] [rbp-48h]
  _DWORD *v26; // [rsp+0h] [rbp-40h] BYREF
  __int128 v27; // [rsp+8h] [rbp-38h]
  unsigned __int64 v28; // [rsp+18h] [rbp-28h]

  v13 = *((_DWORD *)a11 + 2);
  v28 = __readfsqword(0x28u);
  v26 = nullptr;
  v27 = 0;
  if ( v13 )
  {
    v15 = "%02X-%02X%02X-%02X%02X-%02X";
    sub_169A50((__int64 *)&v26, (__int64)"%02X-%02X%02X-%02X%02X-%02X", *a11, a11[1], a11[2], a11[3], a11[4], a11[5]);
    v20 = v25;
  }
  else
  {
    v15 = nullptr;
    v24 = (_DWORD *)qvector_reserve(&v26, 0, 8, 1);
    v26 = v24;
    *(_QWORD *)&v27 = 8;
    *v24 = 1886217532;
    *(_DWORD *)((char *)v24 + 3) = 1048147056;
    *((_BYTE *)v26 + 7) = 0;
  }
  if ( (*(&debug + 1) & 2) != 0 )
  {
    v21 = &s1;
    if ( (_QWORD)v27 )
      v21 = (const char *)v26;
    v15 = (const char *)&unk_5C2F25;
    if ( a12 )
      v15 = "(borrowed) ";
    sub_16B860(
      (int)"Switched to %slicense: %s\n",
      (__int64)v15,
      (__int64)v21,
      v16,
      v20,
      v17,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v18,
      v19,
      a8,
      a9,
      (char)v26);
  }
  v22 = *((unsigned int *)a11 + 2);
  if ( (_DWORD)v22 )
  {
    v15 = (const char *)a11;
    sub_16FB60(a1, a11, a12, 0, (__m128)0LL, a3, a4, a5, *(double *)v18.m128_u64, *(double *)v19.m128_u64, a8, a9);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26, v15, v22, v16, v20);
  }
  return v28 - __readfsqword(0x28u);
}
