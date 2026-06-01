void __fastcall sub_861300(__int64 (__fastcall **a1)(), __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 (__fastcall ***v6)(); // rdi
  char *v7; // r12
  char *v8; // r13
  _QWORD **v9; // r12
  _QWORD **v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // rdx
  char v22; // [rsp+1Fh] [rbp-499h] BYREF
  _QWORD v23[2]; // [rsp+20h] [rbp-498h] BYREF
  _QWORD *v24; // [rsp+30h] [rbp-488h]
  __int64 v25; // [rsp+38h] [rbp-480h]
  _QWORD v26[4]; // [rsp+40h] [rbp-478h] BYREF
  __int16 v27; // [rsp+60h] [rbp-458h] BYREF
  __int64 v28; // [rsp+68h] [rbp-450h]
  unsigned int v29; // [rsp+70h] [rbp-448h] BYREF
  char v30; // [rsp+74h] [rbp-444h]
  __int64 (__fastcall **v31)(); // [rsp+B0h] [rbp-408h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-400h]
  __int64 v33; // [rsp+C0h] [rbp-3F8h]
  __int16 *v34; // [rsp+C8h] [rbp-3F0h]
  _OWORD *v35; // [rsp+D0h] [rbp-3E8h]
  __int64 v36; // [rsp+D8h] [rbp-3E0h]
  int v37; // [rsp+E0h] [rbp-3D8h]
  char v38; // [rsp+E4h] [rbp-3D4h]
  _OWORD v39[3]; // [rsp+E8h] [rbp-3D0h] BYREF
  __int64 v40; // [rsp+118h] [rbp-3A0h]
  __int64 v41; // [rsp+120h] [rbp-398h]
  __int64 v42; // [rsp+128h] [rbp-390h]
  int v43; // [rsp+138h] [rbp-380h] BYREF
  __int64 v44; // [rsp+140h] [rbp-378h]
  int *v45; // [rsp+148h] [rbp-370h]
  int *v46; // [rsp+150h] [rbp-368h]
  __int64 v47; // [rsp+158h] [rbp-360h]
  int v48; // [rsp+168h] [rbp-350h] BYREF
  __int64 v49; // [rsp+170h] [rbp-348h]
  int *v50; // [rsp+178h] [rbp-340h]
  int *v51; // [rsp+180h] [rbp-338h]
  __int64 v52; // [rsp+188h] [rbp-330h]
  __int64 v53; // [rsp+190h] [rbp-328h]
  int v54; // [rsp+198h] [rbp-320h]
  _DWORD *v55; // [rsp+1A0h] [rbp-318h]
  __int64 v56; // [rsp+1A8h] [rbp-310h]
  _DWORD v57[4]; // [rsp+1B0h] [rbp-308h] BYREF
  __int64 v58; // [rsp+1C0h] [rbp-2F8h]
  __int64 v59; // [rsp+1C8h] [rbp-2F0h]
  int v60; // [rsp+1D0h] [rbp-2E8h]
  __int64 v61; // [rsp+1D8h] [rbp-2E0h]
  char v62; // [rsp+1E0h] [rbp-2D8h]
  void *ptr; // [rsp+1E8h] [rbp-2D0h]
  __int64 v64; // [rsp+1F0h] [rbp-2C8h]
  _BYTE v65[512]; // [rsp+1F8h] [rbp-2C0h] BYREF
  char v66[16]; // [rsp+3F8h] [rbp-C0h] BYREF
  int v67; // [rsp+408h] [rbp-B0h]
  __int128 v68; // [rsp+410h] [rbp-A8h]
  __int64 v69; // [rsp+420h] [rbp-98h]
  unsigned int v70; // [rsp+428h] [rbp-90h]
  int v71; // [rsp+438h] [rbp-80h] BYREF
  void *v72; // [rsp+440h] [rbp-78h]
  int *v73; // [rsp+448h] [rbp-70h]
  int *v74; // [rsp+450h] [rbp-68h]
  __int64 v75; // [rsp+458h] [rbp-60h]
  __int64 v76; // [rsp+460h] [rbp-58h]
  __int64 v77; // [rsp+468h] [rbp-50h]
  __int64 v78; // [rsp+470h] [rbp-48h]

  v31 = a1;
  v32 = a2;
  v27 = 0;
  v3 = sub_25E8DD0("EvaluateForOverflow", 0x13u);
  v30 &= ~1u;
  v28 = 0;
  v29 = 0;
  if ( (unsigned __int8)sub_8331A0(a1, (__int64)&v27, a2, &v22) )
    goto LABEL_2;
  v33 = a2;
  v4 = *(_QWORD *)(a2 + 2160);
  v31 = &off_47DA958;
  LOBYTE(v32) = 0;
  v34 = &v27;
  v37 = *(_DWORD *)(v4 + 136);
  LOBYTE(v4) = *(_BYTE *)(v4 + 140);
  v40 = 0;
  v41 = 0;
  v38 = v4 & 1;
  v43 = 0;
  v45 = &v43;
  v46 = &v43;
  v50 = &v48;
  v51 = &v48;
  v55 = v57;
  v39[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v31);
  memset(&v39[1], 0, 32);
  v56 = 0x200000001LL;
  v42 = 0;
  v44 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 1;
  v57[0] = 1;
  v57[2] = 1;
  v60 = 0;
  v36 = 0x200000001LL;
  v35 = v39;
  v64 = 0x1000000000LL;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  ptr = v65;
  sub_69F1C0((__int64)v66, 0, 0, 0);
  v5 = (__int64)a1;
  v6 = &v31;
  v67 = 0;
  v73 = &v71;
  v74 = &v71;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  v72 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = -1;
  v78 = 0x301000000LL;
  v68 = 0;
  sub_85F8D0((__int64)&v31, (unsigned __int64)a1, &v29);
  v7 = (char *)ptr;
  v31 = &off_47DA958;
  v8 = (char *)ptr + 32 * (unsigned int)v64;
  if ( ptr != v8 )
  {
    do
    {
      v6 = *((__int64 (__fastcall ****)())v7 + 3);
      if ( (unsigned int)sub_B19900(v6) )
      {
        *(_BYTE *)v34 = 1;
        if ( HIDWORD(v78) <= 2 && !WORD1(v78) )
          break;
      }
      v7 += 32;
    }
    while ( v8 != v7 );
  }
  v9 = (_QWORD **)v72;
  LODWORD(v64) = 0;
  if ( v72 )
  {
    while ( 1 )
    {
      sub_822210(v9[3]);
      v10 = (_QWORD **)v9[2];
      if ( *((_DWORD *)v9 + 10) > 1u )
        sub_69F740((__int64)(v9 + 5));
      v5 = 104;
      v6 = (__int64 (__fastcall ***)())v9;
      operator delete(v9, 0x68u);
      if ( !v10 )
        break;
      v9 = v10;
    }
  }
  if ( !v70 )
  {
    v11 = 0;
    goto LABEL_20;
  }
  v12 = sub_69F620(v6, v5);
  v24 = nullptr;
  v23[0] = v12;
  v23[1] = v13;
  v25 = 0;
  v14 = sub_69F630(v6, v5);
  v15 = *((_QWORD **)&v68 + 1);
  v26[2] = 0;
  v26[0] = v14;
  v26[1] = v16;
  v26[3] = 0;
  v17 = *((_QWORD *)&v68 + 1) + 40LL * v70;
  if ( *((_QWORD *)&v68 + 1) != v17 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v15, v23) )
      {
        v18 = v15[3];
        if ( v18 == v25 )
        {
          v19 = (_QWORD *)v15[2];
          v20 = &v19[v18];
          v21 = v24;
          if ( v19 == v20 )
            goto LABEL_26;
          while ( *v19 == *v21 )
          {
            ++v19;
            ++v21;
            if ( v20 == v19 )
              goto LABEL_26;
          }
        }
      }
      sub_69F550(v15, v26);
LABEL_26:
      v15 += 5;
      if ( (_QWORD *)v17 == v15 )
      {
        v11 = 40LL * v70;
        goto LABEL_20;
      }
    }
  }
  v11 = 0;
LABEL_20:
  operator delete();
  if ( ptr != v65 )
    free(ptr);
  sub_822100((__int64)v39);
  sub_A2CAF0(&v31, v11);
LABEL_2:
  if ( v29 > 1 )
    sub_69F740((__int64)&v29);
  if ( v3 )
    sub_25EA250(v3);
}

