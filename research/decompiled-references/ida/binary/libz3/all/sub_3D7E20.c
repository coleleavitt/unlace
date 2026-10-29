__int64 __fastcall sub_3D7E20(_QWORD *a1)
{
  __int64 v2; // r14
  int v3; // eax
  int v4; // edi
  _QWORD *v5; // rbx
  _QWORD *v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  void (__fastcall ***v10)(void *); // rax
  void (__fastcall ***v11)(void *); // r13
  _QWORD *v12; // rcx
  void *v13; // r15
  bool v14; // zf
  _QWORD *v15; // r15
  _QWORD *v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // r15d
  _QWORD *v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rdi
  char v25; // dl
  unsigned int v26; // edx
  int v27; // edx
  __int64 *v28; // rax
  char *v29; // rbx
  char *v30; // r12
  _DWORD *v31; // rbp
  void *v32; // rbx
  _Unwind_Exception *v34; // [rsp+0h] [rbp-108h]
  _DWORD *v35; // [rsp+8h] [rbp-100h]
  unsigned __int64 v36; // [rsp+8h] [rbp-100h]
  int v37; // [rsp+8h] [rbp-100h]
  _QWORD *v38; // [rsp+8h] [rbp-100h]
  _QWORD *v39; // [rsp+8h] [rbp-100h]
  int v40; // [rsp+10h] [rbp-F8h]
  void (__fastcall ***v41)(void *); // [rsp+10h] [rbp-F8h]
  __int64 v42; // [rsp+18h] [rbp-F0h]
  __int64 v43; // [rsp+20h] [rbp-E8h]
  void *v44; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+38h] [rbp-D0h] BYREF
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+48h] [rbp-C0h]
  _BYTE v48[184]; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *a1;
  v3 = *(_DWORD *)(*a1 + 712LL);
  *(_DWORD *)(*a1 + 712LL) = 0;
  HIDWORD(v43) = v3;
  v35 = (_DWORD *)sub_186B270(0x80u);
  sub_ED2A30(v35, v2, 0, 0, 0);
  v4 = (int)v35;
  v5 = (_QWORD *)a1[1];
  ++v35[8];
  v44 = v35;
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        sub_EDBA20(v4, *v5++, 0, v34, (int)v35, v40, v42, v43);
        if ( v6 == v5 )
          break;
        v4 = (int)v44;
      }
    }
  }
  v45 = 0;
  ptr = v48;
  v47 = 0x1000000000LL;
  v7 = sub_CF56E0(v2, (unsigned int)&v45);
  v41 = (void (__fastcall ***)(void *))v7;
  if ( v7 )
    ++*(_DWORD *)(v7 + 8);
  sub_18572D0(&v45);
  v45 = 0;
  v8 = (_QWORD *)sub_186B270(0x160u);
  *v8 = qword_1C636A0;
  v8[2] = qword_1C63778;
  *((_DWORD *)v8 + 2) = 0;
  *((_DWORD *)v8 + 6) = 0;
  *((_BYTE *)v8 + 28) = 0;
  v8[4] = 0;
  *((_DWORD *)v8 + 10) = 0;
  v8[6] = &off_1C62200;
  v8[8] = 0;
  v8[9] = 0;
  v8[11] = 0;
  v8[12] = 0;
  v8[13] = v2;
  v8[14] = 0;
  v8[15] = 0;
  v8[16] = 0;
  sub_180C0A0(v8 + 17);
  v8[22] = v2;
  *v8 = &off_1C4C5D8;
  v8[2] = &off_1C4C6F0;
  sub_1858590(v8 + 23, &v45);
  *((_OWORD *)v8 + 12) = 0;
  sub_180C0A0(v8 + 26);
  v9 = *(_QWORD *)(v2 + 856);
  v8[31] = 0;
  v8[32] = v2;
  v8[33] = v9;
  v8[34] = 0;
  v8[35] = 0;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  ++*((_DWORD *)v8 + 2);
  v8[38] = sub_2339C0;
  v8[39] = v2;
  v8[40] = 0;
  v8[41] = 0;
  v8[42] = 0;
  *((_BYTE *)v8 + 344) = 0;
  *((_OWORD *)v8 + 18) = 0;
  sub_18572D0(&v45);
  v10 = (void (__fastcall ***)(void *))sub_EE7A70(v41, v8);
  v11 = v10;
  if ( v10 )
    ++*((_DWORD *)v10 + 2);
  ((void (__fastcall *)(void (__fastcall ***)(void *), void **, void **))(*v10)[16])(v10, &v44, &ptr);
  v12 = *(_QWORD **)ptr;
  if ( *(_QWORD *)ptr )
    ++*((_DWORD *)v12 + 8);
  v13 = v44;
  if ( v44 )
  {
    v14 = (*((_DWORD *)v44 + 8))-- == 1;
    if ( v14 )
    {
      v39 = v12;
      sub_ED44E0(v13);
      sub_186B220(v13);
      v12 = v39;
    }
  }
  v15 = (_QWORD *)a1[1];
  v44 = v12;
  if ( v15 )
  {
    v16 = &v15[*((unsigned int *)v15 - 1)];
    if ( v15 >= v16 )
      goto LABEL_25;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = *a1;
          v14 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v14 )
            break;
        }
        if ( ++v15 >= v16 )
          goto LABEL_24;
      }
      v36 = (unsigned __int64)v16;
      sub_15D7BC0(v18, v17);
      v16 = (_QWORD *)v36;
      ++v15;
    }
    while ( (unsigned __int64)v15 < v36 );
