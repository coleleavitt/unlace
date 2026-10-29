void __fastcall sub_976F30(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // r11d
  int v7; // r14d
  unsigned __int64 v8; // r13
  _BYTE *v9; // rax
  __int64 v10; // rbp
  _QWORD *v11; // r15
  __int64 v12; // rcx
  _BYTE *v13; // rax
  char v15; // di
  int v16; // r15d
  int v17; // r12d
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r10
  int v20; // esi
  _QWORD *v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 *v23; // rax
  __int64 v24; // r8
  unsigned int v25; // esi
  __int64 v26; // rsi
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // r10
  int v31; // r12d
  unsigned int v32; // eax
  unsigned __int64 v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int j; // eax
  int v38; // edx
  __int64 v39; // rdx
  int v40; // esi
  _QWORD *v41; // rdi
  unsigned int v42; // ecx
  unsigned __int64 v43; // r8
  __int64 v44; // r12
  __m128 *v45; // rax
  unsigned int v46; // eax
  int v47; // esi
  _QWORD *v48; // rdi
  unsigned int v49; // ecx
  _QWORD *v50; // r8
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v53; // [rsp+8h] [rbp-C0h]
  __int64 v54; // [rsp+10h] [rbp-B8h]
  __int64 v55; // [rsp+18h] [rbp-B0h]
  _QWORD *v56; // [rsp+20h] [rbp-A8h]
  __int64 v57; // [rsp+28h] [rbp-A0h]
  _QWORD *i; // [rsp+30h] [rbp-98h]
  _QWORD *v59; // [rsp+38h] [rbp-90h]
  __int64 v60; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v61; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v62; // [rsp+50h] [rbp-78h]
  _BYTE v63[64]; // [rsp+88h] [rbp-40h] BYREF

  v6 = a3;
  v7 = a5;
  v8 = a4;
  v9 = (_BYTE *)a1[41];
  if ( v9[59] || v9[60] )
  {
    v10 = a2;
    if ( a4 != a2 )
      goto LABEL_4;
  }
  else
  {
    if ( !v9[63] )
      return;
    v10 = a2;
    if ( a4 != a2 )
    {
LABEL_4:
      v55 = (__int64)a6;
      v11 = a1;
      v52 = a4;
      v53 = a3;
      v54 = a2;
      if ( a2 )
      {
        if ( v52 )
        {
LABEL_6:
          v12 = v54;
          if ( v52 == v54 )
          {
            if ( (unsigned int)a5 > (unsigned int)v53 )
              LODWORD(a5) = v53;
            a5 = (unsigned int)a5;
            goto LABEL_10;
          }
          goto LABEL_18;
        }
      }
      else
      {
        if ( !(_DWORD)v53 )
        {
LABEL_42:
          v12 = v10;
          a5 = v6;
          if ( v9[63] )
          {
            v33 = v55 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v10 != v52 )
            {
              while ( v7 == 1 )
              {
                while ( 1 )
                {
                  if ( *(_BYTE *)(v11[41] + 63LL) )
                  {
                    v44 = v11[2];
                    v52 = **(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFFCLL | 1;
                    v45 = *(__m128 **)(v44 + 8);
                    if ( (unsigned __int64)v45 >= *(_QWORD *)(v44 + 16) )
                    {
                      v51 = v11[1];
                      i = (_QWORD *)a5;
                      v57 = v12;
                      LODWORD(v56) = v6;
                      sub_975850((const __m128i **)v44, (_QWORD *)(v51 + 32), 1u, v12, a5, (__int64)a6);
                      v45 = *(__m128 **)(v44 + 8);
                      v6 = (unsigned int)v56;
                      v12 = v57;
                      a5 = (__int64)i;
                    }
                    v52 = v33;
                    *v45 = _mm_loadh_ps((const double *)&v52);
                    *(_QWORD *)(v44 + 8) += 16LL;
                  }
                  v7 = *(_DWORD *)(v8 + 40);
                  v8 = *(_QWORD *)(v8 + 32);
LABEL_47:
                  if ( v8 != v10 )
                    break;
                  if ( v7 == v6 )
                    goto LABEL_10;
                  if ( v7 != 1 )
                    goto LABEL_45;
                }
              }
LABEL_45:
              if ( v8 )
              {
                --v7;
                goto LABEL_47;
              }
              if ( v10 )
              {
                while ( 1 )
                  ;
              }
              while ( v6 != v7 )
                ;
            }
          }
          goto LABEL_10;
        }
        if ( v52 )
        {
LABEL_18:
          v60 = 1;
          v13 = &v61;
          do
          {
            *(_QWORD *)v13 = -4096;
            v13 += 16;
          }
          while ( v13 != v63 );
          v15 = v60;
          v16 = a5;
          v17 = a5;
          v18 = v52;
          v19 = a1;
          while ( 1 )
          {
            v24 = v15 & 1;
            if ( (v15 & 1) != 0 )
            {
              v20 = 3;
              v21 = &v61;
            }
            else
            {
              v25 = v62;
              v21 = v61;
              if ( !v62 )
              {
                v23 = nullptr;
                v34 = ((unsigned int)v60 >> 1) + 1;
                goto LABEL_53;
              }
              v20 = v62 - 1;
            }
            v22 = v20 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
            v23 = &v21[2 * v22];
            a6 = (unsigned __int64 *)*v23;
            if ( *v23 == v18 )
              goto LABEL_23;
            if ( a6 != (unsigned __int64 *)-4096LL )
            {
              LODWORD(v57) = 1;
              v56 = nullptr;
              for ( i = &v21[2 * (v20 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4)))]; ; i = v59 )
              {
                if ( a6 != (unsigned __int64 *)-8192LL || v56 )
                  i = v56;
                v22 = v20 & (v57 + v22);
                v59 = &v21[2 * v22];
                a6 = (unsigned __int64 *)*v59;
                if ( *v59 == v18 )
                  goto LABEL_23;
                if ( a6 == (unsigned __int64 *)-4096LL )
                  break;
                LODWORD(v57) = v57 + 1;
                v56 = i;
              }
              v23 = i;
              if ( !i )
                v23 = v59;
            }
            v34 = ((unsigned int)v60 >> 1) + 1;
            if ( !(_BYTE)v24 )
            {
              v25 = v62;
LABEL_53:
              v35 = 3 * v25;
              if ( 4 * (int)v34 < (unsigned int)v35 )
                goto LABEL_54;
              goto LABEL_74;
            }
            v35 = 12;
            v25 = 4;
            if ( (unsigned int)(4 * v34) < 0xC )
            {
LABEL_54:
              v36 = v25 - HIDWORD(v60) - (unsigned int)v34;
              if ( (unsigned int)v36 <= v25 >> 3 )
              {
                v57 = (__int64)v19;
                LODWORD(v56) = v6;
                sub_971280((__int64)&v60, v25, v34, v36, v24, (__int64)a6);
                v6 = (unsigned int)v56;
                v19 = (_QWORD *)v57;
                if ( (v60 & 1) != 0 )
                {
                  v47 = 3;
                  v48 = &v61;
                }
                else
                {
                  v48 = v61;
                  if ( !v62 )
                  {
LABEL_125:
                    LODWORD(v60) = (2 * ((unsigned int)v60 >> 1) + 2) | v60 & 1;
                    BUG();
                  }
                  v47 = v62 - 1;
                }
                v49 = v47 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
                LODWORD(v34) = ((unsigned int)v60 >> 1) + 1;
                v23 = &v48[2 * v49];
                v50 = (_QWORD *)*v23;
                if ( v18 != *v23 && v50 != (_QWORD *)-4096LL )
                {
                  LODWORD(v56) = 1;
                  a6 = nullptr;
                  LODWORD(v57) = v47;
                  while ( 1 )
                  {
                    if ( v50 == (_QWORD *)-8192LL && !a6 )
                      a6 = v23;
                    v49 = v57 & ((_DWORD)v56 + v49);
                    v23 = &v48[2 * v49];
                    v50 = (_QWORD *)*v23;
                    if ( *v23 == v18 )
                      goto LABEL_55;
                    if ( v50 == (_QWORD *)-4096LL )
                      break;
                    LODWORD(v56) = (_DWORD)v56 + 1;
                  }
LABEL_84:
                  if ( a6 )
                    v23 = a6;
                }
              }
              goto LABEL_55;
            }
LABEL_74:
            v57 = (__int64)v19;
            LODWORD(v56) = v6;
            sub_971280((__int64)&v60, 2 * v25, v34, v35, v24, (__int64)a6);
            v6 = (unsigned int)v56;
            v19 = (_QWORD *)v57;
            if ( (v60 & 1) != 0 )
            {
              v40 = 3;
              v41 = &v61;
            }
            else
            {
              v41 = v61;
              if ( !v62 )
                goto LABEL_125;
              v40 = v62 - 1;
            }
            v42 = v40 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
            LODWORD(v34) = ((unsigned int)v60 >> 1) + 1;
            v23 = &v41[2 * v42];
            v43 = *v23;
            if ( *v23 != v18 && v43 != -4096 )
            {
              LODWORD(v56) = 1;
              a6 = nullptr;
              LODWORD(v57) = v40;
              while ( 1 )
              {
                if ( v43 == -8192 && !a6 )
                  a6 = v23;
                v42 = v57 & ((_DWORD)v56 + v42);
                v23 = &v41[2 * v42];
                v43 = *v23;
                if ( *v23 == v18 )
                  break;
                if ( v43 == -4096 )
                  goto LABEL_84;
                LODWORD(v56) = (_DWORD)v56 + 1;
              }
            }
LABEL_55:
            LODWORD(v60) = v60 & 1 | (2 * v34);
            if ( *v23 != -4096 )
              --HIDWORD(v60);
            *v23 = v18;
            *((_DWORD *)v23 + 2) = v17;
            v15 = v60;
            LOBYTE(v24) = v60 & 1;
LABEL_23:
            if ( !v18 && !v17 )
            {
              v7 = v16;
              a6 = (unsigned __int64 *)&v61;
              v11 = v19;
              while ( 1 )
              {
                if ( (_BYTE)v24 )
                {
                  v26 = ((unsigned __int8)((unsigned int)v10 >> 9) ^ (unsigned __int8)((unsigned int)v10 >> 4)) & 3;
                  v27 = &(&v61)[2 * v26];
                  if ( *v27 == v10 )
                    goto LABEL_33;
                  v39 = 8;
                  v30 = &v61;
                  v31 = 3;
                  if ( *v27 == -4096 )
                    goto LABEL_66;
                }
                else
                {
                  v28 = v61;
                  v29 = v62;
                  v30 = v61;
                  if ( !v62 )
                    goto LABEL_65;
                  v31 = v62 - 1;
                  LODWORD(v26) = (v62 - 1) & (((unsigned int)v10 >> 4) ^ ((unsigned int)v10 >> 9));
                  v27 = &v61[2 * (unsigned int)v26];
                  if ( v10 == *v27 )
                    goto LABEL_38;
                  if ( *v27 == -4096 )
                  {
LABEL_64:
                    v30 = v28;
LABEL_65:
                    v39 = 2 * v29;
LABEL_66:
                    v27 = &v30[v39];
                    goto LABEL_67;
                  }
                }
                for ( j = 1; ; j = v38 )
                {
                  v38 = j + 1;
                  LODWORD(v26) = v31 & (j + v26);
                  v27 = &v30[2 * (unsigned int)v26];
                  if ( v10 == *v27 )
                    break;
                  if ( *v27 == -4096 )
                  {
                    v39 = 8;
                    v30 = &v61;
                    if ( (_BYTE)v24 )
                      goto LABEL_66;
                    v28 = v61;
                    v29 = v62;
                    goto LABEL_64;
                  }
                }
LABEL_67:
                if ( !(_BYTE)v24 )
                {
                  v28 = v61;
LABEL_38:
                  if ( v27 != &v28[2 * v62] )
                  {
                    v32 = *((_DWORD *)v27 + 2);
                    if ( v6 > v32 )
                      v6 = v32;
                    LODWORD(v56) = v6;
                    operator delete();
                    v9 = (_BYTE *)v11[41];
                    v6 = (unsigned int)v56;
                    goto LABEL_42;
                  }
                  goto LABEL_34;
                }
LABEL_33:
                if ( v27 != (_QWORD *)v63 )
                {
                  v46 = *((_DWORD *)v27 + 2);
                  if ( v6 > v46 )
                    v6 = v46;
                  v9 = (_BYTE *)v11[41];
                  goto LABEL_42;
                }
LABEL_34:
                v6 = *(_DWORD *)(v10 + 40);
                v10 = *(_QWORD *)(v10 + 32);
              }
            }
            v17 = *(_DWORD *)(v18 + 40);
            v18 = *(_QWORD *)(v18 + 32);
          }
        }
      }
      if ( !(_DWORD)a5 )
      {
        v12 = 0;
        a5 = 0;
LABEL_10:
        sub_976710(v11, v54, v53, v12, a5, v55);
        return;
      }
      goto LABEL_6;
    }
  }
  if ( (_DWORD)a5 != (_DWORD)a3 )
    goto LABEL_4;
}

