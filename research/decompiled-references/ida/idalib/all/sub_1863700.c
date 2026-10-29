unsigned __int64 __fastcall sub_1863700(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        int a5,
        unsigned __int8 a6,
        double a7)
{
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // r15
  unsigned __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // al
  char v24; // r11
  int v25; // eax
  bool v26; // al
  unsigned int v27; // edx
  int v28; // eax
  bool v29; // al
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  _WORD *v33; // r14
  __int64 v34; // rsi
  __int16 v35; // ax
  unsigned int v36; // eax
  __int64 v37; // rax
  void *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  void *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rax
  void *v45; // rdx
  __int64 v46; // r14
  int v47; // eax
  char v48; // al
  unsigned int v50; // [rsp+8h] [rbp-2D0h]
  unsigned int v51; // [rsp+8h] [rbp-2D0h]
  unsigned __int8 v52; // [rsp+8h] [rbp-2D0h]
  __int64 v53; // [rsp+8h] [rbp-2D0h]
  __int64 v54; // [rsp+8h] [rbp-2D0h]
  char v55; // [rsp+10h] [rbp-2C8h]
  char v56; // [rsp+18h] [rbp-2C0h]
  unsigned __int8 v57; // [rsp+37h] [rbp-2A1h] BYREF
  __int64 v58; // [rsp+38h] [rbp-2A0h] BYREF
  void *v59; // [rsp+40h] [rbp-298h] BYREF
  unsigned int v60; // [rsp+48h] [rbp-290h]
  char v61; // [rsp+4Ch] [rbp-28Ch]
  void *v62; // [rsp+50h] [rbp-288h] BYREF
  void *v63; // [rsp+58h] [rbp-280h]
  void *v64[2]; // [rsp+60h] [rbp-278h] BYREF
  _BYTE v65[16]; // [rsp+70h] [rbp-268h] BYREF
  __int64 (__fastcall **v66)(); // [rsp+80h] [rbp-258h] BYREF
  int v67; // [rsp+88h] [rbp-250h]
  __int128 v68; // [rsp+90h] [rbp-248h]
  __int64 v69; // [rsp+A0h] [rbp-238h]
  char v70; // [rsp+A8h] [rbp-230h]
  int v71; // [rsp+ACh] [rbp-22Ch]
  void **v72; // [rsp+B0h] [rbp-228h]
  void *v73[2]; // [rsp+C0h] [rbp-218h] BYREF
  void *v74; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v75; // [rsp+D8h] [rbp-200h] BYREF
  _WORD v76[52]; // [rsp+E0h] [rbp-1F8h] BYREF
  void *ptr; // [rsp+148h] [rbp-190h]
  __int64 v78; // [rsp+150h] [rbp-188h]
  _BYTE v79[40]; // [rsp+158h] [rbp-180h] BYREF
  void *v80; // [rsp+180h] [rbp-158h] BYREF
  __m128i si128; // [rsp+188h] [rbp-150h] BYREF
  _BYTE v82[320]; // [rsp+198h] [rbp-140h] BYREF

  v10 = (unsigned __int64)a3;
  if ( ((*a3 >> 14) & 0xC) == 0 && (!a4 || ((*a4 >> 14) & 0xC) == 0) && !a6 )
  {
    v19 = sub_1C02150(a1, a3);
    v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
    v21 = sub_19B4A30(a1, v19 & 0xFFFFFFFFFFFFFFFELL, a2, 0, 1, 0);
    if ( v21 == 1 )
    {
      v30 = *(_QWORD *)(a1 + 232);
      v60 = 1;
      v59 = nullptr;
      LOBYTE(v30) = *(_BYTE *)(v30 + 1);
      v61 = 0;
      v23 = v30 & 8;
    }
    else
    {
      v10 = v21 & 0xFFFFFFFFFFFFFFFELL;
      v22 = *(_QWORD *)(a1 + 232);
      v61 = 0;
      v60 = 1;
      v59 = nullptr;
      v23 = *(_BYTE *)(v22 + 1) & 8;
      if ( v19 != 1 )
      {
        if ( sub_1915C50(a1, v10, &v59, 5011, v23 == 0) != 1 )
        {
          v24 = 0;
          if ( a4 )
          {
            if ( v60 <= 0x40 )
            {
              v26 = v59 == nullptr;
            }
            else
            {
              v50 = v60;
              v25 = sub_2206780(&v59);
              v24 = 0;
              v26 = v50 == v25;
            }
            if ( !v26 )
            {
              v31 = *(_QWORD *)(a1 + 248);
              si128.m128i_i8[8] = 0;
              v80 = &si128.m128i_u64[1];
              si128.m128i_i64[0] = 0;
              sub_1856D90(a1, (unsigned __int64)a4, &v80, v31, 0, 0, a7);
              v24 = 0;
              if ( v80 != &si128.m128i_u64[1] )
              {
                operator delete(v80);
                v24 = 0;
              }
            }
            if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
              v24 = sub_B8E180(*(_QWORD *)(a1 + 544));
            v56 = 1;
            v27 = v60;
          }
          else if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
          {
            v48 = sub_B8E180(*(_QWORD *)(a1 + 544));
            v27 = v60;
            v56 = 0;
            v24 = v48;
          }
          else
          {
            v27 = v60;
            v56 = 0;
          }
          if ( v27 <= 0x40 )
          {
            v29 = v59 == nullptr;
          }
          else
          {
            v55 = v24;
            v51 = v27;
            v28 = sub_2206780(&v59);
            v27 = v51;
            v24 = v55;
            v29 = v28 == v51;
          }
          v11 = 0;
          v52 = v24 | !v29;
          if ( v52 )
            goto LABEL_21;
          v80 = v82;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8DE0);
          v66 = &off_2BEBEE0;
          v72 = &v80;
          v67 = 2;
          v70 = 0;
          v71 = 1;
          v69 = 0;
          v68 = 0;
          sub_227B8B0(&v66, 0, 0, 0);
          if ( a4 )
          {
            v32 = *(_QWORD *)(a1 + 248);
            v73[1] = nullptr;
            LOBYTE(v74) = 0;
            v73[0] = &v74;
            if ( !(unsigned __int8)sub_1856D90(a1, (unsigned __int64)a4, v73, v32, 0, 1, 0.0) )
              v52 = v73[1] == nullptr;
            sub_227BF10(&v66, v73[0], v73[1]);
            if ( v73[0] != &v74 )
              operator delete(v73[0]);
          }
          else
          {
            v52 = v56 ^ 1;
          }
          v64[0] = v65;
          v64[1] = nullptr;
          v65[0] = 0;
          sub_1CB4750(v73, a1, v20);
          v33 = v73[0];
          sub_A0AAD0((__int64)v64, &v73[1]);
          if ( v73[1] != &v75 )
            operator delete(v73[1]);
          v34 = a1 + 8;
          if ( v33 )
          {
            v35 = *v33 & 0x1FF;
            if ( v35 == 75 )
            {
              v36 = sub_EEB7E0(v10, v34, 0.0);
              sub_168B9F0((__int64)v73, (__int64 *)(a1 + 8), v36, 0x1394u, 0);
              v57 = v52;
              v37 = sub_1588420((__int64)v73, &v57);
              v38 = *v72;
              v63 = v72[1];
              v62 = v38;
              v53 = sub_166BAF0(v37, (__int64)&v62);
              v58 = sub_EEC8C0(v10, (__int64)&v62, 0.0);
              sub_1587DB0(v53, &v58);
              sub_15F7200(v73);
              v76[48] = 0;
              v74 = v76;
              ptr = v79;
              *(_OWORD *)v73 = 0;
              v75 = 0x400000000LL;
              v78 = 0x400000000LL;
              if ( !(unsigned __int8)sub_1753000(a1, (unsigned __int64)v33, (__int64)v73) )
                sub_174DC50(a1, (__int64)v73, 1u, 0.0);
              if ( ptr != v79 )
                free(ptr);
              if ( v74 != v76 )
                free(v74);
              goto LABEL_48;
            }
            if ( v35 != 52 && v35 != 115 )
            {
              v39 = sub_EEB7E0((unsigned __int64)v33, v34, 0.0);
              sub_168B9F0((__int64)v73, (__int64 *)(a1 + 8), v39, 0x1395u, 0);
              v40 = sub_1682A40((__int64)v73, (__int64)v64);
              v57 = v52;
              v41 = sub_1588420(v40, &v57);
              v42 = *v72;
              v63 = v72[1];
              v62 = v42;
              v54 = sub_166BAF0(v41, (__int64)&v62);
              v58 = sub_EEC8C0((unsigned __int64)v33, (__int64)&v62, 0.0);
              sub_1587DB0(v54, &v58);
              sub_15F7200(v73);
              sub_18636C0(a1, (unsigned __int64)v33);
LABEL_48:
              if ( v64[0] != v65 )
                operator delete(v64[0]);
              v66 = (__int64 (__fastcall **)())&unk_2C76288;
              sub_227B7A0(&v66);
              if ( v80 != v82 )
                free(v80);
              goto LABEL_26;
            }
          }
          v43 = sub_EEB7E0(v10, v34, 0.0);
          sub_168B9F0((__int64)v73, (__int64 *)(a1 + 8), v43, 0x1394u, 0);
          v57 = v52;
          v44 = sub_1588420((__int64)v73, &v57);
          v45 = *v72;
          v63 = v72[1];
          v62 = v45;
          v46 = sub_166BAF0(v44, (__int64)&v62);
          v58 = sub_EEC8C0(v10, (__int64)&v62, 0.0);
          sub_1587DB0(v46, &v58);
          sub_15F7200(v73);
          v47 = *(_DWORD *)(a1 + 11320);
          v73[0] = (void *)a1;
          if ( v47 && v47 != *(_DWORD *)(a1 + 12600) )
          {
            sub_1DBFED0(a1, sub_15FB250, v73);
            *(_DWORD *)(a1 + 12600) = *(_DWORD *)(a1 + 11320);
          }
          if ( *(_QWORD *)(a1 + 2320) )
            sub_16662C0(a1, (void (__fastcall *)(__int64, _QWORD, void **))sub_15FB250, (__int64)v73);
          goto LABEL_48;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
        {
LABEL_30:
          v11 = 1;
          sub_B8E180(*(_QWORD *)(a1 + 544));
          v27 = v60;
          goto LABEL_21;
        }
LABEL_26:
        v27 = v60;
        v11 = 1;
LABEL_21:
        if ( v27 > 0x40 && v59 )
          operator delete[](v59);
        goto LABEL_4;
      }
    }
    if ( v23 )
      goto LABEL_30;
    goto LABEL_26;
  }
  v11 = 1;
  v12 = sub_19B4A30(a1, a3, a2, 0, 1, 0);
  if ( v12 != 1 )
  {
    v11 = a6;
    v10 = v12 & 0xFFFFFFFFFFFFFFFELL;
  }
LABEL_4:
  v13 = sub_B9AB50(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), a2, v10, (__int64)a4, a5, v11);
  sub_B94AD0(*(__m128i **)(a1 + 544), v13, v14, v15, v16, v17);
  return v13;
}
