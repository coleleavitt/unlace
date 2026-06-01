__int64 __fastcall sub_870920(__int64 *a1, _BYTE *a2, __int64 a3, char a4)
{
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rsi
  __m128i v13; // xmm1
  unsigned int v14; // r12d
  void *v15; // rdi
  char *v16; // rbp
  char *v17; // rbx
  _QWORD **v18; // rbx
  _QWORD **v19; // rbp
  __int64 v20; // rsi
  char *v22; // r13
  char *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i v26; // rax
  _QWORD *v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  _QWORD *v32; // rdx
  unsigned __int64 v33; // rbx
  unsigned int v34; // eax
  const __m128i *v35; // rbp
  __int64 (__fastcall ***v36)(); // [rsp+8h] [rbp-590h] BYREF
  __m128i v37; // [rsp+10h] [rbp-588h] BYREF
  const __m128i *v38; // [rsp+20h] [rbp-578h] BYREF
  __int64 v39; // [rsp+28h] [rbp-570h]
  _OWORD *v40; // [rsp+30h] [rbp-568h]
  _BYTE *v41; // [rsp+38h] [rbp-560h]
  __m128i v42; // [rsp+40h] [rbp-558h] BYREF
  _BYTE *v43; // [rsp+50h] [rbp-548h]
  void **v44; // [rsp+58h] [rbp-540h]
  _QWORD v45[2]; // [rsp+60h] [rbp-538h] BYREF
  _QWORD *v46; // [rsp+70h] [rbp-528h]
  __int64 v47; // [rsp+78h] [rbp-520h]
  __m128i v48; // [rsp+80h] [rbp-518h] BYREF
  __int64 v49; // [rsp+90h] [rbp-508h]
  __int64 v50; // [rsp+98h] [rbp-500h]
  void *v51; // [rsp+A0h] [rbp-4F8h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-4F0h]
  int v53; // [rsp+B0h] [rbp-4E8h]
  char v54; // [rsp+B4h] [rbp-4E4h]
  char v55; // [rsp+B8h] [rbp-4E0h] BYREF
  _QWORD v56[3]; // [rsp+100h] [rbp-498h] BYREF
  char v57; // [rsp+118h] [rbp-480h]
  __int64 v58; // [rsp+128h] [rbp-470h]
  void *ptr; // [rsp+130h] [rbp-468h]
  __int64 v60; // [rsp+138h] [rbp-460h]
  _BYTE v61[80]; // [rsp+140h] [rbp-458h] BYREF
  __int64 (__fastcall **v62)(); // [rsp+190h] [rbp-408h] BYREF
  char v63; // [rsp+198h] [rbp-400h]
  __int64 v64; // [rsp+1A0h] [rbp-3F8h]
  _BYTE *v65; // [rsp+1A8h] [rbp-3F0h]
  _OWORD *v66; // [rsp+1B0h] [rbp-3E8h]
  __int64 v67; // [rsp+1B8h] [rbp-3E0h]
  int v68; // [rsp+1C0h] [rbp-3D8h]
  char v69; // [rsp+1C4h] [rbp-3D4h]
  _OWORD v70[3]; // [rsp+1C8h] [rbp-3D0h] BYREF
  __int64 v71; // [rsp+1F8h] [rbp-3A0h]
  __int64 v72; // [rsp+200h] [rbp-398h]
  __int64 v73; // [rsp+208h] [rbp-390h]
  int v74; // [rsp+218h] [rbp-380h] BYREF
  __int64 v75; // [rsp+220h] [rbp-378h]
  int *v76; // [rsp+228h] [rbp-370h]
  int *v77; // [rsp+230h] [rbp-368h]
  __int64 v78; // [rsp+238h] [rbp-360h]
  int v79; // [rsp+248h] [rbp-350h] BYREF
  __int64 v80; // [rsp+250h] [rbp-348h]
  int *v81; // [rsp+258h] [rbp-340h]
  int *v82; // [rsp+260h] [rbp-338h]
  __int64 v83; // [rsp+268h] [rbp-330h]
  __int64 v84; // [rsp+270h] [rbp-328h]
  int v85; // [rsp+278h] [rbp-320h]
  _DWORD *v86; // [rsp+280h] [rbp-318h]
  __int64 v87; // [rsp+288h] [rbp-310h]
  _DWORD v88[4]; // [rsp+290h] [rbp-308h] BYREF
  __int64 v89; // [rsp+2A0h] [rbp-2F8h]
  __int64 v90; // [rsp+2A8h] [rbp-2F0h]
  int v91; // [rsp+2B0h] [rbp-2E8h]
  __int64 v92; // [rsp+2B8h] [rbp-2E0h]
  char v93; // [rsp+2C0h] [rbp-2D8h]
  void *v94; // [rsp+2C8h] [rbp-2D0h]
  __int64 v95; // [rsp+2D0h] [rbp-2C8h]
  _BYTE v96[512]; // [rsp+2D8h] [rbp-2C0h] BYREF
  char v97[16]; // [rsp+4D8h] [rbp-C0h] BYREF
  int v98; // [rsp+4E8h] [rbp-B0h]
  __int128 v99; // [rsp+4F0h] [rbp-A8h]
  __int64 v100; // [rsp+500h] [rbp-98h]
  unsigned int v101; // [rsp+508h] [rbp-90h]
  int v102; // [rsp+518h] [rbp-80h] BYREF
  void *v103; // [rsp+520h] [rbp-78h]
  int *v104; // [rsp+528h] [rbp-70h]
  int *v105; // [rsp+530h] [rbp-68h]
  __int64 v106; // [rsp+538h] [rbp-60h]
  __int64 v107; // [rsp+540h] [rbp-58h]
  __int64 v108; // [rsp+548h] [rbp-50h]
  __int64 v109; // [rsp+550h] [rbp-48h]

  v43 = a2;
  v36 = &v62;
  v38 = (const __m128i *)v56;
  v51 = a1;
  v6 = _mm_loadh_ps((const double *)&v36);
  v52 = a3;
  v7 = _mm_loadh_ps((const double *)&v38);
  v44 = &v51;
  v42 = (__m128i)v7;
  v37 = (__m128i)v6;
  v8 = sub_25E8DD0("EvaluateAsLValue", 0x10u);
  v9 = _mm_load_si128(&v37);
  v65 = a2;
  v39 = v8;
  v10 = *(_QWORD *)(a3 + 2160);
  v70[0] = v9;
  v11 = *(_DWORD *)(v10 + 136);
  LOBYTE(v10) = *(_BYTE *)(v10 + 140);
  memset(&v70[1], 0, 32);
  v68 = v11;
  v69 = v10 & 1;
  v76 = &v74;
  v77 = &v74;
  v81 = &v79;
  v82 = &v79;
  v86 = v88;
  v63 = 0;
  v62 = &off_47DA958;
  v64 = a3;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v83 = 0;
  v84 = 0;
  v85 = 1;
  v88[0] = 1;
  v87 = 0x200000001LL;
  v67 = 0x200000001LL;
  v41 = v96;
  v94 = v96;
  v40 = v70;
  v66 = v70;
  v95 = 0x1000000000LL;
  v88[2] = 1;
  v91 = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  sub_69F1C0((__int64)v97, 0, 0, 0);
  v12 = (__int64)a1;
  v104 = &v102;
  v13 = _mm_load_si128(&v42);
  v105 = &v102;
  v109 = 0x200000000LL;
  v57 |= 1u;
  v60 = 0x800000000LL;
  v51 = &v55;
  v98 = 0;
  v101 = 0;
  v100 = 0;
  v102 = 0;
  v103 = nullptr;
  v106 = 0;
  v107 = 0;
  v108 = -1;
  v63 = a4;
  memset(v56, 0, sizeof(v56));
  v58 = 0;
  ptr = v61;
  v61[65] = 0;
  v52 = 8;
  v53 = 0;
  v54 = 1;
  LOBYTE(v49) = 0;
  v37.m128i_i64[0] = (__int64)&v48;
  v99 = 0;
  v48 = v13;
  if ( !(unsigned __int8)sub_869D30(&v48, (__int64)a1) )
    goto LABEL_2;
  v22 = (char *)v94;
  v23 = (char *)v94 + 32 * (unsigned int)v95;
  if ( v94 != v23 )
  {
    while ( 1 )
    {
      if ( (unsigned int)sub_B19900(*((_QWORD *)v22 + 3)) )
      {
        *v65 = 1;
        if ( HIDWORD(v109) <= 2 && !WORD1(v109) )
          break;
      }
      v22 += 32;
      if ( v23 == v22 )
        goto LABEL_44;
    }
    LODWORD(v95) = 0;
    goto LABEL_2;
  }
LABEL_44:
  LODWORD(v95) = 0;
  if ( *v43
    || (v33 = sub_6C4DA0(a3, a1[1], 1u),
        v34 = sub_8124E0((__int64)a1),
        v35 = v38,
        v12 = v34,
        v14 = sub_848460((__int64)v36, v34, v33, v38, 0, (__int64)v44),
        !(_BYTE)v14) )
  {
LABEL_2:
    v14 = 0;
    goto LABEL_3;
  }
  v12 = (__int64)(v43 + 16);
  sub_81F730((__int64)v35, (__int64)(v43 + 16));
LABEL_3:
  if ( !v54 )
    free(v51);
  v15 = ptr;
  if ( ptr != v61 )
    free(ptr);
  v16 = (char *)v94;
  v62 = &off_47DA958;
  v17 = (char *)v94 + 32 * (unsigned int)v95;
  if ( v94 != v17 )
  {
    do
    {
      v15 = *((void **)v16 + 3);
      if ( (unsigned int)sub_B19900(v15) )
      {
        *v65 = 1;
        if ( HIDWORD(v109) <= 2 && !WORD1(v109) )
          break;
      }
      v16 += 32;
    }
    while ( v17 != v16 );
  }
  v18 = (_QWORD **)v103;
  LODWORD(v95) = 0;
  if ( v103 )
  {
    while ( 1 )
    {
      sub_822210(v18[3]);
      v19 = (_QWORD **)v18[2];
      if ( *((_DWORD *)v18 + 10) > 1u )
        sub_69F740((__int64)(v18 + 5));
      v12 = 104;
      v15 = v18;
      operator delete(v18, 0x68u);
      if ( !v19 )
        break;
      v18 = v19;
    }
  }
  if ( !v101 )
  {
    v20 = 0;
    goto LABEL_20;
  }
  v24 = sub_69F620(v15, v12);
  v46 = nullptr;
  v45[0] = v24;
  v45[1] = v25;
  v47 = 0;
  v26.m128i_i64[0] = sub_69F630(v15, v12);
  v27 = *((_QWORD **)&v99 + 1);
  v49 = 0;
  v48 = v26;
  v50 = 0;
  v28 = *((_QWORD *)&v99 + 1) + 40LL * v101;
  if ( *((_QWORD *)&v99 + 1) != v28 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v27, v45) )
      {
        v29 = v27[3];
        if ( v29 == v47 )
        {
          v30 = (_QWORD *)v27[2];
          v31 = &v30[v29];
          v32 = v46;
          if ( v30 == v31 )
            goto LABEL_35;
          while ( *v30 == *v32 )
          {
            ++v30;
            ++v32;
            if ( v31 == v30 )
              goto LABEL_35;
          }
        }
      }
      sub_69F550(v27, v37.m128i_i64[0]);
LABEL_35:
      v27 += 5;
      if ( (_QWORD *)v28 == v27 )
      {
        v20 = 40LL * v101;
        goto LABEL_20;
      }
    }
  }
  v20 = 0;
LABEL_20:
  operator delete();
  if ( v94 != v41 )
    free(v94);
  sub_822100((__int64)v40);
  sub_A2CAF0(v36, v20);
  if ( v39 )
    sub_25EA250(v39);
  return v14;
}

