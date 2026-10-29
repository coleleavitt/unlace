unsigned __int64 __fastcall sub_1C3A020(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        double a7,
        __int64 a8,
        __int64 a9,
        char a10,
        _WORD *a11,
        int a12,
        void **a13)
{
  unsigned __int64 result; // rax
  int v15; // ebp
  bool v18; // r15
  _WORD *v19; // r12
  _BYTE *v20; // rax
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  void **v24; // rsi
  __int64 v25; // rdi
  unsigned int v26; // eax
  bool v27; // r15
  unsigned __int8 v28; // cl
  void **v29; // r15
  bool *v30; // rax
  void **v31; // rcx
  void **v32; // rax
  void **v33; // rdi
  void **v34; // rdi
  void **v35; // rax
  _WORD *v36; // rax
  int v37; // r15d
  int v38; // edx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // rax
  __int64 v43; // rax
  unsigned int v44; // eax
  int v45; // r15d
  __int16 v46; // dx
  __int64 v47; // rdx
  unsigned __int64 v48; // [rsp+0h] [rbp-118h]
  __int64 v49; // [rsp+0h] [rbp-118h]
  void **v50; // [rsp+0h] [rbp-118h]
  void **v51; // [rsp+0h] [rbp-118h]
  __int64 v52; // [rsp+0h] [rbp-118h]
  _WORD *v53; // [rsp+0h] [rbp-118h]
  _WORD *v54; // [rsp+0h] [rbp-118h]
  void **v55; // [rsp+8h] [rbp-110h]
  void **v56; // [rsp+8h] [rbp-110h]
  __int64 v57; // [rsp+8h] [rbp-110h]
  int v58; // [rsp+14h] [rbp-104h]
  int v59; // [rsp+18h] [rbp-100h] BYREF
  int v60; // [rsp+1Ch] [rbp-FCh] BYREF
  bool v61; // [rsp+23h] [rbp-F5h] BYREF
  __int64 v62; // [rsp+24h] [rbp-F4h] BYREF
  char v63; // [rsp+2Ch] [rbp-ECh]
  __int64 v64; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+38h] [rbp-E0h]
  char v66; // [rsp+40h] [rbp-D8h]
  void *v67; // [rsp+50h] [rbp-C8h] BYREF
  bool *v68; // [rsp+58h] [rbp-C0h]
  int *v69; // [rsp+60h] [rbp-B8h]
  _WORD **v70; // [rsp+68h] [rbp-B0h]
  void *v71; // [rsp+70h] [rbp-A8h]
  __int64 v72; // [rsp+80h] [rbp-98h] BYREF
  __int16 v73; // [rsp+90h] [rbp-88h]

  result = 1;
  v60 = a2;
  v59 = a4;
  if ( a10 )
    return result;
  v15 = a3;
  v18 = (unsigned int)(a3 - 2) <= 1;
  v61 = v18;
  v19 = (_WORD *)(a9 & 0xFFFFFFFFFFFFFFFELL);
  if ( (a9 & 0xFFFFFFFFFFFFFFFELL) != 0 )
  {
    v20 = *(_BYTE **)(a1 + 232);
    if ( (*v20 & 1) != 0 || (v20[1] & 8) != 0 )
    {
      v48 = *(_QWORD *)(a1 + 264);
      v21 = sub_C00A40(a9 & 0xFFFFFFFFFFFFFFFELL, a2, a3, v48, a5);
      if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v48 + 32), 0x1A12u, v21, v48, v22, v23) != 1 )
      {
        v42 = *(void **)(a1 + 248);
        v68 = (bool *)a1;
        v67 = v42;
        sub_1C31860((__int64)&v67, (__int64)v19);
        v18 = v61;
      }
    }
  }
  v24 = (void **)a11;
  if ( !a13 && !v18 )
  {
    sub_16C7120((__int64 *)a1, a6, (__int64)a11, 0x1AD4u);
    v18 = v61;
    v24 = (void **)a11;
  }
  if ( v15 == 1 || v18 )
  {
    v67 = (void *)a1;
    v68 = &v61;
    v69 = &v60;
    v70 = &a11;
    v71 = &v59;
    sub_1C35600((__int64)&v67, (__int64)v24, a7);
    v24 = a13;
    sub_1C35600((__int64)&v67, (__int64)a13, a7);
  }
  else
  {
    sub_EE9C10((__int64)&v64, (__int64)v24, (__int64)a13);
    if ( v66 )
    {
      v52 = v64;
      v57 = v65;
      sub_FC70B0((__int64)&v67, *(_QWORD *)(a1 + 264), *(_DWORD *)(v65 + 24), 6600);
      sub_AE9DF0((unsigned __int8 **)&v67, v57, 0xEu);
      v40 = *(_QWORD *)(v57 + 24);
      v63 = 1;
      v62 = v40;
      sub_AEC610((__int64 *)&v67, &v62);
      sub_AEA040((__int64)&v67);
      sub_FC70B0((__int64)&v67, *(_QWORD *)(a1 + 264), *(_DWORD *)(v52 + 24), 5839);
      sub_AE9DF0((unsigned __int8 **)&v67, v52, 0xEu);
      v41 = *(_QWORD *)(v52 + 24);
      v63 = 1;
      v24 = (void **)&v62;
      v62 = v41;
      sub_AEC610((__int64 *)&v67, &v62);
      sub_AEA040((__int64)&v67);
    }
  }
  if ( !v61 )
    goto LABEL_37;
  v25 = *(_QWORD *)(a1 + 544);
  v26 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  v27 = v26 == 5;
  v28 = *(_BYTE *)(v25 + 8) & 0x7F;
  if ( v28 <= 0x12u )
  {
    if ( ((1LL << v28) & 0x40182) == 0 )
      goto LABEL_15;
LABEL_47:
    v43 = sub_B8C1B0(v25);
    if ( (*(_BYTE *)(v43 + 28) & 0x7Fu) - 34 <= 5 && (unsigned __int8)sub_B7D7F0(v43) )
    {
      v49 = 1;
LABEL_18:
      sub_FC70B0((__int64)&v67, *(_QWORD *)(a1 + 264), v60, 6707);
      v24 = (void **)v49;
      sub_1C2FE50((unsigned __int8 **)&v67, v49);
      if ( (_BYTE)v73 )
      {
        v24 = &v67;
        sub_FC7790((__int64)v69, (__int64 *)&v67, SHIBYTE(v73));
        v69 = nullptr;
        v73 = 0;
      }
      if ( v71 != &v72 )
        operator delete(v71);
      v29 = (void **)v67;
      if ( v67 )
      {
        v30 = v68;
        if ( v68 )
        {
          if ( v67 < v68 || v67 > v68 + 14848 )
          {
            v31 = *((void ***)v67 + 66);
            v32 = &v31[8 * (unsigned __int64)*((unsigned int *)v67 + 134)];
            if ( v31 != v32 )
            {
              do
              {
                while ( 1 )
                {
                  v32 -= 8;
                  v33 = (void **)v32[3];
                  if ( v33 == v32 + 5 )
                    break;
                  v55 = v32;
                  v50 = v31;
                  operator delete(v33);
                  v31 = v50;
                  v32 = v55;
                  if ( v50 == v55 )
                    goto LABEL_28;
                }
              }
              while ( v31 != v32 );
LABEL_28:
              v32 = (void **)v29[66];
            }
            if ( v32 != v29 + 68 )
              free(v32);
            v34 = (void **)v29[52];
            if ( v34 != v29 + 54 )
              free(v34);
            v35 = v29 + 48;
            v51 = v29 + 8;
            do
            {
              while ( *v35 != v35 + 2 )
              {
                v56 = v35;
                operator delete(*v35);
                v35 = v56 - 4;
                if ( v56 - 4 == v51 )
                  goto LABEL_36;
              }
              v35 -= 4;
            }
            while ( v51 != v35 );
LABEL_36:
            v24 = (void **)(elf_gnu_hash_indexes + 248);
            operator delete(v29, 0x3A0u);
          }
          else
          {
            v47 = *((unsigned int *)v68 + 3744);
            *((_DWORD *)v68 + 3744) = v47 + 1;
            *(_QWORD *)&v30[8 * v47 + 14848] = v29;
          }
        }
      }
      goto LABEL_37;
    }
    v26 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
    goto LABEL_15;
  }
  if ( ((v28 + 94) & 0x7Fu) <= 5 )
    goto LABEL_47;
