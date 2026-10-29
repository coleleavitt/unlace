void __fastcall sub_99AC70(
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
  __int64 v32; // rsi
  unsigned int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int j; // eax
  int v39; // edx
  __int64 v40; // rdx
  int v41; // esi
  _QWORD *v42; // rdi
  unsigned int v43; // ecx
  unsigned __int64 v44; // r8
  __int64 v45; // r12
  __m128 *v46; // rax
  unsigned int v47; // eax
  int v48; // esi
  _QWORD *v49; // rdi
  unsigned int v50; // ecx
  _QWORD *v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v54; // [rsp+8h] [rbp-C0h]
  __int64 v55; // [rsp+10h] [rbp-B8h]
  __int64 v56; // [rsp+18h] [rbp-B0h]
  _QWORD *v57; // [rsp+20h] [rbp-A8h]
  __int64 v58; // [rsp+28h] [rbp-A0h]
  _QWORD *i; // [rsp+30h] [rbp-98h]
  _QWORD *v60; // [rsp+38h] [rbp-90h]
  __int64 v61; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v62; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-78h]
  _BYTE v64[64]; // [rsp+88h] [rbp-40h] BYREF

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
      v56 = (__int64)a6;
      v11 = a1;
      v53 = a4;
      v54 = a3;
      v55 = a2;
      if ( a2 )
      {
        if ( v53 )
        {
LABEL_6:
          v12 = v55;
          if ( v53 == v55 )
          {
            if ( (unsigned int)a5 > (unsigned int)v54 )
              LODWORD(a5) = v54;
            a5 = (unsigned int)a5;
            goto LABEL_10;
          }
          goto LABEL_18;
        }
      }
      else
      {
        if ( !(_DWORD)v54 )
        {
LABEL_42:
          v12 = v10;
          a5 = v6;
          if ( v9[63] )
          {
            v34 = v56 & 0xFFFFFFFFFFFFFFFCLL;
            if ( v10 != v53 )
            {
              while ( v7 == 1 )
              {
                while ( 1 )
                {
                  if ( *(_BYTE *)(v11[41] + 63LL) )
                  {
                    v45 = v11[2];
                    v53 = **(_QWORD **)(v8 + 8) & 0xFFFFFFFFFFFFFFFCLL | 1;
                    v46 = *(__m128 **)(v45 + 8);
                    if ( (unsigned __int64)v46 >= *(_QWORD *)(v45 + 16) )
                    {
                      v52 = v11[1];
                      i = (_QWORD *)a5;
                      v58 = v12;
                      LODWORD(v57) = v6;
                      sub_999590((const __m128i **)v45, (_QWORD *)(v52 + 32), 1u, v12, a5, (__int64)a6);
                      v46 = *(__m128 **)(v45 + 8);
                      v6 = (unsigned int)v57;
                      v12 = v58;
                      a5 = (__int64)i;
                    }
                    v53 = v34;
                    *v46 = _mm_loadh_ps((const double *)&v53);
                    *(_QWORD *)(v45 + 8) += 16LL;
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
        if ( v53 )
        {
LABEL_18:
          v61 = 1;
          v13 = &v62;
          do
          {
            *(_QWORD *)v13 = -4096;
            v13 += 16;
          }
          while ( v13 != v64 );
          v15 = v61;
          v16 = a5;
          v17 = a5;
          v18 = v53;
          v19 = a1;
          while ( 1 )
          {
            v24 = v15 & 1;
            if ( (v15 & 1) != 0 )
            {
              v20 = 3;
              v21 = &v62;
            }
            else
            {
              v25 = v63;
              v21 = v62;
              if ( !v63 )
              {
                v23 = nullptr;
                v35 = ((unsigned int)v61 >> 1) + 1;
                goto LABEL_53;
              }
              v20 = v63 - 1;
            }
            v22 = v20 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
            v23 = &v21[2 * v22];
            a6 = (unsigned __int64 *)*v23;
            if ( *v23 == v18 )
              goto LABEL_23;
            if ( a6 != (unsigned __int64 *)-4096LL )
            {
              LODWORD(v58) = 1;
              v57 = nullptr;
              for ( i = &v21[2 * (v20 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4)))]; ; i = v60 )
              {
                if ( a6 != (unsigned __int64 *)-8192LL || v57 )
                  i = v57;
                v22 = v20 & (v58 + v22);
                v60 = &v21[2 * v22];
                a6 = (unsigned __int64 *)*v60;
                if ( *v60 == v18 )
                  goto LABEL_23;
                if ( a6 == (unsigned __int64 *)-4096LL )
                  break;
                LODWORD(v58) = v58 + 1;
                v57 = i;
              }
              v23 = i;
              if ( !i )
                v23 = v60;
            }
            v35 = ((unsigned int)v61 >> 1) + 1;
            if ( !(_BYTE)v24 )
            {
              v25 = v63;
LABEL_53:
              v36 = 3 * v25;
              if ( 4 * (int)v35 < (unsigned int)v36 )
                goto LABEL_54;
              goto LABEL_74;
            }
            v36 = 12;
            v25 = 4;
            if ( (unsigned int)(4 * v35) < 0xC )
            {
LABEL_54:
              v37 = v25 - HIDWORD(v61) - (unsigned int)v35;
              if ( (unsigned int)v37 <= v25 >> 3 )
              {
                v58 = (__int64)v19;
                LODWORD(v57) = v6;
                sub_994FC0((__int64)&v61, v25, v35, v37, v24, (__int64)a6);
                v6 = (unsigned int)v57;
                v19 = (_QWORD *)v58;
                if ( (v61 & 1) != 0 )
                {
                  v48 = 3;
                  v49 = &v62;
                }
                else
                {
                  v49 = v62;
                  if ( !v63 )
                  {
LABEL_125:
                    LODWORD(v61) = (2 * ((unsigned int)v61 >> 1) + 2) | v61 & 1;
                    BUG();
                  }
                  v48 = v63 - 1;
                }
                v50 = v48 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
                LODWORD(v35) = ((unsigned int)v61 >> 1) + 1;
                v23 = &v49[2 * v50];
                v51 = (_QWORD *)*v23;
                if ( v18 != *v23 && v51 != (_QWORD *)-4096LL )
                {
                  LODWORD(v57) = 1;
                  a6 = nullptr;
                  LODWORD(v58) = v48;
                  while ( 1 )
                  {
                    if ( v51 == (_QWORD *)-8192LL && !a6 )
                      a6 = v23;
                    v50 = v58 & ((_DWORD)v57 + v50);
                    v23 = &v49[2 * v50];
                    v51 = (_QWORD *)*v23;
                    if ( *v23 == v18 )
                      goto LABEL_55;
                    if ( v51 == (_QWORD *)-4096LL )
                      break;
                    LODWORD(v57) = (_DWORD)v57 + 1;
                  }
LABEL_84:
                  if ( a6 )
                    v23 = a6;
                }
              }
              goto LABEL_55;
            }
LABEL_74:
            v58 = (__int64)v19;
            LODWORD(v57) = v6;
            sub_994FC0((__int64)&v61, 2 * v25, v35, v36, v24, (__int64)a6);
            v6 = (unsigned int)v57;
            v19 = (_QWORD *)v58;
            if ( (v61 & 1) != 0 )
            {
              v41 = 3;
              v42 = &v62;
            }
            else
            {
              v42 = v62;
              if ( !v63 )
                goto LABEL_125;
              v41 = v63 - 1;
            }
            v43 = v41 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
            LODWORD(v35) = ((unsigned int)v61 >> 1) + 1;
            v23 = &v42[2 * v43];
            v44 = *v23;
            if ( *v23 != v18 && v44 != -4096 )
            {
              LODWORD(v57) = 1;
              a6 = nullptr;
              LODWORD(v58) = v41;
              while ( 1 )
              {
                if ( v44 == -8192 && !a6 )
                  a6 = v23;
                v43 = v58 & ((_DWORD)v57 + v43);
                v23 = &v42[2 * v43];
                v44 = *v23;
                if ( *v23 == v18 )
                  break;
                if ( v44 == -4096 )
                  goto LABEL_84;
                LODWORD(v57) = (_DWORD)v57 + 1;
              }
            }
LABEL_55:
            LODWORD(v61) = v61 & 1 | (2 * v35);
            if ( *v23 != -4096 )
              --HIDWORD(v61);
            *v23 = v18;
            *((_DWORD *)v23 + 2) = v17;
            v15 = v61;
            LOBYTE(v24) = v61 & 1;
LABEL_23:
            if ( !v18 && !v17 )
            {
              v7 = v16;
              a6 = (unsigned __int64 *)&v62;
              v11 = v19;
              while ( 1 )
              {
                if ( (_BYTE)v24 )
                {
                  v26 = ((unsigned __int8)((unsigned int)v10 >> 9) ^ (unsigned __int8)((unsigned int)v10 >> 4)) & 3;
                  v27 = &(&v62)[2 * v26];
                  if ( *v27 == v10 )
                    goto LABEL_33;
                  v40 = 8;
                  v30 = &v62;
                  v31 = 3;
                  if ( *v27 == -4096 )
                    goto LABEL_66;
                }
                else
                {
                  v28 = v62;
                  v29 = v63;
                  v30 = v62;
                  if ( !v63 )
                    goto LABEL_65;
                  v31 = v63 - 1;
                  LODWORD(v26) = (v63 - 1) & (((unsigned int)v10 >> 4) ^ ((unsigned int)v10 >> 9));
                  v27 = &v62[2 * (unsigned int)v26];
                  if ( v10 == *v27 )
                    goto LABEL_38;
                  if ( *v27 == -4096 )
                  {
LABEL_64:
                    v30 = v28;
LABEL_65:
                    v40 = 2 * v29;
LABEL_66:
                    v27 = &v30[v40];
                    goto LABEL_67;
                  }
                }
                for ( j = 1; ; j = v39 )
                {
                  v39 = j + 1;
                  LODWORD(v26) = v31 & (j + v26);
                  v27 = &v30[2 * (unsigned int)v26];
                  if ( v10 == *v27 )
                    break;
                  if ( *v27 == -4096 )
                  {
                    v40 = 8;
                    v30 = &v62;
                    if ( (_BYTE)v24 )
                      goto LABEL_66;
                    v28 = v62;
                    v29 = v63;
                    goto LABEL_64;
                  }
                }
LABEL_67:
                if ( !(_BYTE)v24 )
                {
                  v28 = v62;
LABEL_38:
                  v32 = 2LL * v63;
                  if ( v27 != &v28[v32] )
                  {
                    v33 = *((_DWORD *)v27 + 2);
                    if ( v6 > v33 )
                      v6 = v33;
                    LODWORD(v57) = v6;
                    operator delete(v28, v32 * 8, 8);
                    v9 = (_BYTE *)v11[41];
                    v6 = (unsigned int)v57;
                    goto LABEL_42;
                  }
                  goto LABEL_34;
                }
LABEL_33:
                if ( v27 != (_QWORD *)v64 )
                {
                  v47 = *((_DWORD *)v27 + 2);
                  if ( v6 > v47 )
                    v6 = v47;
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
        sub_99A450(v11, v55, v54, v12, a5, v56);
        return;
      }
      goto LABEL_6;
    }
  }
  if ( (_DWORD)a5 != (_DWORD)a3 )
    goto LABEL_4;
}
