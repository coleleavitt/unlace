__int64 __fastcall sub_C3C920(__int64 *a1, __int64 a2)
{
  unsigned int v4; // eax
  char v6; // al
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  unsigned int v15; // ebp
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r13
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // eax
  void *v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  int *v29; // rcx
  __int64 v30; // r13
  int v31; // eax
  char v32; // r13
  unsigned int v33; // eax
  int *v34; // r13
  unsigned __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned int v40; // ebp
  __int64 v41; // r12
  char v42; // al
  unsigned int v43; // edx
  __int64 v44; // rax
  unsigned __int64 v45; // rsi
  int *v46; // rcx
  unsigned int *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  unsigned __int8 v51; // [rsp+Fh] [rbp-269h]
  _QWORD *v52; // [rsp+10h] [rbp-268h]
  __int64 v53; // [rsp+10h] [rbp-268h]
  _QWORD *v54; // [rsp+18h] [rbp-260h]
  char v55; // [rsp+20h] [rbp-258h]
  char v56; // [rsp+20h] [rbp-258h]
  __int64 v57; // [rsp+20h] [rbp-258h]
  __int64 v58; // [rsp+20h] [rbp-258h]
  int *v59; // [rsp+20h] [rbp-258h]
  unsigned __int64 v60; // [rsp+28h] [rbp-250h]
  __int64 v61; // [rsp+30h] [rbp-248h]
  void *v62; // [rsp+50h] [rbp-228h] BYREF
  unsigned int v63; // [rsp+58h] [rbp-220h]
  char v64; // [rsp+5Ch] [rbp-21Ch]
  void *v65; // [rsp+60h] [rbp-218h] BYREF
  unsigned int v66; // [rsp+68h] [rbp-210h]
  char v67; // [rsp+6Ch] [rbp-20Ch]
  void *v68; // [rsp+70h] [rbp-208h] BYREF
  unsigned int v69; // [rsp+78h] [rbp-200h]
  char v70; // [rsp+7Ch] [rbp-1FCh]
  void *v71; // [rsp+80h] [rbp-1F8h] BYREF
  unsigned int v72; // [rsp+88h] [rbp-1F0h]
  char v73; // [rsp+8Ch] [rbp-1ECh]
  void *v74; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v75; // [rsp+98h] [rbp-1E0h]
  unsigned int v76; // [rsp+A0h] [rbp-1D8h]
  unsigned int v77; // [rsp+D0h] [rbp-1A8h] BYREF
  char v78; // [rsp+D4h] [rbp-1A4h]
  __int64 v79; // [rsp+D8h] [rbp-1A0h]
  unsigned int v80; // [rsp+E0h] [rbp-198h]
  unsigned int v81; // [rsp+110h] [rbp-168h] BYREF
  char v82; // [rsp+114h] [rbp-164h]
  __int64 v83; // [rsp+118h] [rbp-160h]
  int v84; // [rsp+120h] [rbp-158h]
  int *v85; // [rsp+150h] [rbp-128h] BYREF
  __int64 v86; // [rsp+158h] [rbp-120h]
  _BYTE v87[280]; // [rsp+160h] [rbp-118h] BYREF

  v4 = sub_BFBE70(a2);
  if ( v4 != 465 )
  {
    if ( v4 <= 0x1D1 )
    {
      if ( v4 != 464 )
        return 0;
      goto LABEL_8;
    }
    if ( v4 != 487 )
    {
      if ( v4 != 495 )
        return 0;
LABEL_8:
      v6 = *(_BYTE *)(a2 + 2);
      v7 = *a1;
      LODWORD(v74) = 0;
      BYTE4(v74) &= ~1u;
      v78 &= ~1u;
      v77 = 0;
      if ( (unsigned __int8)sub_C3A500(v7, *(_QWORD *)(a2 + 8 * (((v6 & 8) != 0) + 1LL) + 32), (unsigned int *)&v74)
        && (v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40),
            (v51 = sub_C3A500(*a1, v35, &v77)) != 0) )
      {
        v37 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v38 = (unsigned int)*(unsigned __int8 *)(v37 + 16) - 57;
        if ( (unsigned int)v38 > 1 )
          v37 = sub_F63050(v37, v35, v38, v36);
        v39 = *(_QWORD *)(v37 + 32);
        v85 = (int *)v87;
        v40 = v76;
        v86 = 0x400000000LL;
        if ( v76 > 4uLL )
        {
          v53 = v39;
          sub_C25F00((__int64)&v85, v76);
          v39 = v53;
        }
        if ( v40 )
        {
          v41 = 0;
          v52 = (_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL);
          while ( 1 )
          {
            v48 = v41 + v75;
            v63 = *(_DWORD *)(v41 + v75 + 16);
            if ( v63 > 0x40 )
            {
              v58 = v41 + v75;
              sub_2205510(&v62);
              v48 = v58;
            }
            else
            {
              v62 = *(void **)(v48 + 8);
            }
            v64 = *(_BYTE *)(v48 + 20);
            v49 = v41 + v79;
            v66 = *(_DWORD *)(v41 + v79 + 16);
            if ( v66 > 0x40 )
            {
              v57 = v41 + v79;
              sub_2205510(&v65);
              v49 = v57;
            }
            else
            {
              v65 = *(void **)(v49 + 8);
            }
            v67 = *(_BYTE *)(v49 + 20);
            v50 = sub_BFBE70(a2);
            if ( v50 == 464 )
              break;
            if ( v50 == 495 )
            {
              v55 = sub_F65460(*v52);
              if ( v64 )
                sub_2209600(&v68, &v62, &v65);
              else
                sub_22094D0(&v68, &v62, &v65);
              v42 = v55;
LABEL_62:
              v43 = v69;
              v73 = v42;
              v69 = 0;
              v72 = v43;
              v71 = v68;
              sub_B96770((__int64)&v81, (__int64 *)&v71);
              v44 = (unsigned int)v86;
              v45 = (unsigned int)v86 + 1LL;
              if ( v45 > HIDWORD(v86) )
              {
                if ( v85 > (int *)&v81 || (v59 = v85, &v81 >= (unsigned int *)&v85[14 * (unsigned int)v86]) )
                {
                  sub_C25F00((__int64)&v85, v45);
                  v46 = v85;
                  v44 = (unsigned int)v86;
                  v47 = &v81;
                }
                else
                {
                  sub_C25F00((__int64)&v85, v45);
                  v46 = v85;
                  v44 = (unsigned int)v86;
                  v47 = (unsigned int *)((char *)v85 + (char *)&v81 - (char *)v59);
                }
              }
              else
              {
                v46 = v85;
                v47 = &v81;
              }
              sub_A4F8A0((__int64)&v46[14 * v44], (__int64)v47);
              LODWORD(v86) = v86 + 1;
              if ( v81 > 1 )
                sub_A4F8E0((int *)&v81);
              if ( v72 > 0x40 && v71 )
                operator delete[](v71);
              if ( v69 > 0x40 && v68 )
                operator delete[](v68);
            }
            if ( v66 > 0x40 && v65 )
              operator delete[](v65);
            if ( v63 > 0x40 && v62 )
              operator delete[](v62);
            v41 += 56;
            if ( v41 == 56 * (v40 - 1 + 1LL) )
              goto LABEL_96;
          }
          v56 = sub_F65460(*v52);
          if ( v64 )
            sub_22093E0(&v68, &v62, &v65);
          else
            sub_22092B0(&v68, &v62, &v65);
          v42 = v56;
          goto LABEL_62;
        }
LABEL_96:
        v83 = 0;
        v82 &= ~1u;
        v84 = 0;
        v81 = 8;
        sub_C18E00((__int64)&v81, v85, v86);
        sub_A54D20(a1[1], (int *)&v81);
        if ( v81 > 1 )
          sub_A4F8E0((int *)&v81);
        sub_C235B0((__int64)&v85);
      }
      else
      {
        v51 = 0;
      }
      if ( v77 > 1 )
      {
        sub_A4F8E0((int *)&v77);
        if ( (unsigned int)v74 <= 1 )
          return v51;
      }
      else if ( (unsigned int)v74 <= 1 )
      {
        return v51;
      }
      sub_A4F8E0((int *)&v74);
      return v51;
    }
  }
  v8 = *(_BYTE *)(a2 + 2);
  v9 = *a1;
  v77 = 0;
  v78 &= ~1u;
  v10 = *(_QWORD *)(a2 + 8 * (((v8 & 8) != 0) + 1LL) + 32);
  v51 = sub_C3A500(v9, v10, &v77);
  if ( v51 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v13 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 57;
    if ( (unsigned int)v13 > 1 )
      v12 = sub_F63050(v12, v10, v13, v11);
    v14 = v80;
    v61 = *(_QWORD *)(v12 + 32);
    v15 = v80;
    v85 = (int *)v87;
    v86 = 0x400000000LL;
    if ( v80 > 4uLL )
      sub_C25F00((__int64)&v85, v80);
    if ( v15 )
    {
      v16 = 0;
      v54 = (_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
      while ( 1 )
      {
        v30 = v16 + v79;
        v69 = *(_DWORD *)(v16 + v79 + 16);
        if ( v69 > 0x40 )
        {
          v14 = v30 + 8;
          sub_2205510(&v68);
        }
        else
        {
          v68 = *(void **)(v30 + 8);
        }
        v70 = *(_BYTE *)(v30 + 20);
        v31 = sub_BFBE70(a2);
        if ( v31 == 465 )
          break;
        if ( v31 == 487 )
        {
          v21 = sub_F65460(*v54);
          if ( v69 > 0x40 )
            v22 = sub_22069E0(&v68);
          else
            v22 = __popcountdi2(v68, v14, v17, v18, v19, v20);
          v60 = v22;
          v25 = sub_AAC1F0(*(_QWORD *)(*a1 + 16), v61, v23, v22, v24);
          v26 = (void *)v60;
          v72 = v25;
          if ( v25 > 0x40 )
          {
            sub_2205470(&v71, v60, 0);
            v25 = v72;
            v26 = v71;
          }
          else
          {
            v71 = (void *)v60;
          }
          LODWORD(v75) = v25;
          v74 = v26;
          v72 = 0;
          BYTE4(v75) = v21;
          sub_B96770((__int64)&v81, (__int64 *)&v74);
          v27 = (unsigned int)v86;
          v28 = (unsigned int)v86 + 1LL;
          if ( v28 <= HIDWORD(v86) )
          {
LABEL_26:
            v29 = v85;
            v14 = (__int64)&v81;
LABEL_27:
            sub_A4F8A0((__int64)&v29[14 * v27], v14);
            LODWORD(v86) = v86 + 1;
            if ( v81 > 1 )
              sub_A4F8E0((int *)&v81);
            if ( (unsigned int)v75 > 0x40 && v74 )
              operator delete[](v74);
            if ( v72 > 0x40 && v71 )
              operator delete[](v71);
            goto LABEL_35;
          }
          v34 = v85;
          if ( v85 <= (int *)&v81 && &v81 < (unsigned int *)&v85[14 * (unsigned int)v86] )
          {
LABEL_101:
            sub_C25F00((__int64)&v85, v28);
            v29 = v85;
            v27 = (unsigned int)v86;
            v14 = (__int64)v85 + (char *)&v81 - (char *)v34;
            goto LABEL_27;
          }
LABEL_45:
          sub_C25F00((__int64)&v85, v28);
          v29 = v85;
          v27 = (unsigned int)v86;
          v14 = (__int64)&v81;
          goto LABEL_27;
        }
LABEL_35:
        if ( v69 > 0x40 && v68 )
          operator delete[](v68);
        v16 += 56;
        if ( v16 == 56 * (v15 - 1 + 1LL) )
          goto LABEL_46;
      }
      v32 = sub_F65460(*v54);
      sub_220AEA0(&v71, &v68);
      v33 = v72;
      v72 = 0;
      LODWORD(v75) = v33;
      BYTE4(v75) = v32;
      v74 = v71;
      sub_B96770((__int64)&v81, (__int64 *)&v74);
      v27 = (unsigned int)v86;
      v28 = (unsigned int)v86 + 1LL;
      if ( v28 <= HIDWORD(v86) )
        goto LABEL_26;
      v34 = v85;
      if ( v85 <= (int *)&v81 && &v81 < (unsigned int *)&v85[14 * (unsigned int)v86] )
        goto LABEL_101;
      goto LABEL_45;
    }
LABEL_46:
    v83 = 0;
    v82 &= ~1u;
    v84 = 0;
    v81 = 8;
    sub_C18E00((__int64)&v81, v85, v86);
    sub_A54D20(a1[1], (int *)&v81);
    if ( v81 > 1 )
      sub_A4F8E0((int *)&v81);
    sub_C235B0((__int64)&v85);
  }
  if ( v77 > 1 )
    sub_A4F8E0((int *)&v77);
  return v51;
}
