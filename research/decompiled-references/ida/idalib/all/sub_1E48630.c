unsigned __int64 __fastcall sub_1E48630(
        __int64 a1,
        __m128i *a2,
        __int64 a3,
        __m128 a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10,
        __m128i a11)
{
  unsigned __int64 v11; // r14
  int v13; // eax
  double v14; // xmm4_8
  double v15; // xmm5_8
  int v16; // eax
  __m128i *v17; // r10
  char v18; // al
  _BYTE *v19; // rdi
  int v21; // eax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // [rsp+8h] [rbp-140h]
  void *v28[2]; // [rsp+10h] [rbp-138h] BYREF
  _BYTE v29[96]; // [rsp+20h] [rbp-128h] BYREF
  int v30; // [rsp+80h] [rbp-C8h]
  char v31; // [rsp+84h] [rbp-C4h]
  __int64 v32; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+98h] [rbp-B0h]
  int v34; // [rsp+A0h] [rbp-A8h]
  __m128i *v35; // [rsp+A8h] [rbp-A0h]
  void **v36; // [rsp+B0h] [rbp-98h]
  __int64 v37; // [rsp+B8h] [rbp-90h]
  __int64 v38; // [rsp+C0h] [rbp-88h]
  char v39; // [rsp+C8h] [rbp-80h]
  void *v40; // [rsp+D0h] [rbp-78h]
  __int64 v41; // [rsp+D8h] [rbp-70h]
  _BYTE v42[16]; // [rsp+E0h] [rbp-68h] BYREF
  void *ptr; // [rsp+F0h] [rbp-58h]
  __int64 v44; // [rsp+F8h] [rbp-50h]
  _BYTE v45[72]; // [rsp+100h] [rbp-48h] BYREF

  v11 = 0;
  if ( *(char *)(a3 + 28) >= 0 )
  {
    v30 = 0;
    v28[0] = v29;
    v28[1] = (void *)0x400000000LL;
    v31 = 1;
    v13 = sub_B8D390((__int64)a2);
    v30 += v13;
    v16 = *(_DWORD *)(a1 + 12632);
    v17 = nullptr;
    v32 = a1;
    v34 = v16;
    if ( a2 )
      v17 = a2 + 4;
    v40 = v42;
    v41 = 0x100000000LL;
    v44 = 0x100000000LL;
    v18 = *(_BYTE *)(a3 + 28);
    v33 = a1;
    v35 = v17;
    v36 = v28;
    v37 = 0;
    v38 = 0;
    v39 = 1;
    ptr = v45;
    if ( (v18 & 0x7Fu) - 35 > 3 )
    {
      v27 = (__int64)v17;
      v11 = (unsigned __int64)sub_1E44740(&v32, a3, 0, 1, a4, a5, a6, a7, v14, v15, a10, a11);
      if ( v11 )
      {
        v21 = sub_B73090(a3);
        v22 = sub_BA5C60(
                *(_QWORD **)(a1 + 248),
                v27,
                *(_DWORD *)(a3 + 24),
                v11 & 0xFFFFFFFFFFFFFFFBLL,
                v21,
                0,
                nullptr,
                0);
        *(_BYTE *)(v22 + 29) &= 0x9Fu;
        sub_B94AD0(a2 + 4, v22, v23, v24, v25, v26);
      }
    }
    else
    {
      v11 = sub_1E46F30(&v32, a3, 0, 1, a4, a5, a6, a7, v14, v15, a10, a11);
    }
    if ( ptr != v45 )
      free(ptr);
    if ( v40 != v42 )
      free(v40);
    v19 = v28[0];
    *(_DWORD *)(v33 + 12632) = v34;
    if ( v19 != v29 )
      free(v19);
  }
  return v11;
}
