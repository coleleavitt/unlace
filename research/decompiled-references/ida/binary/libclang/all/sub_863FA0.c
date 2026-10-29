__int64 __fastcall sub_863FA0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i si128; // xmm0
  int v10; // edx
  __int64 v11; // rdx
  __int64 *v12; // rbp
  __int64 *v13; // rsi
  __int64 (__fastcall ***v14)(); // rdi
  unsigned int v15; // eax
  char *v16; // r12
  char *v17; // rbp
  _QWORD **v18; // rbp
  _QWORD **v19; // r12
  __int64 v20; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  __int64 (__fastcall ***v32)(); // [rsp+0h] [rbp-4C0h] BYREF
  __m128 v33; // [rsp+8h] [rbp-4B8h] BYREF
  __int64 *v34; // [rsp+18h] [rbp-4A8h]
  __int64 v35; // [rsp+20h] [rbp-4A0h]
  _QWORD v36[2]; // [rsp+28h] [rbp-498h] BYREF
  _QWORD *v37; // [rsp+38h] [rbp-488h]
  __int64 v38; // [rsp+40h] [rbp-480h]
  _QWORD v39[4]; // [rsp+48h] [rbp-478h] BYREF
  __int64 *v40; // [rsp+68h] [rbp-458h] BYREF
  __int64 v41; // [rsp+70h] [rbp-450h]
  unsigned int v42; // [rsp+78h] [rbp-448h] BYREF
  char v43; // [rsp+7Ch] [rbp-444h]
  __int64 v44; // [rsp+80h] [rbp-440h] BYREF
  unsigned int v45; // [rsp+88h] [rbp-438h]
  char v46; // [rsp+8Ch] [rbp-434h]
  __int64 (__fastcall **v47)(); // [rsp+B8h] [rbp-408h] BYREF
  char v48; // [rsp+C0h] [rbp-400h]
  __int64 v49; // [rsp+C8h] [rbp-3F8h]
  _BYTE *v50; // [rsp+D0h] [rbp-3F0h]
  _OWORD *v51; // [rsp+D8h] [rbp-3E8h]
  __int64 v52; // [rsp+E0h] [rbp-3E0h]
  int v53; // [rsp+E8h] [rbp-3D8h]
  char v54; // [rsp+ECh] [rbp-3D4h]
  _OWORD v55[3]; // [rsp+F0h] [rbp-3D0h] BYREF
  __int64 v56; // [rsp+120h] [rbp-3A0h]
  __int64 v57; // [rsp+128h] [rbp-398h]
  __int64 v58; // [rsp+130h] [rbp-390h]
  int v59; // [rsp+140h] [rbp-380h] BYREF
  __int64 v60; // [rsp+148h] [rbp-378h]
  int *v61; // [rsp+150h] [rbp-370h]
  int *v62; // [rsp+158h] [rbp-368h]
  __int64 v63; // [rsp+160h] [rbp-360h]
  int v64; // [rsp+170h] [rbp-350h] BYREF
  __int64 v65; // [rsp+178h] [rbp-348h]
  int *v66; // [rsp+180h] [rbp-340h]
  int *v67; // [rsp+188h] [rbp-338h]
  __int64 v68; // [rsp+190h] [rbp-330h]
  __int64 v69; // [rsp+198h] [rbp-328h]
  int v70; // [rsp+1A0h] [rbp-320h]
  _DWORD *v71; // [rsp+1A8h] [rbp-318h]
  __int64 v72; // [rsp+1B0h] [rbp-310h]
  _DWORD v73[4]; // [rsp+1B8h] [rbp-308h] BYREF
  __int64 v74; // [rsp+1C8h] [rbp-2F8h]
  __int64 v75; // [rsp+1D0h] [rbp-2F0h]
  int v76; // [rsp+1D8h] [rbp-2E8h]
  __int64 v77; // [rsp+1E0h] [rbp-2E0h]
  char v78; // [rsp+1E8h] [rbp-2D8h]
  void *ptr; // [rsp+1F0h] [rbp-2D0h]
  __int64 v80; // [rsp+1F8h] [rbp-2C8h]
  _BYTE v81[512]; // [rsp+200h] [rbp-2C0h] BYREF
  char v82[16]; // [rsp+400h] [rbp-C0h] BYREF
  int v83; // [rsp+410h] [rbp-B0h]
  __int128 v84; // [rsp+418h] [rbp-A8h]
  __int64 v85; // [rsp+428h] [rbp-98h]
  unsigned int v86; // [rsp+430h] [rbp-90h]
  int v87; // [rsp+440h] [rbp-80h] BYREF
  void *v88; // [rsp+448h] [rbp-78h]
  int *v89; // [rsp+450h] [rbp-70h]
  int *v90; // [rsp+458h] [rbp-68h]
  __int64 v91; // [rsp+460h] [rbp-60h]
  __int64 v92; // [rsp+468h] [rbp-58h]
  __int64 v93; // [rsp+470h] [rbp-50h]
  __int64 v94; // [rsp+478h] [rbp-48h]

  v34 = a2;
  v32 = &v47;
  v40 = a2;
  v41 = a3;
  v33 = _mm_loadh_ps((const double *)&v32);
  v7 = sub_25E8DD0("EvaluateKnownConstInt", 0x15u);
  v41 = a4;
  v35 = v7;
  v8 = *(_QWORD *)(a3 + 2160);
  v43 &= ~1u;
  si128 = _mm_load_si128((const __m128i *)&v33);
  LOWORD(v40) = 0;
  v42 = 0;
  v10 = *(_DWORD *)(v8 + 136);
  LOBYTE(v8) = *(_BYTE *)(v8 + 140);
  v55[0] = si128;
  memset(&v55[1], 0, 32);
  v54 = v8 & 1;
  v61 = &v59;
  v62 = &v59;
  v66 = &v64;
  v67 = &v64;
  v49 = a3;
  v53 = v10;
  v48 = 0;
  v47 = &off_47DA958;
  v50 = &v40;
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
  v71 = v73;
  v70 = 1;
  v72 = 0x200000001LL;
  v52 = 0x200000001LL;
  v73[0] = 1;
  v80 = 0x1000000000LL;
  v73[2] = 1;
  v76 = 0;
  v74 = 0;
  v75 = 0;
  v77 = 0;
  v78 = 0;
  v51 = v55;
  ptr = v81;
  sub_69F1C0((__int64)&v82, 0, 0, 0);
  v11 = a3;
  v12 = v34;
  v13 = (__int64 *)&v40;
  v83 = 0;
  v94 = 0x300000000LL;
  v14 = (__int64 (__fastcall ***)())v34;
  v86 = 0;
  v85 = 0;
  v87 = 0;
  v88 = nullptr;
  v89 = &v87;
  v90 = &v87;
  v91 = 0;
  v92 = 0;
  v93 = -1;
  v48 = 1;
  v33.m128_u64[0] = (unsigned __int64)v39;
  v84 = 0;
  if ( !(unsigned __int8)sub_8331A0(v34, (__int64)&v40, v11, v39) )
  {
    v14 = v32;
    v13 = v12;
    sub_85F8D0((__int64)v32, (unsigned __int64)v12, &v42);
  }
  v15 = v45;
  *(_DWORD *)(a1 + 8) = v45;
  if ( v15 > 0x40 )
  {
    v13 = &v44;
    v14 = (__int64 (__fastcall ***)())a1;
    sub_2585B30(a1);
  }
  else
  {
    *(_QWORD *)a1 = v44;
  }
  v16 = (char *)ptr;
  v47 = &off_47DA958;
  v17 = (char *)ptr + 32 * (unsigned int)v80;
  for ( *(_BYTE *)(a1 + 12) = v46; v17 != v16; v16 += 32 )
  {
    v14 = *((__int64 (__fastcall ****)())v16 + 3);
    if ( (unsigned int)sub_B19900(v14) )
    {
      *v50 = 1;
      if ( HIDWORD(v94) <= 2 && !WORD1(v94) )
        break;
    }
  }
  v18 = (_QWORD **)v88;
  LODWORD(v80) = 0;
  if ( v88 )
  {
    while ( 1 )
    {
      sub_822210(v18[3]);
      v19 = (_QWORD **)v18[2];
      if ( *((_DWORD *)v18 + 10) > 1u )
        sub_69F740((__int64)(v18 + 5));
      v13 = &qword_68;
      v14 = (__int64 (__fastcall ***)())v18;
      operator delete(v18, 0x68u);
      if ( !v19 )
        break;
      v18 = v19;
    }
  }
  if ( !v86 )
  {
    v20 = 0;
    goto LABEL_18;
  }
  v22 = sub_69F620(v14, v13);
  v37 = nullptr;
  v36[0] = v22;
  v36[1] = v23;
  v38 = 0;
  v24 = sub_69F630(v14, v13);
  v25 = *((_QWORD **)&v84 + 1);
  v39[2] = 0;
  v39[0] = v24;
  v39[1] = v26;
  v39[3] = 0;
  v27 = *((_QWORD *)&v84 + 1) + 40LL * v86;
  if ( *((_QWORD *)&v84 + 1) != v27 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v25, v36) )
      {
        v28 = v25[3];
        if ( v28 == v38 )
        {
          v29 = (_QWORD *)v25[2];
          v30 = &v29[v28];
          v31 = v37;
          if ( v29 == v30 )
            goto LABEL_28;
          while ( *v29 == *v31 )
          {
            ++v29;
            ++v31;
            if ( v30 == v29 )
              goto LABEL_28;
          }
        }
      }
      sub_69F550(v25, v33.m128_u64[0]);
LABEL_28:
      v25 += 5;
      if ( (_QWORD *)v27 == v25 )
      {
        v20 = 40LL * v86;
        goto LABEL_18;
      }
    }
  }
  v20 = 0;
LABEL_18:
  operator delete();
  if ( ptr != v81 )
    free(ptr);
  sub_822100((__int64)v55);
  sub_A2CAF0(v32, v20);
  if ( v42 > 1 )
    sub_69F740((__int64)&v42);
  if ( v35 )
    sub_25EA250(v35);
  return a1;
}

