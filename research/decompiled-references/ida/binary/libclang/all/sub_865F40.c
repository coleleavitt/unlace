__int64 __fastcall sub_865F40(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __m128 v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdi
  char v16; // al
  unsigned int v17; // r13d
  char *v18; // r15
  char *v19; // rbx
  _QWORD **v20; // rbx
  _QWORD **v21; // r15
  __int64 v22; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 (__fastcall ***v35)(); // [rsp+8h] [rbp-470h] BYREF
  __m128i v36; // [rsp+10h] [rbp-468h] BYREF
  __int64 v37; // [rsp+20h] [rbp-458h]
  int v38; // [rsp+28h] [rbp-450h]
  int v39; // [rsp+2Ch] [rbp-44Ch]
  _QWORD v40[2]; // [rsp+30h] [rbp-448h] BYREF
  _QWORD *v41; // [rsp+40h] [rbp-438h]
  __int64 v42; // [rsp+48h] [rbp-430h]
  unsigned __int64 v43; // [rsp+50h] [rbp-428h] BYREF
  __int64 v44; // [rsp+58h] [rbp-420h]
  __int64 v45; // [rsp+60h] [rbp-418h]
  __int64 v46; // [rsp+68h] [rbp-410h]
  __int64 (__fastcall **v47)(); // [rsp+70h] [rbp-408h] BYREF
  char v48; // [rsp+78h] [rbp-400h]
  __int64 v49; // [rsp+80h] [rbp-3F8h]
  _BYTE *v50; // [rsp+88h] [rbp-3F0h]
  _OWORD *v51; // [rsp+90h] [rbp-3E8h]
  __int64 v52; // [rsp+98h] [rbp-3E0h]
  int v53; // [rsp+A0h] [rbp-3D8h]
  char v54; // [rsp+A4h] [rbp-3D4h]
  _OWORD v55[3]; // [rsp+A8h] [rbp-3D0h] BYREF
  __int64 v56; // [rsp+D8h] [rbp-3A0h]
  __int64 v57; // [rsp+E0h] [rbp-398h]
  __int64 v58; // [rsp+E8h] [rbp-390h]
  int v59; // [rsp+F8h] [rbp-380h] BYREF
  __int64 v60; // [rsp+100h] [rbp-378h]
  int *v61; // [rsp+108h] [rbp-370h]
  int *v62; // [rsp+110h] [rbp-368h]
  __int64 v63; // [rsp+118h] [rbp-360h]
  int v64; // [rsp+128h] [rbp-350h] BYREF
  __int64 v65; // [rsp+130h] [rbp-348h]
  int *v66; // [rsp+138h] [rbp-340h]
  int *v67; // [rsp+140h] [rbp-338h]
  __int64 v68; // [rsp+148h] [rbp-330h]
  __int64 v69; // [rsp+150h] [rbp-328h]
  int v70; // [rsp+158h] [rbp-320h]
  _DWORD *v71; // [rsp+160h] [rbp-318h]
  __int64 v72; // [rsp+168h] [rbp-310h]
  _DWORD v73[4]; // [rsp+170h] [rbp-308h] BYREF
  __int64 v74; // [rsp+180h] [rbp-2F8h]
  __int64 v75; // [rsp+188h] [rbp-2F0h]
  int v76; // [rsp+190h] [rbp-2E8h]
  __int64 v77; // [rsp+198h] [rbp-2E0h]
  char v78; // [rsp+1A0h] [rbp-2D8h]
  void *ptr; // [rsp+1A8h] [rbp-2D0h]
  __int64 v80; // [rsp+1B0h] [rbp-2C8h]
  _BYTE v81[512]; // [rsp+1B8h] [rbp-2C0h] BYREF
  char v82[16]; // [rsp+3B8h] [rbp-C0h] BYREF
  int v83; // [rsp+3C8h] [rbp-B0h]
  __int128 v84; // [rsp+3D0h] [rbp-A8h]
  __int64 v85; // [rsp+3E0h] [rbp-98h]
  unsigned int v86; // [rsp+3E8h] [rbp-90h]
  int v87; // [rsp+3F8h] [rbp-80h] BYREF
  void *v88; // [rsp+400h] [rbp-78h]
  int *v89; // [rsp+408h] [rbp-70h]
  int *v90; // [rsp+410h] [rbp-68h]
  __int64 v91; // [rsp+418h] [rbp-60h]
  __int64 v92; // [rsp+420h] [rbp-58h]
  __int64 v93; // [rsp+428h] [rbp-50h]
  __int64 v94; // [rsp+430h] [rbp-48h]

  v39 = a4;
  v35 = &v47;
  v43 = a1;
  v44 = a3;
  v8 = _mm_loadh_ps((const double *)&v35);
  v38 = a5;
  v36 = (__m128i)v8;
  v9 = sub_25E8DD0("EvaluateAsInt", 0xDu);
  v10 = _mm_load_si128(&v36);
  v48 = 0;
  v11 = 0;
  v37 = v9;
  v12 = *(_QWORD *)(a3 + 2160);
  v55[0] = v10;
  v13 = *(_DWORD *)(v12 + 136);
  LOBYTE(v12) = *(_BYTE *)(v12 + 140);
  v47 = &off_47DA958;
  memset(&v55[1], 0, 32);
  v54 = v12 & 1;
  v61 = &v59;
  v62 = &v59;
  v66 = &v64;
  v67 = &v64;
  v71 = v73;
  v53 = v13;
  v49 = a3;
  v50 = (_BYTE *)a2;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v68 = 0;
  v69 = 0;
  v70 = 1;
  v73[0] = 1;
  v72 = 0x200000001LL;
  v52 = 0x200000001LL;
  v36.m128i_i64[0] = (__int64)v55;
  v51 = v55;
  v80 = 0x1000000000LL;
  v73[2] = 1;
  v76 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  ptr = v81;
  sub_69F1C0((__int64)v82, 0, 0, 0);
  v89 = &v87;
  v90 = &v87;
  v94 = 0x300000000LL;
  v14 = *(_QWORD *)(a1 + 8);
  v83 = 0;
  v48 = v38;
  v86 = 0;
  v85 = 0;
  v87 = 0;
  v88 = nullptr;
  v91 = 0;
  v92 = 0;
  v93 = -1;
  v84 = 0;
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_BYTE *)(v15 + 16);
  switch ( v16 )
  {
    case 13:
      if ( (((*(_WORD *)(v15 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
LABEL_3:
        v17 = 0;
        goto LABEL_4;
      }
      break;
    case 46:
      v34 = sub_B14A40(v15);
      if ( (*(_BYTE *)(v34 + 74) & 1) == 0 && *(_QWORD *)(v34 + 128) <= 7u )
        goto LABEL_3;
      break;
    case 10:
      break;
    default:
      goto LABEL_3;
  }
  v11 = a2;
  v15 = a1;
  if ( (unsigned __int8)sub_8331A0((_WORD *)a1, a2, a3, &v43) )
  {
    v17 = (unsigned __int8)v43;
  }
  else
  {
    v15 = (__int64)v35;
    v11 = a1;
    v17 = sub_85F8D0((__int64)v35, a1, (unsigned int *)(a2 + 16));
  }
  if ( !(_BYTE)v17 || *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_3;
  if ( v39 <= 1 )
  {
    if ( *(_BYTE *)a2 )
      goto LABEL_3;
    if ( v39 != 1 )
      v17 = *(unsigned __int8 *)(a2 + 1) ^ 1;
  }
LABEL_4:
  v47 = &off_47DA958;
  v18 = (char *)ptr;
  v19 = (char *)ptr + 32 * (unsigned int)v80;
  if ( ptr != v19 )
  {
    do
    {
      v15 = *((_QWORD *)v18 + 3);
      if ( (unsigned int)sub_B19900(v15) )
      {
        *v50 = 1;
        if ( HIDWORD(v94) <= 2 && !WORD1(v94) )
          break;
      }
      v18 += 32;
    }
    while ( v19 != v18 );
  }
  v20 = (_QWORD **)v88;
  LODWORD(v80) = 0;
  if ( v88 )
  {
    while ( 1 )
    {
      sub_822210(v20[3]);
      v21 = (_QWORD **)v20[2];
      if ( *((_DWORD *)v20 + 10) > 1u )
        sub_69F740((__int64)(v20 + 5));
      v11 = 104;
      v15 = (__int64)v20;
      operator delete(v20, 0x68u);
      if ( !v21 )
        break;
      v20 = v21;
    }
  }
  if ( !v86 )
  {
    v22 = 0;
    goto LABEL_17;
  }
  v24 = sub_69F620(v15, v11);
  v41 = nullptr;
  v40[0] = v24;
  v40[1] = v25;
  v42 = 0;
  v26 = sub_69F630(v15, v11);
  v27 = *((_QWORD **)&v84 + 1);
  v45 = 0;
  v43 = v26;
  v44 = v28;
  v46 = 0;
  v29 = *((_QWORD *)&v84 + 1) + 40LL * v86;
  if ( *((_QWORD *)&v84 + 1) != v29 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v27, v40) )
      {
        v30 = v27[3];
        if ( v30 == v42 )
        {
          v31 = (_QWORD *)v27[2];
          v32 = &v31[v30];
          v33 = v41;
          if ( v31 == v32 )
            goto LABEL_34;
          while ( *v31 == *v33 )
          {
            ++v31;
            ++v33;
            if ( v32 == v31 )
              goto LABEL_34;
          }
        }
      }
      sub_69F550(v27, &v43);
LABEL_34:
      v27 += 5;
      if ( (_QWORD *)v29 == v27 )
      {
        v22 = 40LL * v86;
        goto LABEL_17;
      }
    }
  }
  v22 = 0;
LABEL_17:
  operator delete();
  if ( ptr != v81 )
    free(ptr);
  sub_822100(v36.m128i_i64[0]);
  sub_A2CAF0(v35, v22);
  if ( v37 )
    sub_25EA250(v37);
  return v17;
}

