__int64 __fastcall sub_1DDFA80(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void **v11; // r13
  unsigned __int64 v12; // rsi
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  unsigned __int16 *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  unsigned __int16 *v22; // rax
  __int64 v23; // r8
  unsigned __int16 *v24; // r11
  unsigned __int64 v25; // rbp
  __int64 v26; // r9
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  void *v32; // r9
  unsigned int v33; // ecx
  __int64 v34; // rsi
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rax
  __int64 v41; // r8
  int v42; // ecx
  __int64 v43; // r12
  unsigned __int64 v44; // r11
  unsigned __int8 v45; // dl
  __int64 v46; // rsi
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r12
  __int64 v52; // rsi
  __int64 *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  unsigned __int64 v59; // rax
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // [rsp+8h] [rbp-E0h]
  __int64 v63; // [rsp+8h] [rbp-E0h]
  char v64; // [rsp+10h] [rbp-D8h]
  void *v65; // [rsp+10h] [rbp-D8h]
  int v66; // [rsp+10h] [rbp-D8h]
  __int64 v67; // [rsp+10h] [rbp-D8h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  __int64 v70; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v71; // [rsp+18h] [rbp-D0h]
  __int64 v72; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v73; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v74; // [rsp+20h] [rbp-C8h]
  __int64 v75; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v76; // [rsp+20h] [rbp-C8h]
  unsigned __int16 *v77; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v78; // [rsp+28h] [rbp-C0h]
  unsigned __int16 *v79; // [rsp+30h] [rbp-B8h]
  __int64 v80; // [rsp+38h] [rbp-B0h]
  char v81; // [rsp+4Fh] [rbp-99h] BYREF
  void *v82; // [rsp+50h] [rbp-98h] BYREF
  int v83; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v85; // [rsp+68h] [rbp-80h]
  _BYTE v86[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *(void ***)(a2 + 32);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v11 = sub_1DD4760((__int64)a1, v6, a3, a4);
  else
    v11 = (void **)sub_1DD1930((__int64)a1, (__int64)v6, a3, a4);
  if ( !v11 )
    return 1;
  v62 = 0;
  v12 = *(_QWORD *)a2;
  v13 = (*(_QWORD *)a2 >> 16) & 0x10LL;
  if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 )
  {
    v14 = *(_QWORD *)(a2 + 56);
    if ( !v14 )
    {
LABEL_8:
      v64 = 1;
      LOBYTE(v13) = 1;
      goto LABEL_10;
    }
    v15 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 56), v7, v8, v9, v10, a3, a4);
    if ( v15 != (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
      v12 = *(_QWORD *)a2;
      v14 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_8;
    }
    return 1;
  }
  v64 = 0;
  v14 = 0;
