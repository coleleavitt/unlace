const char *__fastcall sub_10B6110(__int64 **a1, __int64 a2, char *a3, unsigned __int64 a4, __int64 a5, char a6)
{
  void *v10; // rax
  size_t v11; // rdx
  int v12; // eax
  int v13; // edx
  unsigned int v14; // edx
  const char *v15; // r14
  const char *v16; // rax
  size_t v17; // rcx
  char *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 v21; // rax
  const char *v23; // rsi
  char *v24; // rax
  size_t v25; // rdx
  char *v26; // rbx
  const char *v27; // rax
  size_t v28; // [rsp+8h] [rbp-D0h]
  size_t v29; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+18h] [rbp-C0h]
  _BYTE *v32[2]; // [rsp+30h] [rbp-A8h] BYREF
  char v33; // [rsp+40h] [rbp-98h]
  void *v34[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v35; // [rsp+60h] [rbp-78h] BYREF

  v10 = (void *)sub_1005B00(a5, (__int64)a3, a4);
  v12 = sub_FD3F20(v10, v11);
  v13 = *(_DWORD *)(a5 + 32);
  if ( (unsigned int)(v13 - 41) <= 1 )
  {
    v14 = v12 - 2;
    if ( (unsigned int)(v12 - 2) <= 0x1A )
      goto LABEL_3;
    if ( !a6 )
      return nullptr;
    sub_FA3370((__int64)v34, **a1, 0, 445);
    v23 = "CUDA";
LABEL_26:
    sub_10B4AF0((unsigned __int8 **)v34, (__int64)v23);
    sub_AC84E0((unsigned __int8 **)v34, a3, a4);
    sub_AC6300((__int64)v34);
    return nullptr;
  }
  if ( v13 == 25 || v13 == 26 )
  {
    if ( (unsigned int)(v12 - 29) <= 0x34 )
    {
LABEL_5:
      ptr = nullptr;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
      sub_1007410((__int64)v32, a5, (__int64)a3, a4, &ptr);
      if ( v33 )
      {
        sub_10069B0((__int64)v34, v32[0], (__int64)v32[1], (__int64)&ptr);
        v16 = (const char *)sub_2192600(a2, v34[0], v34[1]);
        v17 = 0;
        v15 = v16;
        if ( v16 )
          v17 = j__strlen(v16);
        if ( v34[0] != &v35 )
        {
          v28 = v17;
          operator delete(v34[0]);
          v17 = v28;
        }
      }
      else
      {
        v15 = nullptr;
        sub_FA3370((__int64)v34, **a1, 0, 326);
        sub_AC84E0((unsigned __int8 **)v34, a3, a4);
        sub_AC6300((__int64)v34);
        v17 = 0;
      }
      v18 = (char *)ptr;
      if ( si128.m128i_i32[1] && si128.m128i_i32[0] )
      {
        v19 = 0;
        v20 = 8LL * (unsigned int)(si128.m128i_i32[0] - 1) + 8;
        do
        {
          v21 = *(_QWORD *)&v18[v19];
          if ( v21 && v21 != -8 )
          {
            v29 = v17;
            operator delete();
            v18 = (char *)ptr;
            v17 = v29;
          }
          v19 += 8;
        }
        while ( v19 != v20 );
      }
      free(v18);
      return v15;
    }
    if ( !a6 )
      return nullptr;
    sub_FA3370((__int64)v34, **a1, 0, 445);
    v23 = "HIP";
    goto LABEL_26;
  }
  v14 = v12 - 2;
LABEL_3:
  if ( v14 > 0x1A )
  {
    v15 = a3;
    if ( (unsigned int)(v12 - 29) > 0x34 )
      return v15;
    goto LABEL_5;
  }
  v24 = sub_FD3E40(v12);
  v25 = 0;
  v26 = v24;
  if ( v24 )
    v25 = j__strlen(v24);
  v27 = (const char *)sub_2192600(a2, v26, v25);
  v15 = v27;
  if ( v27 )
    j__strlen(v27);
  return v15;
}

