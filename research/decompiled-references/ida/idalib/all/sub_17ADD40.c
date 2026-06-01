void __fastcall sub_17ADD40(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 **v14; // rax
  _QWORD *v15; // rax
  unsigned __int64 v16; // r15
  __int64 *v17; // r12
  int v18; // r14d
  bool v19; // zf
  __int64 *v20; // rax
  char v21; // al
  int v22; // r12d
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned __int64 v28; // r15
  __int64 *v29; // rbx
  bool v30; // zf
  __int64 *v31; // rax
  __int64 v32; // r12
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 *v37; // rax
  char v38; // al
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // rax
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __m128i *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 *v58; // rax
  unsigned __int64 **v59; // rax
  unsigned __int64 *v60; // rax
  __int64 v61; // [rsp+0h] [rbp-E8h]
  const __m128i *v62; // [rsp+0h] [rbp-E8h]
  __int64 v63; // [rsp+0h] [rbp-E8h]
  char v64; // [rsp+Fh] [rbp-D9h]
  int v65; // [rsp+1Ch] [rbp-CCh] BYREF
  void *ptr[2]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v67[184]; // [rsp+30h] [rbp-B8h] BYREF

  v7 = (__int64)a2;
  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
  {
    if ( (*((_BYTE *)a2 + 29) & 1) == 0 )
      return;
    v64 = 0;
    goto LABEL_69;
  }
  v8 = sub_B8C3D0(a1, (__int64)a2, a3, a4, a5, a6);
  v12 = *v8;
  v13 = *v8 + 8LL * *((unsigned int *)v8 + 2);
  if ( v12 >= v13 )
  {
    if ( v12 == v13 )
      goto LABEL_8;
    v9 = *(unsigned __int64 **)v13;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 98 )
    {
      v14 = (unsigned __int64 **)(v13 + 8);
      do
      {
        v9 = (unsigned __int64 *)v14;
        if ( (unsigned __int64 **)v12 == v14 )
          goto LABEL_8;
        v9 = *v14++;
      }
      while ( *((_WORD *)v9 + 18) != 98 );
    }
LABEL_32:
    v32 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 98 )
    {
      v12 += 8LL;
      do
      {
        v32 = *(_QWORD *)v12;
        v12 += 8LL;
      }
      while ( *(_WORD *)(v32 + 36) != 98 );
    }
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
    {
      v58 = sub_B8C3D0(v7, (__int64)a2, v12, (__int64)v9, v10, v11);
      v12 = *v58;
      v9 = (unsigned __int64 *)(*v58 + 8LL * *((unsigned int *)v58 + 2));
      if ( *v58 < (unsigned __int64)v9 )
      {
        v60 = (unsigned __int64 *)*v58;
        while ( 1 )
        {
          v12 = *v60;
          if ( *(_WORD *)(*v60 + 36) == 98 )
            break;
          if ( v9 == ++v60 )
            goto LABEL_36;
        }
        if ( v9 != v60 )
          goto LABEL_8;
      }
      else if ( (unsigned __int64 *)v12 != v9 )
      {
        if ( *(_WORD *)(*v9 + 36) == 98 )
          goto LABEL_8;
        v59 = (unsigned __int64 **)(v9 + 1);
        while ( (unsigned __int64 **)v12 != v59 )
        {
          v9 = *v59++;
          if ( *((_WORD *)v9 + 18) == 98 )
            goto LABEL_8;
        }
      }
    }
LABEL_36:
    sub_168B9F0((__int64)ptr, (__int64 *)(a3 + 8), *(_DWORD *)(v32 + 24), 0xD55u, 0);
    v65 = 1;
    sub_1587D10((__int64)ptr, &v65);
    sub_15F7200(ptr);
    v33 = (_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
      v33 = (_QWORD *)*v33;
    if ( !v33 )
      BUG();
    v34 = v33[5];
    v35 = (unsigned __int8)(*(_WORD *)(v7 + 98) >> 4);
    if ( v35 == 255 )
    {
      v63 = v34;
      v35 = sub_B74880(v7);
      v34 = v63;
    }
    sub_168B9F0(
      (__int64)ptr,
      (__int64 *)(a3 + 8),
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 120) + 8LL * v35) + 24LL),
      0x16BAu,
      0);
    a2 = (void **)&v65;
    v65 = 1;
    sub_1587D10((__int64)ptr, &v65);
    sub_15F7200(ptr);
    goto LABEL_8;
  }
  v9 = (unsigned __int64 *)v12;
  a2 = *(void ***)v12;
  if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 98 )
  {
LABEL_31:
    if ( (unsigned __int64 *)v13 == v9 )
      goto LABEL_8;
    goto LABEL_32;
  }
  while ( (unsigned __int64 *)v13 != ++v9 )
  {
    a2 = (void **)*v9;
    if ( *(_WORD *)(*v9 + 36) == 98 )
      goto LABEL_31;
  }
LABEL_8:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
    return;
  v64 = *(_BYTE *)(a1 + 29) & 1;
  if ( v64 )
    goto LABEL_10;
