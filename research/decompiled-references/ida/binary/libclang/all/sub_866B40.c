__int64 __fastcall sub_866B40(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __m128 v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 (__fastcall ***v13)(); // rdi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // r12
  char *v18; // rbx
  _QWORD **v19; // rbx
  _QWORD **v20; // r12
  __int64 v21; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rdx
  _QWORD *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // rdx
  __m128i v33; // [rsp+0h] [rbp-478h] BYREF
  __int64 (__fastcall ***v34)(); // [rsp+10h] [rbp-468h] BYREF
  __int64 v35; // [rsp+18h] [rbp-460h]
  __int64 v36; // [rsp+20h] [rbp-458h]
  int v37; // [rsp+28h] [rbp-450h]
  int v38; // [rsp+2Ch] [rbp-44Ch]
  _QWORD v39[2]; // [rsp+30h] [rbp-448h] BYREF
  _QWORD *v40; // [rsp+40h] [rbp-438h]
  __int64 v41; // [rsp+48h] [rbp-430h]
  unsigned __int64 v42; // [rsp+50h] [rbp-428h] BYREF
  __int64 v43; // [rsp+58h] [rbp-420h]
  __int64 v44; // [rsp+60h] [rbp-418h]
  __int64 v45; // [rsp+68h] [rbp-410h]
  __int64 (__fastcall **v46)(); // [rsp+70h] [rbp-408h] BYREF
  char v47; // [rsp+78h] [rbp-400h]
  __int64 v48; // [rsp+80h] [rbp-3F8h]
  _BYTE *v49; // [rsp+88h] [rbp-3F0h]
  _OWORD *v50; // [rsp+90h] [rbp-3E8h]
  __int64 v51; // [rsp+98h] [rbp-3E0h]
  int v52; // [rsp+A0h] [rbp-3D8h]
  char v53; // [rsp+A4h] [rbp-3D4h]
  _OWORD v54[3]; // [rsp+A8h] [rbp-3D0h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-3A0h]
  __int64 v56; // [rsp+E0h] [rbp-398h]
  __int64 v57; // [rsp+E8h] [rbp-390h]
  int v58; // [rsp+F8h] [rbp-380h] BYREF
  __int64 v59; // [rsp+100h] [rbp-378h]
  int *v60; // [rsp+108h] [rbp-370h]
  int *v61; // [rsp+110h] [rbp-368h]
  __int64 v62; // [rsp+118h] [rbp-360h]
  int v63; // [rsp+128h] [rbp-350h] BYREF
  __int64 v64; // [rsp+130h] [rbp-348h]
  int *v65; // [rsp+138h] [rbp-340h]
  int *v66; // [rsp+140h] [rbp-338h]
  __int64 v67; // [rsp+148h] [rbp-330h]
  __int64 v68; // [rsp+150h] [rbp-328h]
  int v69; // [rsp+158h] [rbp-320h]
  _DWORD *v70; // [rsp+160h] [rbp-318h]
  __int64 v71; // [rsp+168h] [rbp-310h]
  _DWORD v72[4]; // [rsp+170h] [rbp-308h] BYREF
  __int64 v73; // [rsp+180h] [rbp-2F8h]
  __int64 v74; // [rsp+188h] [rbp-2F0h]
  int v75; // [rsp+190h] [rbp-2E8h]
  __int64 v76; // [rsp+198h] [rbp-2E0h]
  char v77; // [rsp+1A0h] [rbp-2D8h]
  void *ptr; // [rsp+1A8h] [rbp-2D0h]
  __int64 v79; // [rsp+1B0h] [rbp-2C8h]
  _BYTE v80[512]; // [rsp+1B8h] [rbp-2C0h] BYREF
  _BYTE v81[16]; // [rsp+3B8h] [rbp-C0h] BYREF
  int v82; // [rsp+3C8h] [rbp-B0h]
  __int128 v83; // [rsp+3D0h] [rbp-A8h]
  __int64 v84; // [rsp+3E0h] [rbp-98h]
  unsigned int v85; // [rsp+3E8h] [rbp-90h]
  int v86; // [rsp+3F8h] [rbp-80h] BYREF
  void *v87; // [rsp+400h] [rbp-78h]
  int *v88; // [rsp+408h] [rbp-70h]
  int *v89; // [rsp+410h] [rbp-68h]
  __int64 v90; // [rsp+418h] [rbp-60h]
  __int64 v91; // [rsp+420h] [rbp-58h]
  __int64 v92; // [rsp+428h] [rbp-50h]
  __int64 v93; // [rsp+430h] [rbp-48h]

  v36 = a2;
  v34 = &v46;
  v38 = a4;
  v42 = a1;
  v8 = _mm_loadh_ps((const double *)&v34);
  v43 = a3;
  v37 = a5;
  v33 = (__m128i)v8;
  v9 = sub_25E8DD0("EvaluateAsFixedPoint", 0x14u);
  v10 = _mm_load_si128(&v33);
  v11 = 0;
  v35 = v9;
  v12 = *(_QWORD *)(a3 + 2160);
  v13 = (__int64 (__fastcall ***)())v81;
  v54[0] = v10;
  v14 = *(_DWORD *)(v12 + 136);
  LOBYTE(v12) = *(_BYTE *)(v12 + 140);
  memset(&v54[1], 0, 32);
  v49 = (_BYTE *)a2;
  v53 = v12 & 1;
  v60 = &v58;
  v61 = &v58;
  v65 = &v63;
  v66 = &v63;
  v70 = v72;
  v52 = v14;
  v47 = 0;
  v46 = &off_47DA958;
  v48 = a3;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 1;
  v72[0] = 1;
  v71 = 0x200000001LL;
  v51 = 0x200000001LL;
  v72[2] = 1;
  v79 = 0x1000000000LL;
  v75 = 0;
  v73 = 0;
  v74 = 0;
  v76 = 0;
  v77 = 0;
  v50 = v54;
  ptr = v80;
  sub_69F1C0((__int64)v81, 0, 0, 0);
  v88 = &v86;
  v89 = &v86;
  v93 = 0x300000000LL;
  v15 = *(_QWORD *)(a1 + 8);
  v82 = 0;
  v47 = v37;
  v85 = 0;
  v84 = 0;
  v86 = 0;
  v87 = nullptr;
  v90 = 0;
  v91 = 0;
  v92 = -1;
  v83 = 0;
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 13 || (((*(_WORD *)(v16 + 18) >> 3) + 57) & 0x1FFu) > 0x17 )
    goto LABEL_3;
  v11 = v36;
  v13 = (__int64 (__fastcall ***)())a1;
  if ( (unsigned __int8)sub_8331A0((_WORD *)a1, v36, a3, &v42) )
  {
    v33.m128i_i8[0] = v42;
  }
  else
  {
    v13 = v34;
    v11 = a1;
    v33.m128i_i8[0] = sub_85F8D0((__int64)v34, a1, (unsigned int *)(v36 + 16));
  }
  if ( !v33.m128i_i8[0] || *(_DWORD *)(v36 + 16) != 4 )
    goto LABEL_3;
  if ( v38 > 1 )
    goto LABEL_4;
  if ( *(_BYTE *)v36 )
  {
LABEL_3:
    v33.m128i_i8[0] = 0;
    goto LABEL_4;
  }
  if ( v38 != 1 )
    v33.m128i_i8[0] = *(_BYTE *)(v36 + 1) ^ 1;
