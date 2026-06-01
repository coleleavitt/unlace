__int64 __fastcall sub_B55AB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _OWORD *v4; // rax
  int v5; // r8d
  int v6; // r9d
  char *v7; // r13
  char *v8; // r14
  __int64 v9; // rsi
  char *v10; // rax
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 *v13; // rcx
  __int64 v14; // r9
  int v15; // edi
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // r13
  __int64 *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 *v30; // r8
  __int64 *j; // rax
  __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // r13
  void (__fastcall ***v36)(_QWORD); // rbp
  __int64 v37; // rax
  void *ptr; // [rsp+0h] [rbp-1E8h] BYREF
  __int64 v40; // [rsp+8h] [rbp-1E0h]
  int v41; // [rsp+10h] [rbp-1D8h]
  __int64 v42; // [rsp+18h] [rbp-1D0h]
  __int64 (__fastcall **v43)(); // [rsp+20h] [rbp-1C8h] BYREF
  int v44; // [rsp+28h] [rbp-1C0h]
  int v45; // [rsp+30h] [rbp-1B8h]
  __int64 *v46; // [rsp+38h] [rbp-1B0h]
  unsigned int v47; // [rsp+40h] [rbp-1A8h]
  int v48; // [rsp+48h] [rbp-1A0h]
  __int64 *v49; // [rsp+50h] [rbp-198h]
  unsigned int v50; // [rsp+58h] [rbp-190h]
  int v51; // [rsp+60h] [rbp-188h]
  __int64 v52; // [rsp+68h] [rbp-180h]
  __int64 v53; // [rsp+70h] [rbp-178h]
  __int64 v54; // [rsp+78h] [rbp-170h]
  __int64 v55; // [rsp+80h] [rbp-168h]
  _QWORD *v56; // [rsp+88h] [rbp-160h]
  void *v57; // [rsp+98h] [rbp-150h]
  __int64 v58; // [rsp+B0h] [rbp-138h]
  _BYTE v59[8]; // [rsp+B8h] [rbp-130h] BYREF
  _BYTE v60[32]; // [rsp+C0h] [rbp-128h] BYREF
  _QWORD v61[33]; // [rsp+E0h] [rbp-108h] BYREF

  v2 = *(_QWORD *)(a2 + 72);
  v3 = *(_QWORD *)(a1 + 24);
  v61[0] = 0;
  sub_C07FF0(&v43, v3, v61);
  sub_18572D0(v61);
  sub_D8DFF0(v61, *(_QWORD *)(a1 + 24), a1 + 72);
  v4 = (_OWORD *)sub_186B270(0x40u);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  ptr = v4;
  v40 = 8;
  v41 = 0;
  sub_D91C40(v61, v2, &v43, &ptr);
  sub_D95A50(
    (unsigned int)v61,
    v2,
    (unsigned int)&v43,
    (unsigned int)&ptr,
    v5,
    v6,
    (__int64)ptr,
    v40,
    v41,
    v42,
    (_DWORD)v43,
    v44,
    v45,
    (_DWORD)v46,
    v47,
    v48,
    (_DWORD)v49,
    v50,
    v51,
    v52,
    v53);
  v7 = (char *)ptr;
  v8 = (char *)ptr + 8 * (unsigned int)v40;
  if ( ptr != v8 )
  {
    while ( *(_QWORD *)v7 <= 1u )
    {
      v7 += 8;
      if ( v8 == v7 )
        goto LABEL_12;
    }
    if ( v8 != v7 )
    {
      v9 = *(_QWORD *)v7;
      do
      {
        sub_135EA20(v2, v9);
        v10 = v7 + 8;
        if ( v8 == v7 + 8 )
          break;
        while ( 1 )
        {
          v9 = *(_QWORD *)v10;
          v7 = v10;
          if ( *(_QWORD *)v10 > 1u )
            break;
          v10 += 8;
          if ( v8 == v10 )
            goto LABEL_12;
        }
      }
      while ( v8 != v10 );
    }
  }
