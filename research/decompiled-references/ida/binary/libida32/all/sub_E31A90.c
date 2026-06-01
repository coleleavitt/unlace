void __fastcall sub_E31A90(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // rdi
  double v7[2]; // [rsp+0h] [rbp-148h] BYREF
  __m128 v8; // [rsp+10h] [rbp-138h] BYREF
  __int16 v9; // [rsp+20h] [rbp-128h]
  char v10; // [rsp+22h] [rbp-126h]
  __int64 v11; // [rsp+28h] [rbp-120h]
  __m128 si128; // [rsp+30h] [rbp-118h]
  void **v13; // [rsp+40h] [rbp-108h] BYREF
  void *v14; // [rsp+48h] [rbp-100h] BYREF
  __int64 v15; // [rsp+50h] [rbp-F8h]
  _BYTE v16[64]; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+98h] [rbp-B0h]
  __int64 v18; // [rsp+A0h] [rbp-A8h]
  _BYTE v19[64]; // [rsp+A8h] [rbp-A0h] BYREF
  void ***v20; // [rsp+E8h] [rbp-60h]
  __int64 *v21; // [rsp+F0h] [rbp-58h]
  __int64 v22; // [rsp+F8h] [rbp-50h]
  __int64 v23; // [rsp+100h] [rbp-48h]
  int v24; // [rsp+108h] [rbp-40h]
  __int64 v25; // [rsp+110h] [rbp-38h]
  __int64 v26; // [rsp+118h] [rbp-30h]
  int v27; // [rsp+120h] [rbp-28h]

  *(_QWORD *)&v7[0] = a3;
  *(_QWORD *)&v7[1] = a1;
  v9 = 0;
  v3 = _mm_loadh_ps(v7);
  v10 = 0;
  v8 = v3;
  v4 = sub_B53DB0(a2);
  v5 = a2;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 48);
  v11 = v5;
  v14 = v16;
  v15 = 0x400000000LL;
  v18 = 0x400000000LL;
  ptr = v19;
  v20 = &v13;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_2384EC0);
  v13 = &v14;
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  sub_E2E4C0((__int64)&v8, a2 & 0xFFFFFFFFFFFFFFF8LL | 2, 0, si128);
  operator delete();
  operator delete();
  v6 = v21;
  if ( v21 )
  {
    sub_E16EB0(
      v21,
      (char *)(*v21 + 16LL * *((unsigned int *)v21 + 2)),
      (char *)v14,
      (char *)v14 + 16 * (unsigned int)v15);
    sub_E16EB0(
      v21 + 10,
      (char *)(v21[10] + 16LL * *((unsigned int *)v21 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v18);
    v6 = v21;
  }
  *v20 = (void **)v6;
  if ( ptr != v19 )
    free(ptr);
  if ( v14 != v16 )
    free(v14);
}

