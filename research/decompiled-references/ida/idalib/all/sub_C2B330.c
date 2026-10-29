__int64 __fastcall sub_C2B330(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  __int64 v16; // rdx
  unsigned __int8 **v17; // rax
  unsigned __int8 **v18; // rbx
  __int64 v19; // rax
  int v20; // eax
  _QWORD *v22; // rsi
  int v23; // eax
  __int64 v24; // r14
  unsigned __int8 **v25; // rax
  unsigned __int8 **v26; // rbx
  unsigned __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdi
  unsigned int v47; // r14d
  __int64 v48; // rbx
  int v49; // eax
  char v50; // al
  __int64 *v51; // rax
  __int64 v52; // rdx
  unsigned int v53; // r13d
  unsigned __int8 **v54; // rbx
  unsigned __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // r14
  int v61; // eax
  char v62; // al
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  char v65; // al
  bool v66; // al
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned __int64 *v70; // rax
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned __int8 **v74; // rax
  __int64 v75; // [rsp-10h] [rbp-108h]
  __int64 v76; // [rsp-10h] [rbp-108h]
  __int64 v77; // [rsp-8h] [rbp-100h]
  __int64 v78; // [rsp+8h] [rbp-F0h]
  __int64 v79; // [rsp+8h] [rbp-F0h]
  __int64 v80; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v81; // [rsp+8h] [rbp-F0h]
  __int64 v82; // [rsp+10h] [rbp-E8h]
  unsigned __int8 v84; // [rsp+18h] [rbp-E0h]
  int v85; // [rsp+1Ch] [rbp-DCh]
  __int64 v86; // [rsp+20h] [rbp-D8h]
  __int64 v87; // [rsp+28h] [rbp-D0h]
  __m128i v88; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v89; // [rsp+40h] [rbp-B8h]
  char v90; // [rsp+48h] [rbp-B0h]
  __int64 v91; // [rsp+58h] [rbp-A0h]
  void *ptr; // [rsp+60h] [rbp-98h]
  __int64 v93; // [rsp+68h] [rbp-90h]
  _BYTE v94[136]; // [rsp+70h] [rbp-88h] BYREF

  v9 = a2;
  v10 = *a5;
  if ( (unsigned int)v10 <= 1 )
  {
    if ( a7 )
    {
      v17 = (unsigned __int8 **)sub_E33C80(a2, a3, 2490, 0);
      v18 = v17;
      if ( v17 )
      {
        sub_C11320(v17, 1);
        sub_AE9DF0(v18, a7, 0xAu);
      }
      sub_E33DB0(a2, *(unsigned int *)(a7 + 24), 2486);
      LODWORD(v16) = 0;
      return (unsigned int)v16;
    }
    v24 = a4;
    v25 = (unsigned __int8 **)sub_E33C80(a2, a3, 2490, 0);
    v26 = v25;
    if ( v25 )
    {
      sub_C11320(v25, 0);
      sub_AE9DF0(v26, v24, 8u);
    }
LABEL_26:
    LODWORD(v16) = 0;
    return (unsigned int)v16;
  }
  LODWORD(v11) = a1;
  v13 = a4;
  v14 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v14 + 16) == 7
    || (a4 = *(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(a4 + 16) == 7)
    && (v14 = sub_F63050(v14, a2, v10, a4), v10 = *a5, v14) )
  {
    v13 = *(_QWORD *)(v14 + 32);
  }
  switch ( (_DWORD)v10 )
  {
    case 9:
      v27 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v28 = *(_QWORD *)v27;
      a2 = *(unsigned __int8 *)(*(_QWORD *)v27 + 16LL);
      v16 = (unsigned int)(a2 - 2);
      if ( (unsigned __int8)(a2 - 2) <= 4u )
      {
LABEL_28:
        v29 = *(_QWORD *)(v28 + 32);
        v30 = a5[4];
        if ( v30 )
        {
          v31 = 0;
          v78 = 56 * (v30 - 1 + 1LL);
          while ( 1 )
          {
            v32 = sub_C2B330(v11, v9, a3, v29, (unsigned int)v31 + (unsigned int)*((_QWORD *)a5 + 1), a6, a7, a8);
            if ( !(_BYTE)v32 )
              break;
            v31 += 56;
            if ( v78 == v31 )
            {
              v30 = a5[4];
              goto LABEL_33;
            }
          }
          LODWORD(v16) = v32;
          return (unsigned int)v16;
        }
LABEL_33:
        LODWORD(v16) = 1;
        if ( a5[5] == v30 )
          return (unsigned int)v16;
        v20 = sub_C2B330(v11, v9, a3, v29, a5[2] + 56 * v30, a6, a7, a8);
LABEL_19:
        LODWORD(v16) = v20;
        return (unsigned int)v16;
      }
LABEL_74:
      v28 = sub_F63050(v28, a2, v16, a4);
      goto LABEL_28;
    case 0xB:
      v19 = *((_QWORD *)a5 + 1);
      LODWORD(v16) = 1;
      if ( !v19 )
        return (unsigned int)v16;
      v20 = sub_C2B330(a1, a2, a3, *(_QWORD *)(v19 + 48), *((_QWORD *)a5 + 2), a6, v19, a8);
      goto LABEL_19;
    case 0xA:
      v37 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v10,
              a4,
              a5);
      if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 59 <= 2 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v37 + 104) + 96LL), *(_QWORD *)(v37 + 104), v33, v34, v35, v36);
        v41 = *(_QWORD *)(v37 + 128);
        v42 = (*(_BYTE *)(v41 + 24) & 1) != 0 ? sub_B96980(v41) : *(_QWORD *)(v41 + 24);
        v79 = v42;
        sub_7052B0((__int64 *)(*(_QWORD *)(v37 + 104) + 96LL), *(_QWORD *)(v37 + 104), v42, v38, v39, v40);
        v82 = v79 + 24LL * *(unsigned int *)(*(_QWORD *)(v37 + 128) + 16LL);
        sub_7052B0((__int64 *)(*(_QWORD *)(v37 + 104) + 96LL), *(_QWORD *)(v37 + 104), v79, v43, v44, v45);
        v46 = *(_QWORD *)(v37 + 128);
        v80 = (*(_BYTE *)(v46 + 24) & 1) != 0 ? sub_B96980(v46) : *(_QWORD *)(v46 + 24);
        a2 = v80;
        if ( v82 != v80 )
        {
          if ( **((_DWORD **)a5 + 1) <= 1u )
          {
LABEL_46:
            v51 = *(__int64 **)(v80 + 16);
            v52 = *v51;
            v88.m128i_i64[1] = (__int64)(v51 + 1);
            v88.m128i_i64[0] = v52;
            v53 = sub_F6CCB0(&v88);
            v54 = (unsigned __int8 **)sub_E33C80(v9, v53, 2491, 0);
            v55 = sub_C11A50(*(__int64 **)(v80 + 16));
            if ( v54 )
            {
              sub_AE9DF0(v54, v55, 8u);
              v88.m128i_i64[0] = __PAIR64__(*(_DWORD *)(v80 + 4), v53);
              v88.m128i_i8[8] = 1;
              sub_AEC610((__int64 *)v54, v88.m128i_i64);
              LODWORD(v16) = 0;
              return (unsigned int)v16;
            }
          }
          else
          {
            v86 = v13;
            LODWORD(v13) = *((_QWORD *)a5 + 1);
            v87 = v37;
            v47 = 0;
            v85 = v11;
            v48 = v80 + 24;
            while ( 1 )
            {
              v80 = v48;
              v49 = sub_C11A50(*(__int64 **)(v48 - 8));
              v50 = sub_C2B330(v85, v9, a3, v49, v13, a6, 0, a8);
              a2 = v75;
              if ( !v50 )
                break;
              ++v47;
              if ( v82 == v48 )
              {
                v13 = v86;
                v37 = v87;
                LODWORD(v11) = v85;
                goto LABEL_50;
              }
              v48 += 24;
              v13 = *((_QWORD *)a5 + 1) + 56LL * v47;
              if ( *(_DWORD *)v13 <= 1u )
                goto LABEL_46;
            }
          }
          goto LABEL_26;
        }
      }
