__int64 __fastcall sub_1BDEA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128i a7)
{
  char *v7; // r13
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  __int64 **v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  bool v18; // zf
  __int64 *v19; // rax
  char *v20; // r12
  char *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rbp
  __int64 v25; // rax
  __int64 v26; // r15
  char *v27; // rax
  char *v28; // r9
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // rax
  char *v32; // r12
  void *v33; // rax
  unsigned int v34; // eax
  void *v35; // rdx
  __int64 v36; // r12
  int v37; // eax
  size_t v38; // rax
  __int64 v39; // rbp
  __int64 *v40; // rax
  __int64 v41; // rdx
  unsigned int v42; // ebx
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  void *v61; // rax
  _QWORD *v62; // rax
  char *v63; // [rsp+8h] [rbp-170h]
  char *v64; // [rsp+8h] [rbp-170h]
  unsigned int v65; // [rsp+1Ch] [rbp-15Ch]
  unsigned int v66; // [rsp+20h] [rbp-158h]
  unsigned int v67; // [rsp+20h] [rbp-158h]
  __int64 v68; // [rsp+20h] [rbp-158h]
  __int64 v69; // [rsp+20h] [rbp-158h]
  char v70; // [rsp+28h] [rbp-150h]
  __int64 v71; // [rsp+28h] [rbp-150h]
  int v72; // [rsp+38h] [rbp-140h]
  void *v73; // [rsp+40h] [rbp-138h] BYREF
  __int64 v74; // [rsp+48h] [rbp-130h]
  __m128i v75; // [rsp+50h] [rbp-128h] BYREF
  char *v76; // [rsp+60h] [rbp-118h] BYREF
  __int64 v77; // [rsp+68h] [rbp-110h]
  _BYTE ptr[64]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v79; // [rsp+B0h] [rbp-C8h] BYREF
  void *v80; // [rsp+B8h] [rbp-C0h]
  void *v81; // [rsp+C0h] [rbp-B8h]
  __m128i v82; // [rsp+C8h] [rbp-B0h] BYREF
  char v83; // [rsp+128h] [rbp-50h]
  unsigned int v84; // [rsp+130h] [rbp-48h]
  char v85; // [rsp+134h] [rbp-44h]

  v7 = ptr;
  v65 = a3;
  v76 = ptr;
  v77 = 0x800000000LL;
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_47;
  v9 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v13 = *((unsigned int *)v9 + 2);
  v14 = *v9 + 8 * v13;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v15 = (__int64 **)sub_B8C3D0(a2, a2, v13, v10, v11, v12);
    v16 = (unsigned int)v77;
    v17 = *v15;
  }
  else
  {
    v16 = (unsigned int)v77;
    v17 = nullptr;
  }
  v18 = v17 == (__int64 *)v14;
  if ( (unsigned __int64)v17 >= v14 )
    goto LABEL_41;
LABEL_5:
  v19 = v17;
  do
  {
    if ( *(_WORD *)(*v19 + 36) == 202 )
    {
      while ( 1 )
      {
LABEL_38:
        while ( 1 )
        {
          v39 = *v17;
          if ( *(_WORD *)(*v17 + 36) == 202 )
            break;
          ++v17;
        }
        if ( !*(_BYTE *)(v39 + 80) )
        {
          if ( v16 + 1 > (unsigned __int64)HIDWORD(v77) )
          {
            sub_2237220(&v76, ptr, v16 + 1, 8);
            v16 = (unsigned int)v77;
          }
          *(_QWORD *)&v76[8 * v16] = v39;
          v16 = (unsigned int)(v77 + 1);
          LODWORD(v77) = v77 + 1;
        }
        v18 = ++v17 == (__int64 *)v14;
        if ( (unsigned __int64)v17 < v14 )
          goto LABEL_5;
LABEL_41:
        if ( v18 )
          goto LABEL_8;
        if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 202 )
        {
          v40 = (__int64 *)(v14 + 8);
          while ( v17 != v40 )
          {
            v41 = *v40++;
            if ( *(_WORD *)(v41 + 36) == 202 )
              goto LABEL_38;
          }
          v7 = v76;
          if ( (_DWORD)v16 )
            goto LABEL_9;
          goto LABEL_47;
        }
      }
    }
    ++v19;
  }
  while ( (__int64 *)v14 != v19 );
