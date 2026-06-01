__int64 __fastcall sub_861880(__int64 a1, __int64 a2, unsigned int *a3, _DWORD *a4)
{
  __int64 v6; // rax
  int v7; // edx
  unsigned __int64 v8; // rsi
  __int64 (__fastcall ***v9)(); // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebp
  char *v12; // r15
  char *v13; // rbx
  _QWORD **v14; // rbx
  _QWORD **v15; // r15
  char *v16; // r13
  char *v17; // rbx
  __int64 v18; // rsi
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rax
  _QWORD *v23; // r14
  unsigned __int64 v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // rdi
  void *v27; // rdi
  _QWORD *v28; // r12
  _QWORD *v29; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  _QWORD *v35; // r13
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rsi
  _QWORD *v41; // rdx
  __int16 v43; // [rsp+20h] [rbp-5A8h] BYREF
  _QWORD *v44; // [rsp+28h] [rbp-5A0h]
  _QWORD v45[2]; // [rsp+30h] [rbp-598h] BYREF
  _QWORD *v46; // [rsp+40h] [rbp-588h]
  __int64 v47; // [rsp+48h] [rbp-580h]
  _QWORD v48[4]; // [rsp+50h] [rbp-578h] BYREF
  unsigned int v49; // [rsp+70h] [rbp-558h] BYREF
  char v50; // [rsp+74h] [rbp-554h]
  _DWORD *v51; // [rsp+B0h] [rbp-518h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-510h]
  _BYTE v53[256]; // [rsp+C0h] [rbp-508h] BYREF
  __int64 (__fastcall **v54)(); // [rsp+1C0h] [rbp-408h] BYREF
  char v55; // [rsp+1C8h] [rbp-400h]
  __int64 v56; // [rsp+1D0h] [rbp-3F8h]
  __int16 *v57; // [rsp+1D8h] [rbp-3F0h]
  _OWORD *v58; // [rsp+1E0h] [rbp-3E8h]
  __int64 v59; // [rsp+1E8h] [rbp-3E0h]
  int v60; // [rsp+1F0h] [rbp-3D8h]
  char v61; // [rsp+1F4h] [rbp-3D4h]
  _OWORD v62[3]; // [rsp+1F8h] [rbp-3D0h] BYREF
  __int64 v63; // [rsp+228h] [rbp-3A0h]
  __int64 v64; // [rsp+230h] [rbp-398h]
  __int64 v65; // [rsp+238h] [rbp-390h]
  int v66; // [rsp+248h] [rbp-380h] BYREF
  __int64 v67; // [rsp+250h] [rbp-378h]
  int *v68; // [rsp+258h] [rbp-370h]
  int *v69; // [rsp+260h] [rbp-368h]
  __int64 v70; // [rsp+268h] [rbp-360h]
  int v71; // [rsp+278h] [rbp-350h] BYREF
  __int64 v72; // [rsp+280h] [rbp-348h]
  int *v73; // [rsp+288h] [rbp-340h]
  int *v74; // [rsp+290h] [rbp-338h]
  __int64 v75; // [rsp+298h] [rbp-330h]
  __int64 v76; // [rsp+2A0h] [rbp-328h]
  int v77; // [rsp+2A8h] [rbp-320h]
  _DWORD *v78; // [rsp+2B0h] [rbp-318h]
  __int64 v79; // [rsp+2B8h] [rbp-310h]
  _DWORD v80[4]; // [rsp+2C0h] [rbp-308h] BYREF
  __int64 v81; // [rsp+2D0h] [rbp-2F8h]
  __int64 v82; // [rsp+2D8h] [rbp-2F0h]
  int v83; // [rsp+2E0h] [rbp-2E8h]
  __int64 v84; // [rsp+2E8h] [rbp-2E0h]
  char v85; // [rsp+2F0h] [rbp-2D8h]
  void *ptr; // [rsp+2F8h] [rbp-2D0h]
  __int64 v87; // [rsp+300h] [rbp-2C8h]
  _BYTE v88[512]; // [rsp+308h] [rbp-2C0h] BYREF
  char v89[16]; // [rsp+508h] [rbp-C0h] BYREF
  int v90; // [rsp+518h] [rbp-B0h]
  __int128 v91; // [rsp+520h] [rbp-A8h]
  __int64 v92; // [rsp+530h] [rbp-98h]
  unsigned int v93; // [rsp+538h] [rbp-90h]
  int v94; // [rsp+548h] [rbp-80h] BYREF
  void *v95; // [rsp+550h] [rbp-78h]
  int *v96; // [rsp+558h] [rbp-70h]
  int *v97; // [rsp+560h] [rbp-68h]
  __int64 v98; // [rsp+568h] [rbp-60h]
  __int64 v99; // [rsp+570h] [rbp-58h]
  __int64 v100; // [rsp+578h] [rbp-50h]
  __int64 v101; // [rsp+580h] [rbp-48h]

  v44 = &v51;
  v57 = &v43;
  v6 = *(_QWORD *)(a2 + 2160);
  v52 = 0x800000000LL;
  v7 = *(_DWORD *)(v6 + 136);
  LOBYTE(v6) = *(_BYTE *)(v6 + 140);
  v43 = 0;
  v51 = v53;
  v61 = v6 & 1;
  v56 = a2;
  v60 = v7;
  v62[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v54);
  v55 = 0;
  v54 = &off_47DA958;
  memset(&v62[1], 0, 32);
  v68 = &v66;
  v69 = &v66;
  v73 = &v71;
  v74 = &v71;
  v78 = v80;
  v79 = 0x200000001LL;
  v59 = 0x200000001LL;
  v58 = v62;
  v87 = 0x1000000000LL;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 1;
  v80[0] = 1;
  v80[2] = 1;
  v83 = 0;
  v81 = 0;
  v82 = 0;
  v84 = 0;
  v85 = 0;
  ptr = v88;
  sub_69F1C0((__int64)v89, 0, 0, 0);
  v50 &= ~1u;
  v8 = a1;
  v9 = &v54;
  v90 = 0;
  v96 = &v94;
  v97 = &v94;
  if ( !a3 )
    a3 = &v49;
  v93 = 0;
  v92 = 0;
  v94 = 0;
  v95 = nullptr;
  v98 = 0;
  v99 = 0;
  v100 = -1;
  v101 = 0;
  v49 = 0;
  v91 = 0;
  v10 = sub_85F8D0((__int64)&v54, v8, a3);
  if ( !(_BYTE)v10 )
  {
    if ( !(_DWORD)v52 )
      goto LABEL_5;
    goto LABEL_28;
  }
  v16 = (char *)ptr;
  v11 = v10;
  v17 = (char *)ptr + 32 * (unsigned int)v87;
  if ( ptr != v17 )
  {
    while ( 1 )
    {
      v9 = *((__int64 (__fastcall ****)())v16 + 3);
      if ( (unsigned int)sub_B19900(v9) )
      {
        *(_BYTE *)v57 = 1;
        if ( HIDWORD(v101) <= 2 && !WORD1(v101) )
          break;
      }
      v16 += 32;
      if ( v17 == v16 )
        goto LABEL_72;
    }
    LODWORD(v87) = 0;
    if ( !(_DWORD)v52 )
      goto LABEL_5;
    goto LABEL_28;
  }
LABEL_72:
  LODWORD(v87) = 0;
  if ( (_BYTE)v43 )
  {
    if ( !(_DWORD)v52 )
    {
LABEL_5:
      if ( a4 )
      {
        v9 = (__int64 (__fastcall ***)())a1;
        *a4 = sub_8124E0(a1);
      }
LABEL_7:
      v11 = 0;
      goto LABEL_8;
    }
LABEL_28:
    if ( a4 )
      *a4 = *v51;
    goto LABEL_7;
  }
  if ( (_DWORD)v52 )
    goto LABEL_28;
LABEL_8:
  if ( v49 > 1 )
  {
    v9 = (__int64 (__fastcall ***)())&v49;
    sub_69F740((__int64)&v49);
  }
  v54 = &off_47DA958;
  v12 = (char *)ptr;
  v13 = (char *)ptr + 32 * (unsigned int)v87;
  if ( ptr != v13 )
  {
    do
    {
      v9 = *((__int64 (__fastcall ****)())v12 + 3);
      if ( (unsigned int)sub_B19900(v9) )
      {
        *(_BYTE *)v57 = 1;
        if ( HIDWORD(v101) <= 2 && !WORD1(v101) )
          break;
      }
      v12 += 32;
    }
    while ( v13 != v12 );
  }
  v14 = (_QWORD **)v95;
  LODWORD(v87) = 0;
  if ( v95 )
  {
    while ( 1 )
    {
      sub_822210(v14[3]);
      v15 = (_QWORD **)v14[2];
      if ( *((_DWORD *)v14 + 10) > 1u )
        sub_69F740((__int64)(v14 + 5));
      v8 = 104;
      v9 = (__int64 (__fastcall ***)())v14;
      operator delete(v14, 0x68u);
      if ( !v15 )
        break;
      v14 = v15;
    }
  }
  if ( !v93 )
  {
    v18 = 0;
    goto LABEL_32;
  }
  v32 = sub_69F620(v9, v8);
  v46 = nullptr;
  v45[0] = v32;
  v45[1] = v33;
  v47 = 0;
  v34 = sub_69F630(v9, v8);
  v35 = *((_QWORD **)&v91 + 1);
  v48[2] = 0;
  v48[0] = v34;
  v48[1] = v36;
  v48[3] = 0;
  v37 = *((_QWORD *)&v91 + 1) + 40LL * v93;
  if ( *((_QWORD *)&v91 + 1) != v37 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v35, v45) )
      {
        v38 = v35[3];
        if ( v38 == v47 )
        {
          v39 = (_QWORD *)v35[2];
          v40 = &v39[v38];
          v41 = v46;
          if ( v39 == v40 )
            goto LABEL_63;
          while ( *v39 == *v41 )
          {
            ++v39;
            ++v41;
            if ( v40 == v39 )
              goto LABEL_63;
          }
        }
      }
      sub_69F550(v35, v48);
