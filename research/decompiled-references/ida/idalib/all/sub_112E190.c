_QWORD *__fastcall sub_112E190(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rbp
  char v10; // r12
  char v11; // r13
  const char **v12; // rax
  char *v13; // r12
  size_t v14; // rax
  int v15; // ecx
  __m128i *v16; // rcx
  size_t v18; // rdx
  __int64 v19; // r15
  const char **v20; // rax
  const char *v21; // r12
  unsigned int v22; // r15d
  _QWORD *v23; // r12
  __int64 v24; // rax
  void *v25; // rbp
  char *v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rbx
  void **v29; // r13
  void **v30; // r15
  int v31; // eax
  size_t v32; // rdx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // r12
  _QWORD *v36; // r12
  _QWORD *v37; // rbx
  void *v38; // rbp
  __int64 v39; // rdi
  char *v40; // rdi
  _QWORD *v41; // [rsp+8h] [rbp-150h]
  _QWORD *v43; // [rsp+18h] [rbp-140h]
  __int64 *v44; // [rsp+30h] [rbp-128h]
  char v46; // [rsp+47h] [rbp-111h]
  __int64 *v48; // [rsp+58h] [rbp-100h]
  __m128i *v49; // [rsp+58h] [rbp-100h]
  unsigned int v50; // [rsp+6Ch] [rbp-ECh] BYREF
  void *v51[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+80h] [rbp-D8h] BYREF
  void *v53; // [rsp+90h] [rbp-C8h] BYREF
  void *v54; // [rsp+98h] [rbp-C0h]
  __m128i v55; // [rsp+A0h] [rbp-B8h] BYREF
  int v56; // [rsp+B0h] [rbp-A8h]
  int v57; // [rsp+B4h] [rbp-A4h]
  int v58; // [rsp+B8h] [rbp-A0h]
  int v59; // [rsp+BCh] [rbp-9Ch]
  __int64 v60; // [rsp+C0h] [rbp-98h]
  void *v61; // [rsp+D0h] [rbp-88h] BYREF
  void *v62; // [rsp+D8h] [rbp-80h]
  __m128i v63; // [rsp+E0h] [rbp-78h] BYREF
  int v64; // [rsp+F0h] [rbp-68h]
  int v65; // [rsp+F4h] [rbp-64h]
  int v66; // [rsp+F8h] [rbp-60h]
  int v67; // [rsp+FCh] [rbp-5Ch]
  __int64 v68; // [rsp+100h] [rbp-58h]

  v4 = *(_QWORD *)(a2 + 176);
  v43 = (_QWORD *)operator new(0x148u);
  sub_21B6CD0(v43, v4);
  v5 = sub_1105E80();
  v6 = *(_QWORD **)(a2 + 8);
  v44 = v5;
  v41 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v41 == v6 )
    goto LABEL_78;
  v7 = v6 + 1;
  if ( !*v6 )
  {
    while ( 1 )
    {
      v6 = v7;
      if ( v41 == v7 )
        break;
      if ( *v7++ )
        goto LABEL_3;
    }
LABEL_78:
    v36 = (_QWORD *)v43[23];
    *v43 = off_2BE9928;
    v37 = &v36[*((unsigned int *)v43 + 48)];
    if ( v36 != v37 )
    {
      do
      {
        while ( 1 )
        {
          v38 = (void *)*--v37;
          if ( !*v37 )
            break;
          sub_21B59C0(*v37);
          operator delete(v38, 0x58u);
          if ( v36 == v37 )
            goto LABEL_81;
        }
      }
      while ( v36 != v37 );
LABEL_81:
      v37 = (_QWORD *)v43[23];
    }
    if ( v37 != v43 + 25 )
      free(v37);
    v39 = v43[19];
    *v43 = &off_2C35EF8;
    operator delete(v39, 12LL * *((unsigned int *)v43 + 42), 4);
    v40 = (char *)v43[1];
    if ( v40 != (char *)(v43 + 3) )
      free(v40);
    operator delete(v43, 0x148u);
    return nullptr;
  }
