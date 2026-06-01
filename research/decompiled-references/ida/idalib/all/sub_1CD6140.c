unsigned __int64 __fastcall sub_1CD6140(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned int a9,
        char a10)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  char v26; // r14
  unsigned __int64 v27; // rbp
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v57; // [rsp+8h] [rbp-2A0h] BYREF
  __m128i v58; // [rsp+10h] [rbp-298h] BYREF
  unsigned int v59; // [rsp+2Ch] [rbp-27Ch] BYREF
  __int64 v60; // [rsp+30h] [rbp-278h] BYREF
  unsigned __int64 v61; // [rsp+38h] [rbp-270h] BYREF
  __m128 v62; // [rsp+40h] [rbp-268h] BYREF
  __int128 v63; // [rsp+50h] [rbp-258h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-248h]
  __int128 v65; // [rsp+70h] [rbp-238h]
  _BYTE v66[144]; // [rsp+80h] [rbp-228h] BYREF
  __int64 v67; // [rsp+110h] [rbp-198h] BYREF
  _QWORD *v68; // [rsp+118h] [rbp-190h]
  __int64 v69; // [rsp+120h] [rbp-188h]
  _OWORD v70[5]; // [rsp+128h] [rbp-180h] BYREF
  __int64 v71; // [rsp+178h] [rbp-130h]
  __int64 v72; // [rsp+180h] [rbp-128h]
  __int64 v73; // [rsp+188h] [rbp-120h]
  unsigned int v74; // [rsp+190h] [rbp-118h]
  __int64 v75; // [rsp+198h] [rbp-110h] BYREF
  __m128i si128; // [rsp+1A0h] [rbp-108h]
  __int64 v77; // [rsp+1B0h] [rbp-F8h]
  int v78; // [rsp+1C0h] [rbp-E8h] BYREF
  _QWORD *v79; // [rsp+1C8h] [rbp-E0h]

  v58.m128i_i64[0] = a4;
  v58.m128i_i64[1] = a5;
  v57 = a6;
  v63 = 0;
  *(_OWORD *)ptr = 0;
  v65 = 0;
  sub_15AB8B0((__int64)&v63, a4, a5);
  if ( !sub_E917A0(v58.m128i_i64[0], a4, v14, v15, v16, v17) || sub_16A2930(*a1, (__int64)&v63, 0, v18, v19, v20) )
  {
    if ( (unsigned int)(a2 - 5) <= 1 )
    {
      v27 = sub_1CD4E00(*a1, a2, a3, (__int64 *)v58.m128i_i64[0], v58.m128i_i64[1], v57, 0.0, a8, a9, a10);
      if ( !HIDWORD(ptr[1]) )
        return v27;
LABEL_10:
      free(ptr[0]);
      return v27;
    }
    v59 = sub_F58630(a2);
    v21 = *a1;
    v68 = v70;
    v72 = v21;
    v69 = 0x800000000LL;
    v73 = v57;
    v70[4] = 0;
    v74 = a9;
    v67 = 0;
    v71 = 0;
    sub_B85890(&v75, v57);
    v77 = 0x101010000LL;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v67);
    v25 = sub_16A2930(*a1, (__int64)&v63, 0, v22, v23, v24);
    v60 = v25;
    if ( !v25 || (v26 = sub_169F990(*a1, (__int64)&v63, v25)) != 0 )
    {
LABEL_5:
      v27 = 0;
LABEL_6:
      sub_169D230((__int64)&v67);
      goto LABEL_7;
    }
    sub_1A48440(*a1, (__int64)&v67, v60, 0);
    if ( (_DWORD)v67 == 2 )
    {
      v41 = sub_16C47B0(*v68 & 0xFFFFFFFFFFFFFFF8LL);
      v29 = *a1;
      v30 = v57;
      v42 = v41;
      if ( (*(_BYTE *)(v41 + 28) & 0x7Fu) - 58 <= 4 )
      {
        if ( sub_17B1BF0(v29, v41, v59, 0, a9, v57) )
        {
          v46 = *(_QWORD *)(v42 + 48);
          v47 = *(_QWORD *)(*a1 + 248);
          if ( v46 )
          {
            v48 = v46 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v48 = sub_A7AA70(v47, v42, v43, 0, v44, v45);
            v47 = *(_QWORD *)(*a1 + 248);
          }
          v27 = sub_A76250(v47, a2, v58.m128i_i64[0], v48, 0);
          goto LABEL_6;
        }
        sub_168B9F0((__int64)&v78, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
        sub_17AE460((__int64)&v78, &v57);
        sub_15F7200(&v78);
        sub_168B9F0((__int64)&v78, (__int64 *)(*a1 + 8), *(_DWORD *)(v42 + 24), 0x73u, 0);
        sub_15F7200(&v78);
        goto LABEL_5;
      }
    }
    else
    {
      v27 = 0;
      if ( (_DWORD)v67 == 5 )
        goto LABEL_6;
      v29 = *a1;
      v30 = v57;
    }
    sub_1CB0230((__int64)&v78, v29, v30, a9, 1);
    sub_1A48440(*a1, (__int64)&v78, v60, 0);
    if ( (unsigned int)(v78 - 2) > 2 )
    {
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), a9, 0x10EAu, 0);
      v35 = sub_18FF820((__int64)v66, (int *)&v59);
      v36 = sub_17AE460(v35, &v57);
      v37 = sub_17BABD0(v36, &v60);
      v38 = sub_E90530(v58.m128i_i64) >> 32;
      if ( v58.m128i_i64[0] )
      {
        v62 = (__m128)_mm_load_si128(&v58);
        v39 = *(_QWORD *)(v58.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v39 )
        {
          v56 = v62.m128_i64[1];
          v62 = _mm_loadh_ps((const double *)&v56);
          while ( (*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v26 = 1;
            v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v26 )
            v62.m128_u64[0] = v39;
        }
        v56 = v38;
        v40 = sub_E90530((__int64 *)&v62);
        LODWORD(v38) = v56;
      }
      else
      {
        v40 = 0;
      }
      v62.m128_u64[0] = __PAIR64__(v38, v40);
      sub_1587DB0(v37, (__int64 *)&v62);
      sub_15F7200(v66);
    }
    else
    {
      v31 = *a1;
      v61 = *v79 & 0xFFFFFFFFFFFFFFF8LL;
      v32 = sub_17A62A0(v31, v61, v59);
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), a9, 0x13D4u, 0);
      v33 = sub_17BA610((__int64)v66, (__int64 *)&v61);
      v34 = v33;
      if ( *(_BYTE *)(v33 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v33 + 32), v32, 2u);
      }
      else if ( *(_BYTE *)(v33 + 132) )
      {
        v49 = sub_168B9E0((_QWORD *)v33);
        v53 = *(__int64 **)(v34 + 16);
        if ( v53 )
        {
          v54 = *v53;
          v56 = v49;
          v53 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v54 + 32))(v53);
          v49 = v56;
        }
        v62.m128_u64[0] = (unsigned __int64)v53;
        v55 = sub_1587BC0(v49, (__int64 *)&v62, v49, v50, v51, v52);
        sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * *(unsigned int *)(v34 + 128) + 8), v32, 2u);
      }
      sub_18FF820(v34, (int *)&v59);
      sub_15F7200(v66);
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8), *(_DWORD *)(v61 + 24), 0x67u, 0);
      sub_15F7200(v66);
    }
    v27 = 0;
    sub_169D230((__int64)&v78);
    goto LABEL_6;
  }
  v27 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v58.m128i_i64[0], v57);
LABEL_7:
  if ( HIDWORD(ptr[1]) )
    goto LABEL_10;
  return v27;
}
