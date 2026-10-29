__int64 __fastcall sub_204D200(unsigned int a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v15; // r12
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v26; // r14
  __int64 v27; // rdi
  __int64 v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rax
  void *v31; // rbx
  unsigned int v32; // eax
  unsigned int v33; // eax
  _QWORD *v34; // r15
  bool v35; // bl
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r15
  _BOOL8 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rbp
  __int64 v45; // rax
  _QWORD *v46; // rsi
  void *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  __int64 v50; // r12
  __int64 v51; // rax
  int v52; // edx
  __int64 v53; // rcx
  int v54; // r12d
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rax
  char *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  int v62; // eax
  __int64 v63; // r13
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  _QWORD *i; // rbx
  __int64 v70; // [rsp-8h] [rbp-100h]
  _QWORD *v71; // [rsp+8h] [rbp-F0h]
  __int64 v72; // [rsp+8h] [rbp-F0h]
  __int64 v73; // [rsp+10h] [rbp-E8h]
  void *v74; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v75; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v77; // [rsp+38h] [rbp-C0h]
  _BYTE v78[184]; // [rsp+40h] [rbp-B8h] BYREF

  v3 = (_QWORD *)a2;
  v6 = a2;
  if ( (unsigned __int8)sub_20510E0(a2) && *(_BYTE *)(a3 + 8) != 10 && a1 != 50 )
    return sub_205FC70(a3);
  if ( *(_BYTE *)a2 == 18 )
  {
    v6 = a2;
    if ( (unsigned __int8)sub_2051460(a2) )
    {
      v13 = *(_QWORD *)(a2 + 8);
      v14 = *(unsigned __int16 *)(a2 + 2);
      v15 = *(_QWORD *)(*(_QWORD *)(a2 - 32LL * (*(_DWORD *)(a2 + 4) & 0x7FFFFFF)) + 8LL);
      v16 = sub_20C3200(*(_QWORD *)a3);
      a2 = a1;
      v6 = v14;
      v17 = sub_2090CA0(v14, a1, v15, v13, a3, 0, v16, 0);
      v7 = v70;
      if ( v17 )
        return sub_204DAE0(v17, v3[-4 * (*((_DWORD *)v3 + 1) & 0x7FFFFFF)], a3);
    }
  }
  v8 = *(unsigned __int8 *)(a3 + 8);
  v9 = v8 - 17;
  if ( (unsigned int)(v8 - 17) > 1
    || (a2 = v3[1], v7 = *(unsigned __int8 *)(a2 + 8), (unsigned int)(v7 - 17) > 1)
    || ((_BYTE)v7 == 18) != ((_BYTE)v8 == 18)
    || *(_DWORD *)(a2 + 32) != *(_DWORD *)(a3 + 32) )
  {
    v10 = a1 - 38;
    switch ( a1 )
    {
      case '&':
        v11 = 0;
        if ( *(_BYTE *)v3 != 5 )
          return v11;
        sub_20C3180(a3, a2, v10, v7);
        sub_2206A40(&ptr, v3 + 3);
        goto LABEL_34;
      case '\'':
        v11 = 0;
        if ( *(_BYTE *)v3 != 5 )
          return v11;
        v32 = sub_20C3180(a3, a2, v10, v7);
        sub_2206CD0(&ptr, v3 + 3, v32);
        goto LABEL_34;
      case '(':
        v11 = 0;
        if ( *(_BYTE *)v3 != 5 )
          return v11;
        v33 = sub_20C3180(a3, a2, v10, v7);
        sub_2206B70(&ptr, v3 + 3, v33);
        goto LABEL_34;
      case ')':
      case '*':
        v11 = 0;
        if ( *(_BYTE *)v3 != 6 )
          return v11;
        v34 = v3 + 3;
        v35 = a1 == 41;
        LODWORD(v77) = sub_20C3180(a3, a2, v10, v7);
        if ( (unsigned int)v77 > 0x40 )
          sub_2205470(&ptr, 0, 0);
        else
          ptr = nullptr;
        BYTE4(v77) = v35;
        if ( (unsigned int)sub_2202BA0(v34, &ptr, 0, &v74) != 1 )
          goto LABEL_34;
        v11 = sub_2058290(a3);
        goto LABEL_35;
      case '+':
      case ',':
        v11 = 0;
        if ( *(_BYTE *)v3 != 5 )
          return v11;
        v71 = v3 + 3;
        v75 = sub_20C3180(a3, a2, v10, v7);
        if ( v75 > 0x40 )
        {
          a2 = 0;
          sub_2205470(&v74, 0, 0);
          v9 = *(unsigned __int8 *)(a3 + 8) - 17;
        }
        else
        {
          v74 = nullptr;
        }
        v36 = a3;
        if ( v9 <= 1 )
          v36 = **(_QWORD **)(a3 + 16);
        v37 = sub_20C2F60(v36);
        v39 = sub_21F90D0(v36, a2, v38);
        v40 = (void *)v39;
        if ( v37 == v39 )
          sub_21FFDA0(&ptr, v39, &v74);
        else
          sub_21FF7D0(&ptr, v37, &v74);
        if ( v75 > 0x40 && v74 )
          operator delete[](v74);
        v41 = a1 == 44;
        if ( v40 == ptr )
          sub_2201FE0(&ptr, v71, v41, 1);
        else
          sub_21FB140(&ptr, v71, v41, 1);
        v11 = sub_205F9D0(a3, &ptr);
        if ( v40 != ptr )
          goto LABEL_31;
        v42 = v77;
        if ( !v77 )
          return v11;
        v43 = 24LL * *(_QWORD *)(v77 - 8);
        v44 = v77 + v43;
        if ( v77 == v77 + v43 )
          goto LABEL_66;
        while ( 1 )
        {
          v42 = v44 - 24;
          sub_9955A0((_QWORD *)(v44 - 24));
          if ( v77 == v44 - 24 )
            break;
          v44 -= 24;
        }
        goto LABEL_65;
      case '-':
      case '.':
        v11 = 0;
        if ( *(_BYTE *)v3 != 6 )
          return v11;
        v45 = sub_21F90D0(v6, a2, v10);
        v46 = v3 + 3;
        v47 = (void *)v45;
        if ( v3[3] == v45 )
          sub_21FFE60(&ptr, v46);
        else
          sub_21F97A0(&ptr, v46);
        v48 = a3;
        if ( (unsigned int)*(unsigned __int8 *)(a3 + 8) - 17 <= 1 )
          v48 = **(_QWORD **)(a3 + 16);
        v49 = sub_20C2F60(v48);
        sub_22028C0(&ptr, v49, 1, &v74);
        v11 = sub_205F9D0(a3, &ptr);
        if ( v47 != ptr )
          goto LABEL_31;
        v42 = v77;
        if ( !v77 )
          return v11;
        v43 = 24LL * *(_QWORD *)(v77 - 8);
        v44 = v77 + v43;
        if ( v77 == v77 + v43 )
          goto LABEL_66;
        while ( 1 )
        {
          v42 = v44 - 24;
          sub_9955A0((_QWORD *)(v44 - 24));
          if ( v77 == v44 - 24 )
            break;
          v44 -= 24;
        }
LABEL_65:
        v43 = 24LL * *(_QWORD *)(v44 - 32);
LABEL_66:
        operator delete[]((void *)(v42 - 8), v43 + 8);
        return v11;
      case '/':
      case '0':
      case '2':
        return 0;
      case '1':
        v18 = v3[1];
        v74 = v3;
        v11 = (__int64)v3;
        if ( a3 == v18 )
          return v11;
        if ( (unsigned __int8)sub_2060030(v3, a2, v10, v7) )
          return sub_20603A0(a3);
        if ( *(_BYTE *)v74 == 5 )
        {
          v19 = *(unsigned __int8 *)(a3 + 8);
          v20 = v19 - 17;
          if ( (unsigned int)(v19 - 17) > 1 )
          {
            v22 = *(unsigned __int8 *)(a3 + 8);
LABEL_22:
            if ( (unsigned __int8)v22 <= 5u && (v19 = (1LL << v22) & 0x2F, ((1LL << v22) & 0x2F) != 0)
              || (v22 = (unsigned int)v22 & 0xFFFFFFFD, v11 = 0, (_BYTE)v22 == 4) )
            {
              if ( *(_BYTE *)(a3 + 8) == 6 )
                return 0;
              v11 = 0;
              v23 = sub_20C3180(a3, a2, v19, v22);
              if ( v23 == (unsigned int)sub_20C3180(v18, a2, v24, v25) )
              {
                v26 = (char *)v74 + 24;
                v27 = a3;
                if ( v20 <= 1 )
                  v27 = **(_QWORD **)(a3 + 16);
                v28 = sub_20C2F60(v27);
                v30 = sub_21F90D0(v27, a2, v29);
                v31 = (void *)v30;
                if ( v28 == v30 )
                  sub_21FFDA0(&ptr, v30, v26);
                else
                  sub_21FF7D0(&ptr, v28, v26);
                v11 = sub_205F9D0(a3, &ptr);
                if ( ptr == v31 )
                {
                  if ( v77 )
                  {
                    for ( i = (_QWORD *)(v77 + 24LL * *(_QWORD *)(v77 - 8)); (_QWORD *)v77 != i; sub_9955A0(i) )
                      i -= 3;
                    operator delete[](i - 1, 24LL * *(i - 1) + 8);
                  }
                }
                else
                {
LABEL_31:
                  sub_21F9830(&ptr);
                }
              }
            }
            return v11;
          }
          v21 = (unsigned int)*(unsigned __int8 *)(v18 + 8) - 17;
          if ( (unsigned int)v21 <= 1 )
          {
            v19 = **(_QWORD **)(a3 + 16);
            v22 = *(unsigned __int8 *)(v19 + 8);
            goto LABEL_22;
          }
LABEL_113:
          v68 = sub_205D2F0(&v74, 1, v21);
          return sub_205E600(v68, a3, 0);
        }
        v11 = 0;
        if ( *(_BYTE *)v74 != 6 )
          return v11;
        v53 = *(unsigned __int8 *)(v18 + 8);
        v21 = *(unsigned __int8 *)(a3 + 8);
        if ( (unsigned int)(v21 - 17) > 1 )
        {
          if ( (_BYTE)v53 == 6 )
            return v11;
        }
        else
        {
          if ( (unsigned int)(unsigned __int8)v53 - 17 > 1 )
            goto LABEL_113;
          if ( (_BYTE)v53 == 6 )
            return v11;
          v21 = *(unsigned __int8 *)(**(_QWORD **)(a3 + 16) + 8LL);
        }
        v11 = 0;
        if ( (_BYTE)v21 == 12 )
        {
          v54 = sub_20C3180(a3, a2, v21, v53);
          if ( v54 == (unsigned int)sub_20C3180(v18, a2, v55, v56) )
          {
            v58 = sub_21F90D0(v18, a2, v57);
            v59 = (char *)v74 + 24;
            if ( *((_QWORD *)v74 + 3) == v58 )
              sub_22010F0(&ptr, v59);
            else
              sub_21FEE00(&ptr, v59);
LABEL_34:
            v11 = sub_205FAF0(a3, &ptr);
LABEL_35:
            if ( (unsigned int)v77 > 0x40 && ptr )
              operator delete[](ptr);
          }
        }
        return v11;
    }
  }
  v50 = *(_QWORD *)(a3 + 24);
  v51 = sub_205FD90(v3, 0);
  if ( v51 )
  {
    if ( sub_204DAE0(a1, v51, v50) )
    {
      v52 = *(_DWORD *)(a3 + 32);
      BYTE4(ptr) = *(_BYTE *)(a3 + 8) == 18;
      LODWORD(ptr) = v52;
      return sub_205EF10((size_t)ptr);
    }
    return 0;
  }
  if ( *(_BYTE *)(a3 + 8) == 18 )
    return 0;
  v77 = 0x1000000000LL;
  ptr = v78;
  v60 = sub_20CB0D0(v3);
  v72 = sub_20C3F60(v60, 32);
  v62 = *(_DWORD *)(v3[1] + 32LL);
  if ( v62 )
  {
    v63 = 0;
    v73 = (unsigned int)(v62 - 1);
    while ( 1 )
    {
      v65 = sub_205FB40(v72, v63, 0);
      v66 = sub_205EAD0(v3, v65, 0);
      v11 = sub_204DAE0(a1, v66, v50);
      if ( !v11 )
        break;
      v67 = (unsigned int)v77 + 1LL;
      if ( v67 > HIDWORD(v77) )
        sub_2237220(&ptr, v78, v67, 8);
      *((_QWORD *)ptr + (unsigned int)v77) = v11;
      v61 = v63 + 1;
      v64 = v77 + 1;
      LODWORD(v77) = v77 + 1;
      if ( v73 == v63 )
        goto LABEL_110;
      ++v63;
    }
  }
  else
  {
    v64 = v77;
LABEL_110:
    v11 = sub_205D2F0(ptr, v64, v61);
  }
  if ( ptr != v78 )
    free(ptr);
  return v11;
}
