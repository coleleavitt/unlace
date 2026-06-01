__int64 __fastcall sub_1845690(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _BYTE *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // r13
  unsigned __int64 v39; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _BYTE *v46; // r12
  _BYTE *v47; // rbp
  char *v48; // r13
  char *v49; // rbx
  char *v50; // rdi
  _BYTE *v52; // r12
  char *v53; // r13
  char *v54; // rbx
  char *v55; // rdi
  _BYTE *v56; // [rsp+8h] [rbp-80h]
  char v57; // [rsp+17h] [rbp-71h]
  _QWORD v58[2]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v59; // [rsp+30h] [rbp-58h]
  _BYTE *v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+40h] [rbp-48h]
  _BYTE v62[64]; // [rsp+48h] [rbp-40h] BYREF

  v57 = a4;
  v59 = 0;
  v60 = v62;
  v58[0] = 0;
  v58[1] = 0;
  v61 = 0;
  sub_B6F050(a3, (__int64)v58, a3, a4, a5, a6);
  v13 = v60;
  v14 = 48LL * (unsigned int)v61;
  v56 = &v60[v14];
  if ( v60 != &v60[v14] )
  {
    do
    {
      while ( 1 )
      {
        v10 = *((unsigned int *)v13 + 10);
        v15 = *((_QWORD *)v13 + 4);
        v9 = 15 * v10;
        v16 = v15 + 120 * v10;
        if ( v16 != v15 )
          break;
LABEL_8:
        v13 += 48;
        if ( v13 == v56 )
          goto LABEL_9;
      }
      if ( v57 )
      {
        do
        {
          v9 = **(_QWORD **)(v15 + 8);
          if ( (*(_BYTE *)(v9 + 82) & 8) == 0 && (*(_BYTE *)(v9 + 84) & 3) != 0 )
            sub_1910D40(a1, a2, v9, 1);
          v15 += 120;
        }
        while ( v16 != v15 );
        goto LABEL_8;
      }
      do
      {
        v9 = **(_QWORD **)(v15 + 8);
        if ( (*(_BYTE *)(v9 + 82) & 8) == 0 )
          sub_1910D40(a1, a2, v9, 1);
        v15 += 120;
      }
      while ( v16 != v15 );
      v13 += 48;
    }
    while ( v13 != v56 );
  }
LABEL_9:
  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v9, v10, v11, v12);
  v20 = *(unsigned int *)(*(_QWORD *)(a3 + 128) + 20LL);
  if ( (_DWORD)v20 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v20, v17, v18, v19);
    v25 = *(_QWORD *)(a3 + 128);
    if ( (*(_BYTE *)(v25 + 24) & 1) != 0 )
      v26 = sub_B96980(v25);
    else
      v26 = *(_QWORD *)(v25 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v21, v22, v23, v24);
    v27 = *(_QWORD *)(a3 + 104);
    v28 = v26 + 24LL * *(unsigned int *)(*(_QWORD *)(a3 + 128) + 16LL);
    sub_7052B0((__int64 *)(v27 + 96), v27, v29, v30, v31, v32);
    v37 = *(_QWORD *)(a3 + 128);
    if ( (*(_BYTE *)(v37 + 24) & 1) != 0 )
      v38 = sub_B96980(v37);
    else
      v38 = *(_QWORD *)(v37 + 24);
    for ( ; v38 != v28; v38 += 24 )
    {
      v39 = *(_QWORD *)(**(_QWORD **)(v38 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v39 + 8) & 0xF) != 0 )
        v39 = sub_F64F00(**(_QWORD **)(v38 + 16), v27, v33, v34, v35);
      v40 = sub_F60F10(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              v27,
              v33,
              v34,
              v35,
              v36);
      v27 = v40[13];
      v41 = v40;
      sub_7052B0((__int64 *)(v27 + 96), v27, v42, v43, v44, v45);
      if ( *(_DWORD *)(v41[16] + 20LL) )
      {
        v27 = a2;
        sub_1845690(a1, a2, v41, 0);
      }
    }
    v46 = v60;
    v47 = &v60[48 * (unsigned int)v61];
    if ( v60 != v47 )
    {
      do
      {
        v47 -= 48;
        v48 = *((char **)v47 + 4);
        v49 = &v48[120 * *((unsigned int *)v47 + 10)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 120;
              v50 = *((char **)v49 + 1);
              if ( v50 == v49 + 24 )
                break;
              free(v50);
              if ( v48 == v49 )
                goto LABEL_24;
            }
          }
          while ( v48 != v49 );
LABEL_24:
          v48 = *((char **)v47 + 4);
        }
        if ( v48 != v47 + 48 )
          free(v48);
        operator delete(*((_QWORD *)v47 + 1), 8LL * *((unsigned int *)v47 + 6), 4);
      }
      while ( v46 != v47 );
LABEL_28:
      v47 = v60;
    }
  }
  else
  {
    v52 = v60;
    v47 = &v60[48 * (unsigned int)v61];
    if ( v60 != v47 )
    {
      do
      {
        v47 -= 48;
        v53 = *((char **)v47 + 4);
        v54 = &v53[120 * *((unsigned int *)v47 + 10)];
        if ( v53 != v54 )
        {
          do
          {
            while ( 1 )
            {
              v54 -= 120;
              v55 = *((char **)v54 + 1);
              if ( v55 == v54 + 24 )
                break;
              free(v55);
              if ( v53 == v54 )
                goto LABEL_44;
            }
          }
          while ( v53 != v54 );
LABEL_44:
          v53 = *((char **)v47 + 4);
        }
        if ( v53 != v47 + 48 )
          free(v53);
        operator delete(*((_QWORD *)v47 + 1), 8LL * *((unsigned int *)v47 + 6), 4);
      }
      while ( v52 != v47 );
      goto LABEL_28;
    }
  }
  if ( v47 != v62 )
    free(v47);
  return operator delete(v58[0], 16LL * v59, 8);
}
