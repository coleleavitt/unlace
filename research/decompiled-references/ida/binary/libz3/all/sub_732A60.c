__int64 __fastcall sub_732A60(const __m128i *a1, __int64 **a2, _DWORD ***a3)
{
  _DWORD ***v6; // rax
  _DWORD **v7; // rbx
  _DWORD **i; // r14
  _DWORD *v9; // r13
  bool v10; // zf
  __m128i *v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  char v16; // dl
  int v17; // r14d
  __int64 v18; // r12
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // rdx
  int v23; // ecx
  _QWORD *v24; // rdx
  __int64 *v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rdx
  char v28; // al
  unsigned int v29; // eax
  int v30; // eax
  __int64 *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // r12
  _QWORD *j; // rbx
  __int64 *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rbx
  void (__fastcall ***v40)(void *); // r14
  __int64 *v41; // r12
  unsigned int v42; // edx
  unsigned int v43; // ebx
  __int64 v44; // rbp
  __int64 v45; // rsi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v50; // rbx
  _QWORD *v51; // rdi
  __int64 v52; // rax
  __int64 k; // rax
  _Unwind_Exception *v54; // [rsp+0h] [rbp-98h]
  int v55; // [rsp+8h] [rbp-90h]
  char v56; // [rsp+Fh] [rbp-89h]
  __int64 *v57; // [rsp+10h] [rbp-88h]
  __int64 v58; // [rsp+18h] [rbp-80h]
  char *v59; // [rsp+20h] [rbp-78h]
  __int64 *v60; // [rsp+28h] [rbp-70h]
  __int64 *v61; // [rsp+28h] [rbp-70h]
  __int64 *v62; // [rsp+28h] [rbp-70h]
  __int64 v63; // [rsp+28h] [rbp-70h]
  char v64[8]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v65; // [rsp+40h] [rbp-58h] BYREF
  __int64 v66; // [rsp+48h] [rbp-50h]
  __int64 v67; // [rsp+50h] [rbp-48h] BYREF
  __int64 v68; // [rsp+58h] [rbp-40h]

  v58 = (__int64)a3;
  v59 = v64;
  sub_EE4940(v64, "bvarray2uf", *a2);
  v6 = a3;
  v7 = *a3;
  for ( i = &v7[*((unsigned int *)v6 + 2)]; v7 < i; ++v7 )
  {
    while ( 1 )
    {
      v9 = *v7;
      if ( *v7 )
      {
        v10 = v9[8]-- == 1;
        if ( v10 )
          break;
      }
      if ( ++v7 >= i )
        goto LABEL_7;
    }
    sub_ED44E0(v9);
    sub_186B220(v9);
  }
LABEL_7:
  *(_DWORD *)(v58 + 8) = 0;
  sub_EE5110("bvarray2uf");
  sub_EE4F60("bvarray2uf");
  v56 = *((_BYTE *)*a2 + 123) & 8;
  if ( (*((_BYTE *)*a2 + 123) & 4) != 0 )
  {
    v11 = (__m128i *)sub_186B270(0x50u);
    v11[1].m128i_i8[8] = 1;
    v12 = _mm_loadl_epi64(a1);
    v11[1].m128i_i64[0] = 0;
    strcpy(&v11[3].m128i_i8[8], "bvarray2uf");
    v11[3].m128i_i64[0] = 10;
    v11->m128i_i64[0] = (__int64)&off_1C60CE8;
    v11[4].m128i_i64[1] = 0;
    v11->m128i_i32[2] = 1;
    a1[39].m128i_i64[1] = (__int64)v11;
    v11[2] = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)&v11[3].m128i_u64[1]);
  }
  else
  {
    v11 = nullptr;
  }
  v54 = (_Unwind_Exception *)&a1[1];
  sub_76DBF0(&a1[1], a2);
  v65 = 0;
  v13 = a1->m128i_i64[0];
  v67 = 0;
  v66 = v13;
  v68 = v13;
  v14 = *a2;
  v15 = (*a2)[9];
  if ( !v15 )
    goto LABEL_58;
  v16 = *(_BYTE *)(v15 + 3) >> 6;
  if ( !v16 )
  {
    do
    {
      v15 = *(_QWORD *)(v15 + 16);
      v16 = *(_BYTE *)(v15 + 3) >> 6;
    }
    while ( !v16 );
    if ( v16 != 1 )
      goto LABEL_12;
LABEL_84:
    v17 = *(_DWORD *)(v15 + 4) + 1;
    goto LABEL_14;
  }
  if ( v16 == 1 )
    goto LABEL_84;
