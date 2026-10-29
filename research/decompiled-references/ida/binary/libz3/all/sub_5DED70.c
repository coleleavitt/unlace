__int64 __fastcall sub_5DED70(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r8d
  __int64 v7; // r14
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // edi
  unsigned int v11; // edx
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // r9
  __int64 *v15; // rax
  __int64 v16; // rdx
  void *v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // rbx
  void *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rsi
  void *v23; // rdi
  bool v24; // zf
  __int64 v25; // rsi
  void *v26; // rdi
  int v27; // r9d
  int *v28; // rdi
  char *v29; // rcx
  char *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  void *v35; // rdi
  __int64 v36; // [rsp+0h] [rbp-158h]
  void **v37; // [rsp+8h] [rbp-150h]
  int v38; // [rsp+10h] [rbp-148h]
  __int64 v39; // [rsp+18h] [rbp-140h] BYREF
  __int64 v40; // [rsp+20h] [rbp-138h] BYREF
  void *v41; // [rsp+28h] [rbp-130h]
  void *v42[2]; // [rsp+30h] [rbp-128h] BYREF
  void *v43; // [rsp+40h] [rbp-118h] BYREF
  int v44; // [rsp+48h] [rbp-110h]
  __int16 v45; // [rsp+4Ch] [rbp-10Ch]
  int v46; // [rsp+50h] [rbp-108h]
  int v47; // [rsp+58h] [rbp-100h]
  int v48; // [rsp+5Ch] [rbp-FCh]
  int v49; // [rsp+60h] [rbp-F8h]
  int v50[4]; // [rsp+68h] [rbp-F0h]
  int v51[4]; // [rsp+78h] [rbp-E0h]
  void *ptr; // [rsp+88h] [rbp-D0h]
  int v53[2]; // [rsp+90h] [rbp-C8h]
  int v54[8]; // [rsp+98h] [rbp-C0h] BYREF
  char v55; // [rsp+B8h] [rbp-A0h]
  int v56; // [rsp+C0h] [rbp-98h]
  int v57; // [rsp+C8h] [rbp-90h]
  int v58; // [rsp+D0h] [rbp-88h]
  int v59; // [rsp+D8h] [rbp-80h]
  int v60; // [rsp+E0h] [rbp-78h]
  int v61; // [rsp+E8h] [rbp-70h]
  int v62; // [rsp+F0h] [rbp-68h]
  int v63; // [rsp+F8h] [rbp-60h]
  int v64; // [rsp+100h] [rbp-58h]
  int v65; // [rsp+108h] [rbp-50h]
  int v66; // [rsp+110h] [rbp-48h]
  int v67; // [rsp+118h] [rbp-40h]
  int v68; // [rsp+120h] [rbp-38h]
  int v69; // [rsp+128h] [rbp-30h]
  int v70; // [rsp+130h] [rbp-28h]
  int v71; // [rsp+138h] [rbp-20h]
  int v72; // [rsp+140h] [rbp-18h]
  char v73; // [rsp+148h] [rbp-10h]

  result = a1[8];
  if ( !result )
    return result;
  v5 = 0;
  v37 = &v43;
  do
  {
    if ( v5 >= *(_DWORD *)(result - 4) )
      return result;
    v6 = v5;
    v7 = *(_QWORD *)(result + 8LL * v5);
    v8 = *(__int64 **)(*a2 + 48LL);
    v9 = *(unsigned int *)(*a2 + 56LL);
    v10 = *(_DWORD *)(v7 + 12);
    v11 = v9 - 1;
    v9 *= 16;
    v12 = (__int64 *)((char *)v8 + v9);
    v13 = 16LL * (v10 & v11);
    v14 = &v8[(unsigned __int64)v13 / 8];
    if ( v13 == v9 )
    {
LABEL_43:
      while ( v14 != v8 )
      {
        v32 = *v8;
        if ( (unsigned __int64)*v8 > 1 )
        {
          if ( *(_DWORD *)(v32 + 12) == v10 && v7 == v32 )
          {
            v15 = v8;
            goto LABEL_24;
          }
        }
        else if ( !v32 )
        {
          break;
        }
        v8 += 2;
      }
LABEL_11:
      v17 = (void *)a1[4];
      v18 = *(_DWORD *)(v7 + 32);
      v40 = 0;
      v41 = v17;
LABEL_12:
      v19 = sub_186B270(0x38u);
      sub_13478B0(v19, a1[4], v18);
      sub_135F980(*a2, v7, v19);
      v21 = *(_QWORD *)(a1[4] + 864LL);
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = v40;
      if ( v40 )
      {
        v23 = v41;
        v24 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v24 )
          sub_15D7BC0(v23, v22);
      }
      v40 = v21;
      goto LABEL_18;
    }
    v15 = &v8[(unsigned __int64)v13 / 8];
    while ( 1 )
    {
      v16 = *v15;
      if ( (unsigned __int64)*v15 > 1 )
        break;
      if ( !v16 )
        goto LABEL_11;
LABEL_8:
      v15 += 2;
      if ( v12 == v15 )
        goto LABEL_43;
    }
    if ( *(_DWORD *)(v16 + 12) != v10 || v7 != v16 )
      goto LABEL_8;
LABEL_24:
    v20 = (void *)a1[4];
    v19 = v15[1];
    v40 = 0;
    v18 = *(_DWORD *)(v7 + 32);
    v41 = v20;
    if ( !v19 )
      goto LABEL_12;
    v21 = *(_QWORD *)(v19 + 24);
    if ( v21 )
    {
      v39 = 0;
      v43 = v20;
      v44 = 256;
      v45 = 0;
      v48 = 0;
      ptr = v54;
      *(_QWORD *)v53 = 0x1000000000LL;
      *(_OWORD *)v50 = 0;
      *(_OWORD *)v51 = 0;
      sub_14DC230(v37, &v39);
      *(__m128 *)v42 = _mm_loadh_ps((const double *)(a1[10] + 8LL * v5));
      if ( HIBYTE(v44) )
      {
        sub_14E1930((int)v37, v5, (int)v37, v38, v39, v40, (__int64)v41, v42[0], (int)v42[1]);
      }
      else if ( (_BYTE)v44 )
      {
        if ( (unsigned int)sub_14DD000(v37, 2, v42, &v40) != 5 )
          goto LABEL_29;
LABEL_52:
        v33 = sub_15E1AF0((int)v43);
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v34 = v40;
        if ( v40 )
        {
          v35 = v41;
          v24 = (*(_DWORD *)(v40 + 8))-- == 1;
          if ( v24 )
          {
            v36 = v33;
            sub_15D7BC0(v35, v34);
            v33 = v36;
          }
        }
        v40 = v33;
      }
      else if ( (unsigned int)sub_14DC740(
                                (int)v37,
                                2,
                                (int)v42,
                                (int)&v40,
                                v5,
                                v27,
                                (int)v42,
                                (int)v37,
                                v38,
                                v39,
                                v40,
                                v41,
                                (int)v42[0],
                                (int)v42[1],
                                (int)v43,
                                v44,
                                v46,
                                v47,
                                v49,
                                v50[0],
                                v50[2],
                                v51[0],
                                v51[2],
                                (int)ptr,
                                v53[0],
                                v54[0],
                                v54[2],
                                v54[4],
                                v54[6],
                                v55,
                                v56,
                                v57,
                                v58,
                                v59,
                                v60,
                                v61,
                                v62,
                                v63,
                                v64,
                                v65,
                                v66,
                                v67,
                                v68,
                                v69,
                                v70,
                                v71,
                                v72,
                                v73) == 5 )
      {
        goto LABEL_52;
      }
LABEL_29:
      v28 = (int *)ptr;
      v29 = (char *)ptr + 8 * (unsigned int)v53[0];
      v30 = (char *)ptr;
      if ( ptr != v29 )
      {
        do
        {
          v31 = *(_QWORD *)v30;
          v30 += 8;
          *(_BYTE *)(v31 + 6) &= ~1u;
        }
        while ( v30 != v29 );
      }
      v53[0] = 0;
      if ( v28 && v28 != v54 )
        sub_186B220(v28);
      if ( *(_QWORD *)&v51[2] )
        sub_186B220((void *)(*(_QWORD *)&v51[2] - 8LL));
      if ( *(_QWORD *)v51 )
        sub_186B220((void *)(*(_QWORD *)v51 - 8LL));
      if ( *(_QWORD *)&v50[2] )
        sub_186B220((void *)(*(_QWORD *)&v50[2] - 8LL));
      if ( *(_QWORD *)v50 )
        sub_186B220((void *)(*(_QWORD *)v50 - 8LL));
      sub_18572D0(&v39);
      LODWORD(v21) = v40;
    }
LABEL_18:
    sub_1349280(v19, v21, (_DWORD)v20, (_DWORD)v8, v6, (_DWORD)v14);
    v25 = v40;
    if ( v40 )
    {
      v26 = v41;
      v24 = (*(_DWORD *)(v40 + 8))-- == 1;
      if ( v24 )
        sub_15D7BC0(v26, v25);
    }
    result = a1[8];
    ++v5;
  }
  while ( result );
  return result;
}

