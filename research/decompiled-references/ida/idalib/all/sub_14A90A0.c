__int64 __fastcall sub_14A90A0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, double a5, double a6)
{
  unsigned __int16 v9; // cx
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  int v13; // edi
  __int64 *v14; // rdx
  __int64 v15; // r12
  size_t v16; // rdx
  unsigned __int8 *v17; // r14
  void *v18; // rdi
  unsigned __int16 v20; // r12
  char v21; // al
  __int64 *v22; // rdi
  __int64 v23; // rax
  int v24; // esi
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r15
  const void *v30; // r13
  size_t v31; // rax
  __int64 v32; // r13
  bool v33; // al
  int v34; // r9d
  size_t v35; // rax
  __int64 *v36; // rdi
  __int64 v37; // rbx
  size_t v38; // rax
  __int64 v39; // rax
  __int64 *v40; // rdi
  int v41; // [rsp+8h] [rbp-100h]
  size_t v42; // [rsp+8h] [rbp-100h]
  void *v43; // [rsp+20h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+28h] [rbp-E0h]
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v46[6]; // [rsp+40h] [rbp-C8h] BYREF
  void *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __m128i v50; // [rsp+88h] [rbp-80h]
  _BYTE v51[112]; // [rsp+98h] [rbp-70h] BYREF

  v9 = *(_WORD *)(a1 + 32);
  if ( v9 > 0x3Cu )
    goto LABEL_12;
  v10 = 1LL << v9;
  if ( ((1LL << v9) & 0x1F00070070000000LL) == 0 )
  {
    if ( (v10 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v23 + 760) )
      {
        *(_BYTE *)(v23 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v23 + 48) + 6LL) = 1;
        v23 = *(_QWORD *)(a1 + 8);
      }
      *(_WORD *)(a1 + 32) = 1;
      sub_1736F00(
        *(_QWORD *)(*(_QWORD *)(a1 + 96) + 656LL),
        (unsigned int)((*(_BYTE *)(*(_QWORD *)(v23 + 56) + 1LL) & 8) == 0) + 2,
        a3,
        a4);
      return 0;
    }
    if ( (v10 & 0x80u) != 0LL )
    {
      v24 = *(_DWORD *)(a1 + 16);
      if ( v24 < 0 )
      {
        v43 = &v45;
        v25 = *(_QWORD *)(a1 + 8);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
        v26 = sub_10212A0(*(_QWORD *)(v25 + 88), v24);
        v27 = sub_13DB940(
                v26,
                (__int64 *)&v43,
                *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
                nullptr,
                si128,
                a6);
        v29 = v28;
        v30 = (const void *)v27;
        v31 = j__strlen("__clang__");
        if ( v31 == v29 && (!v31 || !memcmp(v30, "__clang__", v31)) )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
          v33 = sub_10CCDE0(*(_WORD *)(a1 + 32));
          v34 = *(_DWORD *)(a1 + 20);
          if ( v33 )
          {
            if ( !v34 )
              v34 = *(_DWORD *)(a1 + 16);
          }
          else
          {
            v34 += *(_DWORD *)(a1 + 16);
          }
          if ( v34 < 0 )
            v34 = sub_10212A0(v32, v34);
          v41 = v34;
          sub_1564840(&ptr, a1, a1 + 16, 2229);
          v35 = j__strlen("_Clang");
          sub_149EFC0((__int64)v46, __SPAIR64__(v41, v26), 1, "_Clang", v35);
          if ( v46[0] && v46[1] )
            sub_14A2370((__int64 *)&ptr, (unsigned __int64)v46);
          if ( v47 != &v48 )
            operator delete(v47);
          sub_AEA040((__int64)&ptr);
          v36 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v36, (int *)(a1 + 16));
          *a2 = *(_DWORD *)(a1 + 40);
          v37 = *(_QWORD *)(a1 + 8) + 552LL;
          v38 = j__strlen("_Clang");
          v39 = sub_6F3470(v37, "_Clang", v38);
          v18 = v43;
          v15 = v39;
          if ( v43 != &v45 )
            goto LABEL_8;
          return v15;
        }
        if ( v43 != &v45 )
          free(v43);
      }
      return 0;
    }
LABEL_12:
    if ( !sub_10CCDE0(*(_WORD *)(a1 + 32)) )
    {
      v20 = *(_WORD *)(a1 + 32);
      v21 = sub_141A630(v20);
      if ( v20 != 1 && !v21 )
      {
        v15 = *(_QWORD *)(a1 + 24);
        if ( v15 )
        {
          v22 = *(__int64 **)(a1 + 8);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v22, (int *)(a1 + 16));
          *a2 = *(_DWORD *)(a1 + 40);
        }
        return v15;
      }
    }
    return 0;
  }
  v11 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  ptr = v51;
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_DWORD *)(a1 + 16);
  v50 = v11;
  v14 = *(__int64 **)(v12 + 88);
  if ( v13 < 0 )
  {
    v13 = sub_1021B90(*(_QWORD *)(v12 + 88), v13);
    v12 = *(_QWORD *)(a1 + 8);
    v14 = *(__int64 **)(v12 + 88);
  }
  v15 = 0;
  v17 = (unsigned __int8 *)sub_13DB940(v13, (__int64 *)&ptr, v14, *(_QWORD *)(v12 + 56), nullptr, v11, a6);
  if ( (byte_2411740[2 * *v17] & 0x60) != 0 )
  {
    v40 = *(__int64 **)(a1 + 8);
    v42 = v16;
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v40, (int *)(a1 + 16));
    *a2 = *(_DWORD *)(a1 + 40);
    v15 = sub_6F3470(*(_QWORD *)(a1 + 8) + 552LL, v17, v42);
  }
  v18 = ptr;
  if ( ptr != v51 )
LABEL_8:
    free(v18);
  return v15;
}
