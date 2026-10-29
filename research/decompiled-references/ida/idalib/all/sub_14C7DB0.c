__int64 __fastcall sub_14C7DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, __m128 a6)
{
  int v6; // r13d
  const char *v7; // rbx
  __m128i *v9; // rbp
  unsigned int v10; // r12d
  size_t v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  const __m128i *v16; // rax
  unsigned __int8 v17; // al
  const char *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+Ch] [rbp-C3Ch]
  int v24; // [rsp+10h] [rbp-C38h]
  unsigned __int8 *v25; // [rsp+20h] [rbp-C28h] BYREF
  unsigned __int8 v26; // [rsp+28h] [rbp-C20h]
  __int64 v27; // [rsp+30h] [rbp-C18h]
  int v28; // [rsp+38h] [rbp-C10h]
  __int16 v29; // [rsp+3Ch] [rbp-C0Ch]
  __int64 (__fastcall *v30)(__int64); // [rsp+40h] [rbp-C08h]
  __int64 v31; // [rsp+48h] [rbp-C00h]
  __int64 v32; // [rsp+50h] [rbp-BF8h]
  _DWORD v33[10]; // [rsp+70h] [rbp-BD8h] BYREF
  void *v34; // [rsp+98h] [rbp-BB0h]
  __int64 v35; // [rsp+A8h] [rbp-BA0h] BYREF
  __int64 v36; // [rsp+B8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+C0h] [rbp-B88h]
  __int64 v38; // [rsp+D0h] [rbp-B78h] BYREF
  void *v39; // [rsp+F0h] [rbp-B58h]
  int v40; // [rsp+FCh] [rbp-B4Ch]
  __int64 v41; // [rsp+110h] [rbp-B38h]
  __m128i v42; // [rsp+1A0h] [rbp-AA8h] BYREF
  __int128 v43; // [rsp+1B0h] [rbp-A98h]
  __int64 v44; // [rsp+1C0h] [rbp-A88h]
  __int64 v45; // [rsp+1C8h] [rbp-A80h]
  __int64 v46; // [rsp+1D0h] [rbp-A78h]
  int v47; // [rsp+1D8h] [rbp-A70h]
  __int64 v48; // [rsp+1E0h] [rbp-A68h]
  __int64 v49; // [rsp+1F0h] [rbp-A58h]
  __int64 v50; // [rsp+1F8h] [rbp-A50h]
  int v51; // [rsp+200h] [rbp-A48h]
  __int64 v52; // [rsp+208h] [rbp-A40h]
  __int64 v53; // [rsp+210h] [rbp-A38h]
  int v54; // [rsp+218h] [rbp-A30h]
  __int64 *v55; // [rsp+220h] [rbp-A28h]
  __int64 v56; // [rsp+228h] [rbp-A20h]
  __int64 v57; // [rsp+230h] [rbp-A18h] BYREF
  __int16 v58; // [rsp+470h] [rbp-7D8h]
  __int64 v59; // [rsp+478h] [rbp-7D0h]
  _QWORD *v60; // [rsp+480h] [rbp-7C8h]
  __int64 v61; // [rsp+488h] [rbp-7C0h]
  _QWORD v62[5]; // [rsp+490h] [rbp-7B8h] BYREF
  _QWORD v63[242]; // [rsp+4B8h] [rbp-790h] BYREF

  v6 = *(unsigned __int16 *)(a1 + 32);
  if ( (_WORD)v6 == 144 )
  {
    v7 = "reinterpret_cast";
    goto LABEL_5;
  }
  if ( (unsigned __int16)v6 > 0x90u )
  {
    if ( (_WORD)v6 == 145 )
    {
      v7 = "static_cast";
      goto LABEL_5;
    }
    if ( (_WORD)v6 == 354 )
    {
      v7 = "addrspace_cast";
      goto LABEL_5;
    }
    return sub_14C83D0(a1, a2, a3, a4);
  }
  if ( (_WORD)v6 != 130 )
  {
    if ( (_WORD)v6 == 132 )
    {
      v7 = "dynamic_cast";
      goto LABEL_5;
    }
    return sub_14C83D0(a1, a2, a3, a4);
  }
  v7 = "const_cast";
