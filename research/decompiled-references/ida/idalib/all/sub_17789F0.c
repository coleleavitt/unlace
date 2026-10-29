__int64 __fastcall sub_17789F0(
        unsigned int *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rbp
  __int64 v12; // r15
  char *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  char v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  void *v23; // rdi
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // r15
  int v33; // edx
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // r15
  char v37; // r9
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  void *v40; // rdi
  __int64 v41; // rax
  unsigned int v44; // [rsp+10h] [rbp-B8h]
  __int64 v45; // [rsp+10h] [rbp-B8h]
  char v46; // [rsp+10h] [rbp-B8h]
  int v47; // [rsp+10h] [rbp-B8h]
  __int64 v48; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v49; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+10h] [rbp-B8h]
  __int64 v52; // [rsp+10h] [rbp-B8h]
  char v53; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v54; // [rsp+10h] [rbp-B8h]
  __int64 v55; // [rsp+10h] [rbp-B8h]
  char v56; // [rsp+10h] [rbp-B8h]
  __int64 v57; // [rsp+18h] [rbp-B0h]
  __int64 v59; // [rsp+30h] [rbp-98h]
  __int64 v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+30h] [rbp-98h]
  char v62; // [rsp+30h] [rbp-98h]
  char v63; // [rsp+30h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-98h]
  __int64 v65; // [rsp+30h] [rbp-98h]
  char v66; // [rsp+30h] [rbp-98h]
  __int64 v67; // [rsp+30h] [rbp-98h]
  char *v68; // [rsp+38h] [rbp-90h]
  int v69; // [rsp+38h] [rbp-90h]
  unsigned __int64 v70; // [rsp+38h] [rbp-90h]
  unsigned __int64 v71; // [rsp+38h] [rbp-90h]
  __int64 v73; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v76; // [rsp+68h] [rbp-60h]
  _BYTE v77[88]; // [rsp+70h] [rbp-58h] BYREF

  v57 = (unsigned int)(a3 - 1);
  if ( !a3 )
    return 0;
  v9 = 0;
  v12 = *a2;
  if ( !*a2 )
    goto LABEL_32;
  while ( 1 )
  {
    v44 = 0;
    if ( sub_B799A0(v12) )
    {
      ptr = v77;
      v76 = 0x200000000LL;
      v13 = (char *)(*(_QWORD *)(v12 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v12 + 56) & 4) != 0 )
        v13 = *((char **)v13 + 4);
      v68 = v13 + 12;
      v59 = *(_QWORD *)v13;
      v14 = sub_F6C520(*(_QWORD *)(*(_QWORD *)v13 + 32LL));
      v73 = *(_QWORD *)(v59 + 32);
      v15 = *(_QWORD *)a1;
      v74 = v14 * ((unsigned __int64)&v68[-(v68 != nullptr)] / v14 + (v68 != nullptr));
      sub_1E4C9B0(v15, v73, v74, &ptr);
      if ( (_DWORD)v76 )
      {
        v44 = *(_DWORD *)(v59 + 20);
        sub_F6CE20(&v73);
        sub_F6CCB0(&v73, a7);
      }
      v16 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
      v60 = *(_QWORD *)a1;
      *(_DWORD *)(*(_QWORD *)a1 + 12632LL) = 0;
      v69 = v16;
      v17 = sub_1778450(a1, v12, v44, a7);
      v18 = v17;
      *(_DWORD *)(v60 + 12632) = v69;
      if ( ptr != v77 )
      {
        v45 = v17;
        free(ptr);
        v18 = v45;
      }
    }
    else
    {
      v18 = sub_1778450(a1, v12, 0, a7);
    }
    if ( !v18 )
      return 1;
    v19 = *(unsigned int *)(a6 + 8);
    if ( a5 )
    {
      v20 = *(_BYTE *)(a5 + v9);
      v21 = *(_QWORD *)(a9 + 8);
      v22 = *(_QWORD *)(a9 + 16);
      if ( v21 != v19 )
      {
        if ( v21 <= v19 )
        {
          if ( v19 > v22 )
          {
            v65 = v18;
            v53 = *(_BYTE *)(a5 + v9);
            sub_2236E10(a9, a9 + 24, *(unsigned int *)(a6 + 8), 1);
            v21 = *(_QWORD *)(a9 + 8);
            v22 = *(_QWORD *)(a9 + 16);
            v18 = v65;
            v20 = v53;
          }
          v23 = (void *)(*(_QWORD *)a9 + v21);
          if ( v23 != (void *)(v19 + *(_QWORD *)a9) )
          {
            v70 = v22;
            v61 = v18;
            v46 = v20;
            memset(v23, 0, v19 - v21);
            v20 = v46;
            v18 = v61;
            v22 = v70;
          }
        }
        *(_QWORD *)(a9 + 8) = v19;
      }
      if ( v19 + 1 > v22 )
      {
        v67 = v18;
        v56 = v20;
        sub_2236E10(a9, a9 + 24, v19 + 1, 1);
        v19 = *(_QWORD *)(a9 + 8);
        v18 = v67;
        v20 = v56;
      }
      *(_BYTE *)(*(_QWORD *)a9 + v19) = v20;
      ++*(_QWORD *)(a9 + 8);
      if ( !*(_BYTE *)(a9 + 40) )
        *(_BYTE *)(a9 + 40) = v20 != 0;
      v19 = *(unsigned int *)(a6 + 8);
    }
    v24 = *(_QWORD *)(v18 + 48);
    if ( v19 + 1 > *(unsigned int *)(a6 + 12) )
    {
      v64 = *(_QWORD *)(v18 + 48);
      v52 = v18;
      sub_2237220(a6, a6 + 16, v19 + 1, 8);
      v19 = *(unsigned int *)(a6 + 8);
      v24 = v64;
      v18 = v52;
    }
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v19) = v24;
    ++*(_DWORD *)(a6 + 8);
    if ( a8 )
    {
      v25 = *(unsigned int *)(a8 + 8);
      if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a8 + 12) )
      {
        v55 = v18;
        sub_2237220(a8, a8 + 16, v25 + 1, 8);
        v25 = *(unsigned int *)(a8 + 8);
        v18 = v55;
      }
      *(_QWORD *)(*(_QWORD *)a8 + 8 * v25) = v18;
      ++*(_DWORD *)(a8 + 8);
    }
