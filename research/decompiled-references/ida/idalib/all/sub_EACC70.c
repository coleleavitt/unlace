void __fastcall sub_EACC70(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rdi
  _QWORD *v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 *v21; // r15
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // r12
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r12d
  __int64 *v29; // r12
  __int64 v30; // r15
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  _DWORD *v35; // rax
  __int64 v36; // rdi
  int v37; // edx
  int v38; // r12d
  __int64 v39; // rax
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  _DWORD *v43; // rax
  __int64 v44; // rdi
  int v45; // edx
  __int64 v46; // rdi
  __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // r12
  unsigned __int64 v54; // rsi
  int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rax
  _DWORD *v62; // rsi
  __int64 v63; // rdi
  int v64; // eax
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  int v67; // eax
  __int64 v68; // r15
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rax
  _QWORD *v73; // rcx
  __int64 v74; // r15
  unsigned __int64 v75; // rdx
  __int64 v76; // rax
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rsi
  __int64 v80; // rax
  unsigned __int64 v81; // rsi
  unsigned __int64 v82; // rax
  int v83; // [rsp+8h] [rbp-D0h]
  int v84; // [rsp+8h] [rbp-D0h]
  int v85; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v86; // [rsp+8h] [rbp-D0h]
  __int64 v87; // [rsp+8h] [rbp-D0h]
  __int64 v88; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+18h] [rbp-C0h]
  _BYTE v91[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( !a2 )
  {
    v6 = nullptr;
LABEL_14:
    sub_EA58C0(a1, a2);
    ptr = v91;
    v90 = 0x1000000000LL;
    v12 = sub_B8E970(a2 + 64);
    if ( v12 )
    {
      v13 = (unsigned int)v90;
      do
      {
        while ( 2 )
        {
          if ( (*(_BYTE *)(v12 + 29) & 2) == 0 )
          {
            v14 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
              v14 = (_QWORD *)*v14;
            if ( v14 == v6 )
            {
              switch ( (*(_BYTE *)(v12 + 28) + 119) & 0x7F )
              {
                case 0:
                case 9:
                case 0x18:
                case 0x1A:
                case 0x1B:
                case 0x1D:
                case 0x1F:
                case 0x28:
                case 0x29:
                case 0x37:
                case 0x38:
                case 0x3E:
                case 0x42:
                case 0x4D:
                case 0x50:
                  if ( v13 + 1 > (unsigned __int64)HIDWORD(v90) )
                  {
                    sub_2237220(&ptr, v91, v13 + 1, 8);
                    v13 = (unsigned int)v90;
                  }
                  *((_QWORD *)ptr + v13) = v12;
                  v13 = (unsigned int)(v90 + 1);
                  v15 = (*(_BYTE *)(v12 + 28) & 0x7F) - 34;
                  LODWORD(v90) = v90 + 1;
                  if ( v15 > 5 )
                    break;
                  sub_B77F40(v12);
                  v13 = (unsigned int)v90;
                  v12 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v12 )
                    goto LABEL_26;
                  continue;
                default:
                  goto LABEL_16;
              }
            }
          }
          break;
        }
LABEL_16:
        v12 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v12 );
    }
    else
    {
      LODWORD(v13) = v90;
    }
LABEL_26:
    v16 = *(unsigned int *)(a1 + 184);
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      v85 = v13;
      sub_2237220(a1 + 176, a1 + 192, v16 + 1, 4);
      v16 = *(unsigned int *)(a1 + 184);
      LODWORD(v13) = v85;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v16) = v13;
    v17 = *(unsigned int *)(a1 + 188);
    v18 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
    *(_DWORD *)(a1 + 184) = v18;
    if ( v18 + 1 > v17 )
    {
      sub_2237220(a1 + 176, a1 + 192, v18 + 1, 4);
      v18 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v18) = 0;
    v19 = (__int64 *)ptr;
    v20 = (unsigned int)v90;
    ++*(_DWORD *)(a1 + 184);
    v21 = &v19[v20];
    while ( v21 != v19 )
    {
      v22 = *v19++;
      sub_EA90F0(a1, v22);
    }
    v23 = sub_B97230(a2);
    v24 = *(_QWORD *)(a1 + 32);
    v25 = v23 != 0;
    if ( (unsigned __int64)(v24 + 1) > *(_QWORD *)(a1 + 40) )
    {
      v86 = v23;
      sub_2236E10(a1 + 24, a1 + 48, v24 + 1, 1);
      v24 = *(_QWORD *)(a1 + 32);
      v23 = v86;
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 24) + v24) = v25;
    ++*(_QWORD *)(a1 + 32);
    if ( v23 )
    {
      v26 = *(_QWORD *)(v23 + 56);
      v27 = *(unsigned int *)(a1 + 184);
      v28 = *(_DWORD *)(v26 + 20) & 0x1FFFFFFF;
      if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
      {
        sub_2237220(a1 + 176, a1 + 192, v27 + 1, 4);
        v27 = *(unsigned int *)(a1 + 184);
      }
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v27) = v28;
      v29 = (__int64 *)(v26 + 24);
      ++*(_DWORD *)(a1 + 184);
      v30 = v26 + 24 + 8LL * (*(_DWORD *)(v26 + 20) & 0x1FFFFFFF);
      while ( (__int64 *)v30 != v29 )
      {
        v31 = *v29++;
        sub_EA90F0(a1, v31);
      }
    }
    v32 = *(_QWORD *)(a2 + 104);
    v33 = *(_QWORD *)(v32 + 96);
    v34 = v33 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v33 & 1) == 0 )
    {
      v73 = (_QWORD *)(v33 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v33 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v33 & 2) == 0 )
          goto LABEL_45;
        v74 = v73[2295];
        v75 = v32 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v74 )
        {
          v76 = v73[294];
          v73[304] += 24LL;
          v77 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v73[295] >= v77 + 24 && v76 )
          {
            v73[294] = v77 + 24;
            v78 = (v76 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v78 = sub_986170((__int64)(v73 + 294), 24, 24, 3, v7, v8);
            v77 = v78 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v78 = v74;
          v75 = v77 | 4;
          *(_DWORD *)(v78 + 8) = 0;
          *(_QWORD *)(v78 + 16) = v32;
        }
        v34 = v75 & 0xFFFFFFFFFFFFFFFELL;
        v33 = v34 | 1;
        *(_QWORD *)(v32 + 96) = v34 | 1;
      }
    }
    if ( v34 )
    {
      if ( (v34 & 4) != 0 )
      {
        v35 = (_DWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v35 )
        {
          v36 = *(_QWORD *)v35;
          v37 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
          if ( v35[2] != v37 )
          {
            v35[2] = v37;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 152LL))(v36, v32);
          }
        }
      }
    }
