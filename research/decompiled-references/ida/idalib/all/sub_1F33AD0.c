__int64 __fastcall sub_1F33AD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128 v8; // xmm0
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rbp
  unsigned int v14; // r15d
  __int64 *v15; // r14
  unsigned __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rsi
  unsigned int v21; // r10d
  __int64 *v22; // r9
  _QWORD *v23; // rcx
  __int64 *v24; // rdx
  unsigned int i; // r12d
  unsigned int v26; // esi
  unsigned int v27; // edi
  __int64 v28; // rsi
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  unsigned int v34; // r8d
  __int64 *v35; // rdi
  __int64 v36; // r11
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rdi
  int v41; // eax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rdx
  unsigned int v47; // r9d
  __int64 v48; // r11
  __int64 *v49; // r8
  _QWORD *v50; // rcx
  __int64 *v51; // rdx
  unsigned int v52; // r15d
  __int64 v53; // rcx
  unsigned int v54; // edi
  _QWORD *v55; // rsi
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // rcx
  unsigned int v59; // esi
  _QWORD *v60; // rcx
  _QWORD *v61; // rdx
  unsigned int v62; // edi
  unsigned int v63; // r12d
  __int64 v64; // r10
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  int v67; // r10d
  __int64 v68; // r11
  __int64 *v69; // r15
  _QWORD *v71; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 *v73; // [rsp+18h] [rbp-90h]
  __m128 v74; // [rsp+20h] [rbp-88h] BYREF
  __int64 v75; // [rsp+30h] [rbp-78h]
  __int64 v76; // [rsp+38h] [rbp-70h]
  __int64 v77; // [rsp+40h] [rbp-68h]
  __int64 v78; // [rsp+48h] [rbp-60h]
  unsigned int v79; // [rsp+50h] [rbp-58h]
  __int64 v80; // [rsp+58h] [rbp-50h]
  int v81; // [rsp+60h] [rbp-48h]

  v6 = a3;
  v71 = (_QWORD *)a3;
  v75 = a1 + 12672;
  v7 = *(_QWORD *)(a3 + 120);
  v8 = _mm_loadh_ps((const double *)&v71);
  v80 = a2;
  v74 = v8;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v81 = a4;
  if ( !v7 )
  {
    v29 = *(_QWORD *)(a3 + 96);
    a3 = *(_QWORD *)(v29 + 88);
    v30 = a3 & 0xFFFFFFFFFFFFFFFELL;
    if ( (a3 & 1) == 0 )
    {
      v31 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (a3 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        v32 = a3 & 2;
        if ( !(_DWORD)v32 )
          goto LABEL_27;
        v30 = sub_6E2500(v31, v29, v32, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
        a3 = v30 | 1;
        *(_QWORD *)(v29 + 88) = v30 | 1;
      }
    }
    if ( v30 )
    {
      if ( (v30 & 4) != 0 )
      {
        a3 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( a3 )
        {
          v40 = *(_QWORD *)a3;
          v41 = *(_DWORD *)(*(_QWORD *)a3 + 12LL);
          if ( *(_DWORD *)(a3 + 8) != v41 )
          {
            *(_DWORD *)(a3 + 8) = v41;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 152LL))(v40, v29);
          }
        }
      }
    }
    v7 = *(_QWORD *)(v6 + 120);
  }
  v9 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
  {
    if ( (*(_BYTE *)(v9 + 72) & 1) != 0 )
    {
      sub_BA8900(v6);
      v9 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v10 = *(_QWORD *)(v9 + 56);
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v10 + 40);
        if ( !v13 )
          goto LABEL_9;
        v14 = v79;
        v15 = (__int64 *)v77;
        if ( !v79 )
          goto LABEL_12;
        v11 = v79 - 1;
        a4 = (v79 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        a3 = v77 + 16 * a4;
        v12 = *(_QWORD *)a3;
        if ( v13 != *(_QWORD *)a3 )
          break;
LABEL_8:
        a3 += 8;
        *(_QWORD *)a3 = v10;
LABEL_9:
        v76 = v10;
        v10 = *(_QWORD *)(v10 + 128);
        if ( !v10 )
          goto LABEL_27;
      }
      v39 = 1;
      a5 = 0;
      if ( v12 != -1 )
      {
        while ( 1 )
        {
          if ( v12 == -2 && !a5 )
            a5 = a3;
          a6 = (unsigned int)(v39 + 1);
          a4 = v11 & (v39 + (_DWORD)a4);
          a3 = v77 + 16LL * (unsigned int)a4;
          v12 = *(_QWORD *)a3;
          if ( v13 == *(_QWORD *)a3 )
            goto LABEL_8;
          if ( v12 == -1 )
            break;
          ++v39;
        }
        if ( a5 )
          a3 = a5;
      }
      a4 = (unsigned int)(v78 + 1);
      if ( 4 * (int)a4 >= 3 * v79 )
      {
LABEL_12:
        v16 = (((((((2 * v79 - 1) | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 2)
                | (2 * v79 - 1)
                | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 4)
              | (((2 * v79 - 1) | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 2)
              | (2 * v79 - 1)
              | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 8)
            | (((((2 * v79 - 1) | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 2)
              | (2 * v79 - 1)
              | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 4)
            | (((2 * v79 - 1) | ((unsigned __int64)(2 * v79 - 1) >> 1)) >> 2)
            | (2 * v79 - 1)
            | ((unsigned __int64)(2 * v79 - 1) >> 1);
        v17 = ((v16 >> 16) | v16) + 1;
        if ( (unsigned int)v17 < 0x40 )
          LODWORD(v17) = 64;
        v79 = v17;
        v18 = sub_22300B0(16LL * (unsigned int)v17, 8, a3, a4, a5, a6);
        v77 = v18;
        if ( v15 )
        {
          v19 = (_QWORD *)v18;
          v78 = 0;
          v20 = 2LL * v14;
          v21 = v79;
          v22 = &v15[v20];
          v23 = (_QWORD *)(v18 + 16LL * v79);
          if ( (_QWORD *)v18 != v23 )
          {
            do
            {
              *v19 = -1;
              v19 += 2;
            }
            while ( v23 != v19 );
          }
          v24 = v15;
          for ( i = v21 - 1; v22 != v24; v24 += 2 )
          {
            v38 = *v24;
            if ( (unsigned __int64)(*v24 + 2) > 1 )
            {
              if ( !v21 )
              {
                *(_QWORD *)&dword_0 = *v24;
                BUG();
              }
              v34 = i & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
              v35 = (__int64 *)(v18 + 16LL * v34);
              v36 = *v35;
              if ( *v35 != v38 && v36 != -1 )
              {
                LODWORD(v71) = 1;
                v69 = nullptr;
                v72 = v38;
                while ( 1 )
                {
                  if ( !v69 && v36 == -2 )
                    v69 = v35;
                  v34 = i & ((_DWORD)v71 + v34);
                  v35 = (__int64 *)(v18 + 16LL * v34);
                  v36 = *v35;
                  if ( v72 == *v35 )
                    break;
                  if ( v36 == -1 )
                  {
                    if ( v69 )
                      v35 = v69;
                    break;
                  }
                  LODWORD(v71) = (_DWORD)v71 + 1;
                }
              }
              *v35 = *v24;
              v37 = v24[1];
              LODWORD(v78) = v78 + 1;
              v35[1] = v37;
            }
          }
          operator delete(v15, v20 * 8, 8);
          v18 = v77;
          v26 = v79;
          a4 = (unsigned int)(v78 + 1);
        }
        else
        {
          v78 = 0;
          v26 = v79;
          v65 = (_QWORD *)(v18 + 16LL * v79);
          if ( (_QWORD *)v18 != v65 )
          {
            v66 = (_QWORD *)v18;
            do
            {
              *v66 = -1;
              v66 += 2;
            }
            while ( v65 != v66 );
          }
          a4 = 1;
        }
        if ( !v26 )
          goto LABEL_122;
        a5 = v26 - 1;
        v27 = a5 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        a3 = v18 + 16LL * v27;
        v28 = *(_QWORD *)a3;
        if ( v13 == *(_QWORD *)a3 )
          goto LABEL_21;
        v67 = 1;
        v68 = 0;
        if ( v28 != -1 )
        {
          while ( 1 )
          {
            if ( v68 || v28 != -2 )
              a3 = v68;
            v27 = a5 & (v67 + v27);
            a6 = v18 + 16LL * v27;
            v28 = *(_QWORD *)a6;
            if ( v13 == *(_QWORD *)a6 )
            {
              a3 = v18 + 16LL * v27;
              goto LABEL_21;
            }
            if ( v28 == -1 )
              break;
            ++v67;
            v68 = a3;
            a3 = v18 + 16LL * v27;
          }
          if ( a3 )
            goto LABEL_37;
          a3 = v18 + 16LL * v27;
        }
      }
      else
      {
        if ( v79 - HIDWORD(v78) - (unsigned int)a4 > v79 >> 3 )
        {
LABEL_37:
          v28 = *(_QWORD *)a3;
LABEL_21:
          LODWORD(v78) = a4;
          if ( v28 != -1 )
            --HIDWORD(v78);
          goto LABEL_23;
        }
        v42 = ((v11 | ((unsigned __int64)v11 >> 1)) >> 2) | v11 | ((unsigned __int64)v11 >> 1);
        v43 = (((v42 >> 4) | v42) >> 8) | (v42 >> 4) | v42;
        v44 = ((v43 >> 16) | v43) + 1;
        if ( (unsigned int)v44 < 0x40 )
          LODWORD(v44) = 64;
        v79 = v44;
        v45 = sub_22300B0(16LL * (unsigned int)v44, 8, a3, a4, a5, a6);
        v77 = v45;
        if ( v15 )
        {
          v46 = (_QWORD *)v45;
          v78 = 0;
          v47 = v79;
          v48 = 2LL * v14;
          v49 = &v15[v48];
          v50 = (_QWORD *)(v45 + 16LL * v79);
          if ( (_QWORD *)v45 != v50 )
          {
            do
            {
              *v46 = -1;
              v46 += 2;
            }
            while ( v50 != v46 );
          }
          v51 = v15;
          v52 = v47 - 1;
          do
          {
            while ( 1 )
            {
              v53 = *v51;
              if ( (unsigned __int64)(*v51 + 2) > 1 )
                break;
              v51 += 2;
              if ( v49 == v51 )
                goto LABEL_56;
            }
            if ( !v47 )
            {
              *(_QWORD *)&dword_0 = *v51;
              BUG();
            }
            v54 = v52 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v55 = (_QWORD *)(v45 + 16LL * v54);
            v56 = *v55;
            if ( *v55 != v53 && v56 != -1 )
            {
              LODWORD(v72) = 1;
              v71 = nullptr;
              v73 = v51;
              while ( 1 )
              {
                if ( v56 == -2 )
                {
                  if ( v71 )
                    v55 = v71;
                  v71 = v55;
                }
                v54 = v52 & (v72 + v54);
                v55 = (_QWORD *)(v45 + 16LL * v54);
                v56 = *v55;
                if ( v53 == *v55 )
                {
                  v51 = v73;
                  goto LABEL_55;
                }
                if ( v56 == -1 )
                  break;
                LODWORD(v72) = v72 + 1;
              }
              v51 = v73;
              if ( v71 )
                v55 = v71;
            }
LABEL_55:
            v57 = *v51;
            v51 += 2;
            *v55 = v57;
            v58 = *(v51 - 1);
            LODWORD(v78) = v78 + 1;
            v55[1] = v58;
          }
          while ( v49 != v51 );
LABEL_56:
          operator delete(v15, v48 * 8, 8);
          v45 = v77;
          v59 = v79;
          a4 = (unsigned int)(v78 + 1);
        }
        else
        {
          v78 = 0;
          v59 = v79;
          v60 = (_QWORD *)(v45 + 16LL * v79);
          if ( (_QWORD *)v45 != v60 )
          {
            v61 = (_QWORD *)v45;
            do
            {
              *v61 = -1;
              v61 += 2;
            }
            while ( v60 != v61 );
          }
          a4 = 1;
        }
        if ( !v59 )
        {
LABEL_122:
          LODWORD(v78) = v78 + 1;
          BUG();
        }
        v62 = v59 - 1;
        v63 = (v59 - 1) & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        a3 = v45 + 16LL * v63;
        v28 = *(_QWORD *)a3;
        if ( v13 == *(_QWORD *)a3 )
          goto LABEL_21;
        a6 = 1;
        v64 = 0;
        if ( v28 != -1 )
        {
          while ( 1 )
          {
            if ( v64 || v28 != -2 )
              a3 = v64;
            v63 = v62 & (a6 + v63);
            a5 = v45 + 16LL * v63;
            v28 = *(_QWORD *)a5;
            if ( v13 == *(_QWORD *)a5 )
            {
              a3 = v45 + 16LL * v63;
              goto LABEL_21;
            }
            if ( v28 == -1 )
              break;
            a6 = (unsigned int)(a6 + 1);
            v64 = a3;
            a3 = v45 + 16LL * v63;
          }
          if ( a3 )
            goto LABEL_37;
          a3 = v45 + 16LL * v63;
        }
      }
      LODWORD(v78) = a4;
LABEL_23:
      *(_QWORD *)a3 = v13;
      *(_QWORD *)(a3 + 8) = 0;
      goto LABEL_8;
    }
  }
LABEL_27:
  sub_1FDD8F0(a1 + 160, sub_1F3A220, &v74, 0);
  return operator delete(v77, 16LL * v79, 8);
}
