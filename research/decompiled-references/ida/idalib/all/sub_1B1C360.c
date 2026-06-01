unsigned __int64 __fastcall sub_1B1C360(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9,
        int a10)
{
  unsigned __int64 v11; // r15
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 result; // rax
  char *v20; // rax
  __int64 v21; // r13
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // rax
  _QWORD *v34; // r12
  size_t v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int v44; // [rsp+1Ch] [rbp-11Ch]
  int v45; // [rsp+2Ch] [rbp-10Ch] BYREF
  void *v46[2]; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v47[16]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v48; // [rsp+50h] [rbp-E8h] BYREF
  char v49; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v50[2]; // [rsp+70h] [rbp-C8h] BYREF
  int v51; // [rsp+80h] [rbp-B8h]
  _BYTE *v52; // [rsp+88h] [rbp-B0h]
  unsigned __int8 *v53; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v54[160]; // [rsp+98h] [rbp-A0h] BYREF

  if ( (_DWORD)a2 == 1 )
  {
    v47[0] = 0;
    v46[1] = nullptr;
    v46[0] = v47;
    sub_9EE7C0(v46, "'");
    v20 = sub_FFDD70(28, 0);
    sub_9EE7C0(v46, v20);
    sub_9EE7C0(v46, "'");
    sub_168B9F0((__int64)v50, a1, a6, 0x1217u, 0);
    v21 = sub_1682A40((__int64)v50, (__int64)v46);
    sub_1AF81E0(&v48, 0x1Cu);
    sub_1682AF0(v21, (__int64)&v48);
    if ( (char *)v48.m128i_i64[0] != &v49 )
      operator delete((void *)v48.m128i_i64[0]);
    sub_15F7200(v50);
    if ( v46[0] != v47 )
      operator delete(v46[0]);
    return 0;
  }
  v11 = (unsigned __int64)a3;
  if ( !a3 || (*a3 & 0x3C000) != 0 )
  {
    v13 = 0;
    goto LABEL_5;
  }
  v44 = sub_EEB7E0((unsigned __int64)a3, a2, *(double *)a7.m128_u64);
  v23 = sub_1AF55B0(a1, v44, v11);
  if ( v23 == 1 )
    return 0;
  v11 = v23 & 0xFFFFFFFFFFFFFFFELL;
  v24 = sub_168B6C0((__int64)a1);
  sub_C3EB00((__int64)&v48, v11, v24, nullptr, v25, v26);
  if ( !v49 )
  {
    sub_168B6E0((__int64)a1);
    v27 = sub_1AE5FF0(a1[1]);
    if ( v27 )
      v29 = *(_DWORD *)(v27 + 976);
    else
      v29 = 103;
    v13 = 0;
    if ( (unsigned int)sub_1AE8290(v29, 28, v28, 0x67u) != 103 && !(unsigned __int8)sub_B8E180(*(_QWORD *)(*a1 + 544)) )
    {
      v33 = sub_1AF29B0(*a1, v11, a7, a8, v30, v31, v32);
      v50[0] = 0;
      v50[1] = 0;
      v34 = (_QWORD *)v33;
      v51 = 0;
      v52 = v54;
      v53 = nullptr;
      v35 = j__strlen(".capture_expr.");
      v11 = sub_1B00390((_QWORD *)*a1, v34, (__int64)v50, ".capture_expr.", v35, a7, a8) & 0xFFFFFFFFFFFFFFFELL;
      v36 = (_QWORD *)sub_168B6C0((__int64)a1);
      v13 = sub_1AEDEF0(v36, (__int64)v50, v37, v38, v39, v40);
      sub_1AF4310((__int64)v50);
    }
    goto LABEL_19;
  }
  if ( v48.m128i_i8[12] )
  {
    v13 = 0;
    goto LABEL_19;
  }
  v13 = 0;
  if ( (unsigned __int8)sub_1AF0130(v48.m128i_i64) )
  {
LABEL_19:
    sub_98E4B0((__int64)&v48);
LABEL_5:
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    v17 = v14[294];
    v14[304] += 56LL;
    v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14[295] >= v18 + 56 && v17 )
    {
      v14[294] = v18 + 56;
      result = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170((__int64)(v14 + 294), 56, 56, 3, v15, v16);
    }
    *(_DWORD *)result = a4;
    *(_DWORD *)(result + 4) = a10;
    *(_DWORD *)(result + 8) = 28;
    *(_DWORD *)(result + 24) = 103;
    *(_QWORD *)(result + 48) = v11;
    *(_QWORD *)(result + 16) = v13;
    *(__m128i *)(result + 28) = _mm_unpacklo_epi64(
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5), _mm_cvtsi32_si128(a2)),
                                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a9)));
    return result;
  }
  sub_168B9F0((__int64)v50, a1, v44, 0x11CAu, 0);
  if ( v54[80] )
  {
    sub_AE9DF0(&v53, (__int64)"dist_schedule", 1u);
  }
  else if ( v54[92] )
  {
    sub_1B132F0((__int64)v50, (__int64)"dist_schedule");
  }
  v45 = 1;
  v41 = sub_1587D10((__int64)v50, &v45);
  v46[0] = (void *)sub_EEC8C0((unsigned __int64)a3, (__int64)&v45, *(double *)a7.m128_u64);
  sub_1587DB0(v41, (__int64 *)v46);
  sub_15F7200(v50);
  sub_98E4B0((__int64)&v48);
  return 0;
}
