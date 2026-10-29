unsigned __int64 __fastcall sub_19001B0(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  unsigned __int64 v25; // rbp
  __int64 v27; // rdi
  char v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rdi
  int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r9
  __int64 v38; // rbx
  unsigned __int64 v39; // r14
  unsigned int v40; // eax
  char v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbp
  unsigned __int8 v44; // dl
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 *v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  unsigned __int64 v68; // [rsp+0h] [rbp-2A0h] BYREF
  __int64 v69; // [rsp+8h] [rbp-298h]
  __int64 v70; // [rsp+10h] [rbp-290h] BYREF
  __m128i v71; // [rsp+18h] [rbp-288h] BYREF
  unsigned int v72; // [rsp+2Ch] [rbp-274h] BYREF
  unsigned __int64 v73; // [rsp+30h] [rbp-270h] BYREF
  __m128 v74; // [rsp+38h] [rbp-268h] BYREF
  __int128 v75; // [rsp+48h] [rbp-258h] BYREF
  void *ptr[2]; // [rsp+58h] [rbp-248h]
  __int128 v77; // [rsp+68h] [rbp-238h]
  _BYTE v78[144]; // [rsp+78h] [rbp-228h] BYREF
  __int64 v79; // [rsp+108h] [rbp-198h] BYREF
  _QWORD *v80; // [rsp+110h] [rbp-190h]
  __int64 v81; // [rsp+118h] [rbp-188h]
  _OWORD v82[5]; // [rsp+120h] [rbp-180h] BYREF
  __int64 v83; // [rsp+170h] [rbp-130h]
  __int64 v84; // [rsp+178h] [rbp-128h]
  __int64 v85; // [rsp+180h] [rbp-120h]
  unsigned int v86; // [rsp+188h] [rbp-118h]
  __int64 v87; // [rsp+190h] [rbp-110h] BYREF
  __m128i si128; // [rsp+198h] [rbp-108h]
  __int64 v89; // [rsp+1A8h] [rbp-F8h]
  int v90; // [rsp+1B8h] [rbp-E8h] BYREF
  _QWORD *v91; // [rsp+1C0h] [rbp-E0h]

  v71.m128i_i64[0] = a4;
  v71.m128i_i64[1] = a5;
  v70 = a6;
  v75 = 0;
  *(_OWORD *)ptr = 0;
  v77 = 0;
  sub_15AB8B0((__int64)&v75, a4, a5);
  if ( !sub_E917A0(v71.m128i_i64[0], a4, v12, v13, v14, v15) || sub_16A2930(*a1, (__int64)&v75, 0, v16, v17, v18) )
  {
    if ( (unsigned int)(a2 - 5) <= 1 )
    {
      v25 = sub_1CD4E00(*a1, a2, a3, v71.m128i_i32[0], v71.m128i_i32[2], v70, a7, a8);
      if ( !HIDWORD(ptr[1]) )
        return v25;
LABEL_10:
      free(ptr[0]);
      return v25;
    }
    v72 = sub_F58630(a2);
    v19 = *a1;
    v80 = v82;
    v84 = v19;
    v81 = 0x800000000LL;
    v85 = v70;
    v82[4] = 0;
    v86 = a7;
    v79 = 0;
    v83 = 0;
    sub_B85890(&v87, v70);
    v89 = 0x101010000LL;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0(&v79);
    v23 = sub_16A2930(*a1, (__int64)&v75, 0, v20, v21, v22);
    v24 = v23;
    if ( !v23 || (unsigned __int8)sub_169F990(*a1, (__int64)&v75, v23) )
    {
LABEL_5:
      v25 = 0;
LABEL_6:
      sub_169D230((__int64)&v79);
      goto LABEL_7;
    }
    v27 = *a1;
    LOBYTE(v68) = 0;
    sub_1A48440(v27, &v79, v24, 0);
    v28 = 0;
    if ( (_DWORD)v79 == 2 )
    {
      v43 = *v80 & 0xFFFFFFFFFFFFFFF8LL;
      v44 = *(_BYTE *)(v43 + 28) & 0x7F;
      v45 = v44;
      if ( (unsigned int)v44 - 53 <= 1 || ((v44 + 52) & 0x7Fu) <= 1 )
      {
        v46 = sub_B72ED0(*v80 & 0xFFFFFFFFFFFFFFF8LL);
        v28 = v68;
        v43 = v46;
        v45 = *(_BYTE *)(v46 + 28) & 0x7F;
      }
      v29 = *a1;
      v30 = v70;
      if ( (unsigned int)(v45 - 58) <= 4 )
      {
        if ( sub_17B1BF0(v29, v43, v72, 0, a7, v70) )
        {
          v50 = *(_QWORD *)(v43 + 48);
          v51 = *(_QWORD *)(*a1 + 248);
          if ( v50 )
          {
            v52 = v50 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v52 = sub_A7AA70(v51, v43, v47, 0, v48, v49);
            v51 = *(_QWORD *)(*a1 + 248);
          }
          v25 = sub_A76250(v51, a2, v71.m128i_i64[0], v52, 0);
          goto LABEL_6;
        }
        sub_168B9F0((__int64)&v90, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
        sub_17AE460((__int64)&v90, &v70);
        sub_15F7200(&v90);
        sub_168B9F0((__int64)&v90, (__int64 *)(*a1 + 8), *(_DWORD *)(v43 + 24), 0x73u, 0);
        sub_15F7200(&v90);
        goto LABEL_5;
      }
    }
    else
    {
      v25 = 0;
      if ( (_DWORD)v79 == 5 )
        goto LABEL_6;
      v29 = *a1;
      v30 = v70;
    }
    LOBYTE(v68) = v28;
    sub_18BBF60((__int64)&v90, v29, v30, a7, 1);
    sub_1A48440(*a1, &v90, v24, 0);
    if ( (unsigned int)(v90 - 2) > 2 )
    {
      sub_168B9F0((__int64)v78, (__int64 *)(*a1 + 8), a7, 0x10EAu, 0);
      v35 = sub_18FF820((__int64)v78, (int *)&v72);
      v36 = sub_17AE460(v35, &v70);
      v37 = v68;
      v38 = v36;
      if ( *(_BYTE *)(v36 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v36 + 32), v24, 0xCu);
        v37 = v68;
      }
      else if ( *(_BYTE *)(v36 + 132) )
      {
        v53 = sub_168B9E0((_QWORD *)v36);
        v56 = (unsigned __int8)v68;
        v57 = v53;
        v58 = *(__int64 **)(v38 + 16);
        if ( v58 )
        {
          v59 = *v58;
          v69 = v57;
          v58 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, __int64, _QWORD))(v59 + 32))(
                             v58,
                             &v70,
                             v59,
                             v57,
                             v55,
                             (unsigned __int8)v68);
          v57 = v69;
          v56 = (unsigned __int8)v68;
        }
        LOBYTE(v68) = v56;
        v74.m128_u64[0] = (unsigned __int64)v58;
        v60 = sub_1587BC0(v57, (__int64 *)&v74, v54, v57, v55, v56);
        sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * *(unsigned int *)(v38 + 128) + 8), v24, 0xCu);
        v37 = v68;
      }
      LOBYTE(v68) = v37;
      v39 = sub_E90530(v71.m128i_i64) >> 32;
      v40 = 0;
      if ( v71.m128i_i64[0] )
      {
        v74 = (__m128)_mm_load_si128(&v71);
        v41 = v68;
        v42 = *(_QWORD *)(v71.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v42 )
        {
          v68 = v74.m128_u64[1];
          v74 = _mm_loadh_ps((const double *)&v68);
          while ( (*(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
            v41 = 1;
            v42 = *(_QWORD *)(v42 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          }
          if ( v41 )
            v74.m128_u64[0] = v42;
        }
        v40 = sub_E90530((__int64 *)&v74);
      }
      v74.m128_u64[0] = __PAIR64__(v39, v40);
      sub_1587DB0(v38, (__int64 *)&v74);
      sub_15F7200(v78);
    }
    else
    {
      v31 = *a1;
      v73 = *v91 & 0xFFFFFFFFFFFFFFF8LL;
      v32 = sub_17A62A0(v31, v73, v72);
      sub_168B9F0((__int64)v78, (__int64 *)(*a1 + 8), a7, 0x13D4u, 0);
      v33 = sub_17BA610((__int64)v78, (__int64 *)&v73);
      v34 = v33;
      if ( *(_BYTE *)(v33 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v33 + 32), v32, 2u);
      }
      else if ( *(_BYTE *)(v33 + 132) )
      {
        v61 = sub_168B9E0((_QWORD *)v33);
        v65 = *(__int64 **)(v34 + 16);
        if ( v65 )
        {
          v66 = *v65;
          v68 = v61;
          v65 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *))(v66 + 32))(v65);
          v61 = v68;
        }
        v74.m128_u64[0] = (unsigned __int64)v65;
        v67 = sub_1587BC0(v61, (__int64 *)&v74, v61, v62, v63, v64);
        sub_AE9DF0((unsigned __int8 **)(*v67 + 32LL * *(unsigned int *)(v34 + 128) + 8), v32, 2u);
      }
      sub_18FF820(v34, (int *)&v72);
      sub_15F7200(v78);
      sub_168B9F0((__int64)v78, (__int64 *)(*a1 + 8), *(_DWORD *)(v73 + 24), 0x67u, 0);
      sub_15F7200(v78);
    }
    v25 = 0;
    sub_169D230((__int64)&v90);
    goto LABEL_6;
  }
  v25 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v71.m128i_i64[0], v70);
LABEL_7:
  if ( HIDWORD(ptr[1]) )
    goto LABEL_10;
  return v25;
}
