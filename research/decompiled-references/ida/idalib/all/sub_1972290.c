__int64 __fastcall sub_1972290(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  __int64 v13; // r15
  char *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdi
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // r15
  char v21; // r9
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  void *v24; // rdi
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // r15
  int v34; // edx
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r15
  char v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  void *v41; // rdi
  __int64 v42; // rax
  unsigned int v45; // [rsp+10h] [rbp-B8h]
  __int64 v46; // [rsp+10h] [rbp-B8h]
  char v47; // [rsp+10h] [rbp-B8h]
  int v48; // [rsp+10h] [rbp-B8h]
  __int64 v49; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v51; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v52; // [rsp+10h] [rbp-B8h]
  __int64 v53; // [rsp+10h] [rbp-B8h]
  char v54; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v55; // [rsp+10h] [rbp-B8h]
  __int64 v56; // [rsp+10h] [rbp-B8h]
  char v57; // [rsp+10h] [rbp-B8h]
  __int64 v58; // [rsp+18h] [rbp-B0h]
  __int64 v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+30h] [rbp-98h]
  __int64 v62; // [rsp+30h] [rbp-98h]
  char v63; // [rsp+30h] [rbp-98h]
  char v64; // [rsp+30h] [rbp-98h]
  __int64 v65; // [rsp+30h] [rbp-98h]
  __int64 v66; // [rsp+30h] [rbp-98h]
  char v67; // [rsp+30h] [rbp-98h]
  __int64 v68; // [rsp+30h] [rbp-98h]
  char *v69; // [rsp+38h] [rbp-90h]
  int v70; // [rsp+38h] [rbp-90h]
  unsigned __int64 v71; // [rsp+38h] [rbp-90h]
  unsigned __int64 v72; // [rsp+38h] [rbp-90h]
  __int64 v74; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v75; // [rsp+58h] [rbp-70h]
  void *ptr; // [rsp+60h] [rbp-68h] BYREF
  __int64 v77; // [rsp+68h] [rbp-60h]
  _BYTE v78[88]; // [rsp+70h] [rbp-58h] BYREF

  v58 = (unsigned int)(a3 - 1);
  if ( !a3 )
    return 0;
  v10 = 0;
  v13 = *a2;
  if ( !*a2 )
    goto LABEL_32;
  while ( 1 )
  {
    v45 = 0;
    if ( sub_B799A0(v13) )
    {
      ptr = v78;
      v77 = 0x200000000LL;
      v14 = (char *)(*(_QWORD *)(v13 + 56) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v13 + 56) & 4) != 0 )
        v14 = *((char **)v14 + 4);
      v69 = v14 + 12;
      v60 = *(_QWORD *)v14;
      v15 = sub_F6C520(*(_QWORD *)(*(_QWORD *)v14 + 32LL));
      v74 = *(_QWORD *)(v60 + 32);
      v16 = *a1;
      v75 = v15 * ((unsigned __int64)&v69[-(v69 != nullptr)] / v15 + (v69 != nullptr));
      sub_1E4C9B0(v16, v74, v75, &ptr);
      if ( (_DWORD)v77 )
      {
        v45 = *(_DWORD *)(v60 + 20);
        sub_F6CE20(&v74);
        sub_F6CCB0(&v74, a7);
      }
      v17 = *(_DWORD *)(*a1 + 12632);
      v61 = *a1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v70 = v17;
      v18 = sub_1971F90(a1, v13, v45, a7, a8);
      v19 = v18;
      *(_DWORD *)(v61 + 12632) = v70;
      if ( ptr != v78 )
      {
        v46 = v18;
        free(ptr);
        v19 = v46;
      }
    }
    else
    {
      v19 = sub_1971F90(a1, v13, 0, a7, a8);
    }
    if ( !v19 )
      return 1;
    v20 = *(unsigned int *)(a6 + 8);
    if ( a5 )
    {
      v21 = *(_BYTE *)(a5 + v10);
      v22 = *(_QWORD *)(a10 + 8);
      v23 = *(_QWORD *)(a10 + 16);
      if ( v22 != v20 )
      {
        if ( v22 <= v20 )
        {
          if ( v20 > v23 )
          {
            v66 = v19;
            v54 = *(_BYTE *)(a5 + v10);
            sub_2236E10(a10, a10 + 24, *(unsigned int *)(a6 + 8), 1);
            v22 = *(_QWORD *)(a10 + 8);
            v23 = *(_QWORD *)(a10 + 16);
            v19 = v66;
            v21 = v54;
          }
          v24 = (void *)(*(_QWORD *)a10 + v22);
          if ( v24 != (void *)(v20 + *(_QWORD *)a10) )
          {
            v71 = v23;
            v62 = v19;
            v47 = v21;
            memset(v24, 0, v20 - v22);
            v21 = v47;
            v19 = v62;
            v23 = v71;
          }
        }
        *(_QWORD *)(a10 + 8) = v20;
      }
      if ( v20 + 1 > v23 )
      {
        v68 = v19;
        v57 = v21;
        sub_2236E10(a10, a10 + 24, v20 + 1, 1);
        v20 = *(_QWORD *)(a10 + 8);
        v19 = v68;
        v21 = v57;
      }
      *(_BYTE *)(*(_QWORD *)a10 + v20) = v21;
      ++*(_QWORD *)(a10 + 8);
      if ( !*(_BYTE *)(a10 + 40) )
        *(_BYTE *)(a10 + 40) = v21 != 0;
      v20 = *(unsigned int *)(a6 + 8);
    }
    v25 = *(_QWORD *)(v19 + 48);
    if ( v20 + 1 > *(unsigned int *)(a6 + 12) )
    {
      v65 = *(_QWORD *)(v19 + 48);
      v53 = v19;
      sub_2237220(a6, a6 + 16, v20 + 1, 8);
      v20 = *(unsigned int *)(a6 + 8);
      v25 = v65;
      v19 = v53;
    }
    *(_QWORD *)(*(_QWORD *)a6 + 8 * v20) = v25;
    ++*(_DWORD *)(a6 + 8);
    if ( a9 )
    {
      v26 = *(unsigned int *)(a9 + 8);
      if ( v26 + 1 > (unsigned __int64)*(unsigned int *)(a9 + 12) )
      {
        v56 = v19;
        sub_2237220(a9, a9 + 16, v26 + 1, 8);
        v26 = *(unsigned int *)(a9 + 8);
        v19 = v56;
      }
      *(_QWORD *)(*(_QWORD *)a9 + 8 * v26) = v19;
      ++*(_DWORD *)(a9 + 8);
    }
