_QWORD *__fastcall sub_110A450(__int64 a1, __int64 a2, char a3, __int64 a4)
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
  char *v39; // rdi
  _QWORD *v40; // [rsp+8h] [rbp-150h]
  _QWORD *v42; // [rsp+18h] [rbp-140h]
  __int64 *v43; // [rsp+30h] [rbp-128h]
  char v45; // [rsp+47h] [rbp-111h]
  __int64 *v47; // [rsp+58h] [rbp-100h]
  __m128i *v48; // [rsp+58h] [rbp-100h]
  unsigned int v49; // [rsp+6Ch] [rbp-ECh] BYREF
  void *v50[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+80h] [rbp-D8h] BYREF
  void *v52; // [rsp+90h] [rbp-C8h] BYREF
  void *v53; // [rsp+98h] [rbp-C0h]
  __m128i v54; // [rsp+A0h] [rbp-B8h] BYREF
  int v55; // [rsp+B0h] [rbp-A8h]
  int v56; // [rsp+B4h] [rbp-A4h]
  int v57; // [rsp+B8h] [rbp-A0h]
  int v58; // [rsp+BCh] [rbp-9Ch]
  __int64 v59; // [rsp+C0h] [rbp-98h]
  void *v60; // [rsp+D0h] [rbp-88h] BYREF
  void *v61; // [rsp+D8h] [rbp-80h]
  __m128i v62; // [rsp+E0h] [rbp-78h] BYREF
  int v63; // [rsp+F0h] [rbp-68h]
  int v64; // [rsp+F4h] [rbp-64h]
  int v65; // [rsp+F8h] [rbp-60h]
  int v66; // [rsp+FCh] [rbp-5Ch]
  __int64 v67; // [rsp+100h] [rbp-58h]

  v4 = *(_QWORD *)(a2 + 176);
  v42 = (_QWORD *)operator new(0x148u);
  sub_2192F90(v42, v4);
  v5 = sub_10E2140();
  v6 = *(_QWORD **)(a2 + 8);
  v43 = v5;
  v40 = &v6[*(unsigned int *)(a2 + 16)];
  if ( v40 == v6 )
    goto LABEL_78;
  v7 = v6 + 1;
  if ( !*v6 )
  {
    while ( 1 )
    {
      v6 = v7;
      if ( v40 == v7 )
        break;
      if ( *v7++ )
        goto LABEL_3;
    }
LABEL_78:
    v36 = (_QWORD *)v42[23];
    *v42 = off_2BBF988;
    v37 = &v36[*((unsigned int *)v42 + 48)];
    if ( v36 != v37 )
    {
      do
      {
        while ( 1 )
        {
          v38 = (void *)*--v37;
          if ( !*v37 )
            break;
          sub_2191C80(*v37);
          operator delete(v38, 0x58u);
          if ( v36 == v37 )
            goto LABEL_81;
        }
      }
      while ( v36 != v37 );
LABEL_81:
      v37 = (_QWORD *)v42[23];
    }
    if ( v37 != v42 + 25 )
      free(v37);
    *v42 = &off_2C0BEF8;
    operator delete();
    v39 = (char *)v42[1];
    if ( v39 != (char *)(v42 + 3) )
      free(v39);
    operator delete(v42, 0x148u);
    return nullptr;
  }
