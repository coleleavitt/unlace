__int64 __fastcall sub_863180(_WORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  int v5; // edx
  __m128 v6; // xmm0
  __int16 *v7; // rsi
  char v8; // al
  __int64 v9; // rbp
  __int64 v10; // rax
  char *v11; // r12
  char *v12; // rbx
  _QWORD **v13; // rbx
  _QWORD **v14; // r12
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 (__fastcall ***v27)(); // [rsp+0h] [rbp-4B8h] BYREF
  __int64 v28; // [rsp+8h] [rbp-4B0h]
  __int16 v29; // [rsp+10h] [rbp-4A8h] BYREF
  __int64 v30; // [rsp+18h] [rbp-4A0h]
  _QWORD v31[2]; // [rsp+20h] [rbp-498h] BYREF
  _QWORD *v32; // [rsp+30h] [rbp-488h]
  __int64 v33; // [rsp+38h] [rbp-480h]
  _QWORD v34[4]; // [rsp+40h] [rbp-478h] BYREF
  __int16 v35; // [rsp+60h] [rbp-458h] BYREF
  __int64 v36; // [rsp+68h] [rbp-450h]
  unsigned int v37; // [rsp+70h] [rbp-448h] BYREF
  char v38; // [rsp+74h] [rbp-444h]
  __int64 (__fastcall **v39)(); // [rsp+B0h] [rbp-408h] BYREF
  char v40; // [rsp+B8h] [rbp-400h]
  __int64 v41; // [rsp+C0h] [rbp-3F8h]
  __int16 *v42; // [rsp+C8h] [rbp-3F0h]
  _OWORD *v43; // [rsp+D0h] [rbp-3E8h]
  __int64 v44; // [rsp+D8h] [rbp-3E0h]
  int v45; // [rsp+E0h] [rbp-3D8h]
  char v46; // [rsp+E4h] [rbp-3D4h]
  _OWORD v47[3]; // [rsp+E8h] [rbp-3D0h] BYREF
  __int64 v48; // [rsp+118h] [rbp-3A0h]
  __int64 v49; // [rsp+120h] [rbp-398h]
  __int64 v50; // [rsp+128h] [rbp-390h]
  int v51; // [rsp+138h] [rbp-380h] BYREF
  __int64 v52; // [rsp+140h] [rbp-378h]
  int *v53; // [rsp+148h] [rbp-370h]
  int *v54; // [rsp+150h] [rbp-368h]
  __int64 v55; // [rsp+158h] [rbp-360h]
  int v56; // [rsp+168h] [rbp-350h] BYREF
  __int64 v57; // [rsp+170h] [rbp-348h]
  int *v58; // [rsp+178h] [rbp-340h]
  int *v59; // [rsp+180h] [rbp-338h]
  __int64 v60; // [rsp+188h] [rbp-330h]
  __int64 v61; // [rsp+190h] [rbp-328h]
  int v62; // [rsp+198h] [rbp-320h]
  _DWORD *v63; // [rsp+1A0h] [rbp-318h]
  __int64 v64; // [rsp+1A8h] [rbp-310h]
  _DWORD v65[4]; // [rsp+1B0h] [rbp-308h] BYREF
  __int64 v66; // [rsp+1C0h] [rbp-2F8h]
  __int64 v67; // [rsp+1C8h] [rbp-2F0h]
  int v68; // [rsp+1D0h] [rbp-2E8h]
  __int64 v69; // [rsp+1D8h] [rbp-2E0h]
  char v70; // [rsp+1E0h] [rbp-2D8h]
  void *ptr; // [rsp+1E8h] [rbp-2D0h]
  __int64 v72; // [rsp+1F0h] [rbp-2C8h]
  _BYTE v73[512]; // [rsp+1F8h] [rbp-2C0h] BYREF
  char v74[16]; // [rsp+3F8h] [rbp-C0h] BYREF
  int v75; // [rsp+408h] [rbp-B0h]
  __int128 v76; // [rsp+410h] [rbp-A8h]
  __int64 v77; // [rsp+420h] [rbp-98h]
  unsigned int v78; // [rsp+428h] [rbp-90h]
  int v79; // [rsp+438h] [rbp-80h] BYREF
  void *v80; // [rsp+440h] [rbp-78h]
  int *v81; // [rsp+448h] [rbp-70h]
  int *v82; // [rsp+450h] [rbp-68h]
  __int64 v83; // [rsp+458h] [rbp-60h]
  __int64 v84; // [rsp+460h] [rbp-58h]
  __int64 v85; // [rsp+468h] [rbp-50h]
  __int64 v86; // [rsp+470h] [rbp-48h]

  v3 = (unsigned __int64)a1;
  v35 = 0;
  v42 = &v29;
  v4 = *(_QWORD *)(a2 + 2160);
  v38 &= ~1u;
  v5 = *(_DWORD *)(v4 + 136);
  LOBYTE(v4) = *(_BYTE *)(v4 + 140);
  v29 = 0;
  v41 = a2;
  v45 = v5;
  v46 = v4 & 1;
  v27 = &v39;
  v36 = 0;
  v37 = 0;
  v6 = _mm_loadh_ps((const double *)&v27);
  v40 = 0;
  v30 = 0;
  v39 = &off_47DA958;
  v47[0] = v6;
  v53 = &v51;
  v54 = &v51;
  v58 = &v56;
  v59 = &v56;
  v63 = v65;
  memset(&v47[1], 0, 32);
  v64 = 0x200000001LL;
  v44 = 0x200000001LL;
  v72 = 0x1000000000LL;
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
  v65[2] = 1;
  v68 = 0;
  v66 = 0;
  v67 = 0;
  v69 = 0;
  v70 = 0;
  v43 = v47;
  ptr = v73;
  sub_69F1C0((__int64)v74, 0, 0, 0);
  v7 = &v35;
  v75 = 0;
  v78 = 0;
  v77 = 0;
  v79 = 0;
  v80 = nullptr;
  v81 = &v79;
  v82 = &v79;
  v83 = 0;
  v84 = 0;
  v85 = -1;
  v86 = 0;
  v40 = 1;
  v76 = 0;
  if ( (unsigned __int8)sub_8331A0(a1, (__int64)&v35, a2, v34) )
  {
    v8 = v34[0];
  }
  else
  {
    a1 = v27;
    v7 = (__int16 *)v3;
    v8 = sub_85F8D0((__int64)v27, v3, &v37);
  }
  if ( v8 && !(_BYTE)v35 && v37 == 2 )
  {
    v9 = 0;
    v10 = 0;
  }
  else
  {
    a1 = (_WORD *)v3;
    v9 = 2;
    v10 = sub_AC6DA0(a1);
  }
  v39 = &off_47DA958;
  v11 = (char *)ptr;
  v28 = (v10 << 32) | v9;
  v12 = (char *)ptr + 32 * (unsigned int)v72;
  if ( ptr != v12 )
  {
    do
    {
      a1 = *((_WORD **)v11 + 3);
      if ( (unsigned int)sub_B19900(a1) )
      {
        *(_BYTE *)v42 = 1;
        if ( HIDWORD(v86) <= 2 && !WORD1(v86) )
          break;
      }
      v11 += 32;
    }
    while ( v12 != v11 );
  }
  v13 = (_QWORD **)v80;
  LODWORD(v72) = 0;
  if ( v80 )
  {
    while ( 1 )
    {
      sub_822210(v13[3]);
      v14 = (_QWORD **)v13[2];
      if ( *((_DWORD *)v13 + 10) > 1u )
        sub_69F740((__int64)(v13 + 5));
      v7 = (__int16 *)&qword_68;
      a1 = v13;
      operator delete(v13, 0x68u);
      if ( !v14 )
        break;
      v13 = v14;
    }
  }
  if ( !v78 )
  {
    v15 = 0;
    goto LABEL_19;
  }
  v17 = sub_69F620(a1, v7);
  v32 = nullptr;
  v31[0] = v17;
  v31[1] = v18;
  v33 = 0;
  v19 = sub_69F630(a1, v7);
  v20 = *((_QWORD **)&v76 + 1);
  v34[2] = 0;
  v34[0] = v19;
  v34[1] = v21;
  v34[3] = 0;
  v22 = *((_QWORD *)&v76 + 1) + 40LL * v78;
  if ( *((_QWORD *)&v76 + 1) != v22 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v20, v31) )
      {
        v23 = v20[3];
        if ( v23 == v33 )
        {
          v24 = (_QWORD *)v20[2];
          v25 = &v24[v23];
          v26 = v32;
          if ( v24 == v25 )
            goto LABEL_29;
          while ( *v24 == *v26 )
          {
            ++v24;
            ++v26;
            if ( v25 == v24 )
              goto LABEL_29;
          }
        }
      }
      sub_69F550(v20, v34);
LABEL_29:
      v20 += 5;
      if ( (_QWORD *)v22 == v20 )
      {
        v15 = 40LL * v78;
        goto LABEL_19;
      }
    }
  }
  v15 = 0;
LABEL_19:
  operator delete();
  if ( ptr != v73 )
    free(ptr);
  sub_822100((__int64)v47);
  sub_A2CAF0(v27, v15);
  if ( v37 > 1 )
    sub_69F740((__int64)&v37);
  return v28;
}

