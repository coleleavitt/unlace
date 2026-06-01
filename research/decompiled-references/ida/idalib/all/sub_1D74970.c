__int64 __fastcall sub_1D74970(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v8; // rax
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // r13
  _QWORD *v18; // r12
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  void *v24; // rdi
  void **v25; // rbp
  void **v26; // rax
  void *v27; // rdi
  __int64 v29; // rdx
  __int64 v30; // rdi
  int v31; // eax
  unsigned int *v32; // rdx
  unsigned int *v33; // r8
  _DWORD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rdi
  char v37; // [rsp+8h] [rbp-390h]
  _QWORD *v38; // [rsp+8h] [rbp-390h]
  void **v39; // [rsp+8h] [rbp-390h]
  __int64 v40; // [rsp+10h] [rbp-388h]
  __int64 v41; // [rsp+18h] [rbp-380h]
  __int64 v42; // [rsp+28h] [rbp-370h]
  bool v43; // [rsp+36h] [rbp-362h] BYREF
  bool v44; // [rsp+37h] [rbp-361h] BYREF
  __int64 v45; // [rsp+38h] [rbp-360h] BYREF
  void *v46; // [rsp+40h] [rbp-358h] BYREF
  __int64 v47; // [rsp+48h] [rbp-350h]
  _BYTE v48[128]; // [rsp+50h] [rbp-348h] BYREF
  void *v49[2]; // [rsp+D0h] [rbp-2C8h] BYREF
  __int64 v50; // [rsp+E0h] [rbp-2B8h] BYREF
  int v51; // [rsp+E8h] [rbp-2B0h]
  __int128 v52; // [rsp+160h] [rbp-238h] BYREF
  int v53; // [rsp+170h] [rbp-228h]
  __int16 v54; // [rsp+174h] [rbp-224h]
  __int64 v55; // [rsp+178h] [rbp-220h]
  _QWORD *v56; // [rsp+180h] [rbp-218h]
  __int64 v57; // [rsp+188h] [rbp-210h]
  _QWORD v58[17]; // [rsp+190h] [rbp-208h] BYREF
  __int64 v59; // [rsp+218h] [rbp-180h]
  __int64 v60; // [rsp+220h] [rbp-178h]
  __int64 v61; // [rsp+230h] [rbp-168h]
  __int64 v62; // [rsp+238h] [rbp-160h]
  int v63; // [rsp+248h] [rbp-150h]
  char v64; // [rsp+24Ch] [rbp-14Ch]
  void *v65; // [rsp+250h] [rbp-148h]
  __int64 v66; // [rsp+258h] [rbp-140h]
  _QWORD v67[10]; // [rsp+260h] [rbp-138h] BYREF
  void *v68; // [rsp+2B0h] [rbp-E8h]
  __int64 v69; // [rsp+2B8h] [rbp-E0h]
  _WORD v70[52]; // [rsp+2C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+328h] [rbp-70h]
  __int64 v72; // [rsp+330h] [rbp-68h]
  _BYTE v73[96]; // [rsp+338h] [rbp-60h] BYREF

  v8 = (_QWORD *)sub_BBFE00(a2);
  v9 = *(__int64 (__fastcall **)(__int64))(*v8 + 32LL);
  if ( v9 == sub_6EE900 )
    v10 = v8[9];
  else
    v10 = v9((__int64)v8);
  sub_F22AA0((unsigned __int64 *)&v45, v10);
  v11 = sub_A780B0(*(_QWORD *)(a1 + 248), v45, *(_QWORD *)(a2 + 128) + 8LL, **(unsigned int **)(a2 + 128));
  v12 = sub_A780B0(*(_QWORD *)(a1 + 248), v45, *(_QWORD *)(a3 + 128) + 8LL, **(unsigned int **)(a3 + 128));
  v53 = a4;
  v13 = v12;
  v59 &= 0xFFFFFFFE00000000LL;
  v61 &= 0xFFFFFFFE00000000LL;
  v65 = v67;
  v56 = v58;
  v68 = v70;
  v54 = 0;
  v52 = 0;
  v70[48] = 0;
  v66 = 0x800000000LL;
  ptr = v73;
  v55 = 0;
  v57 = 0x400000000LL;
  v58[16] = 0;
  v60 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 0;
  v67[8] = 0;
  v67[9] = 0;
  v69 = 0x400000000LL;
  v72 = 0x400000000LL;
  v14 = sub_BBFE00(a3);
  v37 = sub_1D74580(a1, v11, v13, a3, v14, (__int64)&v52);
  v15 = sub_BBFE00(a2);
  if ( v37 != (unsigned __int8)sub_1D74580(a1, v13, v11, a2, v15, (__int64)&v52) )
  {
    v16 = a3;
    if ( v37 )
      v16 = a2;
    goto LABEL_6;
  }
  if ( !v37 )
    goto LABEL_66;
  v30 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = a2;
  v31 = sub_1D368A0(v30, *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL));
  if ( v31 == 1 )
    goto LABEL_6;
  v16 = a3;
  if ( v31 == 2 )
    goto LABEL_6;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0
    || (v32 = *(unsigned int **)(a2 + 144),
        v33 = *(unsigned int **)(a3 + 144),
        (v32[5] & 0x1FFFFFFF) != (v33[5] & 0x1FFFFFFF))
    || (*(_OWORD *)v49 = 0, v50 = 0, v51 = 0, !(unsigned __int8)sub_1CD38B0(a1, v49, v32, nullptr, v33, 0, 0.0, 2, 0)) )
  {
LABEL_66:
    v16 = 0;
    goto LABEL_6;
  }
  v40 = *(_QWORD *)(a1 + 248);
  v34 = *(_DWORD **)(a2 + 128);
  if ( *v34 )
  {
    v35 = (__int64)(v34 + 2);
    v41 = *(_QWORD *)(a3 + 128) + 8LL;
    v42 = (__int64)&v34[6 * (*v34 - 1) + 8];
    while ( 1 )
    {
      v46 = v48;
      v47 = 0x2000000000LL;
      v49[1] = (void *)0x2000000000LL;
      v49[0] = &v50;
      sub_F1D660(v35, (__int64)&v46, v40);
      sub_F1D660(v41, (__int64)v49, v40);
      if ( !(unsigned __int8)sub_2222ED0(&v46, v49) )
        break;
      if ( v49[0] != &v50 )
        free(v49[0]);
      if ( v46 == v48 )
      {
        v35 += 24;
        v41 += 24;
        if ( v42 == v35 )
          goto LABEL_52;
      }
      else
      {
        free(v46);
        v35 += 24;
        v41 += 24;
        if ( v35 == v42 )
          goto LABEL_52;
      }
    }
    if ( v49[0] != &v50 )
      free(v49[0]);
    if ( v46 != v48 )
      free(v46);
    goto LABEL_66;
  }
