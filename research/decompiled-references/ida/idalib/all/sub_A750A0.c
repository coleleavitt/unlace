unsigned __int64 __fastcall sub_A750A0(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        _BYTE *a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v7; // r13
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  _QWORD *v17; // r15
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rsi
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // rax
  char v27; // r10
  int v28; // edx
  __int64 v29; // rcx
  _QWORD *v30; // r14
  unsigned __int64 v31; // rax
  int v32; // r14d
  _BYTE *v33; // r8
  int v34; // r9d
  __int64 v35; // r14
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rax
  unsigned int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rcx
  _BYTE *v43; // r13
  __int64 v44; // rdi
  __int64 (*v45)(void); // rax
  char *v46; // rdi
  __int64 v47; // rsi
  char *v48; // rsi
  char *v49; // r9
  __int64 v50; // rdi
  __int64 (__fastcall *v51)(__int64); // rax
  char *v52; // rsi
  char *i; // rax
  char *v54; // rdx
  char *v55; // r9
  __int64 v56; // rcx
  _QWORD *v57; // [rsp-8h] [rbp-1E0h]
  _QWORD *v60; // [rsp+18h] [rbp-1C0h]
  int v61; // [rsp+18h] [rbp-1C0h]
  unsigned int v63; // [rsp+2Ch] [rbp-1ACh]
  __int64 v64; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v65; // [rsp+40h] [rbp-198h]
  char v66; // [rsp+40h] [rbp-198h]
  unsigned __int64 v67; // [rsp+50h] [rbp-188h]
  char v68; // [rsp+50h] [rbp-188h]
  __int64 v69; // [rsp+60h] [rbp-178h]
  _DWORD *v70; // [rsp+68h] [rbp-170h]
  unsigned __int64 v71; // [rsp+70h] [rbp-168h]
  char *v72; // [rsp+70h] [rbp-168h]
  __int64 v73; // [rsp+88h] [rbp-150h] BYREF
  void *v74; // [rsp+90h] [rbp-148h] BYREF
  __int64 v75; // [rsp+98h] [rbp-140h]
  _BYTE v76[32]; // [rsp+A0h] [rbp-138h] BYREF
  void *base; // [rsp+C0h] [rbp-118h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-110h]
  _BYTE v79[64]; // [rsp+D0h] [rbp-108h] BYREF
  void *ptr; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v81; // [rsp+118h] [rbp-C0h]
  _BYTE v82[184]; // [rsp+120h] [rbp-B8h] BYREF

  v7 = a4;
  if ( a4 )
  {
    v81 = 0x2000000000LL;
    ptr = v82;
    v63 = a7;
    sub_F5FF30((unsigned int)&ptr, a2, (_DWORD)a3, a4, (_DWORD)a5, a6, a7);
    v73 = 0;
    v64 = a1 + 688;
    v15 = sub_2223360(a1 + 688, &ptr, &v73, &off_2B40F80);
    if ( v15 )
    {
      v12 = v15 - 40;
      if ( v12 )
      {
LABEL_6:
        v13 = v12 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_7;
      }
    }
    v17 = a3;
    v67 = v7;
    v70 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = v7;
  }
  else
  {
    if ( !a6 && !a7 )
    {
      v13 = a2;
      if ( *(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 36 )
        return v13;
    }
    v63 = a7;
    ptr = v82;
    v81 = 0x2000000000LL;
    sub_F5FF30((unsigned int)&ptr, a2, (_DWORD)a3, 0, (_DWORD)a5, a6, a7);
    v73 = 0;
    v64 = a1 + 688;
    v10 = sub_2223360(a1 + 688, &ptr, &v73, &off_2B40F80);
    v11 = v57;
    if ( v10 )
    {
      v12 = v10 - 40;
      if ( v12 )
        goto LABEL_6;
    }
    v38 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v70 = (_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = (unsigned int)*(unsigned __int8 *)(v38 + 16) - 35;
    if ( (unsigned int)v16 > 1
      && ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1
       || !sub_F63050(v38, &ptr, v16, v57)) )
    {
      v67 = 0;
      v69 = 8 * a6;
      v60 = a3;
      v17 = a3;
      v22 = a3;
      goto LABEL_24;
    }
    v17 = (_QWORD *)sub_F672B0();
    v67 = v16;
    v18 = v16;
  }
  v11 = (_QWORD *)(8 * a6);
  v69 = 8 * a6;
  v60 = &v17[v18];
  v19 = 8 * v18;
  v20 = v19 >> 5;
  v21 = v19 >> 3;
  if ( v20 > 0 )
  {
    v16 = *(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
    if ( v16 == *(_QWORD *)(*(_QWORD *)(*v17 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
    {
      v11 = v17;
      v22 = v17 + 1;
      v23 = &v17[4 * v20];
      v16 = *(_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v16 == *(_QWORD *)(*(_QWORD *)(v17[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
      {
        while ( 1 )
        {
          v16 = *(_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v16 != *(_QWORD *)(*(_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
          {
            v22 = v11 + 2;
            goto LABEL_24;
          }
          v16 = *(_QWORD *)(v11[3] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v16 != *(_QWORD *)(*(_QWORD *)(v11[3] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
          {
            v22 = v11 + 3;
            goto LABEL_24;
          }
          v22 = v11 + 4;
          if ( v23 == v11 + 4 )
          {
            v21 = v60 - v22;
            goto LABEL_91;
          }
          v16 = *(_QWORD *)(v11[4] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v16 != *(_QWORD *)(*(_QWORD *)(v11[4] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
            goto LABEL_24;
          v16 = *(_QWORD *)(v11[5] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
          if ( v16 != *(_QWORD *)(*(_QWORD *)(v11[5] & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
            break;
          v11 += 4;
        }
        v22 = v11 + 5;
      }
    }
    else
    {
      v22 = v17;
    }
    goto LABEL_24;
  }
  v22 = v17;
LABEL_91:
  if ( v21 != 2 )
  {
    if ( v21 != 3 )
    {
      if ( v21 != 1 )
      {
        v22 = v60;
        goto LABEL_24;
      }
      goto LABEL_97;
    }
    v11 = (_QWORD *)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v11 != *(_QWORD **)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
      goto LABEL_24;
    ++v22;
  }
  v11 = (_QWORD *)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v11 != *(_QWORD **)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
    goto LABEL_24;
  ++v22;
LABEL_97:
  v11 = (_QWORD *)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v11 == *(_QWORD **)(*(_QWORD *)(*v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) )
  {
    if ( !a6 )
      goto LABEL_50;
    v22 = v60;
    goto LABEL_25;
  }
LABEL_24:
  if ( a6 )
  {
LABEL_25:
    v24 = *(_QWORD *)a5;
    v25 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)a5 + 32LL);
    if ( v25 == sub_A55E70 )
    {
      v26 = *(_QWORD *)(v24 + 96);
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(__int64, __int64 (__fastcall *)(__int64), unsigned __int64, _QWORD *))v25)(
              v24,
              sub_A55E70,
              v16,
              v11);
      v24 = *(_QWORD *)a5;
    }
    if ( v26 != v24 )
      goto LABEL_28;
    if ( a6 != 1 )
    {
      v39 = 1;
      v40 = 1;
      v71 = v7;
      while ( 1 )
      {
        v43 = &a5[8 * v39];
        if ( sub_B84BB0(*(_QWORD *)(v24 + 40), *(_QWORD *)(*(_QWORD *)v43 + 40LL)) >= 0 )
          break;
        v44 = *(_QWORD *)v43;
        v45 = *(__int64 (**)(void))(**(_QWORD **)v43 + 32LL);
        if ( (char *)v45 == (char *)sub_A55E70 )
        {
          v41 = *(_QWORD *)(v44 + 96);
        }
        else
        {
          v41 = v45();
          v44 = *(_QWORD *)v43;
        }
        if ( v41 != v44 )
          break;
        v39 = v40 + 1;
        if ( a6 == v39 )
        {
          v7 = v71;
          goto LABEL_49;
        }
        v42 = v40++;
        v24 = *(_QWORD *)&a5[8 * v42];
      }
      v7 = v71;
LABEL_28:
      v27 = 0;
      v74 = v76;
      v75 = 0x400000000LL;
      if ( v60 != v22 )
      {
LABEL_29:
        v28 = 0;
        v29 = 0;
        if ( v67 > 4 )
        {
          v66 = v27;
          sub_2237220(&v74, v76, v67, 8);
          v28 = v75;
          v27 = v66;
          v29 = (unsigned int)v75;
        }
        if ( v17 != v60 )
        {
          v30 = v17;
          do
          {
            while ( 1 )
            {
              v31 = *(_QWORD *)&byte_8[*v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)*(_QWORD *)&byte_8[*v30 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v30) & 7;
              if ( v29 + 1 > (unsigned __int64)HIDWORD(v75) )
                break;
              ++v30;
              *((_QWORD *)v74 + v29) = v31;
              v29 = (unsigned int)(v75 + 1);
              LODWORD(v75) = v75 + 1;
              if ( v60 == v30 )
                goto LABEL_36;
            }
            v68 = v27;
            v65 = *(_QWORD *)&byte_8[*v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[*v30 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*v30) & 7;
            ++v30;
            sub_2237220(&v74, v76, v29 + 1, 8);
            v27 = v68;
            *((_QWORD *)v74 + (unsigned int)v75) = v65;
            v29 = (unsigned int)(v75 + 1);
            LODWORD(v75) = v75 + 1;
          }
          while ( v60 != v30 );
LABEL_36:
          v28 = v29;
        }
        v61 = v28;
        v32 = (int)v74;
        goto LABEL_38;
      }
LABEL_52:
      v32 = (int)v17;
      v61 = v67;
LABEL_38:
      LODWORD(v33) = (_DWORD)a5;
      v34 = a6;
      base = v79;
      v78 = 0x800000000LL;
      if ( !v27 )
      {
        sub_A6A770((__int64)&base, a5, &a5[v69]);
        v46 = (char *)base;
        v47 = 8LL * (unsigned int)v78;
        if ( (unsigned __int64)v47 > 8 )
        {
          qsort(base, v47 >> 3, 8u, sub_A56500);
          v46 = (char *)base;
          v47 = 8LL * (unsigned int)v78;
        }
        v48 = &v46[v47];
        if ( v48 == v46 )
        {
          v33 = v46;
        }
        else
        {
          v49 = v46;
          do
          {
            while ( 1 )
            {
              v50 = *(_QWORD *)v49;
              v51 = *(__int64 (__fastcall **)(__int64))(**(_QWORD **)v49 + 32LL);
              if ( v51 != sub_A55E70 )
                break;
              v49 += 8;
              *((_QWORD *)v49 - 1) = *(_QWORD *)(v50 + 96);
              if ( v48 == v49 )
                goto LABEL_68;
            }
            v72 = v49;
            *(_QWORD *)v49 = ((__int64 (*)(void))v51)();
            v49 = v72 + 8;
          }
          while ( v48 != v72 + 8 );
LABEL_68:
          v33 = base;
          v52 = (char *)base + 8 * (unsigned int)v78;
          if ( base == v52 )
          {
            v46 = (char *)base;
          }
          else
          {
            for ( i = (char *)base; ; i += 8 )
            {
              v46 = i + 8;
              if ( v52 == i + 8 )
                break;
              if ( *(_QWORD *)i == *((_QWORD *)i + 1) )
              {
                if ( v52 == i )
                {
                  v46 = (char *)base + 8 * (unsigned int)v78;
                }
                else
                {
                  v54 = i + 16;
                  v55 = i + 8;
                  if ( v52 != i + 16 )
                  {
                    while ( 1 )
                    {
                      v56 = *(_QWORD *)v54;
                      if ( *(_QWORD *)i == *(_QWORD *)v54 )
                      {
                        v54 += 8;
                        v46 = i + 8;
                        if ( v52 == v54 )
                          goto LABEL_73;
                      }
                      else
                      {
                        v54 += 8;
                        *((_QWORD *)i + 1) = v56;
                        v46 += 8;
                        if ( v54 == v52 )
                          goto LABEL_73;
                        i = v55;
                      }
                      v55 = v46;
                    }
                  }
                }
                break;
              }
            }
          }
        }
LABEL_73:
        LODWORD(v78) = (v46 - v33) >> 3;
        v34 = v78;
      }
      v35 = sub_A750A0(
              a1,
              v70[2] & 0xFFFFFFF8 | ((unsigned __int8)*((_QWORD *)v70 + 1) | (unsigned __int8)a2) & 7,
              v32,
              v61,
              (_DWORD)v33,
              v34,
              v63);
      sub_2223360(v64, &ptr, &v73, &off_2B40F80);
      if ( base != v79 )
        free(base);
      if ( v74 != v76 )
        free(v74);
      goto LABEL_43;
    }
  }
LABEL_49:
  if ( v60 != v22 )
  {
    v27 = 1;
    v74 = v76;
    v75 = 0x400000000LL;
    goto LABEL_29;
  }
LABEL_50:
  v35 = 0;
  if ( (*(_QWORD *)v70 & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)v70 + 8LL) )
  {
    v27 = 1;
    v74 = v76;
    v75 = 0x400000000LL;
    goto LABEL_52;
  }
LABEL_43:
  v36 = sub_A6FFD0((__int64 *)(a1 + 2352), (unsigned int)(v69 + 8 * v7 + 48), 4u);
  sub_F57D10(v36, v35, a2, a3, v7, v63, a5, a6);
  *(_QWORD *)(v36 + 40) = 0;
  sub_A6A720(a1 + 8, v36);
  v37 = v36 + 40;
  v13 = v36 & 0xFFFFFFFFFFFFFFF0LL;
  sub_2223210(v64, v37, v73, &off_2B40F80);
LABEL_7:
  if ( ptr != v82 )
    free(ptr);
  return v13;
}
