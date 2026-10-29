__int64 __fastcall sub_868BA0(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm2
  __int64 v4; // rax
  int v5; // edx
  __m128i v6; // xmm2
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __int64 v9; // rsi
  __int64 v10; // r15
  _OWORD *v11; // rdi
  char *v12; // rbx
  char *v13; // rbp
  _QWORD **v14; // rbx
  _QWORD **v15; // rbp
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rdx
  __m128 v28; // [rsp+0h] [rbp-5B8h] BYREF
  __int64 (__fastcall ***v29)(); // [rsp+10h] [rbp-5A8h] BYREF
  unsigned __int64 v30; // [rsp+18h] [rbp-5A0h]
  __int16 v31; // [rsp+20h] [rbp-598h] BYREF
  __int64 v32; // [rsp+28h] [rbp-590h]
  _QWORD v33[2]; // [rsp+30h] [rbp-588h] BYREF
  _QWORD *v34; // [rsp+40h] [rbp-578h]
  __int64 v35; // [rsp+48h] [rbp-570h]
  _QWORD v36[4]; // [rsp+50h] [rbp-568h] BYREF
  unsigned int v37; // [rsp+70h] [rbp-548h] BYREF
  char v38; // [rsp+74h] [rbp-544h]
  _OWORD v39[3]; // [rsp+B0h] [rbp-508h] BYREF
  __int64 v40; // [rsp+E0h] [rbp-4D8h]
  __int64 v41; // [rsp+E8h] [rbp-4D0h]
  __int64 v42; // [rsp+F0h] [rbp-4C8h]
  int v43; // [rsp+100h] [rbp-4B8h] BYREF
  __int64 v44; // [rsp+108h] [rbp-4B0h]
  int *v45; // [rsp+110h] [rbp-4A8h]
  int *v46; // [rsp+118h] [rbp-4A0h]
  __int64 v47; // [rsp+120h] [rbp-498h]
  int v48; // [rsp+130h] [rbp-488h] BYREF
  __int64 v49; // [rsp+138h] [rbp-480h]
  int *v50; // [rsp+140h] [rbp-478h]
  int *v51; // [rsp+148h] [rbp-470h]
  __int64 v52; // [rsp+150h] [rbp-468h]
  __int64 v53; // [rsp+158h] [rbp-460h]
  __int32 v54; // [rsp+160h] [rbp-458h]
  _DWORD *v55; // [rsp+168h] [rbp-450h]
  __int64 v56; // [rsp+170h] [rbp-448h]
  _DWORD v57[4]; // [rsp+178h] [rbp-440h] BYREF
  __int64 v58; // [rsp+188h] [rbp-430h]
  __int64 v59; // [rsp+190h] [rbp-428h]
  int v60; // [rsp+198h] [rbp-420h]
  __int64 v61; // [rsp+1A0h] [rbp-418h]
  char v62; // [rsp+1A8h] [rbp-410h]
  __int64 (__fastcall **v63)(); // [rsp+1B0h] [rbp-408h] BYREF
  char v64; // [rsp+1B8h] [rbp-400h]
  __int64 v65; // [rsp+1C0h] [rbp-3F8h]
  __int16 *v66; // [rsp+1C8h] [rbp-3F0h]
  __m128i v67; // [rsp+1D0h] [rbp-3E8h] BYREF
  int v68; // [rsp+1E0h] [rbp-3D8h]
  char v69; // [rsp+1E4h] [rbp-3D4h]
  _OWORD v70[3]; // [rsp+1E8h] [rbp-3D0h] BYREF
  __int64 v71; // [rsp+218h] [rbp-3A0h]
  __int64 v72; // [rsp+220h] [rbp-398h]
  __int64 v73; // [rsp+228h] [rbp-390h]
  int v74; // [rsp+238h] [rbp-380h] BYREF
  __int64 v75; // [rsp+240h] [rbp-378h]
  int *v76; // [rsp+248h] [rbp-370h]
  int *v77; // [rsp+250h] [rbp-368h]
  __int64 v78; // [rsp+258h] [rbp-360h]
  int v79; // [rsp+268h] [rbp-350h] BYREF
  __int64 v80; // [rsp+270h] [rbp-348h]
  int *v81; // [rsp+278h] [rbp-340h]
  int *v82; // [rsp+280h] [rbp-338h]
  __int64 v83; // [rsp+288h] [rbp-330h]
  __int64 v84; // [rsp+290h] [rbp-328h]
  int v85; // [rsp+298h] [rbp-320h]
  _DWORD *v86; // [rsp+2A0h] [rbp-318h]
  __int64 v87; // [rsp+2A8h] [rbp-310h]
  _DWORD v88[4]; // [rsp+2B0h] [rbp-308h] BYREF
  __int64 v89; // [rsp+2C0h] [rbp-2F8h]
  __int64 v90; // [rsp+2C8h] [rbp-2F0h]
  int v91; // [rsp+2D0h] [rbp-2E8h]
  __int64 v92; // [rsp+2D8h] [rbp-2E0h]
  char v93; // [rsp+2E0h] [rbp-2D8h]
  void *ptr; // [rsp+2E8h] [rbp-2D0h]
  __int64 v95; // [rsp+2F0h] [rbp-2C8h]
  _BYTE v96[512]; // [rsp+2F8h] [rbp-2C0h] BYREF
  char v97[16]; // [rsp+4F8h] [rbp-C0h] BYREF
  int v98; // [rsp+508h] [rbp-B0h]
  __int128 v99; // [rsp+510h] [rbp-A8h]
  __int64 v100; // [rsp+520h] [rbp-98h]
  unsigned int v101; // [rsp+528h] [rbp-90h]
  int v102; // [rsp+538h] [rbp-80h] BYREF
  void *v103; // [rsp+540h] [rbp-78h]
  int *v104; // [rsp+548h] [rbp-70h]
  int *v105; // [rsp+550h] [rbp-68h]
  __int64 v106; // [rsp+558h] [rbp-60h]
  __int64 v107; // [rsp+560h] [rbp-58h]
  __int64 v108; // [rsp+568h] [rbp-50h]
  __int64 v109; // [rsp+570h] [rbp-48h]

  v10 = a3;
  v30 = a1;
  v32 = a3;
  v29 = &v63;
  v31 = 0;
  v28 = _mm_loadh_ps((const double *)&v29);
  v65 = sub_798D40(a2);
  si128 = _mm_load_si128((const __m128i *)&v28);
  v4 = *(_QWORD *)(v65 + 2160);
  v66 = &v31;
  v70[0] = si128;
  v5 = *(_DWORD *)(v4 + 136);
  LOBYTE(v4) = *(_BYTE *)(v4 + 140);
  memset(&v70[1], 0, 32);
  v68 = v5;
  v69 = v4 & 1;
  v76 = &v74;
  v77 = &v74;
  v64 = 0;
  v63 = &off_47DA958;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = &v79;
  v82 = &v79;
  v95 = 0x1000000000LL;
  v86 = v88;
  v87 = 0x200000001LL;
  v67.m128i_i64[1] = 0x200000001LL;
  v83 = 0;
  v84 = 0;
  v85 = 1;
  v88[0] = 1;
  v88[2] = 1;
  v91 = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  v67.m128i_i64[0] = (__int64)v70;
  ptr = v96;
  sub_69F1C0((__int64)v97, 0, 0, 0);
  v6 = _mm_load_si128((const __m128i *)&v28);
  v7 = _mm_loadl_epi64(&v67);
  v104 = &v102;
  v105 = &v102;
  v45 = &v43;
  v46 = &v43;
  v109 = 0x100010000LL;
  v50 = &v48;
  v51 = &v48;
  v39[0] = v6;
  v39[1] = _mm_unpacklo_epi64(v7, (__m128i)(unsigned __int64)a2);
  v98 = 0;
  v101 = 0;
  v100 = 0;
  v102 = 0;
  v103 = nullptr;
  v64 = 1;
  v106 = 0;
  v107 = 0;
  v108 = -1;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v52 = 0;
  v53 = 0;
  v99 = 0;
  v39[2] = 0;
  v8 = _mm_loadl_epi64((const __m128i *)&v67.m128i_u64[1]);
  v56 = 0x200000001LL;
  v54 = v67.m128i_i32[3];
  v38 &= ~1u;
  v55 = v57;
  v57[0] = 1;
  v57[2] = 1;
  v60 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v67.m128i_i64[0] = (__int64)v39;
  v37 = 0;
  v67.m128i_i64[1] = _mm_add_epi32(v8, _mm_loadl_epi64((const __m128i *)&qword_3C86E78)).m128i_u64[0];
  sub_856400((__int64)&v37, (__int64)v29, v30);
  v9 = *(unsigned int *)(v10 + 8);
  LOBYTE(v10) = (_DWORD)v9 == 0;
  if ( v37 > 1 )
    sub_69F740((__int64)&v37);
  v11 = v39;
  sub_822100((__int64)v39);
  v63 = &off_47DA958;
  v12 = (char *)ptr;
  v13 = (char *)ptr + 32 * (unsigned int)v95;
  if ( ptr != v13 )
  {
    do
    {
      v11 = *((_OWORD **)v12 + 3);
      if ( (unsigned int)sub_B19900(v11) )
      {
        *(_BYTE *)v66 = 1;
        if ( HIDWORD(v109) <= 2 && !WORD1(v109) )
          break;
      }
      v12 += 32;
    }
    while ( v13 != v12 );
  }
  v14 = (_QWORD **)v103;
  LODWORD(v95) = 0;
  if ( v103 )
  {
    while ( 1 )
    {
      sub_822210(v14[3]);
      v15 = (_QWORD **)v14[2];
      if ( *((_DWORD *)v14 + 10) > 1u )
        sub_69F740((__int64)(v14 + 5));
      v9 = 104;
      v11 = v14;
      operator delete(v14, 0x68u);
      if ( !v15 )
        break;
      v14 = v15;
    }
  }
  if ( !v101 )
  {
    v16 = 0;
    goto LABEL_16;
  }
  v18 = sub_69F620(v11, v9);
  v34 = nullptr;
  v33[0] = v18;
  v33[1] = v19;
  v35 = 0;
  v20 = sub_69F630(v11, v9);
  v21 = *((_QWORD **)&v99 + 1);
  v36[2] = 0;
  v36[0] = v20;
  v36[1] = v22;
  v36[3] = 0;
  v23 = *((_QWORD *)&v99 + 1) + 40LL * v101;
  if ( *((_QWORD *)&v99 + 1) != v23 )
  {
    v28.m128_u64[0] = (unsigned __int64)v36;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v21, v33) )
      {
        v24 = v21[3];
        if ( v24 == v35 )
        {
          v25 = (_QWORD *)v21[2];
          v26 = &v25[v24];
          v27 = v34;
          if ( v25 == v26 )
            goto LABEL_22;
          while ( *v25 == *v27 )
          {
            ++v25;
            ++v27;
            if ( v26 == v25 )
              goto LABEL_22;
          }
        }
      }
      sub_69F550(v21, v28.m128_u64[0]);
LABEL_22:
      v21 += 5;
      if ( (_QWORD *)v23 == v21 )
      {
        v16 = 40LL * v101;
        goto LABEL_16;
      }
    }
  }
  v16 = 0;
LABEL_16:
  operator delete();
  if ( ptr != v96 )
    free(ptr);
  sub_822100((__int64)v70);
  sub_A2CAF0(v29, v16);
  return (unsigned int)v10;
}

