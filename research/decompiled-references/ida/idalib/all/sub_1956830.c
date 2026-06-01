__int64 __fastcall sub_1956830(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r15
  __m128i v12; // xmm1
  __int64 v13; // r10
  __int64 v14; // r10
  int v15; // [rsp+10h] [rbp-238h]
  int v16; // [rsp+14h] [rbp-234h]
  void *v17; // [rsp+18h] [rbp-230h]
  __int64 v18; // [rsp+20h] [rbp-228h]
  void *v19; // [rsp+28h] [rbp-220h]
  __int64 v20; // [rsp+30h] [rbp-218h]
  int v21; // [rsp+38h] [rbp-210h]
  int v22; // [rsp+3Ch] [rbp-20Ch]
  _DWORD v23[3]; // [rsp+44h] [rbp-204h] BYREF
  __m128i v24; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-1E8h]
  __m128i v26; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v27; // [rsp+80h] [rbp-1C8h]
  __int128 v28; // [rsp+90h] [rbp-1B8h] BYREF
  void *v29[2]; // [rsp+A0h] [rbp-1A8h]
  __m128i v30; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-188h] BYREF
  _BYTE v32[8]; // [rsp+C8h] [rbp-180h] BYREF
  void *v33; // [rsp+D0h] [rbp-178h]
  int v34; // [rsp+DCh] [rbp-16Ch]
  __m128i v35; // [rsp+E0h] [rbp-168h]
  void *v36; // [rsp+F0h] [rbp-158h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-150h]
  _BYTE v38[128]; // [rsp+100h] [rbp-148h] BYREF
  void *ptr; // [rsp+180h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+188h] [rbp-C0h]
  _BYTE v41[184]; // [rsp+190h] [rbp-B8h] BYREF

  v4 = *(_DWORD *)(a2 + 12);
  v5 = *(_DWORD *)a2;
  v23[2] = *(_DWORD *)(a2 + 4);
  v36 = v38;
  v37 = 0x1000000000LL;
  v6 = *(_DWORD *)(a2 + 16);
  v23[0] = v5;
  v7 = (unsigned int)(2 * v6);
  v23[1] = v4;
  v8 = *(_QWORD *)(a2 + 8 * v7 + 152);
  if ( v8 )
  {
    v9 = sub_1944E10(a1, *(unsigned __int16 **)(a2 + 8 * v7 + 152), a3, a4);
    if ( v9 == 1 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    LODWORD(v8) = v9 & 0xFFFFFFFE;
  }
  v28 = 0;
  ptr = v41;
  v10 = 0;
  *(_OWORD *)v29 = 0;
  v30 = 0;
  v24.m128i_i64[0] = 0;
  v24.m128i_i32[2] = 0;
  v25 = 0;
  v40 = 0x1000000000LL;
  if ( !(unsigned __int8)sub_1956300(
                           (__int64)a1,
                           a2,
                           (__int64 *)&v36,
                           (__int64)&v28,
                           &v24,
                           (__int64)&ptr,
                           (__m128)0LL,
                           a4) )
  {
    v19 = ptr;
    v18 = (unsigned int)v37;
    v15 = *(unsigned __int8 *)(a2 + 140);
    v20 = (unsigned int)v40;
    v17 = v36;
    v22 = *(_DWORD *)(a2 + 148);
    v21 = *(_DWORD *)(a2 + 144);
    v16 = *(_DWORD *)(a2 + 136);
    v31 = v28;
    sub_E90750((__int64)v32, (__int64 *)&v28 + 1);
    v12 = _mm_load_si128(&v30);
    v13 = *a1;
    v26 = _mm_load_si128(&v24);
    v27 = v25;
    v14 = *(_QWORD *)(v13 + 760);
    v35 = v12;
    v10 = sub_1B64ED0(
            v14,
            v8,
            (int)a2 + 80,
            7,
            (int)a2 + 108,
            7,
            (__int64)&v31,
            (__int64)&v26,
            v16,
            v15,
            v21,
            v22,
            (__int64)v17,
            v18,
            (__int64)v23,
            0,
            (__int64)v19,
            v20);
    if ( v34 )
      free(v33);
  }
  if ( ptr != v41 )
    free(ptr);
  if ( HIDWORD(v29[1]) )
    free(v29[0]);
LABEL_9:
  if ( v36 != v38 )
    free(v36);
  return v10;
}