LABEL_24:
    v15 = (_QWORD *)a1[1];
    v12 = v44;
    if ( v15 )
LABEL_25:
      *((_DWORD *)v15 - 1) = 0;
  }
  v19 = v12[9];
  if ( !v19 )
    goto LABEL_47;
  v20 = *v12;
  v21 = 0;
  v22 = a1 + 1;
  while ( 2 )
  {
    v24 = v19;
    v25 = *(_BYTE *)(v19 + 3) >> 6;
    if ( v25 )
    {
      if ( v25 != 1 )
        goto LABEL_35;
    }
    else
    {
      do
      {
        v24 = *(_QWORD *)(v24 + 16);
        v25 = *(_BYTE *)(v24 + 3) >> 6;
      }
      while ( !v25 );
      if ( v25 != 1 )
      {
LABEL_35:
        if ( v25 == 2 )
          v26 = *(_DWORD *)(v24 + 4) - 1;
        else
          v26 = *(_DWORD *)(v24 + 4);
        if ( v21 >= v26 )
          break;
        goto LABEL_38;
      }
    }
    if ( v21 >= *(_DWORD *)(v24 + 4) + 1 )
      break;
LABEL_38:
    if ( (*((_BYTE *)v12 + 123) & 0x20) != 0 )
    {
      v23 = *(_QWORD *)(v20 + 864);
      goto LABEL_29;
    }
    v27 = 17;
    while ( 1 )
    {
      if ( *(char *)(v19 + 3) < 0 )
      {
        if ( *(_BYTE *)(v19 + 3) >> 6 != 2 )
        {
          v28 = (__int64 *)(*(_QWORD *)(v19 + 16) + 8LL * v21);
          goto LABEL_43;
        }
        goto LABEL_69;
      }
      if ( v21 == *(_DWORD *)(v19 + 4) )
        break;
LABEL_69:
      v19 = *(_QWORD *)(v19 + 16);
      if ( !--v27 )
      {
        v38 = v12;
        sub_233F80((__int64 *)(v20 + 616), (_DWORD *)v12 + 18);
        v28 = (__int64 *)(*(_QWORD *)(v38[9] + 16LL) + 8LL * v21);
        goto LABEL_43;
      }
    }
    v28 = (__int64 *)(v19 + 8);
LABEL_43:
    v23 = *v28;
LABEL_29:
    v45 = v23;
    if ( v23 )
      ++*(_DWORD *)(v23 + 8);
    sub_3D5DC0(v22, &v45);
    v12 = v44;
    ++v21;
    v19 = *((_QWORD *)v44 + 9);
    if ( v19 )
    {
      v20 = *(_QWORD *)v44;
      continue;
    }
    break;
  }
LABEL_47:
  v14 = (*((_DWORD *)v11 + 2))-- == 1;
  if ( v14 )
  {
    (**v11)(v11);
    sub_186B220(v11);
  }
  v14 = (*((_DWORD *)v8 + 2))-- == 1;
  if ( v14 )
  {
    (*(void (__fastcall **)(_QWORD *))*v8)(v8);
    sub_186B220(v8);
  }
  if ( v41 )
  {
    v37 = *((_DWORD *)v41 + 2);
    *((_DWORD *)v41 + 2) = v37 - 1;
    if ( v37 == 1 )
    {
      (**v41)(v41);
      sub_186B220(v41);
    }
  }
  v29 = (char *)ptr;
  v30 = (char *)ptr + 8 * (unsigned int)v47;
  if ( ptr < v30 )
  {
    do
    {
      while ( 1 )
      {
        v31 = *(_DWORD **)v29;
        if ( *(_QWORD *)v29 )
        {
          v14 = v31[8]-- == 1;
          if ( v14 )
            break;
        }
        v29 += 8;
        if ( v29 >= v30 )
          goto LABEL_60;
      }
      v29 += 8;
      sub_ED44E0(v31);
      sub_186B220(v31);
    }
    while ( v29 < v30 );
LABEL_60:
    v29 = (char *)ptr;
  }
  if ( v29 != v48 && v29 )
    sub_186B220(v29);
  v32 = v44;
  if ( v44 )
  {
    v14 = (*((_DWORD *)v44 + 8))-- == 1;
    if ( v14 )
    {
      sub_ED44E0(v32);
      sub_186B220(v32);
    }
  }
  *(_DWORD *)(v2 + 712) = HIDWORD(v43);
  return HIDWORD(v43);
}