LABEL_50:
      v60 = sub_B7E900(v37, a2, v33, v34, v35, v36);
      if ( v60 )
      {
LABEL_51:
        if ( (*(_BYTE *)(v60 + 68) & 1) == 0 || *(_QWORD *)(v60 + 40) )
        {
          v61 = sub_C1D4D0(v60, a2, v56, v57, v58, v59);
          a2 = v9;
          v62 = sub_C2B330(
                  v11,
                  v9,
                  a3,
                  *(_QWORD *)(v60 + 48),
                  (unsigned int)*((_QWORD *)a5 + 1) + 56 * (a5[4] + v61),
                  a6,
                  v60,
                  a8);
          v56 = v76;
          v57 = v77;
          if ( !v62 )
            goto LABEL_26;
        }
        while ( 1 )
        {
          v63 = *(_QWORD *)(v60 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v60 = v63;
          if ( !v63 )
            break;
          if ( (*(_BYTE *)(v63 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_51;
        }
      }
      LODWORD(v10) = *a5;
      break;
  }
  if ( (_DWORD)v10 == 7 )
  {
    LODWORD(v16) = 1;
    if ( !(_DWORD)v11 )
    {
      v22 = *(_QWORD **)(v9 + 16);
      v88 = 0u;
      v93 = 0x800000000LL;
      v89 = 0;
      v90 |= 1u;
      v91 = 0;
      ptr = v94;
      v94[65] = 0;
      sub_C245D0((__int64)&v88, v22, (__int64)a5);
      v23 = sub_C2A0F0(v9, a3, v13, &v88, a6, a8);
      LODWORD(v16) = v23;
      if ( ptr != v94 )
      {
        v84 = v23;
        free(ptr);
        LODWORD(v16) = v84;
      }
    }
    return (unsigned int)v16;
  }
  v15 = (v11 ^ 1) & ((_DWORD)v10 == 12);
  if ( !v15 )
  {
    LODWORD(v16) = 1;
    return (unsigned int)v16;
  }
  v81 = v15;
  v64 = sub_A51390((__int64)a5);
  LODWORD(v16) = v81;
  v11 = v64;
  if ( v64 && (*(_BYTE *)(v64 + 28) & 0x7Fu) - 35 <= 3 )
  {
    v65 = sub_B7D7F0(v64);
    v16 = v81;
    if ( v65 )
    {
      v74 = (unsigned __int8 **)sub_E33C80(v9, a3, 2365, 0);
      if ( v74 )
        sub_C11320(v74, 0);
      sub_E33DB0(v9, *(unsigned int *)(v11 + 24), 103);
      LODWORD(v16) = 0;
      return (unsigned int)v16;
    }
    v28 = (unsigned int)a6;
    if ( a6 == 1 )
      return (unsigned int)v16;
    if ( a6 > 1 )
    {
      if ( a6 <= 3 )
        goto LABEL_65;
    }
    else if ( !a6 )
    {
LABEL_65:
      v66 = sub_AED5B0(v11);
      LODWORD(v16) = v81;
      if ( !v66 && (*(_BYTE *)(v11 + 29) & 1) != 0 )
      {
        v70 = sub_B8C3D0(v11, a2, v81, v67, v68, v69);
        LODWORD(v16) = v81;
        v71 = *v70;
        v72 = *v70 + 8LL * *((unsigned int *)v70 + 2);
        if ( v71 >= v72 )
        {
          if ( v71 == v72 )
            return (unsigned int)v16;
          while ( *(_WORD *)(*(_QWORD *)v72 + 36LL) != 197 )
          {
            v72 += 8LL;
            if ( v71 == v72 )
              return (unsigned int)v16;
          }
        }
        else
        {
          v73 = v71;
          while ( 1 )
          {
            v71 = v73;
            if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) == 197 )
              break;
            v73 += 8LL;
            if ( v72 == v73 )
              return (unsigned int)v16;
          }
        }
        LOBYTE(v16) = v71 == v72;
      }
      return (unsigned int)v16;
    }
    goto LABEL_74;
  }
  return (unsigned int)v16;
}