LABEL_8:
  v7 = v76;
  if ( !(_DWORD)v16 )
    goto LABEL_47;
LABEL_9:
  v20 = &v7[8 * v16];
  v21 = (char *)sub_1BC6F60(v7, (__int64)v20);
  v24 = v21;
  if ( v20 != v21 )
  {
    v25 = v20 - v21;
    if ( v20 - v24 > 0x7FFFFFFFFFFFFFF8LL )
    {
      v26 = 0xFFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v26 = (v20 - v24) >> 3;
    if ( v25 <= 0 )
    {
LABEL_76:
      v26 = 0;
      v28 = nullptr;
    }
    else
    {
LABEL_14:
      while ( 1 )
      {
        v27 = (char *)operator new(8 * v26, (const std::nothrow_t *)&std::nothrow);
        if ( v27 )
          break;
        v26 >>= 1;
        if ( !v26 )
          goto LABEL_76;
      }
      v28 = v27;
    }
    v63 = v28;
    v24 = sub_1BC7B50(v24, v20, (v20 - v24) >> 3, v28, v26);
    operator delete(v63, (const std::nothrow_t *)&std::nothrow);
    v7 = v76;
  }
  v29 = *(_QWORD *)a4;
  v30 = (v24 - v7) >> 5;
  v31 = (v24 - v7) >> 3;
  if ( v30 <= 0 )
  {
LABEL_68:
    if ( v31 != 2 )
    {
      if ( v31 != 3 )
      {
        if ( v31 != 1 )
          goto LABEL_22;
        goto LABEL_71;
      }
      if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*(_QWORD *)v7 + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
        && (_BYTE)v79 )
      {
        goto LABEL_21;
      }
      v7 += 8;
    }
    if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*(_QWORD *)v7 + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
      && (_BYTE)v79 )
    {
      goto LABEL_21;
    }
    v7 += 8;
LABEL_71:
    if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*(_QWORD *)v7 + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
      && (_BYTE)v79 )
    {
      goto LABEL_21;
    }
LABEL_22:
    v7 = v76;
    v64 = &v76[8 * (unsigned int)v77];
    if ( v64 != v24 )
    {
      do
      {
        v36 = *(_QWORD *)v24;
        if ( (unsigned __int8)sub_C3D850(
                                *(_QWORD *)(*(_QWORD *)v24 + 40LL),
                                &v79,
                                *(_QWORD *)(*(_QWORD *)a4 + 248LL),
                                0,
                                v22,
                                v23)
          && (_BYTE)v79 )
        {
          if ( !*(_DWORD *)(v36 + 68) && *(_DWORD *)(v36 + 64) == 1 )
          {
            sub_168B9F0((__int64)&v79, (__int64 *)(a1 + 8), v65, 0x1AC1u, 0);
            v48 = *(unsigned int *)(v36 + 48);
            v73 = *(void **)(v36 + 56);
            v74 = v48;
            sub_166BAF0((__int64)&v79, (__int64)&v73);
            sub_15F7200(&v79);
            v49 = a1 + 8;
            sub_168B9F0((__int64)&v79, (__int64 *)(a1 + 8), *(_DWORD *)(v36 + 24), 0x176Du, 0);
            v69 = *(_QWORD *)(v36 + 88);
            if ( v83 )
            {
              v49 = *(_QWORD *)(v36 + 88);
              sub_AE9DF0((unsigned __int8 **)&v82.m128i_i64[1], v49, 0xAu);
            }
            else if ( v85 )
            {
              v71 = sub_168B9E0(&v79);
              v54 = v81;
              if ( v81 )
                v54 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v81 + 32LL))(v81);
              v73 = v54;
              v55 = sub_1587BC0(v71, (__int64 *)&v73, v50, v51, v52, v53);
              v49 = v69;
              sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v84 + 8), v69, 0xAu);
            }
            v73 = (void *)sub_EEC8C0(*(_QWORD *)(v36 + 40), v49, *(double *)a7.m128i_i64);
            sub_1587DB0((__int64)&v79, (__int64 *)&v73);
            sub_15F7200(&v79);
          }
          else
          {
            v72 = sub_FD3F00(*(const void **)(v36 + 72), *(unsigned int *)(v36 + 68));
            v68 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL);
            v37 = *(_DWORD *)(v36 + 64);
            v73 = &v75;
            v70 = (v37 == 0) + 3;
            v38 = j__strlen("%0");
            sub_1BC95E0(&v73, "%0", (__int64)&aCannotYetEncod[v38 + 24]);
            HIDWORD(v79) = v72;
            LOBYTE(v79) = v70 | v79 & 0xF8;
            LOWORD(v79) = v79 & 0xFE07 | 0x118;
            v80 = &v82;
            if ( v73 == &v75 )
            {
              a7 = _mm_load_si128(&v75);
              v82 = a7;
            }
            else
            {
              v80 = v73;
              v82.m128i_i64[0] = v75.m128i_i64[0];
            }
            v33 = (void *)v74;
            v74 = 0;
            v75.m128i_i8[0] = 0;
            v81 = v33;
            v73 = &v75;
            v34 = sub_FD5980(v68, (__int64)&v79);
            if ( v80 != &v82 )
            {
              v66 = v34;
              operator delete(v80);
              v34 = v66;
            }
            if ( v73 != &v75 )
            {
              v67 = v34;
              operator delete(v73);
              v34 = v67;
            }
            sub_168B9F0((__int64)&v79, (__int64 *)(a1 + 8), v65, v34, 0);
            v35 = *(void **)(v36 + 56);
            v74 = *(unsigned int *)(v36 + 48);
            v73 = v35;
            sub_166BAF0((__int64)&v79, (__int64)&v73);
            sub_15F7200(&v79);
          }
        }
        v24 += 8;
      }
      while ( v64 != v24 );
      v7 = v76;
      v42 = 0;
      goto LABEL_48;
    }
