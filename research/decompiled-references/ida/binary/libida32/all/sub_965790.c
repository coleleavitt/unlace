_QWORD *__fastcall sub_965790(__int64 *a1, __int64 a2, const void *a3, size_t a4)
{
  void **v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // r10d
  __int64 *v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r15
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  char *v26; // rdx
  _QWORD *v27; // r11
  unsigned int v28; // eax
  __int64 i; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // r12
  int v33; // edx
  unsigned __int64 v34; // rcx
  unsigned __int8 v35; // cl
  void **v36; // rbx
  void **v37; // rdi
  void **v38; // rbp
  _QWORD *v40; // rax
  __int64 v41; // rax
  unsigned int v42; // [rsp+8h] [rbp-1D0h]
  unsigned int v43; // [rsp+8h] [rbp-1D0h]
  __int64 *v44; // [rsp+10h] [rbp-1C8h]
  __int64 *v45; // [rsp+10h] [rbp-1C8h]
  _QWORD *v46; // [rsp+18h] [rbp-1C0h]
  __int64 *v47[2]; // [rsp+28h] [rbp-1B0h] BYREF
  void *v48[3]; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v49; // [rsp+50h] [rbp-188h]
  __int64 v50; // [rsp+58h] [rbp-180h] BYREF
  void *v51[2]; // [rsp+D8h] [rbp-100h] BYREF
  int v52; // [rsp+E8h] [rbp-F0h]
  char v53; // [rsp+ECh] [rbp-ECh]
  _QWORD v54[5]; // [rsp+F0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+118h] [rbp-C0h]
  __int64 v56; // [rsp+120h] [rbp-B8h]
  _DWORD v57[26]; // [rsp+128h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+190h] [rbp-48h]
  __int16 v59; // [rsp+198h] [rbp-40h]
  char v60; // [rsp+19Ah] [rbp-3Eh]

  v47[1] = nullptr;
  v48[2] = nullptr;
  v49 = 1;
  v48[1] = v48;
  v48[0] = v48;
  v7 = (void **)&v50;
  do
  {
    *v7 = nullptr;
    v7 += 2;
  }
  while ( v7 != v51 );
  v51[1] = &byte_4;
  v51[0] = v54;
  ptr = v57;
  v56 = 0x400000000LL;
  v59 = 0;
  v9 = *a1;
  v52 = 0;
  v10 = *(_QWORD *)(v9 + 17504);
  v53 = 1;
  v54[4] = 0;
  v57[24] = 0;
  v58 = 0;
  v60 = 0;
  v11 = sub_2220DF0(a3, a4);
  v13 = sub_2220F70(v10, a3, a4, v11);
  v14 = (__int64 *)(*(_QWORD *)v10 + 8LL * v13);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_965750(v47, v14, 0);
      v17 = *v47[0];
      v18 = *(_QWORD *)(*v47[0] + 8);
      if ( v18 )
        goto LABEL_19;
      goto LABEL_6;
    }
    --*(_DWORD *)(v10 + 16);
  }
  v24 = *(_QWORD *)(v10 + 24);
  *(_QWORD *)(v10 + 104) += a4 + 17;
  v25 = (_QWORD *)((v24 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v26 = (char *)v25 + a4 + 17;
  if ( *(_QWORD *)(v10 + 32) >= (unsigned __int64)v26 && v24 )
  {
    *(_QWORD *)(v10 + 24) = v26;
  }
  else
  {
    v45 = v14;
    v43 = v13;
    v41 = sub_962430(v10 + 24, a4 + 17, a4 + 17, 3, v12, (__int64)v14);
    v14 = v45;
    v13 = v43;
    v25 = (_QWORD *)v41;
  }
  v27 = v25 + 2;
  if ( a4 )
  {
    v46 = v25;
    v44 = v14;
    v42 = v13;
    v40 = memcpy(v25 + 2, a3, a4);
    v25 = v46;
    v14 = v44;
    v13 = v42;
    v27 = v40;
  }
  *((_BYTE *)v27 + a4) = 0;
  *v25 = a4;
  v25[1] = 0;
  *v14 = (__int64)v25;
  ++*(_DWORD *)(v10 + 12);
  v28 = sub_2221390(v10, v13);
  sub_965750(v47, (__int64 *)(*(_QWORD *)v10 + 8LL * v28), 0);
  v17 = *v47[0];
  v18 = *(_QWORD *)(*v47[0] + 8);
  if ( !v18 )
  {
LABEL_6:
    v19 = *(_QWORD *)(v10 + 120);
    if ( !v19
      || (v20 = (*(__int64 (__fastcall **)(__int64, const void *, size_t))(*(_QWORD *)v19 + 16LL))(v19, a3, a4),
          *(_QWORD *)(v17 + 8) = v20,
          (v18 = v20) == 0) )
    {
      v21 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 104) += 24LL;
      v18 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v10 + 32) >= v18 + 24 && v21 )
      {
        *(_QWORD *)(v10 + 24) = v18 + 24;
        v22 = (_QWORD *)((v21 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v22 = (_QWORD *)sub_962430(v10 + 24, 24, 24, 3, v15, v16);
        v18 = (unsigned __int64)v22;
      }
      v23 = *v22 & 0xFFFFF80000000000LL;
      v22[1] = 0;
      *v22 = v23 | 0x1FFFC05;
      *(_QWORD *)(v17 + 8) = v22;
      v22[2] = v17;
    }
  }
LABEL_19:
  for ( i = sub_B70930(a2 + 64, v18); i; i = v31[1] )
  {
    v30 = i;
    v31 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFF8LL);
    v32 = v31;
    v33 = (v30 >> 2) & 1;
    if ( v33 )
    {
      v32 = nullptr;
      if ( v31 )
        v32 = (_QWORD *)*v31;
    }
    v34 = v32[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v32[2] & 4) != 0 )
      v34 = *(_QWORD *)v34;
    v35 = *(_BYTE *)(v34 + 8) & 0x7F;
    if ( v35 > 0x12u )
    {
      if ( ((v35 + 94) & 0x7Fu) > 5 )
        goto LABEL_27;
    }
    else if ( ((1LL << v35) & 0x40182) == 0 )
    {
      goto LABEL_27;
    }
    if ( !v33 )
      break;
    if ( !v31 )
      break;
  }
  v32 = nullptr;
LABEL_27:
  if ( ptr != v57 )
    free(ptr);
  if ( !v53 )
    free(v51[0]);
  if ( (v49 & 1) == 0 )
    operator delete();
  v36 = (void **)v48[0];
  if ( v48[0] != v48 )
  {
    while ( 1 )
    {
      v37 = (void **)v36[2];
      v38 = (void **)*v36;
      if ( v37 == v36 + 4 )
      {
        operator delete(v36);
        if ( v38 == v48 )
          return v32;
      }
      else
      {
        free(v37);
        operator delete(v36);
        if ( v38 == v48 )
          return v32;
      }
      v36 = v38;
    }
  }
  return v32;
}