LABEL_5:
  v9 = (__m128i *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v10 = *(_DWORD *)(a1 + 16);
  v23 = *(_DWORD *)(a1 + 40);
  if ( *(_WORD *)(a1 + 32) == 20 && *(_DWORD *)(a1 + 20) == 2 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = *(_QWORD *)(v14 + 2944);
    v16 = (const __m128i *)(v15 >= *(unsigned int *)(v14 + 2912)
                          ? sub_14180A0(v14, 1u)
                          : *(_QWORD *)(v14 + 2904) + 24 * v15);
    a6 = (__m128)_mm_loadu_si128(v16);
    v42 = (__m128i)a6;
    *(_QWORD *)&v43 = v16[1].m128i_i64[0];
    if ( (_WORD)v43 == 62 && sub_14C5F40(a1, v9->m128i_i32, v42.m128i_i32) )
      sub_14C7270((void **)a1, *(_QWORD *)(a1 + 8), v9, &v42, v6, 1);
  }
  v11 = strlen(v7);
  if ( (unsigned __int8)sub_1569A00(a1, 47, 1624, v7, v11) )
    return 1;
  sub_147A4A0((__int64)v33, a1 + 504);
  sub_148B330(a1, (__int64)v33, 1u, 3u, 2, a5, a6);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v63[2] = qword_2CD8AE0;
  v50 = v41;
  v55 = &v57;
  v56 = 0x400000000LL;
  v43 = 0;
  v42 = (__m128i)(unsigned __int64)v33;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  LOBYTE(v58) = (((v33[0] >> 12) & 0x7F) == 69) | v58 & 0xFE;
  v60 = v62;
  v62[2] = v36;
  v61 = 0x200000000LL;
  v62[3] = v63;
  v62[4] = 0x200000000LL;
  v58 &= 0xFC01u;
  v48 = 0;
  v49 = 0;
  v51 = 5;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v59 = 0;
  memset(&v63[3], 0, 40);
  v63[232] = 0;
  sub_147E3E0(a1, (__int64)&v42);
  v24 = *(_DWORD *)(a1 + 16);
  if ( (unsigned __int8)sub_1569A00(a1, 52, 14, &byte_22F0C30, 0) )
  {
    v12 = 1;
    sub_1564820(&v25, a1, v10, 109);
    sub_AE9DF0(&v25, 47, 4u);
    sub_AEA040((__int64)&v25);
  }
  else
  {
    v25 = (unsigned __int8 *)(a1 + 1952);
    v17 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v26 = v17;
    v29 = 63;
    v18 = v7;
    v12 = 1;
    v27 = a1;
    v28 = 1507350;
    v30 = sub_146A990;
    v31 = 0;
    v32 = 0;
    if ( !(unsigned __int8)sub_156A040(&v25, 1625, v18, 0) )
    {
      v12 = sub_14BFC10((const __m128i *)a1, 0, (__m128i)0LL);
      sub_14808E0((__int64)&v25, nullptr, v19, v20, v21, v22);
      if ( v12 != 1 && (v58 & 1) == 0 && ((*(_DWORD *)v42.m128i_i64[0] >> 12) & 0x7F) != 0x45 )
        v12 = sub_16B5360(
                *(_QWORD *)(a1 + 96),
                v23,
                v6,
                v10,
                (unsigned int)&v42,
                v24,
                (unsigned int)v32,
                v12 & 0xFFFFFFFFFFFFFFFELL,
                HIDWORD(v32));
    }
    *v25 = v26;
  }
  sub_147A7A0(v42.m128i_i8);
  if ( v40 )
    free(v39);
  sub_15DCED0(v36, &v36);
  if ( ptr != &v38 )
    free(ptr);
  if ( v34 != &v35 )
    free(v34);
  return v12;
}
