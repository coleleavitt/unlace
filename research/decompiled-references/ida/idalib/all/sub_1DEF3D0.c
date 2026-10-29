__int64 __fastcall sub_1DEF3D0(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 *v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // r12
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // r15
  int v22; // r14d
  _QWORD *v23; // r12
  unsigned int v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  _BYTE *v33; // rdi
  int v34; // r12d
  char v35; // al
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 v42; // r14
  int v43; // r15d
  _DWORD *v44; // r12
  unsigned int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // eax
  _DWORD *v49; // rdx
  int v50; // r14d
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  void *v58; // rdx
  __int64 *v59; // [rsp+0h] [rbp-158h]
  __int64 v61; // [rsp+20h] [rbp-138h]
  unsigned __int16 *v62; // [rsp+30h] [rbp-128h]
  void **v63; // [rsp+40h] [rbp-118h]
  _QWORD *v64; // [rsp+48h] [rbp-110h]
  __int64 v65; // [rsp+48h] [rbp-110h]
  _QWORD *v66; // [rsp+48h] [rbp-110h]
  _QWORD *v67; // [rsp+50h] [rbp-108h]
  unsigned __int64 v68; // [rsp+58h] [rbp-100h]
  __int64 v69; // [rsp+60h] [rbp-F8h] BYREF
  _DWORD *v70; // [rsp+68h] [rbp-F0h]
  char v71; // [rsp+72h] [rbp-E6h] BYREF
  char v72; // [rsp+73h] [rbp-E5h] BYREF
  int v73; // [rsp+74h] [rbp-E4h] BYREF
  __int64 v74; // [rsp+78h] [rbp-E0h] BYREF
  void *v75; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v76; // [rsp+88h] [rbp-D0h]
  _BYTE v77[40]; // [rsp+90h] [rbp-C8h] BYREF
  __int128 v78; // [rsp+B8h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+C8h] [rbp-90h]
  void *ptr; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-70h]
  _BYTE v82[104]; // [rsp+F0h] [rbp-68h] BYREF

  v7 = *a1;
  v69 = a3;
  v70 = a4;
  sub_18C74E0(v7, 4, 0, 4);
  v62 = sub_1DC71F0(a1, *(_QWORD *)(v69 + 40), v8, v9, v10, v11, a5, a6);
  if ( v62 == (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v17 = 0;
    sub_190D5E0(v7, a5);
    return v17;
  }
  sub_190D5E0(v7, a5);
  v12 = v69;
  v74 = *(_QWORD *)(v69 + 32);
  ptr = v82;
  v81 = 0x500000000LL;
  v61 = *(_DWORD *)(v69 + 48) & 0x7FFFFFFF;
  if ( (*(_DWORD *)(v69 + 48) & 0x7FFFFFFF) != 0 )
  {
    v13 = (__int64 *)(v69 + 64);
    v63 = (void **)(v69 + 64 + 8LL * (*(_DWORD *)(v69 + 48) & 0x7FFFFFFF));
  }
  else
  {
    if ( *(char *)(v69 + 51) < 0 )
    {
      LODWORD(v14) = 1;
LABEL_43:
      v42 = *a1;
      v43 = *(_DWORD *)(*a1 + 12632);
      v44 = v70 + 1;
      *(_DWORD *)(*a1 + 12632) = 0;
      v45 = sub_F6C520(*(_QWORD *)(v12 + 32));
      v48 = sub_1DCE820(
              a1,
              a2,
              *(_QWORD *)(v69 + 32),
              (const __m128i *)(v45 * (((unsigned __int64)v44 - (v44 != nullptr)) / v45 + (v44 != nullptr))),
              a5,
              a6,
              v46,
              v47);
      v17 = sub_1E6E600(*a1, v48, (unsigned int)v62 & 0xFFFFFFFE, 0, *v70, v14, (__int64)ptr, (unsigned int)v81);
      if ( (v17 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v17, 4, 4);
        *v49 = *v70;
      }
      *(_DWORD *)(v42 + 12632) = v43;
      goto LABEL_8;
    }
    v13 = &v74;
    v63 = &v75;
  }
  v59 = v13;
  LOBYTE(v14) = 1;
  while ( 1 )
  {
    v15 = *v59;
    if ( (*(_BYTE *)(*(_QWORD *)(*v59 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) == 0 )
    {
      v16 = (unsigned __int64)sub_1DD1AB0((__int64)a1, *v59, a5, a6);
      if ( (v16 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
        v17 = 0;
        goto LABEL_8;
      }
      v40 = (unsigned int)v81;
      v41 = (unsigned int)v81 + 1LL;
      if ( v41 > HIDWORD(v81) )
      {
        v64 = (_QWORD *)v16;
        sub_2237220(&ptr, v82, v41, 8);
        v40 = (unsigned int)v81;
        v16 = (unsigned __int64)v64;
      }
      *((_QWORD *)ptr + v40) = v16;
      LODWORD(v81) = v81 + 1;
      goto LABEL_29;
    }
    v19 = *v59;
    v20 = *a1;
    v75 = v77;
    v76 = 0x200000000LL;
    sub_1E4C960(v20, v19);
    v71 = 1;
    LODWORD(v19) = *v70;
    v72 = 0;
    v73 = 0;
    if ( sub_1DDBB60(a1, v19, 0, (__int64)v75, (unsigned int)v76, (__int64)&v71, a5, a6, (__int64)&v72, (__int64)&v73) )
    {
      v17 = 0;
      goto LABEL_22;
    }
    if ( v71 )
      break;
    v21 = *a1;
    v22 = *(_DWORD *)(*a1 + 12632);
    v23 = *(_QWORD **)(*a1 + 248);
    *(_DWORD *)(*a1 + 12632) = 0;
    v24 = sub_F6CCB0(&v69, a5);
    v25 = sub_A81910(v23, v15, v24);
    v28 = sub_1DCE820(a1, a2, *v25, (const __m128i *)(v25 + 1), a5, a6, v26, v27);
    if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_20;
    if ( !v61 )
    {
      v29 = sub_1E6E600(*a1, v28, (unsigned int)v62 & 0xFFFFFFFE, 0, *v70, 0, 0, 0);
      v17 = v29;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        sub_1EA6140(a2, v29, 4, 4);
        *v30 = *v70;
LABEL_21:
        *(_DWORD *)(v21 + 12632) = v22;
        goto LABEL_22;
      }
LABEL_20:
      v17 = 0;
      goto LABEL_21;
    }
    v31 = (unsigned int)v81;
    v32 = (unsigned int)v81 + 1LL;
    if ( v32 > HIDWORD(v81) )
    {
      v65 = v28;
      sub_2237220(&ptr, v82, v32, 8);
      v31 = (unsigned int)v81;
      v28 = v65;
    }
    *((_QWORD *)ptr + v31) = v28;
    v33 = v75;
    LODWORD(v81) = v81 + 1;
    *(_DWORD *)(v21 + 12632) = v22;
    if ( v33 != v77 )
      goto LABEL_28;
LABEL_29:
    if ( v63 == (void **)++v59 )
    {
      LODWORD(v14) = (unsigned __int8)v14;
      v12 = v69;
      goto LABEL_43;
    }
  }
  if ( v73 != 1 )
  {
    v34 = 0;
    do
    {
      v21 = *a1;
      ++v34;
      v22 = *(_DWORD *)(*a1 + 12632);
      *(_DWORD *)(*a1 + 12632) = v34;
      v36 = (unsigned __int64)sub_1DD1AB0((__int64)a1, v15, a5, a6);
      v37 = v36 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v36 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        goto LABEL_20;
      v38 = (unsigned int)v81;
      v39 = (unsigned int)v81 + 1LL;
      if ( v39 > HIDWORD(v81) )
      {
        v68 = v36 & 0xFFFFFFFFFFFFFFF0LL;
        v67 = (_QWORD *)v36;
        sub_2237220(&ptr, v82, v39, 8);
        v37 = v68;
        v36 = (unsigned __int64)v67;
        v38 = (unsigned int)v81;
      }
      *((_QWORD *)ptr + v38) = v36;
      LODWORD(v81) = v81 + 1;
      v35 = *(_BYTE *)(*(_QWORD *)v37 + 17LL);
      *(_DWORD *)(v21 + 12632) = v22;
      LOBYTE(v14) = ~v35 & v14;
    }
    while ( v73 - 1 != v34 );
  }
  if ( !v72 )
  {
LABEL_38:
    v33 = v75;
    if ( v75 == v77 )
      goto LABEL_29;
LABEL_28:
    free(v33);
    goto LABEL_29;
  }
  v14 = *a1;
  v50 = *(_DWORD *)(*a1 + 12632);
  *(_DWORD *)(*a1 + 12632) = 0;
  sub_1DB8420((__m128i *)&v78, a1);
  v51 = (unsigned __int64)sub_1DD1AB0((__int64)a1, v15, a5, a6);
  if ( (v51 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v56 = (unsigned int)v81;
    v57 = (unsigned int)v81 + 1LL;
    if ( v57 > HIDWORD(v81) )
    {
      v66 = (_QWORD *)v51;
      sub_2237220(&ptr, v82, v57, 8);
      v56 = (unsigned int)v81;
      v51 = (unsigned __int64)v66;
    }
    v58 = ptr;
    *((_QWORD *)ptr + v56) = v51;
    LODWORD(v81) = v81 + 1;
    sub_1DB8040((__int64)a1, a1 + 4, (__int64)v58, v56, v54, v55, v78, v79);
    *(_DWORD *)(v14 + 12632) = v50;
    LOBYTE(v14) = 0;
    goto LABEL_38;
  }
  v17 = 0;
  sub_1DB8040((__int64)a1, a1 + 4, v52, v53, v54, v55, v78, v79);
  *(_DWORD *)(v14 + 12632) = v50;
LABEL_22:
  if ( v75 != v77 )
    free(v75);
LABEL_8:
  if ( ptr != v82 )
    free(ptr);
  return v17;
}
