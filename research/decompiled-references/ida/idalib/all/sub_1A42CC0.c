char __fastcall sub_1A42CC0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v9; // rbx
  char v10; // al
  unsigned __int64 v11; // rdx
  char result; // al
  char v13; // si
  char *v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 *v16; // r8
  char *v17; // rcx
  char *v18; // rdx
  char *v19; // rcx
  char *v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // dl
  unsigned int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 *v31; // rdx
  bool v32; // zf
  char *v33; // rdx
  __int64 v34; // rax
  unsigned __int64 *v35; // r8
  char *v36; // rcx
  char *v37; // rdx
  char *v38; // rcx
  char *v39; // rdi
  __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // r15
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int64 *v48; // rdx
  __int64 v49; // rax
  char v50; // dl
  unsigned __int64 v51; // rdx
  char *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned __int64 *v55; // rdi
  char *v56; // rcx
  char *v57; // rdx
  char *v58; // rcx
  char *v59; // rdi
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int v63; // edx
  __int64 v64; // rdx
  __int64 v65; // r15
  __int64 v66; // rcx
  __int64 v67; // rax
  unsigned __int64 *v68; // rdx
  __int64 v69; // rax
  char v70; // dl
  unsigned __int64 v71; // rdx
  char v72; // [rsp+Fh] [rbp-79h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  __int64 v74; // [rsp+18h] [rbp-70h]
  int v75; // [rsp+20h] [rbp-68h]
  char v76; // [rsp+24h] [rbp-64h]
  _BYTE v77[96]; // [rsp+28h] [rbp-60h] BYREF

  v9 = a2;
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  v11 = *(_QWORD *)(a2 + 72) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v10 == 67 )
  {
    result = 0;
    if ( !v11 )
      return result;
    v76 = 1;
    v13 = 1;
    v75 = 0;
    ptr = v77;
    v74 = 4;
    while ( 1 )
    {
      if ( !v13 )
        goto LABEL_25;
      v14 = (char *)ptr;
      v15 = 8LL * HIDWORD(v74);
      v16 = (unsigned __int64 *)((char *)ptr + v15);
      if ( ptr != (char *)ptr + v15 )
      {
        v17 = (char *)ptr;
        if ( *(_QWORD *)ptr == v9 )
        {
LABEL_31:
          result = 0;
          goto LABEL_12;
        }
        while ( 1 )
        {
          v17 += 8;
          if ( v16 == (unsigned __int64 *)v17 )
            break;
          if ( *(_QWORD *)v17 == v9 )
            goto LABEL_31;
        }
      }
      if ( HIDWORD(v74) < (unsigned int)v74 )
      {
        ++HIDWORD(v74);
        result = v13;
        *v16 = v9;
        v14 = (char *)ptr;
        v17 = (char *)ptr + v15;
      }
      else
      {
LABEL_25:
        v24 = sub_2236760(&ptr, v9);
        v13 = v76;
        v17 = (char *)v24;
        result = v25;
        v14 = (char *)ptr;
        if ( !v76 )
        {
          v18 = (char *)ptr + 8 * (unsigned int)v74;
          goto LABEL_13;
        }
      }
LABEL_12:
      v18 = &v14[8 * HIDWORD(v74)];
      v13 = 1;
LABEL_13:
      if ( v18 != v17 && *(_QWORD *)v17 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v19 = v17 + 8;
        do
        {
          v20 = v19;
          if ( v18 == v19 )
            break;
          v19 += 8;
        }
        while ( *(_QWORD *)v20 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( !result )
        goto LABEL_30;
      v21 = *(_QWORD *)(v9 + 72);
      v22 = (v21 >> 1) & 3;
      if ( v22 == 1 )
      {
        if ( !v21 )
          goto LABEL_30;
LABEL_28:
        v9 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v21 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_30;
        goto LABEL_29;
      }
      v23 = *(_QWORD *)(v9 + 8) & 6LL;
      if ( a4 )
      {
        if ( !v23 )
          goto LABEL_22;
        v26 = 1;
      }
      else
      {
        if ( !v23 )
          goto LABEL_22;
        v26 = 0;
      }
      result = sub_1A42350(a1, v9, v26, v22, (__int64)v16, a6);
      if ( result )
        goto LABEL_35;
      v21 = *(_QWORD *)(v9 + 72);
      if ( ((v21 >> 1) & 3) != 1 && a3 )
      {
        v27 = *(_QWORD *)(v9 + 8) & 7LL;
        if ( *(char *)(v9 + 29) < 0 )
        {
          v28 = 0;
          if ( v27 )
            v28 = sub_B8C660(v9);
        }
        else if ( v27 )
        {
          v28 = *(_QWORD *)(v9 - 8);
        }
        else
        {
          v28 = 0;
        }
        v29 = *(unsigned int *)(a3 + 8);
        if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v29 + 1, 8);
          v29 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v29) = v28;
        ++*(_DWORD *)(a3 + 8);
        v21 = *(_QWORD *)(v9 + 72);
      }
      v13 = v76;
      if ( !v21 )
        goto LABEL_30;
      v30 = (v21 >> 1) & 3;
      if ( v30 == 1 )
        goto LABEL_28;
      if ( v30 != 2 )
        goto LABEL_30;
      v31 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v31 )
        goto LABEL_30;
      v9 = *v31;
LABEL_29:
      if ( !v9 )
        goto LABEL_30;
    }
  }
  v32 = v10 == 47;
  result = 0;
  if ( v32 )
  {
    if ( !v11 )
      return result;
    v13 = 1;
    v74 = 4;
    v75 = 0;
    ptr = v77;
    v76 = 1;
LABEL_54:
    v33 = (char *)ptr;
    v34 = 8LL * HIDWORD(v74);
    v35 = (unsigned __int64 *)((char *)ptr + v34);
    if ( ptr != (char *)ptr + v34 )
    {
      v36 = (char *)ptr;
      if ( *(_QWORD *)ptr == v9 )
      {
LABEL_94:
        result = 0;
        goto LABEL_61;
      }
      while ( 1 )
      {
        v36 += 8;
        if ( v35 == (unsigned __int64 *)v36 )
          break;
        if ( *(_QWORD *)v36 == v9 )
          goto LABEL_94;
      }
    }
    if ( HIDWORD(v74) < (unsigned int)v74 )
    {
      ++HIDWORD(v74);
      *v35 = v9;
      v33 = (char *)ptr;
      v36 = (char *)ptr + v34;
      result = v13;
LABEL_61:
      v37 = &v33[8 * HIDWORD(v74)];
      v13 = 1;
      goto LABEL_62;
    }
    while ( 1 )
    {
      v49 = sub_2236760(&ptr, v9);
      v13 = v76;
      v36 = (char *)v49;
      result = v50;
      v33 = (char *)ptr;
      if ( v76 )
        goto LABEL_61;
      v37 = (char *)ptr + 8 * (unsigned int)v74;
LABEL_62:
      if ( v37 != v36 && *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v38 = v36 + 8;
        do
        {
          v39 = v38;
          if ( v37 == v38 )
            break;
          v38 += 8;
        }
        while ( *(_QWORD *)v39 >= 0xFFFFFFFFFFFFFFFELL );
      }
      if ( !result )
        goto LABEL_30;
      v40 = *(_QWORD *)(v9 + 72);
      v41 = (v40 >> 1) & 3;
      if ( v41 == 1 )
      {
        if ( !v40 )
          goto LABEL_30;
      }
      else
      {
        v42 = *(_QWORD *)(v9 + 8) & 6LL;
        if ( a4 )
        {
          if ( !v42 )
            goto LABEL_22;
          v43 = 1;
        }
        else
        {
          if ( !v42 )
            goto LABEL_22;
          v43 = 0;
        }
        result = sub_1A42350(a1, v9, v43, v41, (__int64)v35, a6);
        if ( result )
          goto LABEL_35;
        v40 = *(_QWORD *)(v9 + 72);
        if ( ((v40 >> 1) & 3) != 1 && a3 )
        {
          v44 = *(_QWORD *)(v9 + 8) & 7LL;
          if ( *(char *)(v9 + 29) < 0 )
          {
            v45 = 0;
            if ( v44 )
              v45 = sub_B8C660(v9);
          }
          else if ( v44 )
          {
            v45 = *(_QWORD *)(v9 - 8);
          }
          else
          {
            v45 = 0;
          }
          v46 = *(unsigned int *)(a3 + 8);
          if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
          {
            sub_2237220(a3, a3 + 16, v46 + 1, 8);
            v46 = *(unsigned int *)(a3 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a3 + 8 * v46) = v45;
          ++*(_DWORD *)(a3 + 8);
          v40 = *(_QWORD *)(v9 + 72);
        }
        v13 = v76;
        if ( !v40 )
          goto LABEL_30;
        v47 = (v40 >> 1) & 3;
        if ( v47 != 1 )
        {
          if ( v47 != 2 )
            goto LABEL_30;
          v48 = (unsigned __int64 *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
          if ( !v48 )
            goto LABEL_30;
          v9 = *v48;
          goto LABEL_86;
        }
      }
      v51 = v40 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v51 )
        goto LABEL_30;
      v9 = v51;
LABEL_86:
      if ( !v9 )
        goto LABEL_30;
      if ( v13 )
        goto LABEL_54;
    }
  }
  if ( !v11 )
    return result;
  v13 = 1;
  v74 = 4;
  v75 = 0;
  ptr = v77;
  v76 = 1;
LABEL_101:
  v52 = (char *)ptr;
  v53 = HIDWORD(v74);
  v54 = 8LL * HIDWORD(v74);
  v55 = (unsigned __int64 *)((char *)ptr + v54);
  if ( ptr != (char *)ptr + v54 )
  {
    v56 = (char *)ptr;
    if ( *(_QWORD *)ptr == v9 )
    {
LABEL_140:
      result = 0;
      goto LABEL_108;
    }
    while ( 1 )
    {
      v56 += 8;
      if ( v55 == (unsigned __int64 *)v56 )
        break;
      if ( v9 == *(_QWORD *)v56 )
        goto LABEL_140;
    }
  }
  if ( HIDWORD(v74) < (unsigned int)v74 )
  {
    v53 = (unsigned int)++HIDWORD(v74);
    *v55 = v9;
    v52 = (char *)ptr;
    v56 = (char *)ptr + v54;
    result = v13;
LABEL_108:
    v57 = &v52[8 * HIDWORD(v74)];
    v13 = 1;
    goto LABEL_109;
  }
  while ( 1 )
  {
    v69 = sub_2236760(&ptr, v9);
    v13 = v76;
    v56 = (char *)v69;
    result = v70;
    v52 = (char *)ptr;
    if ( v76 )
      goto LABEL_108;
    v57 = (char *)ptr + 8 * (unsigned int)v74;
LABEL_109:
    if ( v57 != v56 && *(_QWORD *)v56 >= 0xFFFFFFFFFFFFFFFELL )
    {
      v58 = v56 + 8;
      do
      {
        v59 = v58;
        if ( v58 == v57 )
          break;
        v58 += 8;
      }
      while ( *(_QWORD *)v59 >= 0xFFFFFFFFFFFFFFFELL );
    }
    if ( !result )
    {
LABEL_30:
      result = 0;
      goto LABEL_22;
    }
    v60 = *(_QWORD *)(v9 + 72);
    v61 = (v60 >> 1) & 3;
    if ( v61 == 1 )
    {
      if ( !v60 )
        goto LABEL_30;
      goto LABEL_138;
    }
    v62 = *(_QWORD *)(v9 + 8) & 6LL;
    if ( a4 )
    {
      if ( !v62 )
        goto LABEL_22;
      v63 = 1;
    }
    else
    {
      if ( !v62 )
        goto LABEL_22;
      v63 = 0;
    }
    result = sub_1A42350(a1, v9, v63, v61, v53, a6);
    if ( result )
      break;
    v60 = *(_QWORD *)(v9 + 72);
    if ( ((v60 >> 1) & 3) != 1 && a3 )
    {
      v64 = *(_QWORD *)(v9 + 8) & 7LL;
      if ( *(char *)(v9 + 29) < 0 )
      {
        v65 = 0;
        if ( v64 )
          v65 = sub_B8C660(v9);
      }
      else if ( v64 )
      {
        v65 = *(_QWORD *)(v9 - 8);
      }
      else
      {
        v65 = 0;
      }
      v66 = *(unsigned int *)(a3 + 8);
      if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
      {
        sub_2237220(a3, a3 + 16, v66 + 1, 8);
        v66 = *(unsigned int *)(a3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a3 + 8 * v66) = v65;
      ++*(_DWORD *)(a3 + 8);
      v60 = *(_QWORD *)(v9 + 72);
    }
    v13 = v76;
    if ( !v60 )
      goto LABEL_30;
    v67 = (v60 >> 1) & 3;
    if ( v67 != 1 )
    {
      if ( v67 != 2 )
        goto LABEL_30;
      v68 = (unsigned __int64 *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v68 )
        goto LABEL_30;
      v9 = *v68;
      goto LABEL_133;
    }
LABEL_138:
    v71 = v60 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v71 )
      goto LABEL_30;
    v9 = v71;
LABEL_133:
    if ( !v9 )
      goto LABEL_30;
    if ( v13 )
      goto LABEL_101;
  }
LABEL_35:
  v13 = v76;
LABEL_22:
  if ( !v13 )
  {
    v72 = result;
    free(ptr);
    return v72;
  }
  return result;
}