LABEL_3:
  v45 = 0;
  while ( 1 )
  {
    v9 = *v6;
    v10 = sub_2195AD0(*v6, 46);
    if ( v10 )
    {
      if ( !a3 && !(unsigned __int8)sub_2195AD0(v9, 2317) )
      {
        v45 = v10;
        goto LABEL_7;
      }
      goto LABEL_28;
    }
    v11 = sub_2195AD0(v9, 3504);
    if ( !(unsigned __int8)sub_2195AD0(v9, 3503) )
    {
      if ( v11 )
      {
        v18 = 0;
        v19 = *(_QWORD *)(a2 + 176);
        v20 = *(const char ***)(v9 + 48);
        v21 = *v20;
        if ( *v20 )
          v18 = j__strlen(*v20);
        v49 = sub_2192BD0(v19, v21, v18);
        v22 = v49;
LABEL_33:
        sub_21989F0(v50, v43, a2, &v49, 0xFFFFFFFFLL);
        v23 = v50[0];
        if ( v50[0] && v22 + 1 >= v49 )
        {
          if ( !v11 )
          {
LABEL_36:
            v23[2] = v9;
            v50[0] = nullptr;
            v24 = *(unsigned int *)(a4 + 8);
            if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
            {
              sub_22134E0(a4, a4 + 16, v24 + 1, 8);
              v24 = *(unsigned int *)(a4 + 8);
            }
            *(_QWORD *)(*(_QWORD *)a4 + 8 * v24) = v23;
            ++*(_DWORD *)(a4 + 8);
            sub_21943B0(v42, v23);
            v25 = v50[0];
            if ( v50[0] )
            {
              sub_2191C80(v50[0]);
              operator delete(v25, 0x58u);
            }
            v45 = 1;
            goto LABEL_7;
          }
          sub_2193410(&v60, a2, 3089);
          v29 = (void **)v61;
          v30 = (void **)v60;
          v47 = (__int64 *)((_BYTE *)v61 - (_BYTE *)v60);
          if ( v60 != v61 )
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
            v29 = (void **)v60;
          }
          if ( v29 )
            operator delete(v29);
          if ( v47 == &qword_20 )
          {
            v23 = v50[0];
            goto LABEL_36;
          }
          sub_FA3370((__int64)&v60, **(_QWORD **)(a1 + 8), 0, 319);
        }
        else
        {
          v27 = *(_QWORD *)(v9 + 16);
          if ( !v27 )
            v27 = v9;
          if ( (*(_BYTE *)(v27 + 44) & 1) != 0 )
            goto LABEL_48;
          sub_FA3370((__int64)&v60, **(_QWORD **)(a1 + 8), 0, 370);
          sub_21922B0(&v52, v9, a2);
          sub_AC84E0((unsigned __int8 **)&v60, v52, (signed __int64)v53);
          if ( v52 != &v54 )
            operator delete(v52);
        }
        sub_AC6300((__int64)&v60);
        v23 = v50[0];
LABEL_48:
        if ( v23 )
        {
          sub_2191C80(v23);
          operator delete(v23, 0x58u);
        }
LABEL_7:
        v8 = v6 + 1;
        if ( v40 == v6 + 1 )
          goto LABEL_26;
        goto LABEL_8;
      }
LABEL_28:
      sub_21943B0(v42, v9);
      goto LABEL_7;
    }
    v12 = *(const char ***)(v9 + 48);
    v13 = (char *)*v12;
    if ( *v12 )
    {
      v14 = j__strlen(*v12);
      v52 = &v54;
      sub_1107830(&v52, v13, (__int64)&v13[v14]);
    }
    else
    {
      v54.m128i_i8[0] = 0;
      v53 = nullptr;
      v52 = &v54;
    }
    sub_2296190(&v60, &v52);
    if ( v52 != &v54 )
      operator delete(v52);
    if ( v65 )
    {
      v15 = v66;
      if ( v66 )
        goto LABEL_18;
    }
    v26 = "nvptx-nvidia-cuda";
    if ( v63 != 41 )
    {
      v26 = "nvptx64-nvidia-cuda";
      if ( v63 != 42 )
      {
        if ( v63 != 26 )
        {
          v15 = v66;
LABEL_18:
          v52 = &v54;
          if ( v60 == &v62 )
          {
            v54 = _mm_load_si128(&v62);
          }
          else
          {
            v52 = v60;
            v54.m128i_i64[0] = v62.m128i_i64[0];
          }
          v55 = v63;
          v57 = v65;
          v56 = v64;
          v53 = v61;
          v58 = v15;
          v59 = v67;
          goto LABEL_21;
        }
        v26 = "amdgcn-amd-amdhsa";
      }
    }
    sub_1107FF0(v50, v26);
    sub_2296190(&v52, v50);
    if ( v50[0] != &v51 )
      operator delete(v50[0]);
    if ( v60 != &v62 )
      operator delete(v60);
LABEL_21:
    v60 = &v62;
    sub_11078F0(&v60, *(_BYTE **)(a1 + 16), *(_QWORD *)(a1 + 16) + *(_QWORD *)(a1 + 24));
    v16 = (__m128i *)v60;
    if ( v53 == v61 )
    {
      v48 = (__m128i *)v60;
      v31 = sub_990B80(v52, v60, (size_t)v53);
      v16 = v48;
      if ( !v31 )
      {
        if ( v48 != &v62 )
          operator delete(v48);
        v32 = 0;
        v33 = *(_QWORD *)(a2 + 176);
        v34 = *(_QWORD *)(v9 + 48);
        v35 = *(_QWORD *)(v34 + 8);
        if ( v35 )
          v32 = j__strlen(*(const char **)(v34 + 8));
        v22 = sub_2192BD0(v33, v35, v32);
        v49 = v22;
        if ( v52 != &v54 )
        {
          operator delete(v52);
          v22 = v49;
        }
        goto LABEL_33;
      }
    }
    if ( v16 != &v62 )
      operator delete(v16);
    if ( v52 == &v54 )
      goto LABEL_7;
    operator delete(v52);
    v8 = v6 + 1;
    if ( v40 == v6 + 1 )
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
    if ( v40 == v28 )
      break;
    if ( *v28++ )
      goto LABEL_9;
  }
LABEL_26:
  if ( !v45 )
    goto LABEL_78;
  return v42;
}

