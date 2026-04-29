unsigned __int64 __fastcall sub_3A7DA0(_QWORD *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r12
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // r15d
  int v16; // r12d
  const char *v17; // r13
  __int64 v18; // rax
  _BYTE *v19; // rax
  size_t v21; // r15
  __int64 v22; // rax
  _QWORD *v23; // rdx
  const char *v24; // rsi
  int v25; // eax
  __int64 i; // rdx
  __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r13
  _QWORD *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // r15
  _QWORD *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r12d
  int v39; // r14d
  __int64 v40; // r15
  const char *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r15
  _QWORD *v48; // rdi
  __int64 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rsi
  bool v53; // cf
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rsi
  _QWORD *v57; // rdi
  __int64 v58; // r12
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // [rsp+10h] [rbp-B0h]
  _QWORD *v62; // [rsp+20h] [rbp-A0h]
  __int64 v63; // [rsp+28h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-90h] BYREF
  __int128 v65; // [rsp+38h] [rbp-88h]
  void *v66; // [rsp+50h] [rbp-70h] BYREF
  __int128 v67; // [rsp+58h] [rbp-68h]
  __int64 v68; // [rsp+70h] [rbp-50h] BYREF
  __int64 v69; // [rsp+78h] [rbp-48h]
  unsigned __int64 v70; // [rsp+88h] [rbp-38h]

  v1 = a1[2];
  v2 = a1[4];
  v70 = __readfsqword(0x28u);
  v63 = *(_QWORD *)(v1 + 64);
  v62 = *(_QWORD **)(v63 + 8);
  v61 = v62[58];
  v4 = (int)v61 + 1;
  if ( v4 != v2 )
  {
    LODWORD(v69) = 0;
    v68 = 0xFFFFFFFFLL;
    if ( v4 >= v2 )
    {
      v29 = a1[3];
      v30 = a1[5];
      v31 = a1 + 3;
      if ( (unsigned __int64)&v68 < v29 || (unsigned __int64)&v68 >= v29 + 12 * v30 )
      {
        if ( v30 < v4 )
        {
          v45 = qvector_reserve(v31, 0, (int)v61 + 1, 12);
          v46 = a1[4];
          v47 = a1[5];
          a1[5] = v30;
          v48 = (_QWORD *)a1[3];
          v49 = v45;
          v50 = v46 - 1;
          if ( v50 >= 0 )
          {
            v51 = v45;
            do
            {
              v52 = *v48;
              v51 += 12;
              v48 = (_QWORD *)((char *)v48 + 12);
              *(_QWORD *)(v51 - 12) = v52;
              *(_DWORD *)(v51 - 4) = *((_DWORD *)v48 - 1);
              v53 = v50-- == 0;
            }
            while ( !v53 );
            v48 = (_QWORD *)a1[3];
          }
          qfree(v48);
          a1[3] = v49;
          v2 = a1[4];
          a1[5] = v47;
        }
        v36 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            v37 = a1[3];
            ++v2;
            *(_QWORD *)(v37 + v36) = v68;
            *(_DWORD *)(v37 + v36 + 8) = v69;
            v36 += 12;
          }
          while ( v4 != v2 );
        }
      }
      else
      {
        if ( v30 < v4 )
        {
          v54 = qvector_reserve(v31, 0, (int)v61 + 1, 12);
          v55 = a1[4];
          v56 = a1[5];
          a1[5] = v30;
          v57 = (_QWORD *)a1[3];
          v58 = v54;
          v59 = v55 - 1;
          if ( v59 >= 0 )
          {
            do
            {
              v60 = *v57;
              v54 += 12;
              v57 = (_QWORD *)((char *)v57 + 12);
              *(_QWORD *)(v54 - 12) = v60;
              *(_DWORD *)(v54 - 4) = *((_DWORD *)v57 - 1);
              v53 = v59-- == 0;
            }
            while ( !v53 );
            v57 = (_QWORD *)a1[3];
          }
          qfree(v57);
          a1[3] = v58;
          v2 = a1[4];
          a1[5] = v56;
        }
        v32 = 12 * v2;
        if ( v2 < v4 )
        {
          do
          {
            ++v2;
            v33 = v32 + a1[3];
            v32 += 12;
            *(_QWORD *)v33 = 0xFFFFFFFFLL;
            *(_DWORD *)(v33 + 8) = 0;
          }
          while ( v4 != v2 );
        }
      }
    }
    a1[4] = v4;
    v2 = (int)v61 + 1;
  }
  v5 = a1[7];
  if ( v5 != v2 )
  {
    v66 = nullptr;
    if ( v2 < v5 )
    {
      v9 = v2;
      do
      {
        v10 = a1[6] + 8 * v9++;
        clear_tinfo_t(v10);
      }
      while ( v9 < v5 );
      a1[7] = v2;
    }
    else
    {
      v6 = a1[6];
      v7 = a1[8];
      if ( (unsigned __int64)&v66 < v6 || (unsigned __int64)&v66 >= v6 + 8 * v7 )
      {
        if ( v7 < v2 )
        {
          a1[6] = qvector_reserve(a1 + 6, v6, v2, 8);
          v5 = a1[7];
        }
        while ( v5 < v2 )
        {
          v8 = (_QWORD *)(a1[6] + 8 * v5);
          *v8 = 0;
          copy_tinfo_t(v8, &v66);
          ++v5;
        }
        a1[7] = v2;
      }
      else
      {
        v68 = 0;
        copy_tinfo_t(&v68, &v66);
        if ( a1[8] < v2 )
          a1[6] = qvector_reserve(a1 + 6, a1[6], v2, 8);
        v34 = a1[7];
        if ( v34 < v2 )
        {
          do
          {
            v35 = (_QWORD *)(a1[6] + 8 * v34);
            *v35 = 0;
            copy_tinfo_t(v35, &v68);
            ++v34;
          }
          while ( v34 != v2 );
        }
        a1[7] = v2;
        clear_tinfo_t(&v68);
      }
    }
    clear_tinfo_t(&v66);
  }
  sub_368820(&v68, (__int64)v62, 0);
  copy_tinfo_t(a1[6], &v68);
  v11 = 0;
  clear_tinfo_t(&v68);
  if ( (int)v61 <= 0 )
  {
    if ( *(int *)(v63 + 152) > 0 )
      goto LABEL_19;
    if ( !(_DWORD)v61 )
    {
      v16 = 0;
LABEL_26:
      *(_DWORD *)a1[3] = v16;
      return v70 - __readfsqword(0x28u);
    }
LABEL_84:
    v66 = nullptr;
    v23 = (_QWORD *)a1[6];
    v16 = 0;
    v65 = 0;
    v24 = s1;
    v64 = 0;
    v67 = 0;
    goto LABEL_34;
  }
  do
  {
    v12 = sub_139080(v62, v11);
    copy_tinfo_t(a1[6] + 8 * (v11 + 1), v12 + 80);
    v13 = v11++;
  }
  while ( v13 != (_DWORD)v61 - 1 );
  if ( *(int *)(v63 + 152) <= 0 )
    goto LABEL_84;