LABEL_52:
  v36 = *(_QWORD *)(a2 + 144);
  v46 = v48;
  v47 = 0x300000000LL;
  v49[0] = &v50;
  v49[1] = (void *)0x300000000LL;
  sub_BBD810(v36, (__int64)&v46);
  sub_BBD810(*(_QWORD *)(a3 + 144), (__int64)v49);
  if ( (unsigned __int8)sub_175BCD0(a1, a2, (__int64)v46, (unsigned int)v47, a3, &v43, (__int64)v49[0], LODWORD(v49[1]))
    || (unsigned __int8)sub_175BCD0(a1, a3, (__int64)v49[0], LODWORD(v49[1]), a2, &v44, (__int64)v46, (unsigned int)v47)
    || v43 == v44 )
  {
    v16 = 0;
  }
  else
  {
    v16 = a3;
    if ( v43 )
      v16 = a2;
  }
  if ( v49[0] != &v50 )
    free(v49[0]);
  if ( v46 != v48 )
    free(v46);
LABEL_6:
  if ( ptr != v73 )
    free(ptr);
  if ( v68 != v70 )
    free(v68);
  if ( v65 != v67 )
    free(v65);
  v17 = v56;
  v18 = &v56[4 * (unsigned int)v57];
  if ( v56 != v18 )
  {
    do
    {
      v18 -= 4;
      v19 = v18[1];
      if ( v19 )
      {
        v20 = v18[2];
        if ( v20 )
        {
          if ( v19 < v20 || v19 > v20 + 14848 )
          {
            v21 = *(_QWORD **)(v19 + 528);
            v22 = &v21[8 * (unsigned __int64)*(unsigned int *)(v19 + 536)];
            if ( v21 != v22 )
            {
              do
              {
                while ( 1 )
                {
                  v22 -= 8;
                  v23 = (_QWORD *)v22[3];
                  if ( v23 == v22 + 5 )
                    break;
                  v38 = v21;
                  operator delete(v23);
                  v21 = v38;
                  if ( v38 == v22 )
                    goto LABEL_19;
                }
              }
              while ( v21 != v22 );
LABEL_19:
              v22 = *(_QWORD **)(v19 + 528);
            }
            if ( v22 != (_QWORD *)(v19 + 544) )
              free(v22);
            v24 = *(void **)(v19 + 416);
            if ( v24 != (void *)(v19 + 432) )
              free(v24);
            v25 = (void **)(v19 + 384);
            v26 = (void **)(v19 + 64);
            do
            {
              while ( 1 )
              {
                v27 = *v25;
                if ( *v25 == v25 + 2 )
                  break;
                v39 = v26;
                v25 -= 4;
                operator delete(v27);
                v26 = v39;
                if ( v25 == v39 )
                  goto LABEL_27;
              }
              v25 -= 4;
            }
            while ( v25 != v26 );
LABEL_27:
            operator delete((void *)v19, 0x3A0u);
          }
          else
          {
            v29 = *(unsigned int *)(v20 + 14976);
            *(_DWORD *)(v20 + 14976) = v29 + 1;
            *(_QWORD *)(v20 + 8 * v29 + 14848) = v19;
          }
        }
      }
    }
    while ( v17 != v18 );
    v18 = v56;
  }
  if ( v18 != v58 )
    free(v18);
  return v16;
}
