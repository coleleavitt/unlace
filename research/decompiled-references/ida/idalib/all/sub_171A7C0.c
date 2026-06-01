void __fastcall sub_171A7C0(
        int a1,
        __m128i *a2,
        __int64 a3,
        const __m128i *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int8 a7)
{
  __int64 v9; // rbx
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  char v15; // al
  size_t v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  char **v22; // rdi
  char *v23; // rax
  __int64 v24; // r13
  char v25; // al
  __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rdx
  __m128i v30; // xmm1
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  size_t v36; // rax
  _BYTE *v37; // rdx
  size_t v38; // r10
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rdi
  __int64 *v41; // rax
  size_t v42; // rdx
  __int64 v43; // [rsp+8h] [rbp-140h]
  __int64 v44; // [rsp+18h] [rbp-130h]
  size_t v45; // [rsp+20h] [rbp-128h]
  char v46; // [rsp+33h] [rbp-115h]
  int v48; // [rsp+38h] [rbp-110h]
  size_t v50; // [rsp+48h] [rbp-100h]
  void *v51; // [rsp+50h] [rbp-F8h] BYREF
  size_t v52; // [rsp+58h] [rbp-F0h]
  _QWORD v53[2]; // [rsp+60h] [rbp-E8h] BYREF
  void *v54[2]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v55; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+90h] [rbp-B8h]
  __int64 v57; // [rsp+98h] [rbp-B0h]
  void **v58; // [rsp+A0h] [rbp-A8h]
  __int64 v59; // [rsp+A8h] [rbp-A0h]
  _QWORD v60[10]; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v61; // [rsp+100h] [rbp-48h] BYREF

  v9 = a6;
  v10 = a7;
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v12 = *(_QWORD *)(v11 + 56);
  v48 = v11;
  v44 = v12;
  v13 = *(_DWORD *)(v12 + 20) & 0x1FFFFFFF;
  if ( a5 )
    v13 = a5;
  v14 = (__int64 *)(v12 + 8 * v9 + 24);
  v46 = 1;
  v43 = v12 + 8 * v13 + 24;
  if ( (__int64 *)v43 != v14 )
  {
    while ( 1 )
    {
      LOBYTE(v53[0]) = 0;
      v24 = *v14;
      v51 = v53;
      v52 = 0;
      v25 = *(_BYTE *)(v24 + 28) & 0x7F;
      if ( v25 == 67 )
      {
        v15 = *(_BYTE *)(v24 + 60);
        if ( (v15 & 1) == 0 || (v15 & 2) != 0 )
        {
          if ( (v15 & 4) == 0 || v24 == -80 )
          {
            sub_99BDC0(&v51, 0, 0, "class", 5u);
          }
          else
          {
            LODWORD(v54[1]) = 0;
            v55 = 0;
            v54[0] = &off_2BEBE68;
            LOBYTE(v57) = 0;
            HIDWORD(v57) = 1;
            v56 = 0;
            v58 = &v51;
            sub_227B8B0(v54, 0, 0, 0);
            sub_A55390(*(__int64 **)(v24 + 88), (__int64)v54, a2);
            v54[0] = &off_2BEBE68;
            sub_227B7A0(v54);
          }
        }
        else
        {
          v16 = j__strlen("typename");
          sub_99BDC0(&v51, 0, 0, "typename", v16);
        }
      }
      else
      {
        if ( v25 == 47 )
        {
          v26 = *(_QWORD *)(v24 + 40);
          if ( (v26 & 7) == 0 )
          {
            v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
            if ( v27 )
            {
              v28 = sub_FDE1C0(v27);
              v54[0] = &v55;
              sub_1700210(v54, v28, (__int64)v28 + v29);
              sub_A0AAD0((__int64)&v51, v54);
              if ( v54[0] != &v55 )
                operator delete(v54[0]);
            }
          }
          v54[0] = *(void **)(v24 + 48);
          sub_F78380((unsigned __int64 *)v54, (__int64)&v51, a2);
          v10 ^= 1u;
          LOBYTE(v10) = ((*(_QWORD *)(v24 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0) & v10;
          if ( (_BYTE)v10 )
            goto LABEL_23;
          goto LABEL_11;
        }
        sub_99BDC0(&v51, 0, 0, "template<...> class", 0x13u);
      }
      v21 = *(_QWORD *)(v24 + 40);
      if ( (v21 & 7) == 0 && (v21 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v36 = v52;
        v37 = v51;
        v38 = v52 + 1;
        if ( v51 == v53 )
          v39 = 15;
        else
          v39 = v53[0];
        if ( v38 > v39 )
        {
          v50 = v52 + 1;
          v45 = v52;
          sub_998B30((__int64)&v51, v52, 0, nullptr, 1u);
          v37 = v51;
          v38 = v50;
          v36 = v45;
        }
        v37[v36] = 32;
        v52 = v38;
        *((_BYTE *)v51 + v36 + 1) = 0;
        v40 = *(_QWORD *)(v24 + 40) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v24 + 40) & 7) != 0 )
          v40 = 0;
        v41 = sub_FDE1C0(v40);
        if ( v42 > 0x7FFFFFFFFFFFFFFFLL - v52 )
          std::__throw_length_error("basic_string::append");
        sub_9EE560(&v51, v41, v42);
      }
      v10 ^= 1u;
      LOBYTE(v10) = ((*(_QWORD *)(v24 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0) & v10;
      if ( (_BYTE)v10 )
      {
LABEL_23:
        v30 = _mm_loadu_si128(a4);
        v55 = 0u;
        *(__m128i *)v54 = v30;
        v58 = (void **)v60;
        v59 = 0x400000000LL;
        v60[8] = &v61;
        v56 = 0;
        v57 = 0;
        v60[9] = 0x200000000LL;
        if ( !v46 )
          sub_15A3210((__int64)v54, 15, (char *)&byte_22F0C30);
        sub_171A7C0(a1, (_DWORD)a2, v48, (unsigned int)v54, a5, ((__int64)v14 - v44 - 24) >> 3, 1);
        v35 = sub_15A5CA0((__int64)v54, (__int64)a2, v31, v32, v33, v34);
        sub_15A3030((__int64)a4, v35);
        sub_1704B40(v54);
        if ( v51 != v53 )
          operator delete(v51);
        return;
      }
LABEL_11:
      if ( !v46 )
        sub_15A3210((__int64)a4, 15, (char *)&byte_22F0C30);
      v22 = (char **)a4->m128i_i64[0];
      v54[0] = &v51;
      LOWORD(v56) = 260;
      v23 = sub_15A4EB0(v22, (const void ***)v54, v17, v18, v19, v20);
      sub_15A3090((__int64)a4, (__int64)v23);
      if ( v51 == v53 )
      {
        if ( (__int64 *)v43 == ++v14 )
          return;
      }
      else
      {
        operator delete(v51);
        if ( (__int64 *)v43 == ++v14 )
          return;
      }
      v46 = 0;
    }
  }
}
