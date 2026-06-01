_QWORD *__fastcall sub_1D73490(__int64 a1, _QWORD *a2, _QWORD *a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  char v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // r13
  __int64 v14; // rdx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  char v17; // r15
  unsigned __int64 v18; // rax
  _QWORD *v19; // r14
  _QWORD *v20; // r13
  _QWORD *v21; // r12
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rbp
  _QWORD *v26; // rdi
  void *v27; // rdi
  void **v28; // rbp
  void **v29; // rax
  void *v30; // rdi
  __int64 v32; // rdx
  __int64 v33; // rsi
  int v34; // eax
  unsigned int *v35; // rdx
  unsigned int *v36; // r8
  _DWORD *v37; // rax
  __int64 v38; // r14
  __int64 v39; // rdi
  unsigned __int64 v40; // [rsp+8h] [rbp-390h]
  _QWORD *v41; // [rsp+8h] [rbp-390h]
  void **v42; // [rsp+8h] [rbp-390h]
  __int64 v43; // [rsp+10h] [rbp-388h]
  __int64 v44; // [rsp+18h] [rbp-380h]
  __int64 v45; // [rsp+28h] [rbp-370h]
  bool v46; // [rsp+3Eh] [rbp-35Ah] BYREF
  bool v47; // [rsp+3Fh] [rbp-359h] BYREF
  void *v48; // [rsp+40h] [rbp-358h] BYREF
  __int64 v49; // [rsp+48h] [rbp-350h]
  _BYTE v50[128]; // [rsp+50h] [rbp-348h] BYREF
  void *v51[2]; // [rsp+D0h] [rbp-2C8h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-2B8h] BYREF
  int v53; // [rsp+E8h] [rbp-2B0h]
  _QWORD v54[2]; // [rsp+160h] [rbp-238h] BYREF
  int v55; // [rsp+170h] [rbp-228h]
  __int16 v56; // [rsp+174h] [rbp-224h]
  __int64 v57; // [rsp+178h] [rbp-220h]
  _QWORD *v58; // [rsp+180h] [rbp-218h]
  __int64 v59; // [rsp+188h] [rbp-210h]
  _QWORD v60[17]; // [rsp+190h] [rbp-208h] BYREF
  __int64 v61; // [rsp+218h] [rbp-180h]
  __int64 v62; // [rsp+220h] [rbp-178h]
  __int64 v63; // [rsp+230h] [rbp-168h]
  __int64 v64; // [rsp+238h] [rbp-160h]
  int v65; // [rsp+248h] [rbp-150h]
  char v66; // [rsp+24Ch] [rbp-14Ch]
  void *v67; // [rsp+250h] [rbp-148h]
  __int64 v68; // [rsp+258h] [rbp-140h]
  _QWORD v69[10]; // [rsp+260h] [rbp-138h] BYREF
  void *v70; // [rsp+2B0h] [rbp-E8h]
  __int64 v71; // [rsp+2B8h] [rbp-E0h]
  _WORD v72[52]; // [rsp+2C0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+328h] [rbp-70h]
  __int64 v74; // [rsp+330h] [rbp-68h]
  _BYTE v75[96]; // [rsp+338h] [rbp-60h] BYREF

  v8 = a2[6];
  v54[0] = 0;
  v9 = *(_QWORD *)(v8 + 32);
  v10 = *(_QWORD *)&byte_8[v9 & 0xFFFFFFFFFFFFFFF0LL];
  v11 = v10 | v9;
  v12 = *(_QWORD *)(a3[6] + 32LL);
  v13 = v10 & 0xFFFFFFFFFFFFFFF8LL | v11 & 7;
  v14 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
  v55 = a4;
  v56 = 0;
  v68 = 0x800000000LL;
  v54[1] = 0;
  v58 = v60;
  v15 = v14 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14 | (unsigned __int8)v12) & 7;
  v61 &= 0xFFFFFFFE00000000LL;
  v63 &= 0xFFFFFFFE00000000LL;
  v67 = v69;
  v59 = 0x400000000LL;
  v57 = 0;
  v60[16] = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v69[8] = 0;
  v69[9] = 0;
  v70 = v72;
  v72[48] = 0;
  ptr = v75;
  v71 = 0x400000000LL;
  v74 = 0x400000000LL;
  v16 = sub_BBF290((__int64)a3);
  v40 = a1;
  v17 = sub_1D730A0(a1, v13, v15, (__int64)a3, v16, (__int64)v54);
  v18 = sub_BBF290((__int64)a2);
  if ( v17 != (unsigned __int8)sub_1D730A0(v40, v15, v13, (__int64)a2, v18, (__int64)v54) )
  {
    v19 = a3;
    if ( v17 )
      v19 = a2;
    goto LABEL_4;
  }
  if ( !v17 )
    goto LABEL_63;
  v33 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  v19 = a2;
  v34 = sub_1D368A0(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), v33);
  if ( v34 == 1 )
    goto LABEL_4;
  v19 = a3;
  if ( v34 == 2 )
    goto LABEL_4;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)(v40 + 248) + 2320LL) + 1LL) >= 0
    || (v35 = (unsigned int *)a2[23], v36 = (unsigned int *)a3[23], (v35[5] & 0x1FFFFFFF) != (v36[5] & 0x1FFFFFFF))
    || (v52 = 0, *(_OWORD *)v51 = 0, v53 = 0, !(unsigned __int8)sub_1CD38B0(v40, v51, v35, nullptr, v36, 0, 0.0, 2, 0)) )
  {
LABEL_63:
    v19 = nullptr;
    goto LABEL_4;
  }
  v43 = *(_QWORD *)(v40 + 248);
  v37 = (_DWORD *)a2[21];
  if ( *v37 )
  {
    v38 = (__int64)(v37 + 2);
    v44 = a3[21] + 8LL;
    v45 = (__int64)&v37[6 * (*v37 - 1) + 8];
    while ( 1 )
    {
      v48 = v50;
      v51[0] = &v52;
      v49 = 0x2000000000LL;
      v51[1] = (void *)0x2000000000LL;
      sub_F1D660(v38, (__int64)&v48, v43);
      sub_F1D660(v44, (__int64)v51, v43);
      if ( !(unsigned __int8)sub_2222ED0(&v48, v51) )
        break;
      if ( v51[0] != &v52 )
        free(v51[0]);
      if ( v48 == v50 )
      {
        v38 += 24;
        v44 += 24;
        if ( v45 == v38 )
          goto LABEL_50;
      }
      else
      {
        free(v48);
        v38 += 24;
        v44 += 24;
        if ( v38 == v45 )
          goto LABEL_50;
      }
    }
    if ( v51[0] != &v52 )
      free(v51[0]);
    if ( v48 != v50 )
      free(v48);
    goto LABEL_63;
  }
