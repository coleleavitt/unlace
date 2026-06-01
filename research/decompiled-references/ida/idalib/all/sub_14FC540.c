__int64 __fastcall sub_14FC540(const __m128i *a1, unsigned int a2, __int64 a3, __m128i a4, __m128 a5)
{
  int *m128i_i32; // rbx
  __int32 v8; // eax
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int16 v12; // r13
  char v13; // al
  __int64 *v14; // rdi
  __int16 v15; // ax
  __int64 v16; // r9
  __int64 *v17; // r8
  __int64 *v18; // r12
  __int16 v19; // ax
  void **v20; // r13
  __m128i v21; // xmm0
  __int64 *v22; // rdi
  unsigned __int16 v23; // r13
  char v24; // al
  __int64 *v25; // r8
  __int32 v26; // eax
  __int64 *v27; // rdi
  __int64 v28; // rax
  unsigned int *v29; // rax
  __int64 v30; // rcx
  void **v31; // r9
  signed __int64 v32; // r10
  void **v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int16 v36; // ax
  __int64 *v37; // rdi
  __int64 v38; // rdx
  __int32 v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r10d
  void **v44; // [rsp+8h] [rbp-210h] BYREF
  __int64 *v45; // [rsp+10h] [rbp-208h]
  __int64 *v46; // [rsp+18h] [rbp-200h]
  __int64 *v47; // [rsp+20h] [rbp-1F8h]
  void **v48; // [rsp+28h] [rbp-1F0h]
  void **v49; // [rsp+30h] [rbp-1E8h]
  void **v50; // [rsp+38h] [rbp-1E0h]
  __int64 v51; // [rsp+40h] [rbp-1D8h]
  signed __int64 v52; // [rsp+48h] [rbp-1D0h]
  unsigned int v53; // [rsp+54h] [rbp-1C4h] BYREF
  __int64 v54; // [rsp+58h] [rbp-1C0h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-1B8h] BYREF
  _QWORD v56[8]; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned __int64 v57; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-160h]
  void *v59[2]; // [rsp+C8h] [rbp-150h] BYREF
  _QWORD v60[2]; // [rsp+D8h] [rbp-140h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-130h]
  __int64 v62; // [rsp+F0h] [rbp-128h] BYREF
  void *v63; // [rsp+100h] [rbp-118h] BYREF
  __int64 v64; // [rsp+108h] [rbp-110h]
  __int64 v65; // [rsp+110h] [rbp-108h] BYREF
  _QWORD v66[5]; // [rsp+118h] [rbp-100h] BYREF
  __int64 v67; // [rsp+140h] [rbp-D8h] BYREF
  void *v68[2]; // [rsp+150h] [rbp-C8h] BYREF
  char v69; // [rsp+160h] [rbp-B8h] BYREF
  __int64 *v70; // [rsp+168h] [rbp-B0h]
  __int64 v71; // [rsp+170h] [rbp-A8h]
  __int64 v72; // [rsp+178h] [rbp-A0h] BYREF
  char v73; // [rsp+1B8h] [rbp-60h]

  m128i_i32 = a1[1].m128i_i32;
  sub_14FAB60((__int64)a1, a2);
  v8 = a1[1].m128i_i32[0];
  v9 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = v8;
  sub_14634E0(v9, m128i_i32);
  if ( a1[2].m128i_i16[0] == 3 )
  {
    v10 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v10 + 760) )
    {
      *(_BYTE *)(v10 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v10 + 48) + 6LL) = 1;
    }
    a1[2].m128i_i16[0] = 1;
    sub_1719C00(*(_QWORD *)(a1[6].m128i_i64[0] + 656), *(_QWORD *)(a1[6].m128i_i64[0] + 608));
    return 0;
  }
  sub_14F4710(a1, 6, a4, a5);
  if ( (unsigned __int8)sub_15648A0(a1) )
    return 0;
  v12 = a1[2].m128i_u16[0];
  v13 = sub_141A630(v12);
  if ( v12 == 1 || v13 )
    v44 = nullptr;
  else
    v44 = (void **)a1[1].m128i_i64[1];
  v14 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v14, m128i_i32);
  LODWORD(v45) = a1[2].m128i_i32[2];
  v15 = a1[2].m128i_i16[0];
  if ( v15 == 47 )
  {
    v38 = a1[6].m128i_i64[0];
    LODWORD(v54) = 0;
    v68[0] = &v69;
    v53 = 0;
    v68[1] = (void *)0x800000000LL;
    LODWORD(v46) = a1[1].m128i_i32[0];
    a4 = (__m128i)_mm_loadh_ps((const double *)(v38 + 608));
    v56[0] = 0;
    *(__m128i *)ptr = a4;
    if ( sub_14F4830((__int64)a1, (__int64)ptr, &v53, (__int64)v68, &v54, 1, *(double *)a4.m128i_i64, a5) )
    {
      sub_1564820(&v63, a1, (unsigned int)v46, 1766);
      v39 = a1[2].m128i_i32[2];
      LOBYTE(v58) = 1;
      v57 = __PAIR64__(v39, (unsigned int)v46);
      sub_AEC610((__int64 *)&v63, (__int64 *)&v57);
      sub_AEA040((__int64)&v63);
    }
    else if ( v53 )
    {
      v46 = (__int64 *)&v63;
      sub_1564820(&v63, a1, v53, 1914);
      *(_QWORD *)((char *)&v58 + 4) = 0;
      BYTE12(v58) = 0;
      v59[0] = v60;
      v59[1] = nullptr;
      LOBYTE(v60[0]) = 0;
      LOBYTE(v61) = 0;
      v57 = __PAIR64__(v54, v53);
      LOBYTE(v58) = 1;
      if ( v53 )
      {
        if ( (_DWORD)v54 )
        {
          sub_14FA6F0(v46, (unsigned __int64)&v57);
          if ( v59[0] != v60 )
            operator delete(v59[0]);
        }
      }
      sub_AEA040((__int64)v46);
    }
    if ( v56[0] )
      sub_1894E40(*((_QWORD *)ptr[0] + 92), ptr[1]);
    if ( v68[0] != &v69 )
      free(v68[0]);
    v15 = a1[2].m128i_i16[0];
  }
  if ( v15 == 22 )
  {
    sub_146A990((__int64)a1);
    v36 = a1[2].m128i_i16[0];
    if ( v36 == 3 )
    {
      v40 = a1->m128i_i64[1];
      if ( *(_QWORD *)(v40 + 760) )
      {
        *(_BYTE *)(v40 + 968) = 1;
        *(_BYTE *)(*(_QWORD *)(v40 + 48) + 6LL) = 1;
      }
      v41 = a1[6].m128i_i64[0];
      v42 = (unsigned int)v45;
      a1[2].m128i_i16[0] = 1;
      sub_1718F80(*(_QWORD *)(v41 + 656), *(_QWORD *)(v41 + 608), v44, v42);
      return 0;
    }
    if ( v36 != 5 )
    {
      sub_1564840(v68, a1, m128i_i32, 14);
      sub_AE9DF0((unsigned __int8 **)v68, 5, 4u);
      sub_AEA040((__int64)v68);
      return 0;
    }
    v37 = (__int64 *)a1->m128i_i64[1];
    v46 = (__int64 *)a1[1].m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v37, m128i_i32);
    if ( a1[2].m128i_i16[0] != 23 )
    {
      sub_1564840(v68, a1, m128i_i32, 14);
      sub_AE9DF0((unsigned __int8 **)v68, 23, 4u);
      sub_AEA040((__int64)v68);
      LOWORD(v68[0]) = 23;
      sub_15680D0(a1, v68, 1, 0);
      return 0;
    }
    LODWORD(v47) = a1[2].m128i_i32[2];
    sub_146A990((__int64)a1);
    v43 = (int)v47;
    if ( a1[2].m128i_i16[0] == 47 )
    {
      v20 = v68;
      sub_1564840(v68, a1, m128i_i32, 1914);
      sub_AEA040((__int64)v68);
      v68[0] = &v69;
      v68[1] = (void *)0x400000000LL;
      v64 = 0x400000000LL;
      LODWORD(ptr[0]) = 0;
      LODWORD(v57) = 0;
      v63 = &v65;
      sub_14F5A70((__int64)a1, (__int64)v68, (__int64)&v63, 0, 0, ptr, (__int64)&v57, 1u);
      v43 = (int)v47;
      if ( v63 != &v65 )
      {
        free(v63);
        v43 = (int)v47;
      }
      if ( v68[0] != &v69 )
      {
        LODWORD(v47) = v43;
        free(v68[0]);
        v43 = (int)v47;
      }
    }
    else
    {
      v20 = v68;
    }
    v18 = (__int64 *)sub_18A48D0(
                       *(_QWORD *)(a1[6].m128i_i64[0] + 736),
                       a2,
                       (_DWORD)v44,
                       (_DWORD)v45,
                       (_DWORD)v46,
                       v43,
                       a3);
    v19 = a1[2].m128i_i16[0];
    goto LABEL_15;
  }
  v16 = 0;
  v17 = nullptr;
  if ( v15 == 62 )
  {
    v22 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v22, m128i_i32);
    if ( !(unsigned __int8)sub_15648A0(a1) )
    {
      v23 = a1[2].m128i_u16[0];
      v24 = sub_141A630(v23);
      if ( v23 == 1 || v24 )
        v25 = nullptr;
      else
        v25 = (__int64 *)a1[1].m128i_i64[1];
      v26 = a1[1].m128i_i32[0];
      v27 = (__int64 *)a1->m128i_i64[1];
      v46 = v25;
      a1[2].m128i_i32[2] = v26;
      sub_14634E0(v27, m128i_i32);
      v16 = a1[2].m128i_u32[2];
      v17 = v46;
      goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v18 = (__int64 *)sub_18A4D10(*(_QWORD *)(a1[6].m128i_i64[0] + 736), a2, v44, (unsigned int)v45, v17, v16, a3);
  v19 = a1[2].m128i_i16[0];
  if ( v19 == 24 )
  {
    sub_14FAF70(a1, v18, 8, a2, a4, a5);
    v19 = a1[2].m128i_i16[0];
    v20 = v68;
  }
  else
  {
    v20 = v68;
    if ( v19 == 47 )
    {
      sub_1564840(v68, a1, m128i_i32, 1914);
      sub_AEA040((__int64)v68);
      v68[0] = &v69;
      v68[1] = (void *)0x400000000LL;
      v64 = 0x400000000LL;
      LODWORD(ptr[0]) = 0;
      LODWORD(v57) = 0;
      v63 = &v65;
      sub_14F5A70((__int64)a1, (__int64)v68, (__int64)&v63, 0, 0, ptr, (__int64)&v57, 1u);
      if ( v63 != &v65 )
        free(v63);
      if ( v68[0] != &v69 )
        free(v68[0]);
      v19 = a1[2].m128i_i16[0];
    }
  }
LABEL_15:
  v44 = (void **)v18;
  ptr[0] = v56;
  ptr[1] = (void *)0x800000000LL;
  v21 = (__m128i)_mm_loadh_ps((const double *)&v44);
  v69 = 0;
  *(__m128i *)v68 = v21;
  v70 = &v72;
  v71 = 0x800000000LL;
  a1[129].m128i_i64[1] = (__int64)v68;
  v73 = 0;
  if ( v19 == 1 || (unsigned __int16)(v19 - 456) <= 2u || v19 == 460 )
    goto LABEL_18;
  v45 = v18;
  v47 = &v54;
  v48 = ptr;
  v44 = v59;
  v46 = (__int64 *)v68;
  do
  {
    v57 = 0;
    *((_QWORD *)&v58 + 1) = 0x200000000LL;
    *(_QWORD *)&v58 = v44;
    v60[0] = (char *)a1 + 504;
    v60[1] = &v62;
    v61 = 0x200000000LL;
    if ( (unsigned __int16)(v19 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020((__int64)a1, (unsigned int *)&v57, v21, a5);
    v64 = (__int64)v66;
    v63 = nullptr;
    v65 = 0x200000000LL;
    v66[2] = (char *)a1 + 504;
    v66[3] = &v67;
    v66[4] = 0x200000000LL;
    v28 = sub_156E800(a1, &v57, &v63, 0);
    if ( v28 )
    {
      v54 = v28;
      if ( (v28 & 1) != 0 )
      {
        v29 = (unsigned int *)(v28 & 0xFFFFFFFFFFFFFFFELL);
        v30 = LODWORD(ptr[1]);
        v31 = (void **)&v29[2 * *v29 + 2];
        v32 = 8LL * *v29;
        v33 = (void **)(v29 + 2);
        v34 = v32 >> 3;
        v35 = LODWORD(ptr[1]) + (v32 >> 3);
        if ( v35 <= HIDWORD(ptr[1]) )
          goto LABEL_33;
      }
      else
      {
        v30 = LODWORD(ptr[1]);
        v34 = 1;
        v32 = 8;
        v35 = LODWORD(ptr[1]) + 1LL;
        if ( HIDWORD(ptr[1]) >= v35 )
        {
          v33 = (void **)v47;
          goto LABEL_67;
        }
        v31 = v48;
        v33 = (void **)v47;
      }
      v52 = v32;
      v51 = v34;
      v50 = v31;
      v49 = v33;
      sub_2237220(ptr, v56, v35, 8);
      v30 = LODWORD(ptr[1]);
      v32 = v52;
      v34 = v51;
      v31 = v50;
      v33 = v49;
LABEL_33:
      if ( v31 == v33 )
      {
LABEL_34:
        LODWORD(ptr[1]) = v34 + v30;
        goto LABEL_35;
      }
LABEL_67:
      v49 = (void **)v34;
      memcpy((char *)ptr[0] + 8 * v30, v33, v32);
      LODWORD(v30) = ptr[1];
      LODWORD(v34) = (_DWORD)v49;
      goto LABEL_34;
    }
LABEL_35:
    sub_147A450(&v63);
    sub_147A450(&v57);
    if ( v73 )
      break;
    v19 = a1[2].m128i_i16[0];
    if ( v19 == 1 )
      break;
  }
  while ( (unsigned __int16)(v19 - 456) > 2u && v19 != 460 );
  v18 = v45;
  v20 = (void **)v46;
LABEL_18:
  sub_14FC260((__int64)v20);
  result = sub_18951B0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v18, ptr[0], LODWORD(ptr[1]));
  if ( ptr[0] != v56 )
  {
    v44 = (void **)result;
    free(ptr[0]);
    return (__int64)v44;
  }
  return result;
}