LABEL_30:
    v26 = v9 + 1;
    if ( v57 == v9 )
      return 0;
    while ( 1 )
    {
      v9 = v26;
      v12 = a2[v26];
      if ( v12 )
        break;
LABEL_32:
      v27 = *(_QWORD *)(a4 + 8 * v9) & 0xFFFFFFFFFFFFFFF0LL;
      v28 = *(_QWORD *)v27;
      if ( *(_BYTE *)(*(_QWORD *)v27 + 16LL) == 38 )
      {
        v29 = *(_QWORD *)(v28 + 32);
        v76 = 0x200000000LL;
        v30 = *(_QWORD *)a1;
        ptr = v77;
        sub_1E4C960(v30, v29);
        v31 = *(_QWORD *)(v28 + 32);
        v32 = *(_QWORD *)a1;
        v33 = *(_DWORD *)(*(_QWORD *)a1 + 12632LL);
        *(_DWORD *)(*(_QWORD *)a1 + 12632LL) = 0;
        v47 = v33;
        v34 = (__int64)sub_176A2F0(a1, v31, a7);
        *(_DWORD *)(v32 + 12632) = v47;
        if ( ptr != v77 )
        {
          v48 = v34;
          free(ptr);
          v34 = v48;
        }
        if ( (v34 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 1;
        v35 = sub_A781D0(*(_QWORD *)(*(_QWORD *)a1 + 248LL), v34, 0);
      }
      else
      {
        v35 = (unsigned __int64)sub_176A2F0(a1, *(_QWORD *)(a4 + 8 * v9), a7);
        if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 1;
      }
      v36 = *(unsigned int *)(a6 + 8);
      if ( a5 )
      {
        v37 = *(_BYTE *)(a5 + v9);
        v38 = *(_QWORD *)(a9 + 8);
        v39 = *(_QWORD *)(a9 + 16);
        if ( v38 != v36 )
        {
          if ( v38 <= v36 )
          {
            if ( v36 > v39 )
            {
              v63 = *(_BYTE *)(a5 + v9);
              v51 = v35;
              sub_2236E10(a9, a9 + 24, *(unsigned int *)(a6 + 8), 1);
              v38 = *(_QWORD *)(a9 + 8);
              v39 = *(_QWORD *)(a9 + 16);
              v37 = v63;
              v35 = v51;
            }
            v40 = (void *)(*(_QWORD *)a9 + v38);
            if ( v40 != (void *)(v36 + *(_QWORD *)a9) )
            {
              v71 = v39;
              v62 = v37;
              v49 = v35;
              memset(v40, 0, v36 - v38);
              v35 = v49;
              v37 = v62;
              v39 = v71;
            }
          }
          *(_QWORD *)(a9 + 8) = v36;
        }
        if ( v36 + 1 > v39 )
        {
          v66 = v37;
          v54 = v35;
          sub_2236E10(a9, a9 + 24, v36 + 1, 1);
          v36 = *(_QWORD *)(a9 + 8);
          v37 = v66;
          v35 = v54;
        }
        *(_BYTE *)(*(_QWORD *)a9 + v36) = v37;
        ++*(_QWORD *)(a9 + 8);
        if ( !*(_BYTE *)(a9 + 40) )
          *(_BYTE *)(a9 + 40) = v37 != 0;
        v36 = *(unsigned int *)(a6 + 8);
      }
      if ( v36 + 1 > *(unsigned int *)(a6 + 12) )
      {
        v50 = v35;
        sub_2237220(a6, a6 + 16, v36 + 1, 8);
        v36 = *(unsigned int *)(a6 + 8);
        v35 = v50;
      }
      *(_QWORD *)(*(_QWORD *)a6 + 8 * v36) = v35;
      ++*(_DWORD *)(a6 + 8);
      if ( !a8 )
        goto LABEL_30;
      v41 = *(unsigned int *)(a8 + 8);
      if ( v41 + 1 > (unsigned __int64)*(unsigned int *)(a8 + 12) )
      {
        sub_2237220(a8, a8 + 16, v41 + 1, 8);
        v41 = *(unsigned int *)(a8 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a8 + 8 * v41) = 0;
      v26 = v9 + 1;
      ++*(_DWORD *)(a8 + 8);
      if ( v57 == v9 )
        return 0;
    }
  }
}