LABEL_12:
  if ( v16 == 2 )
    v17 = *(_DWORD *)(v15 + 4) - 1;
  else
    v17 = *(_DWORD *)(v15 + 4);
LABEL_14:
  if ( v17 )
  {
    v18 = 0;
    v19 = 0;
    v57 = &v67;
    do
    {
      if ( (*((_BYTE *)v14 + 123) & 0x20) != 0 )
        break;
      v22 = v14[9];
      v23 = 17;
      while ( 1 )
      {
        if ( *(char *)(v22 + 3) < 0 )
        {
          if ( *(_BYTE *)(v22 + 3) >> 6 != 2 )
          {
            v24 = (_QWORD *)(v18 + *(_QWORD *)(v22 + 16));
            goto LABEL_25;
          }
          goto LABEL_32;
        }
        if ( *(_DWORD *)(v22 + 4) == v19 )
          break;
LABEL_32:
        v22 = *(_QWORD *)(v22 + 16);
        if ( !--v23 )
        {
          v61 = v14;
          sub_233F80((__int64 *)(*v14 + 616), (_DWORD *)v14 + 18);
          v24 = (_QWORD *)(v18 + *(_QWORD *)(v61[9] + 16));
          goto LABEL_25;
        }
      }
      v24 = (_QWORD *)(v22 + 8);
LABEL_25:
      sub_773AA0(v54, *v24, &v65, &v67);
      if ( !v56 )
        goto LABEL_26;
      v26 = (*a2)[11];
      if ( !v26 )
        goto LABEL_45;
      v27 = (*a2)[11];
      v28 = *(_BYTE *)(v26 + 3) >> 6;
      if ( v28 )
      {
        if ( v28 != 1 )
          goto LABEL_37;
LABEL_53:
        if ( v19 >= *(_DWORD *)(v27 + 4) + 1 )
          goto LABEL_54;
      }
      else
      {
        do
        {
          v27 = *(_QWORD *)(v27 + 16);
          v28 = *(_BYTE *)(v27 + 3) >> 6;
        }
        while ( !v28 );
        if ( v28 == 1 )
          goto LABEL_53;
LABEL_37:
        if ( v28 == 2 )
          v29 = *(_DWORD *)(v27 + 4) - 1;
        else
          v29 = *(_DWORD *)(v27 + 4);
        if ( v19 >= v29 )
        {
LABEL_54:
          v26 = 0;
          goto LABEL_45;
        }
      }
      v30 = 17;
      while ( 2 )
      {
        if ( *(char *)(v26 + 3) < 0 )
        {
          if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
          {
            v31 = (__int64 *)(v18 + *(_QWORD *)(v26 + 16));
            goto LABEL_44;
          }
LABEL_56:
          v26 = *(_QWORD *)(v26 + 16);
          if ( !--v30 )
          {
            v62 = *a2;
            sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
            v31 = (__int64 *)(v18 + *(_QWORD *)(v62[11] + 16));
            goto LABEL_44;
          }
          continue;
        }
        break;
      }
      if ( *(_DWORD *)(v26 + 4) != v19 )
        goto LABEL_56;
      v31 = (__int64 *)(v26 + 8);
LABEL_44:
      v26 = *v31;
LABEL_45:
      v32 = sub_15DE0E0(a1->m128i_i64[0], v26, v67);
      if ( v32 )
        ++*(_DWORD *)(v32 + 8);
      v33 = v67;
      if ( v67 )
      {
        v34 = v68;
        v10 = (*(_DWORD *)(v67 + 8))-- == 1;
        if ( v10 )
        {
          v63 = v32;
          sub_15D7BC0(v34, v33);
          v32 = v63;
        }
      }
      v67 = v32;
LABEL_26:
      v25 = *a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
      {
        v20 = v25[13];
        v21 = 17;
        do
        {
          if ( *(char *)(v20 + 3) >= 0 )
          {
            if ( *(_DWORD *)(v20 + 4) == v19 )
              goto LABEL_19;
          }
          else if ( *(_BYTE *)(v20 + 3) >> 6 != 2 )
          {
            goto LABEL_19;
          }
          v20 = *(_QWORD *)(v20 + 16);
          --v21;
        }
        while ( v21 );
        v60 = *a2;
        sub_236900((_QWORD *)(*v25 + 672), v25 + 13);
        LODWORD(v25) = (_DWORD)v60;
      }
LABEL_19:
      sub_EDBFA0((int)v25);
      ++v19;
      v14 = *a2;
      v18 += 8;
    }
    while ( v19 != v17 );
  }
