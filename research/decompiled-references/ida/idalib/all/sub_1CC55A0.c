__int64 __fastcall sub_1CC55A0(
        __int64 a1,
        double a2,
        double a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7,
        __int64 a8,
        int a9,
        unsigned int a10)
{
  __int64 v10; // r14
  int v14; // r15d
  int v15; // eax
  unsigned __int64 v16; // rax
  __m128i si128; // xmm0
  __int64 v18; // r12
  _DWORD *v19; // rdx
  _DWORD *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  size_t v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r14
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-E8h]
  bool v41; // [rsp+17h] [rbp-D1h] BYREF
  __int64 v42; // [rsp+18h] [rbp-D0h] BYREF
  void *v43; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v44; // [rsp+28h] [rbp-C0h]
  _DWORD v45[9]; // [rsp+38h] [rbp-B0h] BYREF
  char v46; // [rsp+5Ch] [rbp-8Ch]

  v10 = a7[1];
  if ( !v10 )
    return 0;
  v14 = sub_F58610(a5);
  if ( (unsigned int)(a6 - 1) <= 1 )
  {
    sub_168B9F0((__int64)&v43, (__int64 *)(a1 + 8), a10, 0xE56u, 0);
    v41 = a6 == 2;
    v31 = sub_1588420((__int64)&v43, (unsigned __int8 *)&v41);
    v32 = v31;
    if ( *(_BYTE *)(v31 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v31 + 32), v14, 2u);
    }
    else if ( *(_BYTE *)(v31 + 132) )
    {
      v37 = sub_168B9E0((_QWORD *)v31);
      v38 = *(_QWORD *)(v32 + 16);
      if ( v38 )
        v38 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38 + 32LL))(*(_QWORD *)(v32 + 16));
      v42 = v38;
      v39 = sub_1587BC0(v37, &v42, v33, v34, v35, v36);
      sub_AE9DF0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v32 + 128) + 8), v14, 2u);
    }
    v42 = *a7;
    sub_1587DB0(v32, &v42);
    sub_15F7200(&v43);
    return 0;
  }
  v15 = sub_F58620(v14);
  v16 = sub_AB77C0(*(_QWORD **)(a1 + 248), v15, v10, a8);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v18 = v16;
  v44 = si128;
  v43 = v45;
  v45[8] = 0;
  v46 = 0;
  sub_1EA6140(&v43, v16, 24, 8);
  v20 = v19;
  *v19 = a9;
  sub_15AB9E0((__int64)a7, *(_QWORD **)(a1 + 248), (__int64)v19, v21, v22, v23);
  *((_QWORD *)v20 + 1) = v24;
  v20[4] = a10;
  v25 = v44.m128i_i64[0] - v44.m128i_i64[1];
  v29 = sub_A81BC0(*(_QWORD **)(a1 + 248), v18, v44.m128i_i32[0] - v44.m128i_i32[2], v26, v27, v28);
  memcpy(v29 + 1, (char *)v43 + v44.m128i_i64[1], v25);
  result = sub_1E61050(a1, v18, v29, *(double *)si128.m128i_i64, a3);
  if ( v43 != v45 )
  {
    if ( v43 )
    {
      v40 = result;
      operator delete[](v43);
      return v40;
    }
  }
  return result;
}