LABEL_4:
  v17 = (char *)ptr;
  v46 = &off_47DA958;
  v18 = (char *)ptr + 32 * (unsigned int)v79;
  if ( ptr != v18 )
  {
    do
    {
      v13 = *((__int64 (__fastcall ****)())v17 + 3);
      if ( (unsigned int)sub_B19900(v13) )
      {
        *v49 = 1;
        if ( HIDWORD(v93) <= 2 && !WORD1(v93) )
          break;
      }
      v17 += 32;
    }
    while ( v18 != v17 );
  }
  v19 = (_QWORD **)v87;
  LODWORD(v79) = 0;
  if ( v87 )
  {
    while ( 1 )
    {
      sub_822210(v19[3]);
      v20 = (_QWORD **)v19[2];
      if ( *((_DWORD *)v19 + 10) > 1u )
        sub_69F740((__int64)(v19 + 5));
      v11 = 104;
      v13 = (__int64 (__fastcall ***)())v19;
      operator delete(v19, 0x68u);
      if ( !v20 )
        break;
      v19 = v20;
    }
  }
  if ( !v85 )
  {
    v21 = 0;
    goto LABEL_17;
  }
  v23 = sub_69F620(v13, v11);
  v40 = nullptr;
  v39[0] = v23;
  v39[1] = v24;
  v41 = 0;
  v25 = sub_69F630(v13, v11);
  v26 = *((_QWORD **)&v83 + 1);
  v44 = 0;
  v42 = v25;
  v43 = v27;
  v45 = 0;
  v28 = *((_QWORD *)&v83 + 1) + 40LL * v85;
  if ( *((_QWORD *)&v83 + 1) != v28 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v26, v39) )
      {
        v29 = v26[3];
        if ( v29 == v41 )
        {
          v30 = (_QWORD *)v26[2];
          v31 = &v30[v29];
          v32 = v40;
          if ( v30 == v31 )
            goto LABEL_25;
          while ( *v30 == *v32 )
          {
            ++v30;
            ++v32;
            if ( v31 == v30 )
              goto LABEL_25;
          }
        }
      }
      sub_69F550(v26, &v42);
LABEL_25:
      v26 += 5;
      if ( (_QWORD *)v28 == v26 )
      {
        v21 = 40LL * v85;
        goto LABEL_17;
      }
    }
  }
  v21 = 0;
LABEL_17:
  operator delete();
  if ( ptr != v80 )
    free(ptr);
  sub_822100((__int64)v54);
  sub_A2CAF0(v34, v21);
  if ( v35 )
    sub_25EA250(v35);
  return v33.m128i_u8[0];
}