LABEL_10:
  v16 = *(unsigned int *)(a2 + 4);
  v81 = 0;
  ptr = v86;
  v85 = 0x800000000LL;
  v17 = sub_1DDBD00(
          a1,
          (unsigned __int64 *)(a2 + 8 * (((v12 >> 20) & 1) + ((v12 >> 24) & 1)) + 56),
          v16,
          1u,
          (__int64)&ptr,
          &v81,
          a3,
          a4);
  v19 = v17;
  if ( !(_BYTE)v17 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0
      && (v20 = (*(_QWORD *)a2 >> 20) & 1LL, (v21 = *(_QWORD *)(a2 + 8 * v20 + 56)) != 0) )
    {
      v68 = *(_QWORD *)(a2 + 8 * v20 + 56);
      v22 = sub_1DDC230(a1, v68, 1u, a3, a4, v17, v21, v18);
      v23 = v68;
      v19 = 0;
      v24 = v22;
      if ( v22 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_14;
    }
    else
    {
      v23 = 0;
      v24 = nullptr;
    }
    v26 = *(_QWORD *)(a2 + 16);
    if ( v26 )
    {
      v77 = v24;
      v74 = v19;
      v69 = v23;
      v27 = sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 40), *(_QWORD *)(a2 + 16), v19, v23, v26, a3, a4);
      v23 = v69;
      v19 = v74;
      v26 = v27;
      v24 = v77;
      if ( !v27 )
        goto LABEL_14;
    }
    v28 = *(_QWORD *)(a2 + 24);
    if ( v28 )
    {
      v79 = v24;
      v78 = v19;
      v75 = v23;
      v70 = v26;
      v28 = sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 40), *(_QWORD *)(a2 + 24), v19, v23, v26, a3, a4);
      v26 = v70;
      v23 = v75;
      v19 = v78;
      v24 = v79;
      if ( !v28 )
        goto LABEL_14;
    }
    v29 = *a1;
    v30 = (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFELL;
    v31 = *(unsigned int *)(*a1 + 12632);
    if ( !(_DWORD)v31 && *(void ***)(a2 + 32) == v11 )
    {
      v34 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v31 = *(_QWORD *)(a2 + 56);
        v80 = v31;
        LOBYTE(v19) = v31 != 0;
      }
      if ( v64 == (_BYTE)v19 )
      {
        if ( v80 != v14 && v64 )
        {
          v32 = *v11;
          v33 = *(_DWORD *)(a2 + 40);
          goto LABEL_26;
        }
        if ( v30 == v23 && v26 == *(_QWORD *)(a2 + 16) && v28 == *(_QWORD *)(a2 + 24) && !v81 )
        {
          if ( v26 )
          {
            v34 = *(unsigned int *)(a2 + 40);
            v63 = v28;
            sub_1910D40(v29, v34, v26, 1, v23, v26, a3, a4);
            v28 = v63;
          }
          if ( v28 )
          {
            v34 = *(unsigned int *)(a2 + 40);
            sub_1910D40(*a1, v34, v28, 1, v23, v26, a3, a4);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v34, v31, v19) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v51 = *(_QWORD *)(*a1 + 248);
            v52 = sub_DC7990(a2, v34, v49, v50);
            v53 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v51, v52) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v53 + 16) == 48 )
            {
              v58 = sub_F60F10(*v53, v52, v54, v55, v56, v57);
              v59 = sub_1A69EF0((__int64 *)*a1, (__int64)v58);
              if ( v59 )
                sub_1910D40(*a1, *(unsigned int *)(a2 + 40), v59, 1, v60, v61, a3, a4);
            }
          }
          v25 = a2;
          goto LABEL_15;
        }
      }
    }
    v32 = *v11;
    if ( !v64 )
    {
      v71 = v30;
      v65 = *v11;
      v38 = sub_A72040(*(_QWORD **)(v29 + 248), (__int64)v32);
      v32 = v65;
      v30 = v71;
      if ( v38 )
      {
        v29 = *a1;
        v33 = *(_DWORD *)(a2 + 40);
        v39 = *(unsigned __int8 *)(v38 + 16);
        if ( (unsigned int)(v39 - 2) > 1 )
        {
          if ( (_BYTE)v39 == 4 && *(_QWORD *)(v38 + 40) )
          {
            v32 = *(void **)(v38 + 32);
            v14 = *(_QWORD *)(v38 + 40);
            LOBYTE(v13) = 1;
          }
          v34 = *(_QWORD *)a2;
        }
        else
        {
          v76 = v71;
          v72 = v38;
          v66 = *(_DWORD *)(a2 + 40);
          v40 = sub_A63CE0(*(_QWORD **)(v29 + 248));
          v41 = v72;
          v42 = v66;
          v43 = v40;
          v44 = v76;
          v45 = *(_BYTE *)(v72 + 19);
          v46 = *(_QWORD *)(v72 + 40);
          if ( (v45 & 2) != 0 )
          {
            v83 = *(_DWORD *)(v46 + 8);
            if ( (unsigned int)v83 > 0x40 )
            {
              sub_2205510(&v82);
              v42 = v66;
              v41 = v72;
              v44 = v76;
            }
            else
            {
              v82 = *(void **)v46;
            }
          }
          else
          {
            v83 = 8 * ((v45 >> 2) & 0x1F);
            if ( v83 > 64 )
            {
              sub_2205470(&v82, v46, 0);
              v44 = v76;
              v41 = v72;
              v42 = v66;
            }
            else
            {
              v82 = (void *)v46;
            }
          }
          v73 = v44;
          v67 = v41;
          v47 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v82, v43, v42);
          v48 = v67;
          v14 = v47;
          v30 = v73;
          if ( (unsigned int)v83 > 0x40 && v82 )
          {
            operator delete[](v82);
            v30 = v73;
            v48 = v67;
          }
          v32 = *(void **)(v48 + 32);
          v29 = *a1;
          LOBYTE(v13) = 1;
          v33 = *(_DWORD *)(a2 + 40);
          v34 = *(_QWORD *)a2;
        }
        goto LABEL_26;
      }
      v29 = *a1;
    }
    v33 = *(_DWORD *)(a2 + 40);
    v34 = *(_QWORD *)a2;
LABEL_26:
    if ( (v34 & 0x8000000) != 0 )
    {
      v35 = *(_DWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v34 & 0x100000) != 0) + (BYTE3(v34) & 1u)) + 56);
      v36 = *(unsigned int *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v34 & 0x100000) != 0) + (BYTE3(v34) & 1u)) + 60);
    }
    else
    {
      v36 = 0;
      v35 = 0;
    }
    LOBYTE(v62) = v13;
    v25 = sub_19B7590(
            (__int64 *)v29,
            ((unsigned __int64)v33 << 32) | v33,
            (v34 & 0x80000) != 0,
            v33,
            (__int64)ptr,
            (unsigned int)v85,
            a3,
            a4,
            v33,
            (v36 << 32) | v35,
            (unsigned __int64)v32,
            v11,
            v14,
            v62,
            *(_QWORD *)(a2 + 48),
            v30);
    goto LABEL_15;
  }
LABEL_14:
  v25 = 1;
LABEL_15:
  if ( ptr != v86 )
    free(ptr);
  return v25;
}