LABEL_47:
    v42 = 0;
    goto LABEL_48;
  }
  v32 = &v7[32 * v30];
  while ( !(unsigned __int8)sub_C3D850(*(_QWORD *)(*(_QWORD *)v7 + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
       || !(_BYTE)v79 )
  {
    if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*((_QWORD *)v7 + 1) + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
      && (_BYTE)v79 )
    {
      v7 += 8;
      if ( v7 == v24 )
        goto LABEL_22;
      goto LABEL_57;
    }
    if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
      && (_BYTE)v79 )
    {
      v7 += 16;
      break;
    }
    if ( (unsigned __int8)sub_C3D850(*(_QWORD *)(*((_QWORD *)v7 + 3) + 40LL), &v79, *(_QWORD *)(v29 + 248), 0, v22, v23)
      && (_BYTE)v79 )
    {
      v7 += 24;
      break;
    }
    v7 += 32;
    if ( v32 == v7 )
    {
      v31 = (v24 - v7) >> 3;
      goto LABEL_68;
    }
  }
LABEL_21:
  if ( v7 == v24 )
    goto LABEL_22;
LABEL_57:
  v44 = *(_QWORD *)v7;
  sub_168B9F0((__int64)&v79, (__int64 *)(a1 + 8), v65, 0xE6Du, 0);
  v45 = *(unsigned int *)(v44 + 48);
  v73 = *(void **)(v44 + 56);
  v74 = v45;
  sub_166BAF0((__int64)&v79, (__int64)&v73);
  sub_15F7200(&v79);
  v46 = a1 + 8;
  sub_168B9F0((__int64)&v79, (__int64 *)(a1 + 8), *(_DWORD *)(v44 + 24), 0x176Du, 0);
  v47 = *(_QWORD *)(v44 + 88);
  if ( v83 )
  {
    v46 = *(_QWORD *)(v44 + 88);
    sub_AE9DF0((unsigned __int8 **)&v82.m128i_i64[1], v46, 0xAu);
  }
  else if ( v85 )
  {
    v60 = sub_168B9E0(&v79);
    v61 = v81;
    if ( v81 )
      v61 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v81 + 32LL))(v81);
    v73 = v61;
    v62 = sub_1587BC0(v60, (__int64 *)&v73, v56, v57, v58, v59);
    v46 = v47;
    sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v84 + 8), v47, 0xAu);
  }
  v73 = (void *)sub_EEC8C0(*(_QWORD *)(v44 + 40), v46, *(double *)a7.m128i_i64);
  sub_1587DB0((__int64)&v79, (__int64 *)&v73);
  v42 = 1;
  sub_15F7200(&v79);
  v7 = v76;
LABEL_48:
  if ( v7 != ptr )
    free(v7);
  return v42;
}
