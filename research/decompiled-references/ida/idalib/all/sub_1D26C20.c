__int64 __fastcall sub_1D26C20(__int64 **a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  void **v10; // r13
  unsigned __int64 v11; // rsi
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r11
  unsigned __int64 v25; // rbp
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rdi
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  void *v32; // r9
  unsigned int v33; // ecx
  __int64 v34; // rsi
  unsigned int v35; // edx
  __int64 v36; // r8
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r12
  __int64 v46; // rsi
  __int64 *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  _QWORD *v52; // rax
  unsigned __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // [rsp+8h] [rbp-E0h]
  __int64 v57; // [rsp+8h] [rbp-E0h]
  char v58; // [rsp+10h] [rbp-D8h]
  void *v59; // [rsp+10h] [rbp-D8h]
  __int64 v60; // [rsp+10h] [rbp-D8h]
  __int64 v61; // [rsp+18h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-D0h]
  __int64 v63; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v64; // [rsp+18h] [rbp-D0h]
  int v65; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v66; // [rsp+20h] [rbp-C8h]
  __int64 v67; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v68; // [rsp+20h] [rbp-C8h]
  __int64 v69; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v70; // [rsp+28h] [rbp-C0h]
  __int64 v71; // [rsp+30h] [rbp-B8h]
  __int64 v72; // [rsp+38h] [rbp-B0h]
  char v73; // [rsp+4Fh] [rbp-99h] BYREF
  void *v74; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v75; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v77; // [rsp+68h] [rbp-80h]
  _BYTE v78[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *(void ***)(a2 + 32);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v10 = sub_1D26A30(a1, v6, a3);
  else
    v10 = (void **)sub_1D1AAC0(a1, (__int64)v6, a3, a4);
  if ( !v10 )
    return 1;
  v56 = 0;
  v11 = *(_QWORD *)a2;
  v12 = (*(_QWORD *)a2 >> 16) & 0x10LL;
  if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( !v13 )
    {
LABEL_8:
      v58 = 1;
      LOBYTE(v12) = 1;
      goto LABEL_10;
    }
    v14 = sub_1D11200((__int64 *)a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v7, v8, v9);
    if ( v14 != 1 )
    {
      v11 = *(_QWORD *)a2;
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_8;
    }
    return 1;
  }
  v58 = 0;
  v13 = 0;
LABEL_10:
  v15 = *(unsigned int *)(a2 + 4);
  v73 = 0;
  ptr = v78;
  v77 = 0x800000000LL;
  v16 = sub_1D11730(
          (__int64 *)a1,
          (unsigned __int16 **)(a2 + 8 * (((v11 >> 20) & 1) + ((v11 >> 24) & 1)) + 56),
          v15,
          1u,
          (__int64)&ptr,
          &v73,
          a3,
          a4);
  v19 = v16;
  if ( !(_BYTE)v16 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0
      && (v20 = (*(_QWORD *)a2 >> 20) & 1LL, (v21 = *(_QWORD *)(a2 + 8 * v20 + 56)) != 0) )
    {
      v61 = *(_QWORD *)(a2 + 8 * v20 + 56);
      v22 = sub_1D119D0((__int64 *)a1, v61, 1u, a3, a4, v16, v21, v18);
      v23 = v61;
      v19 = 0;
      v24 = v22;
      if ( v22 == 1 )
        goto LABEL_14;
    }
    else
    {
      v23 = 0;
      v24 = 0;
    }
    v26 = *(_QWORD *)(a2 + 16);
    if ( v26 )
    {
      v69 = v24;
      v66 = v19;
      v62 = v23;
      v27 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 16), a3, a4, v17, v19, v23, v26);
      v23 = v62;
      v19 = v66;
      v26 = v27;
      v24 = v69;
      if ( !v27 )
        goto LABEL_14;
    }
    v28 = *(_QWORD *)(a2 + 24);
    if ( v28 )
    {
      v71 = v24;
      v70 = v19;
      v67 = v23;
      v63 = v26;
      v28 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 24), a3, a4, v17, v19, v23, v26);
      v26 = v63;
      v23 = v67;
      v19 = v70;
      v24 = v71;
      if ( !v28 )
        goto LABEL_14;
    }
    v29 = *a1;
    v30 = v24 & 0xFFFFFFFFFFFFFFFELL;
    v31 = *((unsigned int *)*a1 + 3158);
    if ( !(_DWORD)v31 && *(void ***)(a2 + 32) == v10 )
    {
      v34 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v31 = *(_QWORD *)(a2 + 56);
        v72 = v31;
        LOBYTE(v19) = v31 != 0;
      }
      if ( v58 == (_BYTE)v19 )
      {
        if ( v72 != v13 && v58 )
        {
          v32 = *v10;
          v33 = *(_DWORD *)(a2 + 40);
          goto LABEL_26;
        }
        if ( v30 == v23 && v26 == *(_QWORD *)(a2 + 16) && v28 == *(_QWORD *)(a2 + 24) && !v73 )
        {
          if ( v26 )
          {
            v34 = *(unsigned int *)(a2 + 40);
            v57 = v28;
            sub_1910D40((__int64)v29, v34, v26, 1, v23, v26, a3, a4);
            v28 = v57;
          }
          if ( v28 )
          {
            v34 = *(unsigned int *)(a2 + 40);
            sub_1910D40((__int64)*a1, v34, v28, 1, v23, v26, a3, a4);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v34, v31, v19) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v45 = (*a1)[31];
            v46 = sub_DC7990(a2, v34, v43, v44);
            v47 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v45, v46) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v47 + 16) == 48 )
            {
              v52 = sub_F60F10(*v47, v46, v48, v49, v50, v51);
              v53 = sub_1A69EF0(*a1, (__int64)v52);
              if ( v53 )
                sub_1910D40((__int64)*a1, *(unsigned int *)(a2 + 40), v53, 1, v54, v55, a3, a4);
            }
          }
          v25 = a2;
          goto LABEL_15;
        }
      }
    }
    v32 = *v10;
    if ( !v58 )
    {
      v64 = v30;
      v59 = *v10;
      v38 = sub_A72040((_QWORD *)v29[31], (__int64)v32);
      v32 = v59;
      v30 = v64;
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
            v13 = *(_QWORD *)(v38 + 40);
            LOBYTE(v12) = 1;
          }
          v34 = *(_QWORD *)a2;
        }
        else
        {
          v68 = v64;
          v65 = *(_DWORD *)(a2 + 40);
          v60 = v38;
          v40 = sub_A63CE0((_QWORD *)v29[31]);
          sub_A5DAD0((__int64)&v74, v60);
          v41 = sub_C0C5D0((_QWORD *)(*a1)[31], (__int64)&v74, v40, v65);
          v42 = v60;
          v13 = v41;
          v30 = v68;
          if ( v75 > 0x40 && v74 )
          {
            operator delete[](v74);
            v30 = v68;
            v42 = v60;
          }
          v32 = *(void **)(v42 + 32);
          v29 = *a1;
          LOBYTE(v12) = 1;
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
    LOBYTE(v56) = v12;
    v25 = sub_19B7590(
            v29,
            ((unsigned __int64)v33 << 32) | v33,
            (v34 & 0x80000) != 0,
            v33,
            (__int64)ptr,
            (unsigned int)v77,
            a3,
            a4,
            v33,
            (v36 << 32) | v35,
            (unsigned __int64)v32,
            v10,
            v13,
            v56,
            *(_QWORD *)(a2 + 48),
            v30);
    goto LABEL_15;
  }
LABEL_14:
  v25 = 1;
LABEL_15:
  if ( ptr != v78 )
    free(ptr);
  return v25;
}
