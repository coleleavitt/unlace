__int64 __fastcall sub_860D40(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __m128i si128; // xmm0
  int v10; // edx
  __int64 v11; // rdi
  unsigned int v12; // eax
  char *v13; // r13
  char *v14; // rbp
  _QWORD **v15; // rbp
  _QWORD **v16; // r13
  __int64 v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rbp
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rdx
  __int64 (__fastcall ***v29)(); // [rsp+0h] [rbp-4C0h] BYREF
  __m128 v30; // [rsp+8h] [rbp-4B8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-4A8h]
  unsigned int *v32; // [rsp+20h] [rbp-4A0h]
  _QWORD v33[2]; // [rsp+28h] [rbp-498h] BYREF
  _QWORD *v34; // [rsp+38h] [rbp-488h]
  __int64 v35; // [rsp+40h] [rbp-480h]
  _QWORD v36[4]; // [rsp+48h] [rbp-478h] BYREF
  __int64 *v37; // [rsp+68h] [rbp-458h] BYREF
  __int64 v38; // [rsp+70h] [rbp-450h]
  unsigned int v39; // [rsp+78h] [rbp-448h] BYREF
  char v40; // [rsp+7Ch] [rbp-444h]
  __int64 v41; // [rsp+80h] [rbp-440h] BYREF
  unsigned int v42; // [rsp+88h] [rbp-438h]
  char v43; // [rsp+8Ch] [rbp-434h]
  __int64 (__fastcall **v44)(); // [rsp+B8h] [rbp-408h] BYREF
  char v45; // [rsp+C0h] [rbp-400h]
  __int64 v46; // [rsp+C8h] [rbp-3F8h]
  _BYTE *v47; // [rsp+D0h] [rbp-3F0h]
  _OWORD *v48; // [rsp+D8h] [rbp-3E8h]
  __int64 v49; // [rsp+E0h] [rbp-3E0h]
  int v50; // [rsp+E8h] [rbp-3D8h]
  char v51; // [rsp+ECh] [rbp-3D4h]
  _OWORD v52[3]; // [rsp+F0h] [rbp-3D0h] BYREF
  __int64 v53; // [rsp+120h] [rbp-3A0h]
  __int64 v54; // [rsp+128h] [rbp-398h]
  __int64 v55; // [rsp+130h] [rbp-390h]
  int v56; // [rsp+140h] [rbp-380h] BYREF
  __int64 v57; // [rsp+148h] [rbp-378h]
  int *v58; // [rsp+150h] [rbp-370h]
  int *v59; // [rsp+158h] [rbp-368h]
  __int64 v60; // [rsp+160h] [rbp-360h]
  int v61; // [rsp+170h] [rbp-350h] BYREF
  __int64 v62; // [rsp+178h] [rbp-348h]
  int *v63; // [rsp+180h] [rbp-340h]
  int *v64; // [rsp+188h] [rbp-338h]
  __int64 v65; // [rsp+190h] [rbp-330h]
  __int64 v66; // [rsp+198h] [rbp-328h]
  int v67; // [rsp+1A0h] [rbp-320h]
  _DWORD *v68; // [rsp+1A8h] [rbp-318h]
  __int64 v69; // [rsp+1B0h] [rbp-310h]
  _DWORD v70[4]; // [rsp+1B8h] [rbp-308h] BYREF
  __int64 v71; // [rsp+1C8h] [rbp-2F8h]
  __int64 v72; // [rsp+1D0h] [rbp-2F0h]
  int v73; // [rsp+1D8h] [rbp-2E8h]
  __int64 v74; // [rsp+1E0h] [rbp-2E0h]
  char v75; // [rsp+1E8h] [rbp-2D8h]
  void *ptr; // [rsp+1F0h] [rbp-2D0h]
  __int64 v77; // [rsp+1F8h] [rbp-2C8h]
  _BYTE v78[512]; // [rsp+200h] [rbp-2C0h] BYREF
  char v79[16]; // [rsp+400h] [rbp-C0h] BYREF
  int v80; // [rsp+410h] [rbp-B0h]
  __int128 v81; // [rsp+418h] [rbp-A8h]
  __int64 v82; // [rsp+428h] [rbp-98h]
  unsigned int v83; // [rsp+430h] [rbp-90h]
  int v84; // [rsp+440h] [rbp-80h] BYREF
  void *v85; // [rsp+448h] [rbp-78h]
  int *v86; // [rsp+450h] [rbp-70h]
  int *v87; // [rsp+458h] [rbp-68h]
  __int64 v88; // [rsp+460h] [rbp-60h]
  __int64 v89; // [rsp+468h] [rbp-58h]
  __int64 v90; // [rsp+470h] [rbp-50h]
  __int64 v91; // [rsp+478h] [rbp-48h]

  v37 = a2;
  v29 = &v44;
  v38 = a3;
  v30 = _mm_loadh_ps((const double *)&v29);
  v7 = sub_25E8DD0("EvaluateKnownConstIntCheckOverflow", 0x22u);
  v38 = a4;
  v31 = v7;
  v8 = *(_QWORD *)(a3 + 2160);
  v40 &= ~1u;
  si128 = _mm_load_si128((const __m128i *)&v30);
  LOWORD(v37) = 0;
  v39 = 0;
  v10 = *(_DWORD *)(v8 + 136);
  LOBYTE(v8) = *(_BYTE *)(v8 + 140);
  v52[0] = si128;
  memset(&v52[1], 0, 32);
  v51 = v8 & 1;
  v58 = &v56;
  v59 = &v56;
  v63 = &v61;
  v64 = &v61;
  v47 = &v37;
  v50 = v10;
  v45 = 0;
  v44 = &off_47DA958;
  v46 = a3;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v65 = 0;
  v66 = 0;
  v68 = v70;
  v67 = 1;
  v69 = 0x200000001LL;
  v49 = 0x200000001LL;
  v70[0] = 1;
  v77 = 0x1000000000LL;
  v70[2] = 1;
  v73 = 0;
  v71 = 0;
  v72 = 0;
  v74 = 0;
  v75 = 0;
  v48 = v52;
  ptr = v78;
  sub_69F1C0((__int64)v79, 0, 0, 0);
  v11 = (__int64)v29;
  v80 = 0;
  v91 = 0x301000000LL;
  v32 = &v39;
  v83 = 0;
  v82 = 0;
  v84 = 0;
  v85 = nullptr;
  v86 = &v84;
  v87 = &v84;
  v45 = 1;
  v88 = 0;
  v89 = 0;
  v90 = -1;
  v81 = 0;
  sub_85F8D0((__int64)v29, (unsigned __int64)a2, &v39);
  v12 = v42;
  *(_DWORD *)(a1 + 8) = v42;
  if ( v12 > 0x40 )
  {
    a2 = &v41;
    v11 = a1;
    sub_2585B30(a1);
  }
  else
  {
    *(_QWORD *)a1 = v41;
  }
  v13 = (char *)ptr;
  v44 = &off_47DA958;
  v14 = (char *)ptr + 32 * (unsigned int)v77;
  for ( *(_BYTE *)(a1 + 12) = v43; v14 != v13; v13 += 32 )
  {
    v11 = *((_QWORD *)v13 + 3);
    if ( (unsigned int)sub_B19900(v11) )
    {
      *v47 = 1;
      if ( HIDWORD(v91) <= 2 && !WORD1(v91) )
        break;
    }
  }
  v15 = (_QWORD **)v85;
  LODWORD(v77) = 0;
  if ( v85 )
  {
    while ( 1 )
    {
      sub_822210(v15[3]);
      v16 = (_QWORD **)v15[2];
      if ( *((_DWORD *)v15 + 10) > 1u )
        sub_69F740((__int64)(v15 + 5));
      a2 = &qword_68;
      v11 = (__int64)v15;
      operator delete(v15, 0x68u);
      if ( !v16 )
        break;
      v15 = v16;
    }
  }
  if ( !v83 )
  {
    v17 = 0;
    goto LABEL_16;
  }
  v19 = sub_69F620(v11, a2);
  v34 = nullptr;
  v33[0] = v19;
  v33[1] = v20;
  v35 = 0;
  v21 = sub_69F630(v11, a2);
  v22 = *((_QWORD **)&v81 + 1);
  v36[2] = 0;
  v36[0] = v21;
  v36[1] = v23;
  v36[3] = 0;
  v24 = *((_QWORD *)&v81 + 1) + 40LL * v83;
  if ( *((_QWORD *)&v81 + 1) != v24 )
  {
    v30.m128_u64[0] = (unsigned __int64)v36;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v22, v33) )
      {
        v25 = v22[3];
        if ( v25 == v35 )
        {
          v26 = (_QWORD *)v22[2];
          v27 = &v26[v25];
          v28 = v34;
          if ( v26 == v27 )
            goto LABEL_26;
          while ( *v26 == *v28 )
          {
            ++v26;
            ++v28;
            if ( v27 == v26 )
              goto LABEL_26;
          }
        }
      }
      sub_69F550(v22, v30.m128_u64[0]);
LABEL_26:
      v22 += 5;
      if ( (_QWORD *)v24 == v22 )
      {
        v17 = 40LL * v83;
        goto LABEL_16;
      }
    }
  }
  v17 = 0;
LABEL_16:
  operator delete();
  if ( ptr != v78 )
    free(ptr);
  sub_822100((__int64)v52);
  sub_A2CAF0(v29, v17);
  if ( v39 > 1 )
    sub_69F740((__int64)v32);
  if ( v31 )
    sub_25EA250(v31);
  return a1;
}