LABEL_45:
    v9 = *(unsigned int *)(a1 + 188);
    v38 = *(_DWORD *)(*(_QWORD *)(a2 + 128) + 16LL);
    v39 = *(unsigned int *)(a1 + 184);
    if ( v39 + 1 > v9 )
    {
      sub_2237220(a1 + 176, a1 + 192, v39 + 1, 4);
      v39 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v39) = v38;
    ++*(_DWORD *)(a1 + 184);
    v40 = *(_QWORD *)(a2 + 104);
    v41 = *(_QWORD *)(v40 + 96);
    if ( (v41 & 1) != 0 )
    {
      v42 = v41 & 0xFFFFFFFFFFFFFFFELL;
    }
    else
    {
      v9 = v41 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v41 & 0xFFFFFFFFFFFFFFFCLL) == 0 || (v41 & 2) == 0 )
        goto LABEL_54;
      v68 = *(_QWORD *)(v9 + 18360);
      v69 = v40 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v68 )
      {
        v70 = *(_QWORD *)(v9 + 2352);
        *(_QWORD *)(v9 + 2432) += 24LL;
        v71 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v9 + 2360) >= v71 + 24 && v70 )
        {
          *(_QWORD *)(v9 + 2352) = v71 + 24;
          v72 = (v70 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v72 = sub_986170(v9 + 2352, 24, 24, 3, v7, v8);
          v71 = v72 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v72 = v68;
        v69 = v71 | 4;
        *(_DWORD *)(v72 + 8) = 0;
        *(_QWORD *)(v72 + 16) = v40;
      }
      v42 = v69 & 0xFFFFFFFFFFFFFFFELL;
      v41 = v42 | 1;
      *(_QWORD *)(v40 + 96) = v42 | 1;
    }
    if ( v42 )
    {
      if ( (v42 & 4) != 0 )
      {
        v43 = (_DWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v43 )
        {
          v44 = *(_QWORD *)v43;
          v45 = *(_DWORD *)(*(_QWORD *)v43 + 12LL);
          if ( v43[2] != v45 )
          {
            v43[2] = v45;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 152LL))(v44, v40);
          }
        }
      }
    }
