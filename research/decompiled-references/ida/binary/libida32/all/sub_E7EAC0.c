__int64 __fastcall sub_E7EAC0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 v9; // r8
  bool v10; // zf
  bool v11; // al
  char v12; // dl
  char v13; // cl
  bool v14; // r13
  __int64 v15; // rsi
  unsigned int v16; // r9d
  int v18; // r12d
  __int64 i; // r13
  unsigned int v20; // eax
  __int64 v21; // rcx
  char *v22; // rcx
  unsigned __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r13
  unsigned int v26; // eax
  __int64 v27; // rcx
  char *v28; // rcx
  char *v29; // rdi
  __int64 v30; // rdx
  int v31; // ebx
  _DWORD *v32; // rcx
  unsigned int *v33; // rax
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // rbp
  int v39; // r12d
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 *v45; // rcx
  unsigned __int64 v46; // rax
  __int64 *v47; // rcx
  __int64 v48; // rbx
  unsigned int v49; // r8d
  __int64 v50; // rbx
  unsigned __int64 v51; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v52; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v53; // [rsp+0h] [rbp-1C0h]
  bool v54; // [rsp+0h] [rbp-1C0h]
  __int64 v55; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v56; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v57; // [rsp+0h] [rbp-1C0h]
  unsigned __int64 v58; // [rsp+8h] [rbp-1B8h]
  __int64 v59; // [rsp+8h] [rbp-1B8h]
  unsigned __int64 v60; // [rsp+8h] [rbp-1B8h]
  bool v61; // [rsp+18h] [rbp-1A8h]
  __int64 v62; // [rsp+20h] [rbp-1A0h]
  unsigned __int64 v63; // [rsp+20h] [rbp-1A0h]
  void **v64; // [rsp+28h] [rbp-198h] BYREF
  _QWORD *v65; // [rsp+30h] [rbp-190h]
  _QWORD v66[4]; // [rsp+38h] [rbp-188h] BYREF
  void *v67[2]; // [rsp+58h] [rbp-168h] BYREF
  __int64 v68; // [rsp+68h] [rbp-158h] BYREF
  void *v69[2]; // [rsp+78h] [rbp-148h] BYREF
  __int64 v70; // [rsp+88h] [rbp-138h] BYREF
  unsigned __int8 *v71[10]; // [rsp+98h] [rbp-128h] BYREF
  void *v72; // [rsp+E8h] [rbp-D8h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-D0h]
  _BYTE v74[64]; // [rsp+F8h] [rbp-C8h] BYREF
  void *ptr; // [rsp+138h] [rbp-88h] BYREF
  __int64 v76; // [rsp+140h] [rbp-80h]
  _BYTE v77[120]; // [rsp+148h] [rbp-78h] BYREF

  if ( a2 == a3 )
    return 0;
  sub_E78530((__int64)v67, a2);
  sub_E78530((__int64)v69, a3);
  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_QWORD *)(a3 + 72);
  v66[0] = a2;
  v66[1] = v67;
  v66[2] = a1;
  v64 = v69;
  v65 = a1;
  if ( BYTE4(v4) >> 7 != BYTE4(v5) >> 7 )
  {
    sub_E75CA0((__int64)&ptr, (__int64)v66, (unsigned int *)a2, 0);
    sub_E74100((unsigned __int8 **)&ptr, (unsigned __int8)*(_DWORD *)(a2 + 76) >> 7);
    sub_AC6300((__int64)&ptr);
    sub_E75D60((__int64)&ptr, (_BYTE ***)&v64, v65, (unsigned int *)a3, 0);
    v15 = (unsigned __int8)*(_DWORD *)(a3 + 76) >> 7;
LABEL_11:
    sub_E74100((unsigned __int8 **)&ptr, v15);
    sub_AC6300((__int64)&ptr);
    v16 = 1;
    goto LABEL_12;
  }
  if ( (v4 & 0x8000000000LL) != 0 && (v5 & 0x8000000000LL) != 0 && (BYTE5(v4) & 1) != (BYTE5(v5) & 1) )
  {
    sub_E75CA0((__int64)&ptr, (__int64)v66, (unsigned int *)a2, 1u);
    sub_E74100((unsigned __int8 **)&ptr, (*(_QWORD *)(a2 + 72) >> 40) & 1LL);
    sub_AC6300((__int64)&ptr);
    sub_E75D60((__int64)&ptr, (_BYTE ***)&v64, v65, (unsigned int *)a3, 1u);
    v15 = (*(_QWORD *)(a3 + 72) >> 40) & 1LL;
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(a2 + 128);
  v7 = *(_QWORD *)(a3 + 128);
  if ( v6 )
  {
    if ( (v6 & 4) != 0 )
    {
      v8 = (__int64 *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v8 )
      {
        v9 = *v8;
        v10 = (*v8 & 0xFFFFFFFFFFFFFFF0LL) == 0;
        v11 = (*v8 & 0xFFFFFFFFFFFFFFF0LL) != 0;
        v12 = v10;
        if ( !v7 )
          goto LABEL_63;
        if ( (v7 & 4) == 0 )
        {
          v13 = 1;
          v14 = 0;
          v7 = 0;
LABEL_22:
          if ( v13 != v12 )
          {
            v54 = v11;
            sub_E75CA0((__int64)&ptr, (__int64)v66, (unsigned int *)a2, 2u);
            sub_E74100((unsigned __int8 **)&ptr, v54);
            sub_AC6300((__int64)&ptr);
            sub_E75D60((__int64)&ptr, (_BYTE ***)&v64, v65, (unsigned int *)a3, 2u);
            v15 = v14;
            goto LABEL_11;
          }
          v61 = v11 && v14;
          if ( v11 && v14 )
          {
            v62 = v9;
            v18 = sub_E747C0(v9);
            if ( v18 != (unsigned int)sub_E747C0(v7) )
            {
              sub_E75CA0((__int64)&ptr, (__int64)v66, (unsigned int *)a2, 3u);
              sub_AC60B0((unsigned __int8 **)&ptr, v62, 8u);
              sub_AC6300((__int64)&ptr);
              sub_E75D60((__int64)&ptr, (_BYTE ***)&v64, v65, (unsigned int *)a3, 3u);
              sub_AC60B0((unsigned __int8 **)&ptr, v7, 8u);
              sub_AC6300((__int64)&ptr);
              v16 = v61;
              goto LABEL_12;
            }
          }
          goto LABEL_26;
        }
LABEL_20:
        v7 &= 0xFFFFFFFFFFFFFFF8LL;
        if ( v7 )
        {
          v7 = *(_QWORD *)v7;
          v14 = (v7 & 0xFFFFFFFFFFFFFFF0LL) != 0;
          v13 = (v7 & 0xFFFFFFFFFFFFFFF0LL) == 0;
          goto LABEL_22;
        }
LABEL_63:
        v13 = 1;
        v14 = 0;
        goto LABEL_22;
      }
    }
  }
  if ( v7 && (v7 & 4) != 0 )
  {
    v12 = 1;
    v11 = 0;
    v9 = 0;
    goto LABEL_20;
  }
LABEL_26:
  v72 = v74;
  v73 = 0x400000000LL;
  for ( i = sub_B6AC30(a2 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_E80DD0(i, a2 + 64) )
    {
      v20 = sub_E74940(i);
      v21 = (unsigned int)v73;
      if ( (unsigned int)v73 >= (unsigned __int64)HIDWORD(v73) )
      {
        v44 = v58 & 0xFFFFFFFF00000000LL | v20;
        v58 = v44;
        if ( HIDWORD(v73) < (unsigned __int64)(unsigned int)v73 + 1 )
        {
          v63 = v44;
          sub_22134E0(&v72, v74, (unsigned int)v73 + 1LL, 16);
          v21 = (unsigned int)v73;
          v44 = v63;
        }
        v45 = (__int64 *)((char *)v72 + 16 * v21);
        *v45 = i;
        v45[1] = v44;
        LODWORD(v73) = v73 + 1;
      }
      else
      {
        v22 = (char *)v72 + 16 * (unsigned int)v73;
        *(_QWORD *)v22 = i;
        *((_DWORD *)v22 + 2) = v20;
        LODWORD(v73) = v73 + 1;
      }
    }
  }
  ptr = v77;
  v76 = 0x400000000LL;
  v25 = sub_B6AC30(a3 + 64);
  if ( v25 )
  {
    do
    {
      if ( (unsigned __int8)sub_E80DD0(v25, a2 + 64) )
      {
        v26 = sub_E74940(v25);
        v27 = (unsigned int)v76;
        if ( (unsigned int)v76 >= (unsigned __int64)HIDWORD(v76) )
        {
          v46 = v51 & 0xFFFFFFFF00000000LL | v26;
          v51 = v46;
          if ( HIDWORD(v76) < (unsigned __int64)(unsigned int)v76 + 1 )
          {
            v60 = v46;
            sub_22134E0(&ptr, v77, (unsigned int)v76 + 1LL, 16);
            v27 = (unsigned int)v76;
            v46 = v60;
          }
          v47 = (__int64 *)((char *)ptr + 16 * v27);
          *v47 = v25;
          v47[1] = v46;
          LODWORD(v76) = v76 + 1;
        }
        else
        {
          v28 = (char *)ptr + 16 * (unsigned int)v76;
          *(_QWORD *)v28 = v25;
          *((_DWORD *)v28 + 2) = v26;
          LODWORD(v76) = v76 + 1;
        }
      }
      v23 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v25 = v23;
    }
    while ( v23 );
  }
  if ( (_DWORD)v73 != (_DWORD)v76 )
  {
    sub_E75CA0((__int64)v71, (__int64)v66, (unsigned int *)a2, 4u);
    sub_E74100(v71, (int)v73);
    sub_AC6300((__int64)v71);
    sub_E75D60((__int64)v71, (_BYTE ***)&v64, v65, (unsigned int *)a3, 4u);
    sub_E74100(v71, (int)v76);
    sub_AC6300((__int64)v71);
    v29 = (char *)ptr;
    v16 = 1;
    goto LABEL_50;
  }
  v29 = (char *)ptr;
  if ( !(_DWORD)v73 )
  {
LABEL_47:
    v16 = 0;
    goto LABEL_50;
  }
  v30 = 0;
  v55 = (unsigned int)(v73 - 1);
  while ( 1 )
  {
    v31 = v30;
    v32 = (char *)v72 + 16 * v30;
    v33 = (unsigned int *)&v29[16 * v30];
    v34 = v33[2];
    if ( v32[2] != (_DWORD)v34 )
    {
      v35 = *(_QWORD *)v33;
      v36 = *(_QWORD *)v32;
      if ( *(_QWORD *)(*(_QWORD *)v32 + 40LL) != *(_QWORD *)(*(_QWORD *)v33 + 40LL) )
      {
        v48 = (unsigned int)(v30 + 1);
        sub_E75DF0((__int64)v71, (__int64)v66, (unsigned int *)v36, 5u);
        sub_AC60B0(v71, v48, 3u);
        sub_E74340(v71, v36);
        sub_AC6300((__int64)v71);
        v49 = 5;
LABEL_65:
        sub_E75EB0((__int64)v71, (_BYTE ***)&v64, v65, (unsigned int *)v35, v49);
        sub_AC60B0(v71, v48, 3u);
        sub_E74340(v71, v35);
        sub_AC6300((__int64)v71);
        v29 = (char *)ptr;
        v16 = 1;
        goto LABEL_50;
      }
      v37 = *(_QWORD *)(v36 + 72);
      v38 = *(_QWORD *)(v35 + 72);
      if ( v38 | v37 )
        break;
    }
LABEL_46:
    if ( v55 == v30 )
      goto LABEL_47;
    ++v30;
  }
  LOBYTE(v34) = v38 == 0;
  LOBYTE(v24) = v38 == 0 || v37 == 0;
  if ( !(_BYTE)v24 )
  {
    v59 = v30;
    v39 = sub_E74880(*(_QWORD *)(v36 + 72), v34, v30, (__int64)v32, v23, v24);
    if ( v39 != (unsigned int)sub_E74880(v38, v34, v40, v41, v42, v43) )
    {
      v48 = (unsigned int)(v31 + 1);
      sub_E75DF0((__int64)v71, (__int64)v66, (unsigned int *)v36, 7u);
      sub_AC60B0(v71, v48, 3u);
      sub_E74340(v71, v36);
      sub_AC6300((__int64)v71);
      v49 = 7;
      goto LABEL_65;
    }
    v29 = (char *)ptr;
    v30 = v59;
    goto LABEL_46;
  }
  v50 = (unsigned int)(v30 + 1);
  sub_E75DF0((__int64)v71, (__int64)v66, (unsigned int *)v36, 6u);
  sub_AC60B0(v71, v50, 3u);
  sub_E74340(v71, v36);
  sub_E74100(v71, v37 != 0);
  sub_AC6300((__int64)v71);
  sub_E75EB0((__int64)v71, (_BYTE ***)&v64, v65, (unsigned int *)v35, 6u);
  sub_AC60B0(v71, v50, 3u);
  sub_E74340(v71, v35);
  sub_E74100(v71, v38 != 0);
  sub_AC6300((__int64)v71);
  v29 = (char *)ptr;
  v16 = v38 == 0 || v37 == 0;
LABEL_50:
  if ( v29 != v77 )
  {
    v56 = v16;
    free(v29);
    v16 = v56;
  }
  if ( v72 != v74 )
  {
    v57 = v16;
    free(v72);
    v16 = v57;
  }
LABEL_12:
  if ( v69[0] != &v70 )
  {
    v52 = v16;
    operator delete(v69[0]);
    v16 = v52;
  }
  if ( v67[0] != &v68 )
  {
    v53 = v16;
    operator delete(v67[0]);
    return v53;
  }
  return v16;
}

