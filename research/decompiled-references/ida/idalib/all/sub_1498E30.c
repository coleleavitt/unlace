__int64 __fastcall sub_1498E30(
        const __m128i *a1,
        __int64 *a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbp
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int8 v14; // al
  __int16 v15; // ax
  __int64 *m128i_i64; // rsi
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int16 v22; // ax
  unsigned __int32 v23; // r14d
  __int64 v24; // rdi
  __int64 v25; // r13
  unsigned __int64 v26; // r13
  char v27; // r14
  __int64 result; // rax
  __int64 *v29; // rdi
  __int64 v30; // r9
  __int64 v31; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  void *v38; // rdi
  __int64 *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 *v42; // rdi
  unsigned __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // [rsp-10h] [rbp-258h]
  unsigned __int64 v50; // [rsp-8h] [rbp-250h]
  bool v51; // [rsp+Fh] [rbp-239h]
  __m128i *v52; // [rsp+10h] [rbp-238h] BYREF
  __int8 v53; // [rsp+18h] [rbp-230h]
  const __m128i *v54; // [rsp+20h] [rbp-228h]
  int v55; // [rsp+28h] [rbp-220h]
  __int16 v56; // [rsp+2Ch] [rbp-21Ch]
  __int64 (__fastcall *v57)(__int64); // [rsp+30h] [rbp-218h]
  __int64 v58; // [rsp+38h] [rbp-210h]
  __int64 v59; // [rsp+40h] [rbp-208h]
  __int128 v60; // [rsp+50h] [rbp-1F8h] BYREF
  __int64 v61; // [rsp+60h] [rbp-1E8h]
  void *ptr[2]; // [rsp+68h] [rbp-1E0h] BYREF
  __int8 *v63; // [rsp+78h] [rbp-1D0h] BYREF
  _QWORD *v64; // [rsp+80h] [rbp-1C8h]
  __int64 v65; // [rsp+88h] [rbp-1C0h]
  _QWORD v66[10]; // [rsp+90h] [rbp-1B8h] BYREF
  int v67; // [rsp+E0h] [rbp-168h] BYREF
  __int64 v68; // [rsp+E4h] [rbp-164h]
  __int64 v69; // [rsp+F0h] [rbp-158h]
  void *v70; // [rsp+F8h] [rbp-150h]
  __int64 v71; // [rsp+100h] [rbp-148h] BYREF
  void *v72[2]; // [rsp+108h] [rbp-140h] BYREF
  char v73; // [rsp+118h] [rbp-130h] BYREF
  unsigned __int64 v74; // [rsp+120h] [rbp-128h]
  __int64 v75; // [rsp+128h] [rbp-120h] BYREF
  void *v76; // [rsp+130h] [rbp-118h]
  __int64 v77; // [rsp+140h] [rbp-108h] BYREF
  void *v78; // [rsp+160h] [rbp-E8h]
  int v79; // [rsp+16Ch] [rbp-DCh]

  v9 = (__int64)a2;
  v10 = a1->m128i_i64[1];
  v11 = *(_QWORD *)(v10 + 2944);
  if ( v11 >= *(unsigned int *)(v10 + 2912) )
  {
    a2 = (_QWORD *)(&dword_0 + 1);
    v13 = sub_14180A0(v10, 1u);
  }
  else
  {
    v12 = 3 * v11;
    v13 = *(_QWORD *)(v10 + 2904) + 24 * v11;
  }
  if ( *(_WORD *)(v13 + 16) != 20 || (result = sub_147CB40((__int64)a1), !(_BYTE)result) )
  {
    v54 = a1;
    v52 = (__m128i *)&a1[122];
    v14 = a1[122].m128i_i8[0];
    v55 = 1376276;
    v53 = v14;
    v57 = sub_14789E0;
    v15 = a1[2].m128i_i16[0];
    a1[122].m128i_i8[0] = 1;
    v56 = 63;
    v58 = 0;
    v59 = 0;
    if ( v15 == 20 )
    {
      if ( (unsigned int)a1[5].m128i_u16[5] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
        sub_1568800(&v52);
      else
        LODWORD(v59) = sub_14789E0((__int64)a1);
      v15 = a1[2].m128i_i16[0];
    }
    if ( v15 == 21 )
    {
      sub_14808E0((__int64)&v52, a2, v12, a6, a7, a8);
      *((_QWORD *)&v60 + 1) = ptr;
      v63 = &a1[31].m128i_i8[8];
      *(_QWORD *)&v60 = 0;
      v61 = 0x200000000LL;
      v64 = v66;
      v65 = 0x200000000LL;
      sub_1477F50((__int64)a1, (__int64)&v60);
      v69 = 0;
      v71 = 0x200000000LL;
      v70 = v72;
      v67 = 2;
      v68 = v59;
      v73 &= 0x80u;
      v74 = 0;
      sub_1497E40(v9, (unsigned __int64)&v67, (__int64)&v60, SHIDWORD(v59));
      v38 = v70;
      if ( v70 == v72 )
        goto LABEL_57;
    }
    else
    {
      if ( v15 != 7 )
        goto LABEL_7;
      v34 = a1->m128i_i64[1];
      v35 = *(_QWORD *)(v34 + 2944);
      if ( v35 >= *(unsigned int *)(v34 + 2912) )
        v36 = sub_14180A0(v34, 1u);
      else
        v36 = *(_QWORD *)(v34 + 2904) + 24 * v35;
      if ( *(_WORD *)(v36 + 16) != 21 )
      {
        v15 = a1[2].m128i_i16[0];
LABEL_7:
        if ( v15 == 3 )
        {
          v32 = a1->m128i_i64[1];
          if ( *(_QWORD *)(v32 + 760) )
          {
            *(_BYTE *)(v32 + 968) = 1;
            *(_BYTE *)(*(_QWORD *)(v32 + 48) + 6LL) = 1;
          }
          v33 = a1[6].m128i_i64[0];
          a1[2].m128i_i16[0] = 1;
          sub_172D940(*(_QWORD *)(v33 + 656), *(_QWORD *)(v33 + 608));
          goto LABEL_28;
        }
        if ( v15 == 102 )
        {
          v29 = (__int64 *)a1->m128i_i64[1];
          a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
          sub_14634E0(v29, a1[1].m128i_i32);
          v23 = a1[2].m128i_u32[2];
          sub_147A4A0((__int64)&v67, (__int64)&a1[31].m128i_i64[1]);
          m128i_i64 = (__int64 *)&v67;
          sub_14906F0(a1, &v67, 4, 1, 0, a3, a4, v30, nullptr, 0);
          v20 = v49;
          if ( v23 )
            goto LABEL_37;
        }
        else
        {
          sub_147A4A0((__int64)&v67, (__int64)&a1[31].m128i_i64[1]);
          m128i_i64 = (__int64 *)&v67;
          sub_14906F0(a1, &v67, 4, 1, 0, a3, a4, v17, nullptr, 0);
          v21 = v50;
        }
        v22 = a1[2].m128i_i16[0];
        v23 = 0;
        if ( v22 != 102 )
          goto LABEL_11;
        v39 = (__int64 *)a1->m128i_i64[1];
        m128i_i64 = a1[1].m128i_i64;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0(v39, a1[1].m128i_i32);
        v23 = a1[2].m128i_u32[2];
LABEL_37:
        v22 = a1[2].m128i_i16[0];
LABEL_11:
        if ( v22 != 31 )
        {
LABEL_12:
          if ( v22 == 21 )
          {
            if ( v23 )
            {
              v40 = v23;
              m128i_i64 = (__int64 *)a1;
              v26 = 0;
              v27 = 0;
              sub_1564820(&v60, a1, v40, 1927);
              sub_AEA040((__int64)&v60);
              v51 = 0;
            }
            else
            {
              v26 = 0;
              v51 = 0;
              v27 = 0;
            }
            goto LABEL_18;
          }
          v24 = a1->m128i_i64[1];
          goto LABEL_14;
        }
        v24 = a1->m128i_i64[1];
        v37 = *(_QWORD *)(v24 + 2944);
        v21 = *(unsigned int *)(v24 + 2912);
        if ( v37 >= v21 )
        {
          m128i_i64 = (_QWORD *)(&dword_0 + 1);
          if ( *(_WORD *)(sub_14180A0(v24, 1u) + 16) != 21 )
          {
            v22 = a1[2].m128i_i16[0];
            goto LABEL_12;
          }
          v24 = a1->m128i_i64[1];
        }
        else if ( *(_WORD *)(*(_QWORD *)(v24 + 2904) + 24 * v37 + 16) != 21 )
        {
LABEL_14:
          if ( (*(_BYTE *)(*(_QWORD *)(v24 + 56) + 1LL) & 8) != 0 )
          {
            v25 = sub_14C4D40(a1, m128i_i64, v21);
          }
          else
          {
            v31 = a1[6].m128i_i64[0];
            sub_18C74E0(v31, 4, 0, 4);
            m128i_i64 = nullptr;
            v25 = sub_14BDAD0(a1, 0);
            sub_190D5E0(v31);
          }
          if ( v25 != 1 )
          {
            v51 = v23 != 0;
            v26 = v25 & 0xFFFFFFFFFFFFFFFELL;
            v27 = 0;
LABEL_18:
            sub_14808E0((__int64)&v52, m128i_i64, v21, v18, v19, v20);
            if ( (unsigned __int16)(a1[2].m128i_i16[0] - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
              sub_14AB020(a1, &v71);
            *(_QWORD *)((char *)&v60 + 4) = v59;
            ptr[0] = &v63;
            ptr[1] = (void *)0x200000000LL;
            v61 = 0;
            LODWORD(v60) = 2;
            v66[0] = v26;
            LOBYTE(v65) = (32 * v51) & 0xBF | (HIBYTE(v67) >> 2) & 0x1F | v65 & 0x80 | (v27 << 6);
            sub_1497E40(v9, (unsigned __int64)&v60, (__int64)&v71, SHIDWORD(v59));
            if ( ptr[0] != &v63 )
              free(ptr[0]);
            if ( v79 )
              free(v78);
            sub_15DCED0(v75, &v75);
            if ( v76 != &v77 )
              free(v76);
            if ( v72[0] != &v73 )
              free(v72[0]);
            goto LABEL_28;
          }
          *(_BYTE *)(v9 + 720) |= 1u;
          LOWORD(v60) = 21;
          sub_15680D0(a1, &v60, 1, 1);
          sub_147A5F0((__int64)&v67);
LABEL_28:
          result = (__int64)v52;
          v52->m128i_i8[0] = v53;
          return result;
        }
        m128i_i64 = a1[1].m128i_i64;
        a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
        sub_14634E0((__int64 *)v24, a1[1].m128i_i32);
        if ( v23 )
        {
          v48 = v23;
          m128i_i64 = (__int64 *)a1;
          v26 = 0;
          v27 = 1;
          sub_1564820(&v60, a1, v48, 1928);
          sub_AEA040((__int64)&v60);
          v51 = 0;
        }
        else
        {
          v26 = 0;
          v51 = 0;
          v27 = 1;
        }
        goto LABEL_18;
      }
      v41 = sub_18F1880(a1[6].m128i_i64[0], &a1[1], *(_QWORD *)(a1[6].m128i_i64[0] + 608));
      v42 = (__int64 *)a1->m128i_i64[1];
      v43 = v41 & 0xFFFFFFFFFFFFFFFELL;
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v42, a1[1].m128i_i32);
      sub_14808E0((__int64)&v52, a1[1].m128i_i64, v44, v45, v46, v47);
      *((_QWORD *)&v60 + 1) = ptr;
      v63 = &a1[31].m128i_i8[8];
      *(_QWORD *)&v60 = 0;
      v61 = 0x200000000LL;
      v64 = v66;
      v65 = 0x200000000LL;
      sub_1477F50((__int64)a1, (__int64)&v60);
      v69 = 0;
      v71 = 0x200000000LL;
      v70 = v72;
      v67 = 2;
      v68 = v59;
      v73 &= 0x80u;
      v74 = v43;
      sub_1497E40(v9, (unsigned __int64)&v67, (__int64)&v60, SHIDWORD(v59));
      v38 = v70;
      if ( v70 == v72 )
      {
LABEL_57:
        sub_147A450(&v60);
        goto LABEL_28;
      }
    }
    free(v38);
    goto LABEL_57;
  }
  return result;
}