LABEL_54:
    v46 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v46 + 24) & 1) != 0 )
      v47 = sub_B96980(v46);
    else
      v47 = *(_QWORD *)(v46 + 24);
    v48 = *(_QWORD *)(a2 + 104);
    v49 = *(_QWORD *)(v48 + 96);
    v50 = v49;
    v51 = v49 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v49 & 1) == 0 )
    {
      v9 = v49 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v49 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v49 & 2) == 0 )
        {
          v52 = *(_QWORD *)(a2 + 128);
          v10 = 3LL * *(unsigned int *)(v52 + 16);
          v53 = v47 + 24LL * *(unsigned int *)(v52 + 16);
LABEL_60:
          if ( (v49 & 2) == 0 )
          {
            if ( (*(_BYTE *)(v52 + 24) & 1) == 0 )
            {
LABEL_62:
              v11 = *(_QWORD *)(v52 + 24);
LABEL_63:
              while ( v11 != v53 )
              {
                while ( 1 )
                {
                  sub_EA8520(a1, **(_QWORD **)(v11 + 16), v10, v9, v7, v8);
                  v56 = *(unsigned int *)(a1 + 184);
                  v57 = *(_BYTE *)(v11 + 12) & 1;
                  if ( v56 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
                  {
                    v84 = *(_BYTE *)(v11 + 12) & 1;
                    sub_2237220(a1 + 176, a1 + 192, v56 + 1, 4);
                    v56 = *(unsigned int *)(a1 + 184);
                    v57 = v84;
                  }
                  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v56) = v57;
                  v54 = *(unsigned int *)(a1 + 188);
                  v9 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
                  *(_DWORD *)(a1 + 184) = v9;
                  v55 = (*(_BYTE *)(v11 + 12) >> 2) & 3;
                  if ( v9 + 1 <= v54 )
                    break;
                  v83 = (*(_BYTE *)(v11 + 12) >> 2) & 3;
                  sub_2237220(a1 + 176, a1 + 192, v9 + 1, 4);
                  v9 = *(unsigned int *)(a1 + 184);
                  v10 = *(_QWORD *)(a1 + 176);
                  v11 += 24;
                  *(_DWORD *)(v10 + 4 * v9) = v83;
                  ++*(_DWORD *)(a1 + 184);
                  if ( v53 == v11 )
                    goto LABEL_10;
                }
                v10 = *(_QWORD *)(a1 + 176);
                v11 += 24;
                *(_DWORD *)(v10 + 4 * v9) = v55;
                ++*(_DWORD *)(a1 + 184);
              }
LABEL_10:
              if ( ptr != v91 )
                free(ptr);
              return;
            }
LABEL_87:
            v11 = sub_B96980(v52);
            goto LABEL_63;
          }
          v7 = *(_QWORD *)(v9 + 18360);
          v79 = v48 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v7 )
          {
            v80 = *(_QWORD *)(v9 + 2352);
            *(_QWORD *)(v9 + 2432) += 24LL;
            v81 = (v80 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( *(_QWORD *)(v9 + 2360) >= v81 + 24 && v80 )
            {
              *(_QWORD *)(v9 + 2352) = v81 + 24;
              v82 = (v80 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v88 = v7;
              v82 = sub_986170(v9 + 2352, 24, 24, 3, v7, v8);
              v7 = v88;
              v81 = v82 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v82 = v7;
            v79 = v81 | 4;
            *(_DWORD *)(v82 + 8) = 0;
            *(_QWORD *)(v82 + 16) = v48;
          }
          v65 = v79 & 0xFFFFFFFFFFFFFFFELL;
          v10 = v65 | 1;
          *(_QWORD *)(v48 + 96) = v65 | 1;
LABEL_81:
          if ( v65 )
          {
            if ( (v65 & 4) != 0 )
            {
              v10 &= 0xFFFFFFFFFFFFFFF8LL;
              if ( v10 )
              {
                v66 = *(_QWORD *)v10;
                v67 = *(_DWORD *)(*(_QWORD *)v10 + 12LL);
                if ( *(_DWORD *)(v10 + 8) != v67 )
                {
                  *(_DWORD *)(v10 + 8) = v67;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 152LL))(v66, v48);
                }
              }
            }
          }
          v52 = *(_QWORD *)(a2 + 128);
          if ( (*(_BYTE *)(v52 + 24) & 1) == 0 )
            goto LABEL_62;
          goto LABEL_87;
        }
        v7 = *(_QWORD *)(v9 + 18360);
        v58 = v48 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v7 )
        {
          v59 = *(_QWORD *)(v9 + 2352);
          *(_QWORD *)(v9 + 2432) += 24LL;
          v60 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( *(_QWORD *)(v9 + 2360) >= v60 + 24 && v59 )
          {
            *(_QWORD *)(v9 + 2352) = v60 + 24;
            v61 = (v59 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v87 = v7;
            v61 = sub_986170(v9 + 2352, 24, 24, 3, v7, v8);
            v7 = v87;
            v60 = v61 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v61 = v7;
          v58 = v60 | 4;
          *(_DWORD *)(v61 + 8) = 0;
          *(_QWORD *)(v61 + 16) = v48;
        }
        v51 = v58 & 0xFFFFFFFFFFFFFFFELL;
        v50 = v51 | 1;
        *(_QWORD *)(v48 + 96) = v51 | 1;
      }
    }
    if ( v51 )
    {
      if ( (v51 & 4) != 0 )
      {
        v62 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v62 )
        {
          v63 = *(_QWORD *)v62;
          v64 = *(_DWORD *)(*(_QWORD *)v62 + 12LL);
          if ( v62[2] != v64 )
          {
            v62[2] = v64;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 152LL))(v63, v48);
          }
        }
      }
    }
    v52 = *(_QWORD *)(a2 + 128);
    v48 = *(_QWORD *)(a2 + 104);
    v10 = *(_QWORD *)(v48 + 96);
    v53 = v47 + 24LL * *(unsigned int *)(v52 + 16);
    v65 = v10 & 0xFFFFFFFFFFFFFFFELL;
    LOBYTE(v49) = v10;
    if ( (v10 & 1) != 0 )
      goto LABEL_81;
    v9 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      goto LABEL_81;
    goto LABEL_60;
  }
  v4 = a2 + 64;
  if ( (*(_BYTE *)(a2 + 72) & 0x7Fu) - 60 > 1 )
  {
    do
    {
      v5 = *(_QWORD *)(sub_B8C1B0(v4) + 16);
      if ( (v5 & 4) != 0 )
      {
        v4 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v4 )
        {
LABEL_8:
          v6 = (_QWORD *)(a2 + 64);
          goto LABEL_14;
        }
      }
      else
      {
        v4 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v4 )
          goto LABEL_8;
      }
    }
    while ( (*(_BYTE *)(v4 + 8) & 0x7Fu) - 60 > 1 );
  }
}
