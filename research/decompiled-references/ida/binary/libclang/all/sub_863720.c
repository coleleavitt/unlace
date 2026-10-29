__int64 __fastcall sub_863720(__int64 (__fastcall ***a1)(), __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r14d
  char *v12; // r12
  char *v13; // rbx
  _QWORD **v14; // rbx
  _QWORD **v15; // r12
  __int64 v16; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rdx
  __int64 (__fastcall ***v28)(); // [rsp+8h] [rbp-470h] BYREF
  __m128 v29; // [rsp+10h] [rbp-468h] BYREF
  __int64 v30; // [rsp+20h] [rbp-458h]
  int v31; // [rsp+2Ch] [rbp-44Ch]
  _QWORD v32[2]; // [rsp+30h] [rbp-448h] BYREF
  _QWORD *v33; // [rsp+40h] [rbp-438h]
  __int64 v34; // [rsp+48h] [rbp-430h]
  __int64 (__fastcall ***v35)(); // [rsp+50h] [rbp-428h] BYREF
  __int64 v36; // [rsp+58h] [rbp-420h]
  __int64 v37; // [rsp+60h] [rbp-418h]
  __int64 v38; // [rsp+68h] [rbp-410h]
  __int64 (__fastcall **v39)(); // [rsp+70h] [rbp-408h] BYREF
  char v40; // [rsp+78h] [rbp-400h]
  __int64 v41; // [rsp+80h] [rbp-3F8h]
  _BYTE *v42; // [rsp+88h] [rbp-3F0h]
  _OWORD *v43; // [rsp+90h] [rbp-3E8h]
  __int64 v44; // [rsp+98h] [rbp-3E0h]
  int v45; // [rsp+A0h] [rbp-3D8h]
  char v46; // [rsp+A4h] [rbp-3D4h]
  _OWORD v47[3]; // [rsp+A8h] [rbp-3D0h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-3A0h]
  __int64 v49; // [rsp+E0h] [rbp-398h]
  __int64 v50; // [rsp+E8h] [rbp-390h]
  int v51; // [rsp+F8h] [rbp-380h] BYREF
  __int64 v52; // [rsp+100h] [rbp-378h]
  int *v53; // [rsp+108h] [rbp-370h]
  int *v54; // [rsp+110h] [rbp-368h]
  __int64 v55; // [rsp+118h] [rbp-360h]
  int v56; // [rsp+128h] [rbp-350h] BYREF
  __int64 v57; // [rsp+130h] [rbp-348h]
  int *v58; // [rsp+138h] [rbp-340h]
  int *v59; // [rsp+140h] [rbp-338h]
  __int64 v60; // [rsp+148h] [rbp-330h]
  __int64 v61; // [rsp+150h] [rbp-328h]
  int v62; // [rsp+158h] [rbp-320h]
  _DWORD *v63; // [rsp+160h] [rbp-318h]
  __int64 v64; // [rsp+168h] [rbp-310h]
  _DWORD v65[4]; // [rsp+170h] [rbp-308h] BYREF
  __int64 v66; // [rsp+180h] [rbp-2F8h]
  __int64 v67; // [rsp+188h] [rbp-2F0h]
  int v68; // [rsp+190h] [rbp-2E8h]
  __int64 v69; // [rsp+198h] [rbp-2E0h]
  char v70; // [rsp+1A0h] [rbp-2D8h]
  void *ptr; // [rsp+1A8h] [rbp-2D0h]
  __int64 v72; // [rsp+1B0h] [rbp-2C8h]
  _BYTE v73[512]; // [rsp+1B8h] [rbp-2C0h] BYREF
  char v74[16]; // [rsp+3B8h] [rbp-C0h] BYREF
  int v75; // [rsp+3C8h] [rbp-B0h]
  __int128 v76; // [rsp+3D0h] [rbp-A8h]
  __int64 v77; // [rsp+3E0h] [rbp-98h]
  unsigned int v78; // [rsp+3E8h] [rbp-90h]
  int v79; // [rsp+3F8h] [rbp-80h] BYREF
  void *v80; // [rsp+400h] [rbp-78h]
  int *v81; // [rsp+408h] [rbp-70h]
  int *v82; // [rsp+410h] [rbp-68h]
  __int64 v83; // [rsp+418h] [rbp-60h]
  __int64 v84; // [rsp+420h] [rbp-58h]
  __int64 v85; // [rsp+428h] [rbp-50h]
  __int64 v86; // [rsp+430h] [rbp-48h]

  v5 = (unsigned __int64)a1;
  v6 = a2;
  v31 = a4;
  v28 = &v39;
  v35 = a1;
  v36 = a3;
  v29 = _mm_loadh_ps((const double *)&v28);
  v7 = sub_25E8DD0("EvaluateAsRValue", 0x10u);
  si128 = _mm_load_si128((const __m128i *)&v29);
  v40 = 0;
  v30 = v7;
  v9 = *(_QWORD *)(a3 + 2160);
  v47[0] = si128;
  v10 = *(_DWORD *)(v9 + 136);
  LOBYTE(v9) = *(_BYTE *)(v9 + 140);
  v39 = &off_47DA958;
  memset(&v47[1], 0, 32);
  v46 = v9 & 1;
  v53 = &v51;
  v54 = &v51;
  v58 = &v56;
  v59 = &v56;
  v63 = v65;
  v45 = v10;
  v41 = a3;
  v42 = (_BYTE *)a2;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 1;
  v65[0] = 1;
  v64 = 0x200000001LL;
  v44 = 0x200000001LL;
  v29.m128_u64[0] = (unsigned __int64)v47;
  v43 = v47;
  v72 = 0x1000000000LL;
  v65[2] = 1;
  v68 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  ptr = v73;
  sub_69F1C0((__int64)v74, 0, 0, 0);
  v81 = &v79;
  v82 = &v79;
  v75 = 0;
  v78 = 0;
  v77 = 0;
  v79 = 0;
  v80 = nullptr;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v86 = 0x300000000LL;
  v40 = v31;
  v76 = 0;
  if ( (unsigned __int8)sub_8331A0(a1, a2, a3, &v35) )
  {
    v11 = (unsigned __int8)v35;
  }
  else
  {
    a1 = v28;
    a2 = v5;
    v11 = sub_85F8D0((__int64)v28, v5, (unsigned int *)(v6 + 16));
  }
  v12 = (char *)ptr;
  v39 = &off_47DA958;
  v13 = (char *)ptr + 32 * (unsigned int)v72;
  if ( ptr != v13 )
  {
    do
    {
      a1 = *((__int64 (__fastcall ****)())v12 + 3);
      if ( (unsigned int)sub_B19900(a1) )
      {
        *v42 = 1;
        if ( HIDWORD(v86) <= 2 && !WORD1(v86) )
          break;
      }
      v12 += 32;
    }
    while ( v13 != v12 );
  }
  v14 = (_QWORD **)v80;
  LODWORD(v72) = 0;
  if ( v80 )
  {
    while ( 1 )
    {
      sub_822210(v14[3]);
      v15 = (_QWORD **)v14[2];
      if ( *((_DWORD *)v14 + 10) > 1u )
        sub_69F740((__int64)(v14 + 5));
      a2 = 104;
      a1 = (__int64 (__fastcall ***)())v14;
      operator delete(v14, 0x68u);
      if ( !v15 )
        break;
      v14 = v15;
    }
  }
  if ( !v78 )
  {
    v16 = 0;
    goto LABEL_16;
  }
  v18 = sub_69F620(a1, a2);
  v33 = nullptr;
  v32[0] = v18;
  v32[1] = v19;
  v34 = 0;
  v20 = sub_69F630(a1, a2);
  v21 = *((_QWORD **)&v76 + 1);
  v37 = 0;
  v35 = (__int64 (__fastcall ***)())v20;
  v36 = v22;
  v38 = 0;
  v23 = *((_QWORD *)&v76 + 1) + 40LL * v78;
  if ( *((_QWORD *)&v76 + 1) != v23 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v21, v32) )
      {
        v24 = v21[3];
        if ( v24 == v34 )
        {
          v25 = (_QWORD *)v21[2];
          v26 = &v25[v24];
          v27 = v33;
          if ( v25 == v26 )
            goto LABEL_25;
          while ( *v25 == *v27 )
          {
            ++v25;
            ++v27;
            if ( v26 == v25 )
              goto LABEL_25;
          }
        }
      }
      sub_69F550(v21, &v35);
LABEL_25:
      v21 += 5;
      if ( (_QWORD *)v23 == v21 )
      {
        v16 = 40LL * v78;
        goto LABEL_16;
      }
    }
  }
  v16 = 0;
LABEL_16:
  operator delete();
  if ( ptr != v73 )
    free(ptr);
  sub_822100(v29.m128_i64[0]);
  sub_A2CAF0(v28, v16);
  if ( v30 )
    sub_25EA250(v30);
  return v11;
}

