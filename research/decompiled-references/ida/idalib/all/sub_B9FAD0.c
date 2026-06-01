char *__fastcall sub_B9FAD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 *v16; // rbp
  __int64 v17; // r12
  __int64 *v18; // rsi
  __int64 *i; // rcx
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  char *result; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rsi
  unsigned __int64 v39; // r13
  unsigned __int64 *v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r13
  unsigned __int64 *v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // r14
  __int64 *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  void **v56; // r14
  unsigned __int64 v57; // rax
  void **v58; // rdx
  void **v59; // r15
  void **v60; // rdi
  void **v61; // rdi
  void **v62; // r15
  __int64 *v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rax
  __int64 v66; // r14
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  void **v73; // r14
  unsigned __int64 v74; // rax
  void **v75; // rdx
  void **v76; // r15
  void **v77; // rdi
  void **v78; // rdi
  void **v79; // r15
  __int64 *v80; // rax
  __int64 v81; // rcx
  void **v82; // [rsp+8h] [rbp-90h]
  void **v83; // [rsp+8h] [rbp-90h]
  void **v84; // [rsp+8h] [rbp-90h]
  void **v85; // [rsp+8h] [rbp-90h]
  void *v86; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v87; // [rsp+18h] [rbp-80h]
  __int64 v88; // [rsp+20h] [rbp-78h]
  void *v89; // [rsp+30h] [rbp-68h]
  _BYTE v90[16]; // [rsp+40h] [rbp-58h] BYREF
  __int16 v91; // [rsp+50h] [rbp-48h]

  sub_B72000(a1);
  if ( (unsigned __int8)sub_B9D7A0(a1, a2, v3, v4, v5, v6) && (unsigned __int8)sub_B94D90(a1, a2, v7, v8, v9, v10) )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
    *(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) |= 8u;
  }
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
  v15 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v15 + 56) & 4) != 0 )
  {
    v37 = sub_B8C330(a1);
    sub_B968A0(v15 + 40, v37);
  }
  v16 = *(__int64 **)(v15 + 40);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v11, v12, v13, v14);
  v17 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v17 + 56) & 4) != 0 )
  {
    v36 = sub_B8C330(a1);
    sub_B968A0(v17 + 40, v36);
  }
  v18 = *(__int64 **)(v17 + 48);
  for ( i = v16; v18 != i; *(i - 1) = (*(_BYTE *)((v20 & 0xFFFFFFFFFFFFFFF8LL) + 29) >> 5) & 3
                                    | v20 & 0xFFFFFFFFFFFFFFF8LL )
    v20 = *i++;
  v21 = sub_B8C330(a1);
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v22, v23, v24, v25);
  if ( **(char **)(a1 + 128) < 0 )
  {
    v38 = *(_QWORD *)(a1 + 104);
    sub_7052B0((__int64 *)(v38 + 96), v38, v26, v27, v28, v29);
    if ( (**(_BYTE **)(a1 + 128) & 1) != 0 && *(char *)(*(_QWORD *)(v21 + 2320) + 1LL) >= 0 )
    {
      v39 = sub_B7E900(a1, v38, v26, v27, v28, v29);
      if ( v39 )
      {
LABEL_17:
        if ( (*(_BYTE *)(v39 + 29) & 1) == 0 )
          goto LABEL_68;
        v40 = sub_B8C3D0(v39, v38, v26, v27, v28, v29);
        v26 = *v40;
        v41 = *v40 + 8LL * *((unsigned int *)v40 + 2);
        if ( v26 >= v41 )
        {
          if ( v26 == v41 )
            goto LABEL_68;
          if ( *(_WORD *)(*(_QWORD *)v41 + 36LL) != 212 )
          {
            v80 = (__int64 *)(v41 + 8);
            do
            {
              v27 = (__int64)v80;
              if ( (__int64 *)v26 == v80 )
                goto LABEL_68;
              v81 = *v80++;
            }
            while ( *(_WORD *)(v81 + 36) != 212 );
          }
        }
        else
        {
          v27 = v26;
          while ( 1 )
          {
            v38 = *(_QWORD *)v27;
            if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 212 )
              break;
            v27 += 8;
            if ( v41 == v27 )
              goto LABEL_68;
          }
          if ( v41 == v27 )
            goto LABEL_68;
        }
        v66 = *(_QWORD *)v26;
        if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 212 )
        {
          v67 = (__int64 *)(v26 + 8);
          do
            v66 = *v67++;
          while ( *(_WORD *)(v66 + 36) != 212 );
        }
        v68 = sub_A62AC0(v21);
        sub_FC70B0(&v86, v68, *(unsigned int *)(v66 + 24), 2559);
        sub_AE9DF0((unsigned __int8 **)&v86, v66, 0xEu);
        sub_AE9DF0((unsigned __int8 **)&v86, v39, 0xAu);
        v38 = sub_A7A9D0(v21, a1, v69, v70, v71, v72);
        sub_AE9DF0((unsigned __int8 **)&v86, v38, 8u);
        if ( (_BYTE)v91 )
        {
          v38 = (__int64)&v86;
          sub_FC7790(v88, &v86, HIBYTE(v91));
          v26 = 0;
          v88 = 0;
          v91 = 0;
        }
        if ( v89 != v90 )
          operator delete(v89);
        v73 = (void **)v86;
        if ( v86 )
        {
          v74 = v87;
          if ( v87 )
          {
            if ( (unsigned __int64)v86 >= v87 && (unsigned __int64)v86 <= v87 + 14848 )
            {
              v26 = *(unsigned int *)(v87 + 14976);
              v27 = (unsigned int)(v26 + 1);
              *(_DWORD *)(v87 + 14976) = v27;
              *(_QWORD *)(v74 + 8 * v26 + 14848) = v73;
              goto LABEL_68;
            }
            v75 = *((void ***)v86 + 66);
            v76 = &v75[8 * (unsigned __int64)*((unsigned int *)v86 + 134)];
            if ( v75 != v76 )
            {
              do
              {
                while ( 1 )
                {
                  v76 -= 8;
                  v77 = (void **)v76[3];
                  if ( v77 == v76 + 5 )
                    break;
                  v84 = v75;
                  operator delete(v77);
                  v75 = v84;
                  if ( v84 == v76 )
                    goto LABEL_84;
                }
              }
              while ( v75 != v76 );
LABEL_84:
              v76 = (void **)v73[66];
            }
            if ( v76 != v73 + 68 )
              free(v76);
            v78 = (void **)v73[52];
            if ( v78 != v73 + 54 )
              free(v78);
            v79 = v73 + 48;
            v85 = v73 + 8;
            while ( 1 )
            {
              if ( *v79 == v79 + 2 )
              {
                v79 -= 4;
                if ( v85 == v79 )
                {
LABEL_92:
                  v38 = 928;
                  operator delete(v73, 0x3A0u);
                  break;
                }
              }
              else
              {
                operator delete(*v79);
                v79 -= 4;
                if ( v79 == v85 )
                  goto LABEL_92;
              }
            }
          }
        }
LABEL_68:
        while ( 1 )
        {
          v65 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v39 = v65;
          if ( !v65 )
            break;
          if ( (*(_BYTE *)(v65 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_17;
        }
      }
    }
  }
  v30 = *(_QWORD *)(a1 + 104);
  sub_7052B0((__int64 *)(v30 + 96), v30, v26, v27, v28, v29);
  result = *(char **)(a1 + 128);
  if ( *result >= 0 && (*(_BYTE *)(a1 + 76) & 4) != 0 )
  {
    result = (char *)sub_B7E900(a1, v30, v31, v32, v33, v34);
    v46 = (__int64)result;
    if ( result )
    {
LABEL_24:
      if ( (*(_BYTE *)(v46 + 29) & 1) == 0 )
        goto LABEL_53;
      v47 = sub_B8C3D0(v46, v30, v42, v43, v44, v45);
      v42 = *v47;
      v48 = *v47 + 8LL * *((unsigned int *)v47 + 2);
      if ( v42 >= v48 )
      {
        if ( v42 == v48 )
          goto LABEL_53;
        if ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 212 )
        {
          v63 = (__int64 *)(v48 + 8);
          do
          {
            v43 = (__int64)v63;
            if ( (__int64 *)v42 == v63 )
              goto LABEL_53;
            v64 = *v63++;
          }
          while ( *(_WORD *)(v64 + 36) != 212 );
        }
      }
      else
      {
        v43 = v42;
        v30 = *(_QWORD *)v42;
        if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 212 )
        {
          do
          {
            v43 += 8;
            if ( v48 == v43 )
              goto LABEL_53;
            v30 = *(_QWORD *)v43;
          }
          while ( *(_WORD *)(*(_QWORD *)v43 + 36LL) != 212 );
        }
        if ( v48 == v43 )
        {
LABEL_53:
          while ( 1 )
          {
            result = (char *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL);
            v46 = (__int64)result;
            if ( !result )
              goto LABEL_54;
LABEL_52:
            if ( (result[28] & 0x7Fu) - 49 <= 2 )
              goto LABEL_24;
          }
        }
      }
      v49 = *(_QWORD *)v42;
      if ( *(_WORD *)(*(_QWORD *)v42 + 36LL) != 212 )
      {
        v50 = (__int64 *)(v42 + 8);
        do
          v49 = *v50++;
        while ( *(_WORD *)(v49 + 36) != 212 );
      }
      v51 = sub_A62AC0(v21);
      sub_FC70B0(&v86, v51, *(unsigned int *)(v49 + 24), 2558);
      sub_AE9DF0((unsigned __int8 **)&v86, v49, 0xEu);
      v30 = sub_A7A9D0(v21, a1, v52, v53, v54, v55);
      sub_AE9DF0((unsigned __int8 **)&v86, v30, 8u);
      if ( (_BYTE)v91 )
      {
        v30 = (__int64)&v86;
        sub_FC7790(v88, &v86, HIBYTE(v91));
        v88 = 0;
        v91 = 0;
      }
      if ( v89 != v90 )
        operator delete(v89);
      v56 = (void **)v86;
      if ( !v86 )
        goto LABEL_53;
      v57 = v87;
      if ( !v87 )
        goto LABEL_53;
      if ( (unsigned __int64)v86 >= v87 && (unsigned __int64)v86 <= v87 + 14848 )
      {
        v42 = *(unsigned int *)(v87 + 14976);
        v43 = (unsigned int)(v42 + 1);
        *(_DWORD *)(v87 + 14976) = v43;
        *(_QWORD *)(v57 + 8 * v42 + 14848) = v56;
        goto LABEL_53;
      }
      v58 = *((void ***)v86 + 66);
      v59 = &v58[8 * (unsigned __int64)*((unsigned int *)v86 + 134)];
      if ( v58 != v59 )
      {
        do
        {
          while ( 1 )
          {
            v59 -= 8;
            v60 = (void **)v59[3];
            if ( v60 == v59 + 5 )
              break;
            v82 = v58;
            operator delete(v60);
            v58 = v82;
            if ( v82 == v59 )
              goto LABEL_43;
          }
        }
        while ( v58 != v59 );
LABEL_43:
        v59 = (void **)v56[66];
      }
      if ( v59 != v56 + 68 )
        free(v59);
      v61 = (void **)v56[52];
      if ( v61 != v56 + 54 )
        free(v61);
      v62 = v56 + 48;
      v83 = v56 + 8;
      do
      {
        while ( *v62 != v62 + 2 )
        {
          operator delete(*v62);
          v62 -= 4;
          if ( v62 == v83 )
            goto LABEL_51;
        }
        v62 -= 4;
      }
      while ( v62 != v83 );
LABEL_51:
      v30 = 928;
      operator delete(v56, 0x3A0u);
      result = (char *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      v46 = (__int64)result;
      if ( result )
        goto LABEL_52;
    }
LABEL_54:
    *(_BYTE *)(a1 + 76) &= ~4u;
  }
  return result;
}