LABEL_3:
  v46 = 0;
  while ( 1 )
  {
    v9 = *v6;
    v10 = sub_21B9810(*v6, 46);
    if ( v10 )
    {
      if ( !a3 && !(unsigned __int8)sub_21B9810(v9, 2317) )
      {
        v46 = v10;
        goto LABEL_7;
      }
      goto LABEL_28;
    }
    v11 = sub_21B9810(v9, 3504);
    if ( !(unsigned __int8)sub_21B9810(v9, 3503) )
    {
      if ( v11 )
      {
        v18 = 0;
        v19 = *(_QWORD *)(a2 + 176);
        v20 = *(const char ***)(v9 + 48);
        v21 = *v20;
        if ( *v20 )
          v18 = j__strlen(*v20);
        v50 = sub_21B6910(v19, v21, v18);
        v22 = v50;
LABEL_33:
        sub_21BC730(v51, v44, a2, &v50, 0xFFFFFFFFLL);
        v23 = v51[0];
        if ( v51[0] && v22 + 1 >= v50 )
        {
          if ( !v11 )
          {
LABEL_36:
            v23[2] = v9;
            v51[0] = nullptr;
            v24 = *(unsigned int *)(a4 + 8);
            if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
            {
              sub_2237220(a4, a4 + 16, v24 + 1, 8);
              v24 = *(unsigned int *)(a4 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v24) = v23;
            ++*(_DWORD *)(a4 + 8);
            sub_21B80F0(v43, v23);
            v25 = v51[0];
            if ( v51[0] )
            {
              sub_21B59C0(v51[0]);
              operator delete(v25, 0x58u);
            }
            v46 = 1;
            goto LABEL_7;
          }
          sub_21B7150(&v61, a2, 3089);
          v29 = (void **)v62;
          v30 = (void **)v61;
          v48 = (__int64 *)((_BYTE *)v62 - (_BYTE *)v61);
          if ( v61 != v62 )
          {
            do
            {
              while ( *v30 != v30 + 2 )
              {
                operator delete(*v30);
                v30 += 4;
                if ( v29 == v30 )
                  goto LABEL_57;
              }
              v30 += 4;
            }
            while ( v29 != v30 );
LABEL_57:
            v29 = (void **)v61;
          }
          if ( v29 )
            operator delete(v29);
          if ( v48 == &qword_20 )
          {
            v23 = v51[0];
            goto LABEL_36;
          }
          sub_FC70B0((__int64)&v61, **(_QWORD **)(a1 + 8), 0, 319);
        }
        else
        {
          v27 = *(_QWORD *)(v9 + 16);
          if ( !v27 )
            v27 = v9;
          if ( (*(_BYTE *)(v27 + 44) & 1) != 0 )
            goto LABEL_48;
          sub_FC70B0((__int64)&v61, **(_QWORD **)(a1 + 8), 0, 370);
          sub_21B5FF0(&v53, v9, a2);
          sub_AEC220((unsigned __int8 **)&v61, v53, (signed __int64)v54);
          if ( v53 != &v55 )
            operator delete(v53);
        }
        sub_AEA040((__int64)&v61);
        v23 = v51[0];
LABEL_48:
        if ( v23 )
        {
          sub_21B59C0(v23);
          operator delete(v23, 0x58u);
        }
LABEL_7:
        v8 = v6 + 1;
        if ( v41 == v6 + 1 )
          goto LABEL_26;
        goto LABEL_8;
      }
LABEL_28:
      sub_21B80F0(v43, v9);
      goto LABEL_7;
    }
    v12 = *(const char ***)(v9 + 48);
    v13 = (char *)*v12;
    if ( *v12 )
    {
      v14 = j__strlen(*v12);
      v53 = &v55;
      sub_112B570(&v53, v13, (__int64)&v13[v14]);
    }
    else
    {
      v55.m128i_i8[0] = 0;
      v54 = nullptr;
      v53 = &v55;
    }
    sub_22B9ED0(&v61, &v53);
    if ( v53 != &v55 )
      operator delete(v53);
    if ( v66 )
    {
      v15 = v67;
      if ( v67 )
        goto LABEL_18;
    }
    v26 = "nvptx-nvidia-cuda";
    if ( v64 != 41 )
    {
      v26 = "nvptx64-nvidia-cuda";
      if ( v64 != 42 )
      {
        if ( v64 != 26 )
        {
          v15 = v67;
LABEL_18:
          v53 = &v55;
          if ( v61 == &v63 )
          {
            v55 = _mm_load_si128(&v63);
          }
          else
          {
            v53 = v61;
            v55.m128i_i64[0] = v63.m128i_i64[0];
          }
          v56 = v64;
          v58 = v66;
          v57 = v65;
          v54 = v62;
          v59 = v15;
          v60 = v68;
          goto LABEL_21;
        }
        v26 = "amdgcn-amd-amdhsa";
      }
    }
    sub_112BD30(v51, v26);
    sub_22B9ED0(&v53, v51);
    if ( v51[0] != &v52 )
      operator delete(v51[0]);
    if ( v61 != &v63 )
      operator delete(v61);
LABEL_21:
    v61 = &v63;
    sub_112B630(&v61, *(_BYTE **)(a1 + 16), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 24));
    v16 = (__m128i *)v61;
    if ( v54 == v62 )
    {
      v49 = (__m128i *)v61;
      v31 = sub_9B48C0(v53, v61, (size_t)v54);
      v16 = v49;
      if ( !v31 )
      {
        if ( v49 != &v63 )
          operator delete(v49);
        v32 = 0;
        v33 = *(_QWORD *)(a2 + 176);
        v34 = *(_QWORD *)(v9 + 48);
        v35 = *(_QWORD *)(v34 + 8);
        if ( v35 )
          v32 = j__strlen(*(const char **)(v34 + 8));
        v22 = sub_21B6910(v33, v35, v32);
        v50 = v22;
        if ( v53 != &v55 )
        {
          operator delete(v53);
          v22 = v50;
        }
        goto LABEL_33;
      }
    }
    if ( v16 != &v63 )
      operator delete(v16);
    if ( v53 == &v55 )
      goto LABEL_7;
    operator delete(v53);
    v8 = v6 + 1;
    if ( v41 == v6 + 1 )
      goto LABEL_26;
LABEL_8:
    if ( !v6[1] )
      break;
LABEL_9:
    v6 = v8;
  }
  v28 = v6 + 2;
  while ( 1 )
  {
    v8 = v28;
    if ( v41 == v28 )
      break;
    if ( *v28++ )
      goto LABEL_9;
  }
LABEL_26:
  if ( !v46 )
    goto LABEL_78;
  return v43;
}
