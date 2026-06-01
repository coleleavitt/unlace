__int64 __fastcall sub_C0E860(__int64 a1, __int64 a2, void ***a3)
{
  __int64 v6; // rsi
  __m128 v7; // xmm1
  void **v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm2
  __m128i v11; // xmm1
  __m128i v12; // xmm0
  bool v13; // zf
  _DWORD *v14; // rdx
  void **v15; // rsi
  void **v16; // rdi
  void **v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rdi
  void *v20; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rdi
  bool v27; // al
  __int64 v28; // rdi
  int v29; // r12d
  __int64 v30; // rax
  void **v31; // rcx
  void *v32; // rbx
  void *v33; // rbx
  int v34; // eax
  __int64 v35; // rsi
  int v36; // eax
  void *v37; // rdi
  int v38; // eax
  bool v39; // bl
  void *v40; // r12
  int v41; // eax
  void **v42; // [rsp+8h] [rbp-160h] BYREF
  __m128i v43; // [rsp+10h] [rbp-158h] BYREF
  __m128i v44; // [rsp+20h] [rbp-148h] BYREF
  __m128 v45; // [rsp+30h] [rbp-138h] BYREF
  void **v46; // [rsp+40h] [rbp-128h] BYREF
  __int64 *v47; // [rsp+48h] [rbp-120h]
  __int64 *v48; // [rsp+50h] [rbp-118h]
  __int64 v49; // [rsp+58h] [rbp-110h]
  int v50; // [rsp+60h] [rbp-108h] BYREF
  int v51; // [rsp+64h] [rbp-104h] BYREF
  __int64 v52; // [rsp+68h] [rbp-100h] BYREF
  __int64 v53; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+78h] [rbp-F0h]
  _BYTE v55[32]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v56[2]; // [rsp+A0h] [rbp-C8h] BYREF
  _QWORD v57[2]; // [rsp+B0h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v59; // [rsp+C8h] [rbp-A0h]
  __int64 v60; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v61; // [rsp+D8h] [rbp-90h]
  _OWORD v62[3]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+110h] [rbp-58h]
  void ***v64; // [rsp+118h] [rbp-50h]
  __int64 v65; // [rsp+120h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 16);
  v46 = (void **)&v50;
  v42 = (void **)&v52;
  v7 = _mm_loadh_ps((const double *)&v42);
  v45 = _mm_loadh_ps((const double *)&v46);
  v44 = (__m128i)v7;
  v43 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v56, (__m128i)(unsigned __int64)&v53);
  sub_16744A0(v55, v6);
  v8 = *(void ***)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  v56[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&v45);
  v11 = _mm_load_si128(&v44);
  v57[0] = 1;
  v12 = _mm_load_si128(&v43);
  v13 = *((_WORD *)v8 + 2) == 0;
  v56[1] = 0;
  v57[1] = 0;
  v53 = 0;
  v54 = v9;
  v63 = a1;
  v64 = a3;
  v65 = a2;
  v62[0] = si128;
  v62[1] = v11;
  v62[2] = v12;
  if ( !v13 )
    goto LABEL_4;
  v14 = *((_DWORD **)v8[2] + 3);
  if ( !v14 || *v14 || v14[1] != 2 || *((_DWORD *)v8 + 6) != 2 )
    goto LABEL_4;
  v22 = (__int64)v8[4];
  v23 = (__int64)v8[5];
  v44.m128i_i64[0] = v22;
  v43.m128i_i64[0] = v23;
  if ( (unsigned __int8)sub_1674350(v55, v22, v46, &v51, v42) && v50 )
  {
    v45.m128_i32[0] = v51 + 1;
    v24 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v52) + 24) + 8LL);
    if ( *(_BYTE *)(v24 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    if ( v45.m128_i32[0] == *(_DWORD *)v24 && (unsigned __int8)sub_1673C40(v55, v43.m128i_i64[0], v56) )
    {
      v58 = 0;
      v59 = 0;
      v45.m128_u64[0] = (unsigned __int64)&qword_1C7F2C0;
      v60 = 1;
      v61 = 0;
      v47 = &v60;
      sub_182CBA0(qword_1C7F2C0, &v60);
      v25 = (__int64 *)v45.m128_u64[0];
      BYTE4(v60) &= ~1u;
      LODWORD(v60) = 1;
      v26 = *(__int64 **)v45.m128_u64[0];
      if ( (v56[0] & 0x100000000LL) != 0 || (v58 & 0x100000000LL) != 0 )
      {
        v49 = v45.m128_u64[0];
        v45.m128_u64[0] = (unsigned __int64)&v58;
        v48 = v26;
        v34 = sub_182C7B0(v26, v56, &v58);
        v26 = v48;
        v25 = (__int64 *)v49;
        if ( !v34 )
          goto LABEL_27;
      }
      else
      {
        v45.m128_u64[0] = (unsigned __int64)&v58;
        if ( LODWORD(v56[0]) == (_DWORD)v58 )
        {
LABEL_27:
          if ( (v57[0] & 0x100000000LL) != 0 || (v60 & 0x100000000LL) != 0 )
          {
            v48 = v25;
            v36 = sub_182C7B0(v26, v57, v47);
            v25 = v48;
            v27 = v36 == 0;
          }
          else
          {
            v27 = LODWORD(v57[0]) == (_DWORD)v60;
          }
          v28 = *v25;
          if ( v27 )
          {
            v46 = (void **)v25;
            v42 = (void **)v28;
            sub_182CBA0(v28, v45.m128_u64[0]);
            sub_182CBA0(v42, v47);
            sub_C0E710((__int64 *)v62, v43.m128i_i64[0]);
            v17 = v46;
            goto LABEL_9;
          }
          goto LABEL_41;
        }
      }
      v28 = *v25;
LABEL_41:
      v35 = v45.m128_u64[0];
      v45.m128_u64[0] = v28;
      sub_182CBA0(v28, v35);
      sub_182CBA0(v45.m128_u64[0], v47);
    }
  }
  if ( (unsigned __int8)sub_1674350(v55, v43.m128i_i64[0], v46, &v51, v42) && v50 )
  {
    v29 = v51 + 1;
    v30 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(v52) + 24) + 8LL);
    if ( *(_BYTE *)(v30 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    if ( v29 == *(_DWORD *)v30 && (unsigned __int8)sub_1673C40(v55, v44.m128i_i64[0], v56) )
    {
      v60 = 1;
      v58 = 0;
      v59 = 0;
      v42 = &qword_1C7F2C0;
      v61 = 0;
      v47 = &v60;
      sub_182CBA0(qword_1C7F2C0, &v60);
      v31 = v42;
      BYTE4(v60) &= ~1u;
      LODWORD(v60) = 1;
      v32 = *v42;
      if ( (v56[0] & 0x100000000LL) != 0 || (v58 & 0x100000000LL) != 0 )
      {
        v37 = *v42;
        v45.m128_u64[0] = (unsigned __int64)&v58;
        v38 = sub_182C7B0(v37, v56, &v58);
        v31 = v42;
        if ( v38 )
          goto LABEL_38;
      }
      else
      {
        v45.m128_u64[0] = (unsigned __int64)&v58;
        if ( LODWORD(v56[0]) != (_DWORD)v58 )
        {
LABEL_38:
          v33 = *v31;
          sub_182CBA0(*v31, v45.m128_u64[0]);
          sub_182CBA0(v33, v47);
          goto LABEL_18;
        }
      }
      if ( (v57[0] & 0x100000000LL) != 0 || (v60 & 0x100000000LL) != 0 )
      {
        v42 = v31;
        v41 = sub_182C7B0(v32, v57, v47);
        v31 = v42;
        v39 = v41 == 0;
      }
      else
      {
        v39 = LODWORD(v57[0]) == (_DWORD)v60;
      }
      v40 = *v31;
      v42 = v31;
      sub_182CBA0(v40, v45.m128_u64[0]);
      sub_182CBA0(v40, v47);
      if ( v39 )
      {
        sub_C0E710((__int64 *)v62, v44.m128i_i64[0]);
        v17 = v42;
        goto LABEL_9;
      }
    }
  }
LABEL_18:
  v8 = *(void ***)(a2 + 8);
  if ( v8 )
LABEL_4:
    ++*((_DWORD *)v8 + 2);
  v15 = *a3;
  if ( *a3 )
  {
    v16 = a3[1];
    v13 = (*((_DWORD *)v15 + 2))-- == 1;
    if ( v13 )
    {
      v42 = v8;
      sub_15D7BC0(v16, v15);
      v8 = v42;
    }
  }
  *a3 = v8;
  sub_14EA2A0(a1 + 32, v8, a3);
  v17 = &qword_1C7F2C0;
LABEL_9:
  v18 = v53;
  if ( v53 )
  {
    v19 = v54;
    v13 = (*(_DWORD *)(v53 + 8))-- == 1;
    if ( v13 )
    {
      v42 = v17;
      sub_15D7BC0(v19, v18);
      v17 = v42;
    }
  }
  v20 = *v17;
  sub_182CBA0(*v17, v56);
  return sub_182CBA0(v20, v57);
}

