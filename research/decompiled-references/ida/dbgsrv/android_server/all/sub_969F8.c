/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_969F8
// Address: 0x00000000000969F8

//----- (00000000000969F8) ----------------------------------------------------
__int64 __fastcall sub_969F8(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // x21
  __int64 v6; // x23
  unsigned int v8; // w8
  bool v10; // w22
  bool v11; // w24
  int v12; // w1
  __int64 v13; // x0
  int v14; // w1
  bool v15; // w24
  __int64 v16; // x3
  int v17; // w25
  __int64 v18; // x22
  unsigned __int64 v19; // x2
  void *v20; // x0
  __int64 align; // x23
  char v22; // w25
  unsigned int v23; // w24
  int v24; // w8
  void **v25; // x23
  __int64 v26; // x28
  __int64 v27; // x29
  unsigned int v28; // w27
  int v29; // w25
  __int64 v30; // x22
  __int64 v31; // x8
  __int64 v32; // x24
  int v33; // w26
  unsigned __int64 v34; // x2
  char *v35; // x0
  _DWORD *v36; // x22
  char *v37; // x8
  __int64 v38; // x2
  int v39; // w9
  unsigned int v40; // w10
  int v41; // w11
  __int64 v42; // x9
  unsigned int v43; // w9
  int v44; // w10
  int v45; // w10
  _QWORD *v46; // x8
  __int64 v47; // x0
  unsigned int v48; // w22
  __int64 v49; // x20
  int v50; // w8
  int v51; // w9
  __int64 v52; // x8
  _QWORD *v53; // x21
  _QWORD *v54; // x0
  int v56; // [xsp+4h] [xbp-9Ch]
  pthread_mutex_t ptr; // [xsp+20h] [xbp-80h] BYREF
  int8x16x2_t v59; // 0:q0.32
  int8x16x2_t v60; // 0:q0.32

  LODWORD(v5) = a4;
  v6 = a3;
  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(a1 + 16) = 0;
  memset(&ptr, 0, 24);
  v8 = *(_DWORD *)(a1 + 128);
  v10 = v8 == *(_DWORD *)(a1 + 132);
  v11 = v8 < 0x1000;
  qlseek(a2, a3, 0);
  if ( v6 == -1 )
    v6 = qlseek(a2, 0, 1);
  v13 = qlsize(a2, v12, v59);
  v15 = v11 && v10;
  v16 = (int)v5;
  if ( ((v13 - v6) | v6) < 0 )
  {
    LODWORD(v5) = 0;
    goto LABEL_11;
  }
  if ( (_DWORD)v5 )
  {
    if ( (v5 & 0x80000000) == 0 && v13 - v6 >= (unsigned __int64)(40LL * (int)v5) )
    {
LABEL_13:
      v17 = 0;
      do
      {
        v18 = *(&ptr.__align + 1);
        v19 = *(&ptr.__align + 1) + 1;
        if ( *(&ptr.__align + 2) >= (unsigned __int64)(*(&ptr.__align + 1) + 1) )
        {
          align = ptr.__align;
        }
        else
        {
          v20 = qvector_reserve(&ptr, (void *)ptr.__align, v19, 0x28u);
          v18 = *(&ptr.__align + 1);
          align = (__int64)v20;
          ptr.__align = (__int64)v20;
          v19 = *(&ptr.__align + 1) + 1;
        }
        *(&ptr.__align + 1) = v19;
        if ( qlread(a2, (void *)(align + 40 * v18), 0x28u) != 40 )
        {
          v23 = -1;
          goto LABEL_79;
        }
        if ( *(_DWORD *)(align + 40 * v18 + 12) != *(_DWORD *)(align + 40 * v18 + 20)
          || *(_DWORD *)(align + 40 * v18 + 8) > *(_DWORD *)(align + 40 * v18 + 16) )
        {
          v15 = 0;
        }
        ++v17;
      }
      while ( v17 < (int)v5 );
      v22 = 1;
      if ( v15 )
        goto LABEL_26;
      goto LABEL_30;
    }
    v5 = (v13 - v6) / 0x28uLL;
LABEL_11:
    if ( (unsigned int)sub_5C340(
                         1,
                         (__int64)"AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s",
                         "Number of sections",
                         v16,
                         (int)v5,
                         ". Do you want to continue with the new value?") != 1 )
      sub_5BDE0(0);
    if ( (int)v5 < 1 )
    {
      v22 = 0;
      if ( v15 )
      {
LABEL_26:
        v56 = 1;
        goto LABEL_31;
      }
      goto LABEL_30;
    }
    goto LABEL_13;
  }
  LODWORD(v5) = 0;
  if ( v15 )
  {
    v22 = 0;
    v56 = 1;
    goto LABEL_31;
  }
  v22 = 0;
LABEL_30:
  v56 = 0;
  if ( *(_DWORD *)(a1 + 72) != 23126 )
  {
LABEL_35:
    v24 = 512;
    goto LABEL_36;
  }
LABEL_31:
  v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v23 )
    goto LABEL_79;
  if ( !v56 )
  {
    v56 = 0;
    goto LABEL_35;
  }
  v24 = *(_DWORD *)(a1 + 132);
  v56 = 1;
