__int64 __fastcall sub_D966A0(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  unsigned int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r14
  _QWORD *v23; // rax
  __int64 v24; // r14
  __int64 v25; // r14
  void *v26; // r12
  void *v27; // r12
  void *v28; // r12
  void *v29; // r12
  void *v30; // r12
  void *v31; // r12
  __int64 v32; // r14
  void *v33; // r12
  void *v34; // r12
  void *v35; // r12
  void *v36; // r12
  void *v37; // r12
  void *v38; // r12
  void *v39; // r12
  void *v40; // r12
  __int64 *v41; // rax
  __int64 *v42; // rax
  void *v43; // r12
  void *v44; // r12
  _BYTE *v45; // rax
  _WORD *v46; // rax
  _DWORD *v47; // rax
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // eax
  void *v56; // rcx
  unsigned __int64 v57; // r12
  char v58; // r13
  int v59; // [rsp+10h] [rbp-138h]
  __int64 v61; // [rsp+18h] [rbp-130h]
  __int64 v62; // [rsp+30h] [rbp-118h]
  void *v63; // [rsp+50h] [rbp-F8h] BYREF
  unsigned int v64; // [rsp+58h] [rbp-F0h]
  char v65; // [rsp+5Ch] [rbp-ECh]
  void *v66; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v67; // [rsp+68h] [rbp-E0h]
  char v68; // [rsp+6Ch] [rbp-DCh]
  void *v69; // [rsp+70h] [rbp-D8h] BYREF
  unsigned int v70; // [rsp+78h] [rbp-D0h]
  char v71; // [rsp+7Ch] [rbp-CCh]
  void *v72; // [rsp+80h] [rbp-C8h] BYREF
  unsigned int v73; // [rsp+88h] [rbp-C0h]
  void *v74; // [rsp+B0h] [rbp-98h] BYREF
  unsigned int v75; // [rsp+B8h] [rbp-90h]
  void *v76; // [rsp+E0h] [rbp-68h] BYREF
  unsigned int v77; // [rsp+E8h] [rbp-60h]
  char v78; // [rsp+ECh] [rbp-5Ch]

  sub_AD6350(a2, a2);
  v6 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + v6 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1 )
  {
    v49 = sub_CE6180(a1[23], *(_QWORD *)(*(_QWORD *)(a2 + v6 + 40) + 8LL), v6, v4, v5);
    sub_D8B1A0((__int64)&v66, a1[22], v49);
    v53 = sub_CE6180(
            a1[23],
            *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL),
            v50,
            v51,
            v52);
    sub_D8B1A0((__int64)&v69, a1[22], v53);
    v73 = 1;
    v72 = nullptr;
    if ( a3 == 464 )
    {
      if ( v71 )
        sub_22093E0(&v76, &v69, &v66);
      else
        sub_22092B0(&v76, &v69, &v66);
    }
    else if ( v71 )
    {
      sub_2209600(&v76, &v69, &v66);
    }
    else
    {
      sub_22094D0(&v76, &v69, &v66);
    }
    if ( v73 > 0x40 && v72 )
      operator delete[](v72);
    v55 = v77;
    v56 = v76;
    v57 = *(_QWORD *)(a2 + 8);
    v58 = v71;
    v72 = v76;
    v73 = v77;
    v75 = v77;
    if ( v77 > 0x40 )
    {
      sub_2205510(&v74);
      v55 = v75;
      v56 = v74;
    }
    else
    {
      v74 = v76;
    }
    v77 = v55;
    v76 = v56;
    v75 = 0;
    v78 = v58;
    sub_D8FFE0(a1, (__int64)&v76, v57, (__int64)v56, v54);
    if ( v77 > 0x40 && v76 )
      operator delete[](v76);
    if ( v75 > 0x40 && v74 )
      operator delete[](v74);
    if ( v73 > 0x40 && v72 )
      operator delete[](v72);
    if ( v70 > 0x40 && v69 )
      operator delete[](v69);
    if ( v67 > 0x40 && v66 )
      operator delete[](v66);
  }
  else
  {
    if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 57 > 1 )
      v7 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + v6 + 32) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v6, v4);
    v8 = a1[22];
    sub_E21760(v8, 48);
    sub_E23260(&v74);
    sub_E21790(v8, 48);
    v9 = a1[22];
    sub_E21760(v9, 48);
    sub_E23260(&v72);
    sub_E21790(v9, 48);
    v62 = sub_E21760(a1[22], 48);
    v59 = sub_CE6180(a1[23], *(_QWORD *)(v7 + 32), v10, v11, v12);
    v13 = *(_DWORD *)(v7 + 20);
    if ( v13 )
    {
      v14 = 0;
      v61 = (unsigned int)(v13 - 1);
      while ( 1 )
      {
        v65 = 0;
        v64 = 1;
        v63 = nullptr;
        v67 = 1;
        v66 = nullptr;
        v68 = 0;
        switch ( (unsigned __int64)&v72 )
        {
          case 0uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v43 = (void *)*(unsigned __int8 *)sub_D0C5D0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v43;
            v64 = 8;
            v65 = 0;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v44 = (void *)*(unsigned __int8 *)sub_D0C5D0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v44;
            v67 = 8;
            v68 = 0;
            sub_E232A0(&v76);
            break;
          case 1uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v33 = (void *)*(unsigned __int8 *)sub_D0C7E0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v33;
            v64 = 8;
            v65 = 1;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v34 = (void *)*(unsigned __int8 *)sub_D0C7E0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v34;
            v67 = 8;
            v68 = 1;
            sub_E232A0(&v76);
            break;
          case 2uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v37 = (void *)*(unsigned __int16 *)sub_D0CBD0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v37;
            v64 = 16;
            v65 = 0;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v38 = (void *)*(unsigned __int16 *)sub_D0CBD0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v38;
            v67 = 16;
            v68 = 0;
            sub_E232A0(&v76);
            break;
          case 3uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v35 = (void *)*(unsigned __int16 *)sub_D0CDE0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v35;
            v64 = 16;
            v65 = 1;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v36 = (void *)*(unsigned __int16 *)sub_D0CDE0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v36;
            v67 = 16;
            v68 = 1;
            sub_E232A0(&v76);
            break;
          case 4uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v39 = (void *)*(unsigned int *)sub_D0D1D0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v39;
            v64 = 32;
            v65 = 0;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v40 = (void *)*(unsigned int *)sub_D0D1D0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v40;
            v67 = 32;
            v68 = 0;
            sub_E232A0(&v76);
            break;
          case 5uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v26 = (void *)*(unsigned int *)sub_D0D3E0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v26;
            v64 = 32;
            v65 = 1;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v27 = (void *)*(unsigned int *)sub_D0D3E0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v27;
            v67 = 32;
            v68 = 1;
            sub_E232A0(&v76);
            break;
          case 6uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v30 = *(void **)sub_D0D9C0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v30;
            v64 = 64;
            v65 = 0;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v31 = *(void **)sub_D0D9C0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v31;
            v67 = 64;
            v68 = 0;
            sub_E232A0(&v76);
            break;
          case 7uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v28 = *(void **)sub_D0DBD0((__int64)&v76);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v28;
            v64 = 64;
            v65 = 1;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v29 = *(void **)sub_D0DBD0((__int64)&v76);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            v66 = v29;
            v67 = 64;
            v68 = 1;
            sub_E232A0(&v76);
            break;
          case 8uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v15 = sub_D0E1E0((__int64)&v76);
            sub_D47D10((__int64)&v69, v15, 0);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v69;
            v64 = v70;
            v65 = v71;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v16 = sub_D0E1E0((__int64)&v76);
            sub_D47D10((__int64)&v69, v16, 0);
            if ( v67 <= 0x40 )
              goto LABEL_13;
            goto LABEL_11;
          case 9uLL:
            sub_CFE430((__int64)&v76, (__int64)&v72, v14);
            v41 = (__int64 *)sub_D0E230((__int64)&v76);
            sub_D8A9D0((__int64)&v69, v41);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            v63 = v69;
            v64 = v70;
            v65 = v71;
            sub_E232A0(&v76);
            sub_CFE430((__int64)&v76, (__int64)&v74, v14);
            v42 = (__int64 *)sub_D0E230((__int64)&v76);
            sub_D8A9D0((__int64)&v69, v42);
            if ( v67 > 0x40 )
            {
LABEL_11:
              if ( v66 )
                operator delete[](v66);
            }
LABEL_13:
            v66 = v69;
            v67 = v70;
            v68 = v71;
            sub_E232A0(&v76);
            break;
        }
        v17 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( a3 == 464 )
        {
          LOBYTE(v18) = sub_F65460(v17);
          if ( v65 )
            sub_22093E0(&v76, &v63, &v66);
          else
            sub_22092B0(&v76, &v63, &v66);
        }
        else
        {
          LOBYTE(v18) = sub_F65460(v17);
          if ( v65 )
            sub_2209600(&v76, &v63, &v66);
          else
            sub_22094D0(&v76, &v63, &v66);
        }
        v19 = v77;
        v20 = (__int64)v76;
        switch ( v59 )
        {
          case 0:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LOBYTE(v18) = v20;
              if ( v19 > 0x40 )
                v18 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LOBYTE(v18) = *(_BYTE *)v20;
            }
            else if ( v19 )
            {
              v18 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v45 = (_BYTE *)sub_D0C5D0((__int64)&v76);
            goto LABEL_139;
          case 1:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LOBYTE(v18) = v20;
              if ( v19 > 0x40 )
                v18 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LOBYTE(v18) = *(_BYTE *)v20;
            }
            else if ( v19 )
            {
              v18 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v45 = (_BYTE *)sub_D0C7E0((__int64)&v76);
LABEL_139:
            *v45 = v18;
            sub_E24D00(&v76);
            sub_E232A0(&v76);
            goto LABEL_20;
          case 2:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LOWORD(v25) = v20;
              if ( v19 > 0x40 )
                v25 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LOWORD(v25) = *(_WORD *)v20;
            }
            else
            {
              LOWORD(v25) = 0;
              if ( v19 )
                v25 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v46 = (_WORD *)sub_D0CBD0((__int64)&v76);
            goto LABEL_143;
          case 3:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LOWORD(v25) = v20;
              if ( v19 > 0x40 )
                v25 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LOWORD(v25) = *(_WORD *)v20;
            }
            else
            {
              LOWORD(v25) = 0;
              if ( v19 )
                v25 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v46 = (_WORD *)sub_D0CDE0((__int64)&v76);
LABEL_143:
            *v46 = v25;
            sub_E24D00(&v76);
            sub_E232A0(&v76);
            goto LABEL_20;
          case 4:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LODWORD(v24) = v20;
              if ( v19 > 0x40 )
                v24 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LODWORD(v24) = *(_DWORD *)v20;
            }
            else
            {
              LODWORD(v24) = 0;
              if ( v19 )
                v24 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v47 = (_DWORD *)sub_D0D1D0((__int64)&v76);
            goto LABEL_155;
          case 5:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              LODWORD(v24) = v20;
              if ( v19 > 0x40 )
                v24 = *(_QWORD *)v20;
            }
            else if ( v19 > 0x40 )
            {
              LODWORD(v24) = *(_DWORD *)v20;
            }
            else
            {
              LODWORD(v24) = 0;
              if ( v19 )
                v24 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v47 = (_DWORD *)sub_D0D3E0((__int64)&v76);
LABEL_155:
            *v47 = v24;
            sub_E24D00(&v76);
            sub_E232A0(&v76);
            goto LABEL_20;
          case 6:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              v22 = v20;
              if ( v19 <= 0x40 )
                goto LABEL_131;
LABEL_130:
              v22 = *(_QWORD *)v20;
              goto LABEL_131;
            }
            if ( v19 > 0x40 )
              goto LABEL_130;
            v22 = 0;
            if ( v19 )
              v22 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
LABEL_131:
            v23 = (_QWORD *)sub_D0D9C0((__int64)&v76);
LABEL_35:
            *v23 = v22;
            sub_E24D00(&v76);
            sub_E232A0(&v76);
LABEL_20:
            if ( v19 > 0x40 && v20 )
              operator delete[]((void *)v20);
            if ( v67 > 0x40 && v66 )
              operator delete[](v66);
            if ( v64 > 0x40 && v63 )
              operator delete[](v63);
            if ( v61 == v14 )
              goto LABEL_159;
            ++v14;
            break;
          case 7:
            sub_CFE430((__int64)&v76, v62, v14);
            if ( (_BYTE)v18 )
            {
              v22 = v20;
              if ( v19 > 0x40 )
LABEL_33:
                v22 = *(_QWORD *)v20;
            }
            else
            {
              if ( v19 > 0x40 )
                goto LABEL_33;
              v22 = 0;
              if ( v19 )
                v22 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v23 = (_QWORD *)sub_D0DBD0((__int64)&v76);
            goto LABEL_35;
          case 8:
            sub_CFE430((__int64)&v76, v62, v14);
            v21 = sub_D0E1E0((__int64)&v76);
            *(_QWORD *)v21 = v20;
            goto LABEL_19;
          case 9:
            sub_CFE430((__int64)&v76, v62, v14);
            v32 = v20;
            if ( v19 <= 0x40 )
            {
              v32 = 0;
              if ( v19 )
                v32 = v20 << (64 - (unsigned __int8)v19) >> (64 - (unsigned __int8)v19);
            }
            v21 = sub_D0E230((__int64)&v76);
            *(_QWORD *)v21 = v32;
LABEL_19:
            *(_DWORD *)(v21 + 8) = v19;
            sub_E24D00(&v76);
            sub_E232A0(&v76);
            goto LABEL_20;
          default:
            BUG();
        }
      }
    }
LABEL_159:
    sub_E232A0(&v72);
    sub_E232A0(&v74);
  }
  return 1;
}