LABEL_19:
  v14 = 0;
  while ( 1 )
  {
    v15 = v14;
    v16 = v14;
    v17 = s1;
    v18 = *(_QWORD *)(v63 + 128) + 32 * v14;
    if ( *(_QWORD *)(v18 + 8) )
      v17 = *(const char **)v18;
    v19 = (_BYTE *)tag_skipcodes(v17);
    if ( *v19 != 47 || v19[1] != 47 )
      break;
    if ( *(_DWORD *)(v63 + 152) <= (int)++v14 )
    {
      v16 = v15 + 1;
      break;
    }
  }
  if ( !(_DWORD)v61 )
    goto LABEL_26;
  v66 = nullptr;
  v64 = 0;
  v65 = 0;
  v67 = 0;
  if ( v17 )
  {
    v21 = strlen(v17);
    v66 = (void *)qvector_reserve(&v66, 0, v21 + 1, 1);
    *(_QWORD *)&v67 = v21 + 1;
    memmove(v66, v17, v21);
    *((_BYTE *)v66 + v21) = 0;
    v22 = v67;
    if ( (unsigned __int64)v67 > 1 )
    {
      tag_remove(&v66, v66, 0);
      v22 = v67;
    }
    v23 = (_QWORD *)a1[6];
    v24 = s1;
    if ( v22 )
      v24 = (const char *)v66;
  }
  else
  {
    v23 = (_QWORD *)a1[6];
    v24 = s1;
  }
LABEL_34:
  sub_385340(&v64, v24, v23);
  if ( (_QWORD)v65 )
  {
    v25 = 0;
    for ( i = 0; (unsigned __int64)v25 < a1[4]; i = v25 )
    {
      v27 = 12 * i;
      *(_DWORD *)(a1[3] + 12 * i) = v16;
      if ( v25 > 0 )
      {
        v28 = (unsigned int)(v25 - 1);
        if ( v28 < (unsigned __int64)v65 )
          *(_DWORD *)(a1[3] + v27 + 4) = *(_DWORD *)(v64 + 4 * v28);
      }
      ++v25;
    }
  }
  else
  {
    *(_DWORD *)a1[3] = v16;
    v38 = v16 + 1;
    if ( *(_DWORD *)(v63 + 152) > v38 && (int)v61 > 0 )
    {
      v39 = 0;
      v40 = 32LL * v38;
      do
      {
        LODWORD(v68) = 0;
        v41 = s1;
        v42 = v40 + *(_QWORD *)(v63 + 128);
        if ( *(_QWORD *)(v42 + 8) )
          v41 = *(const char **)v42;
        sub_385890(v63, v41, 0, 0, &v68, 0, 0.0, 0);
        if ( (_DWORD)v68 == 2 )
        {
          v43 = sub_139080(v62, v39);
          if ( v69 == v43 )
          {
            v44 = (_DWORD *)(a1[3] + 12LL * ++v39);
            *v44 = v38;
            v44[1] = 8;
          }
        }
        ++v38;
        v40 += 32;
      }
      while ( *(_DWORD *)(v63 + 152) > v38 && v39 < (int)v61 );
    }
  }
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree(v66);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64);
  }
  return v70 - __readfsqword(0x28u);
}