LABEL_36:
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 < 4 || *(_DWORD *)(a1 + 72) == 23126 )
    v24 = 1;
  v25 = (void **)(a1 + 8);
  if ( (v22 & 1) != 0 )
  {
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = -v24;
    while ( 1 )
    {
      v30 = ptr.__align;
      v31 = *(_QWORD *)(a1 + 16);
      v32 = ptr.__align + v26;
      v33 = *(_DWORD *)(ptr.__align + v26 + 20);
      v34 = v31 + 1;
      if ( *(_QWORD *)(a1 + 24) >= (unsigned __int64)(v31 + 1) )
      {
        v35 = (char *)*v25;
      }
      else
      {
        v35 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 8), *v25, v34, 0x20u);
        v31 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 8) = v35;
        v34 = v31 + 1;
      }
      *(_QWORD *)(a1 + 16) = v34;
      v36 = (_DWORD *)(v30 + v26);
      v37 = &v35[32 * v31];
      v38 = v33 & (unsigned int)v29;
      *(_QWORD *)v37 = (unsigned int)v36[3];
      v39 = v36[2];
      v40 = v36[4];
      v41 = *(_DWORD *)(a1 + 128);
      if ( !v39 )
        v39 = v36[4];
      if ( !v41 )
        v41 = 1;
      LODWORD(v42) = (v39 + v41 - 1) & -v41;
      if ( (unsigned int)v42 <= v40 )
        v42 = (unsigned int)v42;
      else
        v42 = v40;
      *((_QWORD *)v37 + 3) = v42;
      v43 = v42 + v36[3];
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 >= 4 )
      {
        if ( *(_DWORD *)(a1 + 128) == 4096 )
        {
          v44 = 511;
        }
        else
        {
          v45 = *(_DWORD *)(a1 + 132);
          if ( v45 )
            v44 = v45 - 1;
          else
            v44 = 511;
        }
        v43 = (v44 + v43) & ~v44;
      }
      *((_QWORD *)v37 + 2) = v38;
      v46 = v37 + 16;
      *(v46 - 1) = v43;
      if ( *(_DWORD *)(a1 + 72) == 23126 )
        *v46 = v38 + 40 - *(unsigned __int16 *)(a1 + 38);
      v23 = (**(__int64 (__fastcall ***)(__int64, __int64))a5)(a5, v32);
      if ( v23 )
        break;
      ++v27;
      v26 += 40;
      if ( v28 < v36[2] + v36[3] )
        v28 = v36[2] + v36[3];
      if ( v27 >= (int)v5 )
        goto LABEL_66;
    }
  }
  else
  {
    v28 = 0;
LABEL_66:
    if ( *(_DWORD *)(a1 + 72) == 23126 )
      *(_DWORD *)(a1 + 152) = v28;
    if ( (((_DWORD)v5 != 0) & (v56 ^ 1)) != 0 )
    {
      v23 = 0;
    }
    else
    {
      v47 = qlsize(a2, v14, v60);
      v48 = *(_DWORD *)(a1 + 152);
      v49 = v47;
      if ( (unsigned int)*(unsigned __int16 *)(a1 + 164) - 10 >= 4 )
      {
        v50 = 511;
        if ( *(_DWORD *)(a1 + 128) != 4096 )
        {
          v51 = *(_DWORD *)(a1 + 132);
          if ( v51 )
            v50 = v51 - 1;
          else
            v50 = 511;
        }
        v48 = (v50 + v48) & ~v50;
      }
      v52 = *(_QWORD *)(a1 + 16);
      v53 = *(_QWORD **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v52 + 1) )
      {
        v54 = qvector_reserve((pthread_mutex_t *)(a1 + 8), *(void **)(a1 + 8), v52 + 1, 0x20u);
        v52 = *(_QWORD *)(a1 + 16);
        v53 = v54;
        *(_QWORD *)(a1 + 8) = v54;
      }
      memmove(v53 + 4, v53, 32 * v52);
      *v53 = 0;
      v53[1] = v48;
      v53[2] = 0;
      v53[3] = v49;
      v23 = 0;
      ++*(_QWORD *)(a1 + 16);
    }
  }
LABEL_79:
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v23;
}
// 96A84: variable 'v12' is possibly undefined
// 96A84: variable 'v59' is possibly undefined
// 96DFC: variable 'v14' is possibly undefined
// 96DFC: variable 'v60' is possibly undefined