LABEL_63:
      v35 += 5;
      if ( (_QWORD *)v37 == v35 )
      {
        v18 = 40LL * v93;
        goto LABEL_32;
      }
    }
  }
  v18 = 0;
LABEL_32:
  operator delete();
  if ( ptr != v88 )
    free(ptr);
  sub_822100((__int64)v62);
  sub_A2CAF0(&v54, v18);
  v19 = v51;
  v20 = &v51[8 * (unsigned int)v52];
  if ( v51 != (_DWORD *)v20 )
  {
    do
    {
      v21 = *(v20 - 3);
      v20 -= 4;
      if ( v21 )
      {
        v22 = v20[2];
        if ( v22 )
        {
          if ( v21 >= v22 && v22 + 14848 >= v21 )
          {
            v31 = *(unsigned int *)(v22 + 14976);
            *(_DWORD *)(v22 + 14976) = v31 + 1;
            *(_QWORD *)(v22 + 8 * v31 + 14848) = v21;
          }
          else
          {
            v23 = *(_QWORD **)(v21 + 528);
            v24 = (unsigned __int64)*(unsigned int *)(v21 + 536) << 6;
            v25 = (_QWORD *)((char *)v23 + v24);
            if ( v23 != (_QWORD *)((char *)v23 + v24) )
            {
              do
              {
                v25 -= 8;
                v26 = (_QWORD *)v25[3];
                if ( v26 != v25 + 5 )
                  operator delete(v26, v25[5] + 1LL);
              }
              while ( v23 != v25 );
              v25 = *(_QWORD **)(v21 + 528);
            }
            if ( v25 != (_QWORD *)(v21 + 544) )
              free(v25);
            v27 = *(void **)(v21 + 416);
            if ( v27 != (void *)(v21 + 432) )
              free(v27);
            v28 = (_QWORD *)(v21 + 400);
            do
            {
              v29 = (_QWORD *)*(v28 - 2);
              if ( v28 != v29 )
                operator delete(v29, *v28 + 1LL);
              v28 -= 4;
            }
            while ( v28 != (_QWORD *)(v21 + 80) );
            operator delete((void *)v21, 0x3A0u);
          }
          v20[1] = 0;
        }
      }
    }
    while ( v19 != v20 );
    v20 = v51;
  }
  if ( v20 != (_QWORD *)v53 )
    free(v20);
  return v11;
}

