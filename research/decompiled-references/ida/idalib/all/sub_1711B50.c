void __fastcall sub_1711B50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // r9
  unsigned __int64 v8; // r13
  __m128i v9; // xmm1
  _QWORD *v10; // rsi
  _QWORD *v11; // rdi
  char **v12; // r14
  __m128i v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char *v23; // rdi
  __m128i v24; // [rsp+0h] [rbp-138h] BYREF
  _QWORD v25[2]; // [rsp+10h] [rbp-128h] BYREF
  __m128i si128; // [rsp+20h] [rbp-118h]
  int v27; // [rsp+30h] [rbp-108h]
  __int128 v28; // [rsp+38h] [rbp-100h] BYREF
  __int64 v29; // [rsp+48h] [rbp-F0h]
  char v30; // [rsp+50h] [rbp-E8h]
  __int64 v31; // [rsp+58h] [rbp-E0h]
  __int64 v32; // [rsp+60h] [rbp-D8h]
  __int64 v33; // [rsp+68h] [rbp-D0h]
  __m128i v34; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-B8h]
  __int64 v36; // [rsp+88h] [rbp-B0h]
  __int64 v37; // [rsp+90h] [rbp-A8h]
  __int64 v38; // [rsp+98h] [rbp-A0h]
  void *v39; // [rsp+A0h] [rbp-98h]
  __int64 v40; // [rsp+A8h] [rbp-90h]
  _BYTE v41[64]; // [rsp+B0h] [rbp-88h] BYREF
  void *ptr; // [rsp+F0h] [rbp-48h]
  __int64 v43; // [rsp+F8h] [rbp-40h]
  _BYTE v44[56]; // [rsp+100h] [rbp-38h] BYREF

  v3 = sub_19A27D0(a1);
  if ( (v3 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v8 = v3;
    v9 = _mm_loadu_si128((const __m128i *)(a2 + 184));
    v10 = *(_QWORD **)(a1 + 248);
    v11 = *(_QWORD **)(a1 + 240);
    v12 = *(char ***)(a2 + 184);
    v35 = 0;
    v39 = v41;
    v40 = 0x400000000LL;
    ptr = v44;
    v34 = v9;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v43 = 0x200000000LL;
    v13.m128i_i64[0] = sub_16FEC70(v11, v10, v4, v5, v6, v7);
    v24 = v13;
    v17 = sub_16FEFA0(v8, &v24, v12, v14, v15, v16);
    sub_15A3150((__int64)&v34, (__int64)v17);
    sub_15A2F70((__int64)&v34, (__int64)"this");
    v22 = sub_15A5CA0((__int64)&v34, (__int64)"this", v18, v19, v20, v21);
    v23 = *(char **)(a2 + 8);
    v25[0] = 0;
    v25[1] = v22;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v28 = 0;
    v27 = 0;
    v29 = 0;
    v30 = v30 & 0x80 | 0x40;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    if ( v23 == *(char **)(a2 + 16) )
    {
      sub_1706840(a2, v23, (__int64)v25);
    }
    else
    {
      sub_17048E0((__int64)v23, (__int64)v25);
      *(_QWORD *)(a2 + 8) += 96LL;
    }
    sub_1705410((__int64)&v28);
    if ( ptr != v44 )
      free(ptr);
    if ( v39 != v41 )
      free(v39);
  }
}