LABEL_50:
  v39 = a2[23];
  v48 = v50;
  v49 = 0x300000000LL;
  v51[0] = &v52;
  v51[1] = (void *)0x300000000LL;
  sub_BBD810(v39, (__int64)&v48);
  sub_BBD810(a3[23], (__int64)v51);
  if ( (unsigned __int8)sub_175BCD0(
                          v40,
                          (__int64)a2,
                          (__int64)v48,
                          (unsigned int)v49,
                          (__int64)a3,
                          &v46,
                          (__int64)v51[0],
                          LODWORD(v51[1]))
    || (unsigned __int8)sub_175BCD0(
                          v40,
                          (__int64)a3,
                          (__int64)v51[0],
                          LODWORD(v51[1]),
                          (__int64)a2,
                          &v47,
                          (__int64)v48,
                          (unsigned int)v49)
    || v46 == v47 )
  {
    v19 = nullptr;
  }
  else
  {
    v19 = a3;
    if ( v46 )
      v19 = a2;
  }
  if ( v51[0] != &v52 )
    free(v51[0]);
  if ( v48 != v50 )
    free(v48);
LABEL_4:
  if ( ptr != v75 )
    free(ptr);
  if ( v70 != v72 )
    free(v70);
  if ( v67 != v69 )
    free(v67);
  v20 = v58;
  v21 = &v58[4 * (unsigned int)v59];
  if ( v58 != v21 )
  {
    do
    {
      v21 -= 4;
      v22 = v21[1];
      if ( v22 )
      {
        v23 = v21[2];
        if ( v23 )
        {
          if ( v22 < v23 || v22 > v23 + 14848 )
          {
            v24 = *(_QWORD **)(v22 + 528);
            v25 = &v24[8 * (unsigned __int64)*(unsigned int *)(v22 + 536)];
            if ( v24 != v25 )
            {
              do
              {
                while ( 1 )
                {
                  v25 -= 8;
                  v26 = (_QWORD *)v25[3];
                  if ( v26 == v25 + 5 )
                    break;
                  v41 = v24;
                  operator delete(v26);
                  v24 = v41;
                  if ( v41 == v25 )
                    goto LABEL_17;
                }
              }
              while ( v24 != v25 );
LABEL_17:
              v25 = *(_QWORD **)(v22 + 528);
            }
            if ( v25 != (_QWORD *)(v22 + 544) )
              free(v25);
            v27 = *(void **)(v22 + 416);
            if ( v27 != (void *)(v22 + 432) )
              free(v27);
            v28 = (void **)(v22 + 384);
            v29 = (void **)(v22 + 64);
            do
            {
              while ( 1 )
              {
                v30 = *v28;
                if ( *v28 == v28 + 2 )
                  break;
                v42 = v29;
                v28 -= 4;
                operator delete(v30);
                v29 = v42;
                if ( v28 == v42 )
                  goto LABEL_25;
              }
              v28 -= 4;
            }
            while ( v28 != v29 );
LABEL_25:
            operator delete((void *)v22, 0x3A0u);
          }
          else
          {
            v32 = *(unsigned int *)(v23 + 14976);
            *(_DWORD *)(v23 + 14976) = v32 + 1;
            *(_QWORD *)(v23 + 8 * v32 + 14848) = v22;
          }
        }
      }
    }
    while ( v20 != v21 );
    v21 = v58;
  }
  if ( v21 != v60 )
    free(v21);
  return v19;
}