LABEL_58:
  v35 = (_QWORD *)a1[42].m128i_i64[0];
  if ( v35 )
  {
    for ( j = &v35[*((unsigned int *)v35 - 1)]; j != v35; v14 = *a2 )
      sub_EDBA20((int)v14, *v35++, 0, v54, v55, (int)v57, v58, (__int64)v59);
  }
  *((_DWORD *)v14 + 30) = (*((_DWORD *)v14 + 30) + 1) & 0x3FFFFFF | v14[15] & 0xFC000000;
  v37 = *a2;
  v38 = sub_1336AB0((*a2)[1], v11);
  v39 = v38;
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v40 = (void (__fastcall ***)(void *))v37[1];
  if ( v40 )
  {
    v10 = (*((_DWORD *)v40 + 2))-- == 1;
    if ( v10 )
    {
      (**v40)(v40);
      sub_186B220(v40);
    }
  }
  v37[1] = v39;
  v41 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v41 + 8);
  v42 = *(_DWORD *)(v58 + 8);
  v43 = *(_DWORD *)(v58 + 12);
  if ( v42 >= v43 )
  {
    v50 = 2 * v43;
    v44 = sub_186B270(8 * v50);
    v42 = *(_DWORD *)(v58 + 8);
    v51 = *(_QWORD **)v58;
    if ( v42 )
    {
      if ( v42 - 1 <= 2 || (_QWORD *)v44 == v51 + 1 )
      {
        for ( k = 0; k != v42; ++k )
          *(_QWORD *)(v44 + k * 8) = v51[k];
      }
      else
      {
        v52 = 0;
        do
        {
          *(__m128i *)(v44 + v52 * 8) = _mm_loadu_si128((const __m128i *)&v51[v52]);
          v52 += 2;
        }
        while ( 2LL * (v42 >> 1) != v52 );
        if ( (v42 & 1) != 0 )
          *(_QWORD *)(v44 + 8LL * (v42 & 0xFFFFFFFE)) = v51[v42 & 0xFFFFFFFE];
      }
    }
    if ( v51 != (_QWORD *)(v58 + 16) && v51 )
    {
      sub_186B220(v51);
      v42 = *(_DWORD *)(v58 + 8);
    }
    *(_QWORD *)v58 = v44;
    *(_DWORD *)(v58 + 12) = v50;
  }
  else
  {
    v44 = *(_QWORD *)v58;
  }
  v45 = v67;
  *(_QWORD *)(v44 + 8LL * v42) = v41;
  *(_DWORD *)(v58 + 8) = v42 + 1;
  if ( v45 )
  {
    v46 = v68;
    v10 = (*(_DWORD *)(v45 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v46, v45);
  }
  v47 = v65;
  if ( v65 )
  {
    v48 = v66;
    v10 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v10 )
      sub_15D7BC0(v48, v47);
  }
  if ( v11 )
  {
    v10 = v11->m128i_i32[2]-- == 1;
    if ( v10 )
    {
      (*(void (__fastcall **)(__m128i *))v11->m128i_i64[0])(v11);
      sub_186B220(v11);
    }
  }
  return sub_EE4A00(v59);
}