LABEL_12:
  v11 = v53;
  if ( v53 )
  {
    v12 = 0;
    do
    {
      if ( v12 >= *(_DWORD *)(v11 - 4) )
        break;
      v13 = v46;
      v14 = *(_QWORD *)(v11 + 8LL * v12);
      v15 = *(_DWORD *)(v14 + 12);
      v16 = 24LL * v47;
      v17 = &v46[(unsigned __int64)v16 / 8];
      v18 = 24LL * (v15 & (v47 - 1));
      v19 = &v46[(unsigned __int64)v18 / 8];
      if ( v18 != v16 )
      {
        for ( i = &v46[(unsigned __int64)v18 / 8]; v17 != i; i += 3 )
        {
          v21 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v21 + 12) == v15 && v14 == v21 )
              goto LABEL_53;
          }
          else if ( !v21 )
          {
            goto LABEL_22;
          }
        }
      }
      if ( v46 == v19 )
      {
LABEL_62:
        v21 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v21 = *v13;
            if ( (unsigned __int64)*v13 > 1 )
              break;
            if ( !v21 )
              goto LABEL_22;
            v13 += 3;
            if ( v19 == v13 )
              goto LABEL_62;
          }
          if ( *(_DWORD *)(v21 + 12) == v15 && v14 == v21 )
            break;
          v13 += 3;
          if ( v19 == v13 )
            goto LABEL_62;
        }
        i = v13;
LABEL_53:
        v21 = i[2];
      }
LABEL_22:
      sub_135F9B0(v2, v14, v21);
      v11 = v53;
      ++v12;
    }
    while ( v53 );
  }
  v22 = v54;
  if ( v54 )
  {
    v23 = 0;
    do
    {
      if ( v23 >= *(_DWORD *)(v22 - 4) )
        break;
      v24 = *(_QWORD *)(v22 + 8LL * v23);
      v25 = v49;
      v26 = *(unsigned int *)(v24 + 12);
      v27 = 16LL * v50;
      v28 = &v49[(unsigned __int64)v27 / 8];
      v29 = 16LL * ((unsigned int)v26 & (v50 - 1));
      v30 = &v49[(unsigned __int64)v29 / 8];
      if ( v29 != v27 )
      {
        for ( j = &v49[(unsigned __int64)v29 / 8]; v28 != j; j += 2 )
        {
          v32 = *j;
          if ( (unsigned __int64)*j > 1 )
          {
            if ( *(_DWORD *)(v32 + 12) == (_DWORD)v26 && v24 == v32 )
              goto LABEL_64;
          }
          else if ( !v32 )
          {
            goto LABEL_33;
          }
        }
      }
      if ( v49 == v30 )
      {
LABEL_73:
        v32 = 0;
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v32 = *v25;
            if ( (unsigned __int64)*v25 > 1 )
              break;
            if ( !v32 )
              goto LABEL_33;
            v25 += 2;
            if ( v30 == v25 )
              goto LABEL_73;
          }
          if ( *(_DWORD *)(v32 + 12) == (_DWORD)v26 && v24 == v32 )
            break;
          v25 += 2;
          if ( v30 == v25 )
            goto LABEL_73;
        }
        j = v25;
LABEL_64:
        v32 = j[1];
      }
LABEL_33:
      v33 = sub_13495F0(v32, v26, v25, v28, v30);
      sub_135F980(v2, v24, v33);
      v22 = v54;
      ++v23;
    }
    while ( v54 );
  }
  if ( ptr )
    sub_186B220(ptr);
  sub_D96340(v61);
  v43 = &off_1C57FF8;
  sub_14B63F0(v60);
  sub_13606C0(v59);
  if ( v58 )
    sub_186B220((void *)(v58 - 8));
  if ( v57 )
    sub_186B220(v57);
  v34 = v56;
  if ( v56 )
  {
    v35 = &v56[*((unsigned int *)v56 - 1)];
    if ( v56 == v35 )
    {
      if ( v55 )
        *(_DWORD *)(v55 - 4) = 0;
    }
    else
    {
      do
      {
        v36 = (void (__fastcall ***)(_QWORD))*v34;
        if ( *v34 )
        {
          (**v36)(*v34);
          sub_186B220(v36);
        }
        ++v34;
      }
      while ( v35 != v34 );
      v37 = v55;
      v34 = v56;
      if ( v55 )
        *(_DWORD *)(v55 - 4) = 0;
      if ( !v34 )
        goto LABEL_49;
    }
    *((_DWORD *)v34 - 1) = 0;
    sub_186B220(v34 - 1);
    v37 = v55;
  }
  else
  {
    v37 = v55;
    if ( !v55 )
      return sub_135E640(&v43);
    *(_DWORD *)(v55 - 4) = 0;
  }
LABEL_49:
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  return sub_135E640(&v43);
}