LABEL_69:
  ptr[0] = v67;
  ptr[1] = (void *)0x400000000LL;
  v54 = sub_B8C330(a1);
  a2 = ptr;
  sub_B8C0D0(a1, ptr, v54, v55, v56, v57);
  if ( ptr[0] != v67 )
    free(ptr[0]);
  v21 = *(_BYTE *)(v7 + 29);
  if ( (v21 & 1) != 0 )
  {
LABEL_10:
    v15 = sub_B8C3D0(v7, (__int64)a2, v12, (__int64)v9, v10, v11);
    v12 = *((unsigned int *)v15 + 2);
    v16 = *v15 + 8 * v12;
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
      v17 = (__int64 *)*sub_B8C3D0(v7, (__int64)a2, v12, (__int64)v9, v10, v11);
    else
      v17 = nullptr;
    v18 = 0;
    v19 = v17 == (__int64 *)v16;
    if ( (unsigned __int64)v17 >= v16 )
      goto LABEL_49;
    while ( 1 )
    {
      v20 = v17;
      while ( 1 )
      {
        v12 = (unsigned int)*(unsigned __int16 *)(*v20 + 36) - 91;
        if ( (unsigned __int16)(*(_WORD *)(*v20 + 36) - 91) <= 0xDu )
          break;
        if ( (__int64 *)v16 == ++v20 )
          goto LABEL_16;
      }
      if ( (__int64 *)v16 == v20 )
        break;
      while ( 1 )
      {
LABEL_43:
        v36 = *v17;
        if ( (unsigned __int16)(*(_WORD *)(*v17 + 36) - 91) > 0xDu )
        {
          v37 = v17 + 1;
          do
          {
            v36 = *v37;
            v17 = v37++;
          }
          while ( (unsigned __int16)(*(_WORD *)(v36 + 36) - 91) > 0xDu );
        }
        a2 = (void **)v36;
        v61 = v36;
        v38 = sub_179C320(a1, v36, v36, (__int64)v9, v10, v11);
        v12 = v61;
        if ( !v38 )
        {
          ++v18;
          v44 = sub_B395B0(v61, *(_QWORD *)(a3 + 248));
          *(_BYTE *)(v44 + 38) |= 1u;
          a2 = (void **)v44;
          sub_B8CC60(a1, v44, v45, v46, v47, v48);
        }
        v19 = ++v17 == (__int64 *)v16;
        if ( (unsigned __int64)v17 < v16 )
          break;
LABEL_49:
        if ( v19 )
          goto LABEL_16;
        if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v16 + 36LL) - 91) > 0xDu )
        {
          v39 = v16;
          while ( 1 )
          {
            v39 += 8LL;
            if ( v17 == (__int64 *)v39 )
              goto LABEL_16;
            v12 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)v39 + 36LL) - 91;
            if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v39 + 36LL) - 91) <= 0xDu )
              goto LABEL_43;
          }
        }
      }
    }
LABEL_16:
    v21 = *(_BYTE *)(v7 + 29);
    goto LABEL_17;
  }
  v18 = 0;
LABEL_17:
  v22 = 0;
  if ( (v21 & 1) != 0 )
  {
    v23 = sub_B8C3D0(v7, (__int64)a2, v12, (__int64)v9, v10, v11);
    v27 = *((unsigned int *)v23 + 2);
    v28 = *v23 + 8 * v27;
    if ( (*(_BYTE *)(v7 + 29) & 1) != 0 )
      v29 = (__int64 *)*sub_B8C3D0(v7, (__int64)a2, v27, v24, v25, v26);
    else
      v29 = nullptr;
    v22 = 0;
    v30 = v29 == (__int64 *)v28;
    if ( (unsigned __int64)v29 >= v28 )
      goto LABEL_61;
    while ( 1 )
    {
      v31 = v29;
      while ( *(_WORD *)(*v31 + 36) != 67 )
      {
        if ( (__int64 *)v28 == ++v31 )
          goto LABEL_24;
      }
      while ( 1 )
      {
LABEL_55:
        v40 = *v29;
        if ( *(_WORD *)(*v29 + 36) != 67 )
        {
          v41 = v29 + 1;
          do
          {
            v40 = *v41;
            v29 = v41++;
          }
          while ( *(_WORD *)(v40 + 36) != 67 );
        }
        v62 = (const __m128i *)v40;
        if ( !(unsigned __int8)sub_179C320(a1, v40, v40, v24, v25, v26) )
        {
          ++v22;
          v49 = sub_B26D10(v62, *(_QWORD *)(a3 + 248));
          v49[2].m128i_i8[6] |= 1u;
          sub_B8CC60(a1, (__int64)v49, v50, v51, v52, v53);
        }
        v30 = ++v29 == (__int64 *)v28;
        if ( (unsigned __int64)v29 < v28 )
          break;
LABEL_61:
        if ( v30 )
          goto LABEL_24;
        if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 67 )
        {
          v42 = (__int64 *)(v28 + 8);
          while ( v29 != v42 )
          {
            v43 = *v42++;
            if ( *(_WORD *)(v43 + 36) == 67 )
              goto LABEL_55;
          }
          goto LABEL_24;
        }
      }
    }
  }
LABEL_24:
  if ( !(v22 + v18) && !v64 )
    sub_B8C550(a1);
}
