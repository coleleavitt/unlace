__int64 __fastcall sub_A9B190(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  unsigned __int64 *v23; // r11
  _QWORD *j; // rdx
  unsigned __int64 *k; // rax
  unsigned int v26; // edx
  int v27; // ecx
  unsigned int v28; // edx
  __int64 v29; // rdi
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned int v33; // esi
  unsigned __int64 *v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rdx
  int v38; // r8d
  unsigned __int64 *v39; // r11
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rax
  unsigned __int64 *v46; // r8
  _QWORD *i; // rdx
  unsigned __int64 *v48; // rax
  unsigned __int64 v49; // r11
  unsigned int v50; // ecx
  unsigned __int64 *v51; // rdx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned int v54; // edx
  unsigned int v55; // edx
  __int64 v56; // r13
  unsigned __int64 v57; // rdi
  int v58; // r9d
  unsigned __int64 *v59; // r11
  _QWORD *v60; // rsi
  _QWORD *v61; // rcx
  _QWORD *v62; // rsi
  _QWORD *v63; // rcx
  int v64; // r13d
  __int64 v65; // [rsp+18h] [rbp-D0h]
  __int64 **v67; // [rsp+28h] [rbp-C0h]
  unsigned int v68; // [rsp+38h] [rbp-B0h]
  int v69; // [rsp+38h] [rbp-B0h]
  int v70; // [rsp+38h] [rbp-B0h]
  unsigned __int64 *v71; // [rsp+38h] [rbp-B0h]
  int v72; // [rsp+40h] [rbp-A8h]
  unsigned int v73; // [rsp+40h] [rbp-A8h]
  int v74; // [rsp+40h] [rbp-A8h]
  unsigned __int64 *v75; // [rsp+40h] [rbp-A8h]
  __int64 v76; // [rsp+48h] [rbp-A0h]
  int v77; // [rsp+50h] [rbp-98h]
  __m128 v78; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v79; // [rsp+70h] [rbp-78h] BYREF
  __int64 v80; // [rsp+78h] [rbp-70h]
  unsigned int v81; // [rsp+80h] [rbp-68h]
  _QWORD v82[4]; // [rsp+90h] [rbp-58h] BYREF
  char v83; // [rsp+B0h] [rbp-38h] BYREF

  v6 = nullptr;
  v67 = (__int64 **)v82;
  v79 = nullptr;
  v80 = 0;
  v81 = 0;
  v82[1] = a4;
  v82[2] = a5;
  v82[3] = a6;
  v76 = a2 + 16;
  v82[0] = a3;
  v8 = 0;
  do
  {
    v65 = (__int64)&(*v67)[(_QWORD)v67[1]];
    if ( (__int64 *)v65 == *v67 )
      goto LABEL_28;
    v9 = v8;
    v10 = *v67;
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
        sub_A62B20(&v78, v14, &v11[2 * v9], (__int64)&v79, 1);
        v16 = (__int64 *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(v78.m128_u64[0] + 8));
        *v16 = sub_A980E0(a1, *v16, v17, 0);
        goto LABEL_6;
      }
      v38 = 1;
      v39 = nullptr;
      if ( v15 )
      {
        while ( 1 )
        {
          if ( !v39 && v15 == -1 )
            v39 = v14;
          a6 = (unsigned int)(v38 + 1);
          v13 = v12 & (v38 + v13);
          v14 = &v11[2 * v13];
          v15 = *v14;
          if ( v19 == *v14 )
            goto LABEL_5;
          if ( !v15 )
            break;
          ++v38;
        }
        if ( v39 )
          v14 = v39;
      }
      v27 = v80 + 1;
      a5 = (unsigned int)(4 * (v80 + 1));
      if ( (unsigned int)a5 < 3 * (int)v9 )
      {
        v40 = (unsigned int)(v9 - (v27 + HIDWORD(v80)));
        if ( (unsigned int)v40 <= (unsigned int)v9 >> 3 )
        {
          v73 = v9;
          v70 = *(_DWORD *)(a2 + 8);
          v41 = (((v12 >> 1) | v12) >> 2) | (v12 >> 1) | v12;
          v42 = (((v41 >> 4) | v41) >> 8) | (v41 >> 4) | v41;
          v43 = v42 >> 16;
          v44 = ((v42 >> 16) | v42) + 1;
          if ( (unsigned int)v44 < 0x40 )
            LODWORD(v44) = 64;
          v81 = v44;
          v45 = (_QWORD *)sub_220C370(16LL * (unsigned int)v44, 8, v9, v43, v40, a6);
          v18 = v70;
          v79 = v45;
          if ( v11 )
          {
            v80 = 0;
            v46 = &v11[2 * v73];
            for ( i = &v45[2 * v81]; i != v45; v45 += 2 )
              *v45 = 0;
            v48 = v11;
            do
            {
              while ( 1 )
              {
                v49 = *v48;
                if ( *v48 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                  break;
                v48 += 2;
                if ( v46 == v48 )
                  goto LABEL_44;
              }
              if ( !v81 )
              {
                *(_QWORD *)&dword_0 = *v48;
                BUG();
              }
              v50 = (v81 - 1) & (v49 ^ (v49 >> 9));
              v51 = &v79[2 * v50];
              v52 = *v51;
              if ( *v51 != v49 && v52 )
              {
                v77 = 1;
                v75 = nullptr;
                while ( 1 )
                {
                  if ( v52 == -1 )
                  {
                    if ( v75 )
                      v51 = v75;
                    v75 = v51;
                  }
                  v50 = (v81 - 1) & (v77 + v50);
                  ++v77;
                  v51 = &v79[2 * v50];
                  v52 = *v51;
                  if ( v49 == *v51 )
                    break;
                  if ( !v52 )
                  {
                    if ( v75 )
                      v51 = v75;
                    break;
                  }
                }
              }
              v53 = *v48;
              v48 += 2;
              *v51 = v53;
              *((_DWORD *)v51 + 2) = *((_DWORD *)v48 - 2);
              LODWORD(v80) = v80 + 1;
            }
            while ( v46 != v48 );
LABEL_44:
            operator delete();
            v45 = v79;
            v54 = v81;
            v18 = v70;
            v27 = v80 + 1;
          }
          else
          {
            v80 = 0;
            v54 = v81;
            v62 = &v45[2 * v81];
            if ( v45 != v62 )
            {
              v63 = v45;
              do
              {
                *v63 = 0;
                v63 += 2;
              }
              while ( v62 != v63 );
            }
            v27 = 1;
          }
          if ( !v54 )
          {
LABEL_107:
            LODWORD(v80) = v80 + 1;
            BUG();
          }
          v55 = v54 - 1;
          LODWORD(v56) = v55 & (v19 ^ (v19 >> 9));
          v14 = &v45[2 * (unsigned int)v56];
          v57 = *v14;
          if ( v19 != *v14 )
          {
            v58 = 1;
            v59 = nullptr;
            if ( v57 )
            {
              while ( 1 )
              {
                if ( v57 == -1 && !v59 )
                  v59 = v14;
                v56 = v55 & ((_DWORD)v56 + v58);
                v14 = &v45[2 * v56];
                v57 = *v14;
                if ( v19 == *v14 )
                  break;
                if ( !v57 )
                {
LABEL_53:
                  if ( v59 )
                    v14 = v59;
                  break;
                }
                ++v58;
              }
            }
          }
        }
      }
      else
      {
LABEL_8:
        v72 = *(_DWORD *)(a2 + 8);
        v68 = v9;
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
        v81 = v21;
        v22 = (_QWORD *)sub_220C370(16LL * (unsigned int)v21, 8, v9, v20, a5, a6);
        v18 = v72;
        v79 = v22;
        if ( v11 )
        {
          v80 = 0;
          v23 = &v11[2 * v68];
          for ( j = &v22[2 * v81]; j != v22; v22 += 2 )
            *v22 = 0;
          for ( k = v11; v23 != k; k += 2 )
          {
            v36 = *k;
            if ( *k - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( !v81 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v33 = (v81 - 1) & (v36 ^ (v36 >> 9));
              v34 = &v79[2 * v33];
              v35 = *v34;
              if ( v36 != *v34 && v35 )
              {
                v74 = 1;
                v71 = nullptr;
                while ( 1 )
                {
                  if ( v35 == -1 )
                  {
                    if ( v71 )
                      v34 = v71;
                    v71 = v34;
                  }
                  v33 = (v81 - 1) & (v74 + v33);
                  v34 = &v79[2 * v33];
                  v35 = *v34;
                  if ( v36 == *v34 )
                    break;
                  if ( !v35 )
                  {
                    if ( v71 )
                      v34 = v71;
                    break;
                  }
                  ++v74;
                }
              }
              *v34 = *k;
              *((_DWORD *)v34 + 2) = *((_DWORD *)k + 2);
              LODWORD(v80) = v80 + 1;
            }
          }
          v69 = v18;
          operator delete();
          v22 = v79;
          v26 = v81;
          v18 = v69;
          v27 = v80 + 1;
        }
        else
        {
          v80 = 0;
          v26 = v81;
          v60 = &v22[2 * v81];
          if ( v22 != v60 )
          {
            v61 = v22;
            do
            {
              *v61 = 0;
              v61 += 2;
            }
            while ( v60 != v61 );
          }
          v27 = 1;
        }
        if ( !v26 )
          goto LABEL_107;
        v28 = v26 - 1;
        LODWORD(v29) = v28 & (v19 ^ (v19 >> 9));
        v14 = &v22[2 * (unsigned int)v29];
        v30 = *v14;
        if ( v19 != *v14 )
        {
          v64 = 1;
          v59 = nullptr;
          if ( v30 )
          {
            while ( 1 )
            {
              if ( v30 == -1 && !v59 )
                v59 = v14;
              v29 = v28 & ((_DWORD)v29 + v64);
              v14 = &v22[2 * v29];
              v30 = *v14;
              if ( v19 == *v14 )
                break;
              if ( !v30 )
                goto LABEL_53;
              ++v64;
            }
          }
        }
      }
      LODWORD(v80) = v27;
      if ( *v14 )
        --HIDWORD(v80);
      *v14 = v19;
      *((_DWORD *)v14 + 2) = v18;
      sub_A62B20(&v78, v14, &v79[2 * v81], (__int64)&v79, 1);
      v31 = *(unsigned int *)(a2 + 8);
      v32 = *(unsigned int *)(a2 + 12);
      if ( v31 >= v32 && v32 < v31 + 1 )
      {
        sub_22134E0(a2, v76, v31 + 1, 8);
        v31 = *(unsigned int *)(a2 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v31) = v17;
      ++*(_DWORD *)(a2 + 8);
LABEL_6:
      v9 = v81;
      v11 = v79;
      ++v10;
    }
    while ( (__int64 *)v65 != v10 );
    v6 = v79;
    v8 = v81;
LABEL_28:
    v67 += 2;
  }
  while ( &v83 != (char *)v67 );
  return operator delete();
}