LABEL_15:
  if ( v27 || v26 == 3 || v26 <= 1 )
  {
    v49 = v27;
    goto LABEL_18;
  }
LABEL_37:
  v36 = a11;
  if ( (*a11 & 0x1FF) == 0x8D )
  {
    v44 = sub_EEB7E0((unsigned __int64)a11, (__int64)v24, a7);
    sub_168B9F0((__int64)&v67, (__int64 *)(a1 + 8), v44, 0xB7Bu, 0);
    LODWORD(v64) = 0;
    sub_1587D10((__int64)&v67, (int *)&v64);
    sub_15F7200(&v67);
    v45 = sub_EEB7E0((unsigned __int64)a11, (__int64)&v64, a7);
    v36 = (_WORD *)sub_EEE9A0(8, *(_QWORD **)(a1 + 248), 8u);
    v46 = *v36 & 0xFE00;
    LOBYTE(v46) = -18;
    *v36 = v46;
    if ( unk_2CD7484 )
    {
      v54 = v36;
      sub_EE9B50(238);
      v36 = v54;
    }
    *((_BYTE *)v36 + 1) &= ~2u;
    *((_DWORD *)v36 + 1) = v45;
    a11 = v36;
  }
  v37 = v60;
  v38 = v59;
  v39 = a8;
  if ( v15 || (*v19 & 0x1FF) == 0x29 )
  {
    v58 = v59;
    v53 = v36;
    sub_15F2480(a1);
    v38 = v58;
    v39 = a8;
    v36 = v53;
  }
  return sub_EEFAF0(*(_QWORD **)(a1 + 248), v37, v15, a5, v39, (__int64)v19, v38, a6, (__int64)v36, a12, (__int64)a13);
}
