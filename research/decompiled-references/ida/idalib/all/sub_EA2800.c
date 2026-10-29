__int64 __fastcall sub_EA2800(_QWORD *a1, __int64 a2, __int64 a3)
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
  __int64 j; // r13
  unsigned int v24; // eax
  __int64 v25; // rcx
  char *v26; // rcx
  char *v27; // rdi
  __int64 v28; // rdx
  int v29; // ebx
  _DWORD *v30; // rcx
  char *v31; // rax
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rbp
  int v36; // r12d
  unsigned __int64 v37; // rax
  __int64 *v38; // rcx
  unsigned __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // r8d
  __int64 v43; // rbx
  unsigned __int64 v44; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v45; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v46; // [rsp+0h] [rbp-1C0h]
  bool v47; // [rsp+0h] [rbp-1C0h]
  __int64 v48; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v49; // [rsp+0h] [rbp-1C0h]
  unsigned __int8 v50; // [rsp+0h] [rbp-1C0h]
  unsigned __int64 v51; // [rsp+8h] [rbp-1B8h]
  __int64 v52; // [rsp+8h] [rbp-1B8h]
  unsigned __int64 v53; // [rsp+8h] [rbp-1B8h]
  bool v54; // [rsp+18h] [rbp-1A8h]
  __int64 v55; // [rsp+20h] [rbp-1A0h]
  unsigned __int64 v56; // [rsp+20h] [rbp-1A0h]
  void **v57; // [rsp+28h] [rbp-198h] BYREF
  _QWORD *v58; // [rsp+30h] [rbp-190h]
  _QWORD v59[4]; // [rsp+38h] [rbp-188h] BYREF
  void *v60[2]; // [rsp+58h] [rbp-168h] BYREF
  __int64 v61; // [rsp+68h] [rbp-158h] BYREF
  void *v62[2]; // [rsp+78h] [rbp-148h] BYREF
  __int64 v63; // [rsp+88h] [rbp-138h] BYREF
  unsigned __int8 *v64[10]; // [rsp+98h] [rbp-128h] BYREF
  void *v65; // [rsp+E8h] [rbp-D8h] BYREF
  __int64 v66; // [rsp+F0h] [rbp-D0h]
  _BYTE v67[64]; // [rsp+F8h] [rbp-C8h] BYREF
  void *ptr; // [rsp+138h] [rbp-88h] BYREF
  __int64 v69; // [rsp+140h] [rbp-80h]
  _BYTE v70[120]; // [rsp+148h] [rbp-78h] BYREF

  if ( a2 == a3 )
    return 0;
  sub_E9C270((__int64)v60, a2);
  sub_E9C270((__int64)v62, a3);
  v4 = *(_QWORD *)(a2 + 72);
  v5 = *(_QWORD *)(a3 + 72);
  v59[0] = a2;
  v59[1] = v60;
  v59[2] = a1;
  v57 = v62;
  v58 = a1;
  if ( BYTE4(v4) >> 7 != BYTE4(v5) >> 7 )
  {
    sub_E999E0((__int64)&ptr, (__int64)v59, (unsigned int *)a2, 0);
    sub_E97E40((unsigned __int8 **)&ptr, (unsigned __int8)*(_DWORD *)(a2 + 76) >> 7);
    sub_AEA040((__int64)&ptr);
    sub_E99AA0((__int64)&ptr, (_BYTE ***)&v57, v58, (unsigned int *)a3, 0);
    v15 = (unsigned __int8)*(_DWORD *)(a3 + 76) >> 7;
LABEL_11:
    sub_E97E40((unsigned __int8 **)&ptr, v15);
    sub_AEA040((__int64)&ptr);
    v16 = 1;
    goto LABEL_12;
  }
  if ( (v4 & 0x8000000000LL) != 0 && (v5 & 0x8000000000LL) != 0 && (BYTE5(v4) & 1) != (BYTE5(v5) & 1) )
  {
    sub_E999E0((__int64)&ptr, (__int64)v59, (unsigned int *)a2, 1u);
    sub_E97E40((unsigned __int8 **)&ptr, (*(_QWORD *)(a2 + 72) >> 40) & 1LL);
    sub_AEA040((__int64)&ptr);
    sub_E99AA0((__int64)&ptr, (_BYTE ***)&v57, v58, (unsigned int *)a3, 1u);
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
            v47 = v11;
            sub_E999E0((__int64)&ptr, (__int64)v59, (unsigned int *)a2, 2u);
            sub_E97E40((unsigned __int8 **)&ptr, v47);
            sub_AEA040((__int64)&ptr);
            sub_E99AA0((__int64)&ptr, (_BYTE ***)&v57, v58, (unsigned int *)a3, 2u);
            v15 = v14;
            goto LABEL_11;
          }
          v54 = v11 && v14;
          if ( v11 && v14 )
          {
            v55 = v9;
            v18 = sub_E98500(v9);
            if ( v18 != (unsigned int)sub_E98500(v7) )
            {
              sub_E999E0((__int64)&ptr, (__int64)v59, (unsigned int *)a2, 3u);
              sub_AE9DF0((unsigned __int8 **)&ptr, v55, 8u);
              sub_AEA040((__int64)&ptr);
              sub_E99AA0((__int64)&ptr, (_BYTE ***)&v57, v58, (unsigned int *)a3, 3u);
              sub_AE9DF0((unsigned __int8 **)&ptr, v7, 8u);
              sub_AEA040((__int64)&ptr);
              v16 = v54;
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
  v65 = v67;
  v66 = 0x400000000LL;
  for ( i = sub_B8E970(a2 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_EA4B10(i, a2 + 64) )
    {
      v20 = sub_E98680(i);
      v21 = (unsigned int)v66;
      if ( (unsigned int)v66 >= (unsigned __int64)HIDWORD(v66) )
      {
        v37 = v51 & 0xFFFFFFFF00000000LL | v20;
        v51 = v37;
        if ( HIDWORD(v66) < (unsigned __int64)(unsigned int)v66 + 1 )
        {
          v56 = v37;
          sub_2237220(&v65, v67, (unsigned int)v66 + 1LL, 16);
          v21 = (unsigned int)v66;
          v37 = v56;
        }
        v38 = (__int64 *)((char *)v65 + 16 * v21);
        *v38 = i;
        v38[1] = v37;
        LODWORD(v66) = v66 + 1;
      }
      else
      {
        v22 = (char *)v65 + 16 * (unsigned int)v66;
        *(_QWORD *)v22 = i;
        *((_DWORD *)v22 + 2) = v20;
        LODWORD(v66) = v66 + 1;
      }
    }
  }
  ptr = v70;
  v69 = 0x400000000LL;
  for ( j = sub_B8E970(a3 + 64); j; j = *(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF8LL )
  {
    if ( (unsigned __int8)sub_EA4B10(j, a2 + 64) )
    {
      v24 = sub_E98680(j);
      v25 = (unsigned int)v69;
      if ( (unsigned int)v69 >= (unsigned __int64)HIDWORD(v69) )
      {
        v39 = v44 & 0xFFFFFFFF00000000LL | v24;
        v44 = v39;
        if ( HIDWORD(v69) < (unsigned __int64)(unsigned int)v69 + 1 )
        {
          v53 = v39;
          sub_2237220(&ptr, v70, (unsigned int)v69 + 1LL, 16);
          v25 = (unsigned int)v69;
          v39 = v53;
        }
        v40 = (__int64 *)((char *)ptr + 16 * v25);
        *v40 = j;
        v40[1] = v39;
        LODWORD(v69) = v69 + 1;
      }
      else
      {
        v26 = (char *)ptr + 16 * (unsigned int)v69;
        *(_QWORD *)v26 = j;
        *((_DWORD *)v26 + 2) = v24;
        LODWORD(v69) = v69 + 1;
      }
    }
  }
  if ( (_DWORD)v66 != (_DWORD)v69 )
  {
    sub_E999E0((__int64)v64, (__int64)v59, (unsigned int *)a2, 4u);
    sub_E97E40(v64, (int)v66);
    sub_AEA040((__int64)v64);
    sub_E99AA0((__int64)v64, (_BYTE ***)&v57, v58, (unsigned int *)a3, 4u);
    sub_E97E40(v64, (int)v69);
    sub_AEA040((__int64)v64);
    v27 = (char *)ptr;
    v16 = 1;
    goto LABEL_50;
  }
  v27 = (char *)ptr;
  if ( !(_DWORD)v66 )
  {
LABEL_47:
    v16 = 0;
    goto LABEL_50;
  }
  v28 = 0;
  v48 = (unsigned int)(v66 - 1);
  while ( 1 )
  {
    v29 = v28;
    v30 = (char *)v65 + 16 * v28;
    v31 = &v27[16 * v28];
    if ( v30[2] != *((_DWORD *)v31 + 2) )
    {
      v32 = *(_QWORD *)v31;
      v33 = *(_QWORD *)v30;
      if ( *(_QWORD *)(*(_QWORD *)v30 + 40LL) != *(_QWORD *)(*(_QWORD *)v31 + 40LL) )
      {
        v41 = (unsigned int)(v28 + 1);
        sub_E99B30((__int64)v64, (__int64)v59, (unsigned int *)v33, 5u);
        sub_AE9DF0(v64, v41, 3u);
        sub_E98080(v64, v33);
        sub_AEA040((__int64)v64);
        v42 = 5;
LABEL_65:
        sub_E99BF0((__int64)v64, (_BYTE ***)&v57, v58, (unsigned int *)v32, v42);
        sub_AE9DF0(v64, v41, 3u);
        sub_E98080(v64, v32);
        sub_AEA040((__int64)v64);
        v27 = (char *)ptr;
        v16 = 1;
        goto LABEL_50;
      }
      v34 = *(_QWORD *)(v33 + 72);
      v35 = *(_QWORD *)(v32 + 72);
      if ( v35 | v34 )
        break;
    }
LABEL_46:
    if ( v48 == v28 )
      goto LABEL_47;
    ++v28;
  }
  if ( v35 != 0 && v34 != 0 )
  {
    v52 = v28;
    v36 = sub_E985C0(*(_QWORD *)(v33 + 72));
    if ( v36 != (unsigned int)sub_E985C0(v35) )
    {
      v41 = (unsigned int)(v29 + 1);
      sub_E99B30((__int64)v64, (__int64)v59, (unsigned int *)v33, 7u);
      sub_AE9DF0(v64, v41, 3u);
      sub_E98080(v64, v33);
      sub_AEA040((__int64)v64);
      v42 = 7;
      goto LABEL_65;
    }
    v27 = (char *)ptr;
    v28 = v52;
    goto LABEL_46;
  }
  v43 = (unsigned int)(v28 + 1);
  sub_E99B30((__int64)v64, (__int64)v59, (unsigned int *)v33, 6u);
  sub_AE9DF0(v64, v43, 3u);
  sub_E98080(v64, v33);
  sub_E97E40(v64, v34 != 0);
  sub_AEA040((__int64)v64);
  sub_E99BF0((__int64)v64, (_BYTE ***)&v57, v58, (unsigned int *)v32, 6u);
  sub_AE9DF0(v64, v43, 3u);
  sub_E98080(v64, v32);
  sub_E97E40(v64, v35 != 0);
  sub_AEA040((__int64)v64);
  v27 = (char *)ptr;
  v16 = v35 == 0 || v34 == 0;
LABEL_50:
  if ( v27 != v70 )
  {
    v49 = v16;
    free(v27);
    v16 = v49;
  }
  if ( v65 != v67 )
  {
    v50 = v16;
    free(v65);
    v16 = v50;
  }
LABEL_12:
  if ( v62[0] != &v63 )
  {
    v45 = v16;
    operator delete(v62[0]);
    v16 = v45;
  }
  if ( v60[0] != &v61 )
  {
    v46 = v16;
    operator delete(v60[0]);
    return v46;
  }
  return v16;
}
