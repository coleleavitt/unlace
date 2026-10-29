__int64 __fastcall sub_ABEED0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // r10
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 *v10; // r14
  unsigned __int64 *v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // edi
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // rcx
  __int64 *v16; // rbx
  __int64 v17; // rbp
  int v18; // r10d
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r13
  unsigned __int64 *v24; // r11
  _QWORD *j; // rdx
  unsigned __int64 *k; // rax
  unsigned int v27; // edx
  int v28; // ecx
  unsigned int v29; // edx
  __int64 v30; // rdi
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int v34; // esi
  unsigned __int64 *v35; // rcx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rdx
  int v39; // r8d
  unsigned __int64 *v40; // r11
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // r9
  unsigned __int64 *v48; // r8
  _QWORD *i; // rdx
  unsigned __int64 *v50; // rax
  unsigned __int64 v51; // r11
  unsigned int v52; // ecx
  unsigned __int64 *v53; // rdx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rcx
  unsigned int v56; // edx
  unsigned int v57; // edx
  __int64 v58; // r13
  unsigned __int64 v59; // rdi
  int v60; // r9d
  unsigned __int64 *v61; // r11
  _QWORD *v62; // rsi
  _QWORD *v63; // rcx
  _QWORD *v64; // rsi
  _QWORD *v65; // rcx
  int v66; // r13d
  __int64 v67; // [rsp+18h] [rbp-D0h]
  __int64 **v69; // [rsp+28h] [rbp-C0h]
  unsigned int v70; // [rsp+38h] [rbp-B0h]
  int v71; // [rsp+38h] [rbp-B0h]
  int v72; // [rsp+38h] [rbp-B0h]
  unsigned __int64 *v73; // [rsp+38h] [rbp-B0h]
  int v74; // [rsp+40h] [rbp-A8h]
  unsigned int v75; // [rsp+40h] [rbp-A8h]
  int v76; // [rsp+40h] [rbp-A8h]
  unsigned __int64 *v77; // [rsp+40h] [rbp-A8h]
  __int64 v78; // [rsp+48h] [rbp-A0h]
  int v79; // [rsp+50h] [rbp-98h]
  __m128 v80; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v81; // [rsp+70h] [rbp-78h] BYREF
  __int64 v82; // [rsp+78h] [rbp-70h]
  unsigned int v83; // [rsp+80h] [rbp-68h]
  _QWORD v84[4]; // [rsp+90h] [rbp-58h] BYREF
  char v85; // [rsp+B0h] [rbp-38h] BYREF

  v6 = nullptr;
  v69 = (__int64 **)v84;
  v81 = nullptr;
  v82 = 0;
  v83 = 0;
  v84[1] = a4;
  v84[2] = a5;
  v84[3] = a6;
  v78 = a2 + 16;
  v84[0] = a3;
  v8 = 0;
  do
  {
    v67 = (__int64)&(*v69)[(_QWORD)v69[1]];
    if ( (__int64 *)v67 == *v69 )
      goto LABEL_28;
    v9 = v8;
    v10 = *v69;
    v11 = v6;
    do
    {
      v17 = *v10;
      v18 = *(_DWORD *)(a2 + 8);
      v19 = *(_QWORD *)&byte_8[*v10 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*v10 | (unsigned __int8)*(_QWORD *)&byte_8[*v10 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
      if ( !(_DWORD)v9 )
        goto LABEL_8;
      v12 = (unsigned int)(v9 - 1);
      v13 = v12 & (v19 ^ (v19 >> 9));
      v14 = &v11[2 * v13];
      v15 = *v14;
      if ( *v14 == v19 )
      {
LABEL_5:
        sub_A86860(&v80, v14, &v11[2 * v9], (__int64)&v81, 1);
        v16 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(v80.m128_u64[0] + 8));
        *v16 = sub_ABBE20(a1, *v16, v17, 0);
        goto LABEL_6;
      }
      v39 = 1;
      v40 = nullptr;
      if ( v15 )
      {
        while ( 1 )
        {
          if ( !v40 && v15 == -1 )
            v40 = v14;
          a6 = (unsigned int)(v39 + 1);
          v13 = v12 & (v39 + v13);
          v14 = &v11[2 * v13];
          v15 = *v14;
          if ( v19 == *v14 )
            goto LABEL_5;
          if ( !v15 )
            break;
          ++v39;
        }
        if ( v40 )
          v14 = v40;
      }
      v28 = v82 + 1;
      a5 = (unsigned int)(4 * (v82 + 1));
      if ( (unsigned int)a5 < 3 * (int)v9 )
      {
        v41 = (unsigned int)(v9 - (v28 + HIDWORD(v82)));
        if ( (unsigned int)v41 <= (unsigned int)v9 >> 3 )
        {
          v75 = v9;
          v72 = *(_DWORD *)(a2 + 8);
          v42 = (((v12 >> 1) | v12) >> 2) | (v12 >> 1) | v12;
          v43 = (((v42 >> 4) | v42) >> 8) | (v42 >> 4) | v42;
          v44 = v43 >> 16;
          v45 = ((v43 >> 16) | v43) + 1;
          if ( (unsigned int)v45 < 0x40 )
            LODWORD(v45) = 64;
          v83 = v45;
          v46 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v45, 8, v9, v44, v41, a6);
          v18 = v72;
          v81 = v46;
          if ( v11 )
          {
            v82 = 0;
            v47 = 2LL * v75;
            v48 = &v11[v47];
            for ( i = &v46[2 * v83]; i != v46; v46 += 2 )
              *v46 = 0;
            v50 = v11;
            do
            {
              while ( 1 )
              {
                v51 = *v50;
                if ( *v50 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                  break;
                v50 += 2;
                if ( v48 == v50 )
                  goto LABEL_44;
              }
              if ( !v83 )
              {
                *(_QWORD *)&dword_0 = *v50;
                BUG();
              }
              v52 = (v83 - 1) & (v51 ^ (v51 >> 9));
              v53 = &v81[2 * v52];
              v54 = *v53;
              if ( *v53 != v51 && v54 )
              {
                v79 = 1;
                v77 = nullptr;
                while ( 1 )
                {
                  if ( v54 == -1 )
                  {
                    if ( v77 )
                      v53 = v77;
                    v77 = v53;
                  }
                  v52 = (v83 - 1) & (v79 + v52);
                  ++v79;
                  v53 = &v81[2 * v52];
                  v54 = *v53;
                  if ( v51 == *v53 )
                    break;
                  if ( !v54 )
                  {
                    if ( v77 )
                      v53 = v77;
                    break;
                  }
                }
              }
              v55 = *v50;
              v50 += 2;
              *v53 = v55;
              *((_DWORD *)v53 + 2) = *((_DWORD *)v50 - 2);
              LODWORD(v82) = v82 + 1;
            }
            while ( v48 != v50 );
LABEL_44:
            operator delete(v11, v47 * 8, 8);
            v46 = v81;
            v56 = v83;
            v18 = v72;
            v28 = v82 + 1;
          }
          else
          {
            v82 = 0;
            v56 = v83;
            v64 = &v46[2 * v83];
            if ( v46 != v64 )
            {
              v65 = v46;
              do
              {
                *v65 = 0;
                v65 += 2;
              }
              while ( v64 != v65 );
            }
            v28 = 1;
          }
          if ( !v56 )
          {
LABEL_107:
            LODWORD(v82) = v82 + 1;
            BUG();
          }
          v57 = v56 - 1;
          LODWORD(v58) = v57 & (v19 ^ (v19 >> 9));
          v14 = &v46[2 * (unsigned int)v58];
          v59 = *v14;
          if ( v19 != *v14 )
          {
            v60 = 1;
            v61 = nullptr;
            if ( v59 )
            {
              while ( 1 )
              {
                if ( v59 == -1 && !v61 )
                  v61 = v14;
                v58 = v57 & ((_DWORD)v58 + v60);
                v14 = &v46[2 * v58];
                v59 = *v14;
                if ( v19 == *v14 )
                  break;
                if ( !v59 )
                {
LABEL_53:
                  if ( v61 )
                    v14 = v61;
                  break;
                }
                ++v60;
              }
            }
          }
        }
      }
      else
      {
LABEL_8:
        v74 = *(_DWORD *)(a2 + 8);
        v70 = v9;
        v20 = ((((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v9 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v9 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v9 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v9 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 16;
        v21 = (v20
             | (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
                 | (unsigned int)(2 * v9 - 1)
                 | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
               | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v9 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
             | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
               | (unsigned int)(2 * v9 - 1)
               | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
             | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v9 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1))
            + 1;
        if ( (unsigned int)v21 < 0x40 )
          LODWORD(v21) = 64;
        v83 = v21;
        v22 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v21, 8, v9, v20, a5, a6);
        v18 = v74;
        v81 = v22;
        if ( v11 )
        {
          v82 = 0;
          v23 = 2LL * v70;
          v24 = &v11[v23];
          for ( j = &v22[2 * v83]; j != v22; v22 += 2 )
            *v22 = 0;
          for ( k = v11; v24 != k; k += 2 )
          {
            v37 = *k;
            if ( *k - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( !v83 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v34 = (v83 - 1) & (v37 ^ (v37 >> 9));
              v35 = &v81[2 * v34];
              v36 = *v35;
              if ( v37 != *v35 && v36 )
              {
                v76 = 1;
                v73 = nullptr;
                while ( 1 )
                {
                  if ( v36 == -1 )
                  {
                    if ( v73 )
                      v35 = v73;
                    v73 = v35;
                  }
                  v34 = (v83 - 1) & (v76 + v34);
                  v35 = &v81[2 * v34];
                  v36 = *v35;
                  if ( v37 == *v35 )
                    break;
                  if ( !v36 )
                  {
                    if ( v73 )
                      v35 = v73;
                    break;
                  }
                  ++v76;
                }
              }
              *v35 = *k;
              *((_DWORD *)v35 + 2) = *((_DWORD *)k + 2);
              LODWORD(v82) = v82 + 1;
            }
          }
          v71 = v18;
          operator delete(v11, v23 * 8, 8);
          v22 = v81;
          v27 = v83;
          v18 = v71;
          v28 = v82 + 1;
        }
        else
        {
          v82 = 0;
          v27 = v83;
          v62 = &v22[2 * v83];
          if ( v22 != v62 )
          {
            v63 = v22;
            do
            {
              *v63 = 0;
              v63 += 2;
            }
            while ( v62 != v63 );
          }
          v28 = 1;
        }
        if ( !v27 )
          goto LABEL_107;
        v29 = v27 - 1;
        LODWORD(v30) = v29 & (v19 ^ (v19 >> 9));
        v14 = &v22[2 * (unsigned int)v30];
        v31 = *v14;
        if ( v19 != *v14 )
        {
          v66 = 1;
          v61 = nullptr;
          if ( v31 )
          {
            while ( 1 )
            {
              if ( v31 == -1 && !v61 )
                v61 = v14;
              v30 = v29 & ((_DWORD)v30 + v66);
              v14 = &v22[2 * v30];
              v31 = *v14;
              if ( v19 == *v14 )
                break;
              if ( !v31 )
                goto LABEL_53;
              ++v66;
            }
          }
        }
      }
      LODWORD(v82) = v28;
      if ( *v14 )
        --HIDWORD(v82);
      *v14 = v19;
      *((_DWORD *)v14 + 2) = v18;
      sub_A86860(&v80, v14, &v81[2 * v83], (__int64)&v81, 1);
      v32 = *(unsigned int *)(a2 + 8);
      v33 = *(unsigned int *)(a2 + 12);
      if ( v32 >= v33 && v33 < v32 + 1 )
      {
        sub_2237220(a2, v78, v32 + 1, 8);
        v32 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v32) = v17;
      ++*(_DWORD *)(a2 + 8);
LABEL_6:
      v9 = v83;
      v11 = v81;
      ++v10;
    }
    while ( (__int64 *)v67 != v10 );
    v6 = v81;
    v8 = v83;
LABEL_28:
    v69 += 2;
  }
  while ( &v85 != (char *)v69 );
  return operator delete(v6, 16LL * v8, 8);
}