LABEL_30:
    v27 = v10 + 1;
    if ( v58 == v10 )
      return 0;
    while ( 1 )
    {
      v10 = v27;
      v13 = a2[v27];
      if ( v13 )
        break;
LABEL_32:
      v28 = *(_QWORD *)(a4 + 8 * v10) & 0xFFFFFFFFFFFFFFF0LL;
      v29 = *(_QWORD *)v28;
      if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) == 38 )
      {
        v30 = *(_QWORD *)(v29 + 32);
        v77 = 0x200000000LL;
        v31 = *a1;
        ptr = v78;
        sub_1E4C960(v31, v30);
        v32 = *(_QWORD *)(v29 + 32);
        v33 = *a1;
        v34 = *(_DWORD *)(*a1 + 12632);
        *(_DWORD *)(*a1 + 12632) = 0;
        v48 = v34;
        v35 = (__int64)sub_1942710(a1, v32, a7, a8);
        *(_DWORD *)(v33 + 12632) = v48;
        if ( ptr != v78 )
        {
          v49 = v35;
          free(ptr);
          v35 = v49;
        }
        if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 1;
        v36 = sub_A781D0(*(_QWORD *)(*a1 + 248), v35, 0);
      }
      else
      {
        v36 = (unsigned __int64)sub_1942710(a1, *(_QWORD *)(a4 + 8 * v10), a7, a8);
        if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return 1;
      }
      v37 = *(unsigned int *)(a6 + 8);
      if ( a5 )
      {
        v38 = *(_BYTE *)(a5 + v10);
        v39 = *(_QWORD *)(a10 + 8);
        v40 = *(_QWORD *)(a10 + 16);
        if ( v39 != v37 )
        {
          if ( v39 <= v37 )
          {
            if ( v37 > v40 )
            {
              v64 = *(_BYTE *)(a5 + v10);
              v52 = v36;
              sub_2236E10(a10, a10 + 24, *(unsigned int *)(a6 + 8), 1);
              v39 = *(_QWORD *)(a10 + 8);
              v40 = *(_QWORD *)(a10 + 16);
              v38 = v64;
              v36 = v52;
            }
            v41 = (void *)(*(_QWORD *)a10 + v39);
            if ( v41 != (void *)(v37 + *(_QWORD *)a10) )
            {
              v72 = v40;
              v63 = v38;
              v50 = v36;
              memset(v41, 0, v37 - v39);
              v36 = v50;
              v38 = v63;
              v40 = v72;
            }
          }
          *(_QWORD *)(a10 + 8) = v37;
        }
        if ( v37 + 1 > v40 )
        {
          v67 = v38;
          v55 = v36;
          sub_2236E10(a10, a10 + 24, v37 + 1, 1);
          v37 = *(_QWORD *)(a10 + 8);
          v38 = v67;
          v36 = v55;
        }
        *(_BYTE *)(*(_QWORD *)a10 + v37) = v38;
        ++*(_QWORD *)(a10 + 8);
        if ( !*(_BYTE *)(a10 + 40) )
          *(_BYTE *)(a10 + 40) = v38 != 0;
        v37 = *(unsigned int *)(a6 + 8);
      }
      if ( v37 + 1 > *(unsigned int *)(a6 + 12) )
      {
        v51 = v36;
        sub_2237220(a6, a6 + 16, v37 + 1, 8);
        v37 = *(unsigned int *)(a6 + 8);
        v36 = v51;
      }
      *(_QWORD *)(*(_QWORD *)a6 + 8 * v37) = v36;
      ++*(_DWORD *)(a6 + 8);
      if ( !a9 )
        goto LABEL_30;
      v42 = *(unsigned int *)(a9 + 8);
      if ( v42 + 1 > (unsigned __int64)*(unsigned int *)(a9 + 12) )
      {
        sub_2237220(a9, a9 + 16, v42 + 1, 8);
        v42 = *(unsigned int *)(a9 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a9 + 8 * v42) = 0;
      v27 = v10 + 1;
      ++*(_DWORD *)(a9 + 8);
      if ( v58 == v10 )
        return 0;
    }
  }
}
