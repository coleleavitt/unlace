__int64 __fastcall sub_1E289B0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
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
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r11
  unsigned __int64 v24; // rbp
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned __int64 v29; // r11
  __int64 v30; // rdx
  void *v31; // r9
  unsigned int v32; // ecx
  __int64 v33; // rsi
  unsigned int v34; // edx
  __int64 v35; // r8
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned __int64 v41; // r11
  __int64 v42; // r12
  int v43; // ecx
  unsigned __int8 v44; // dl
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r12
  __int64 v51; // rsi
  __int64 *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  _QWORD *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // [rsp+8h] [rbp-E0h]
  __int64 v62; // [rsp+8h] [rbp-E0h]
  char v63; // [rsp+10h] [rbp-D8h]
  void *v64; // [rsp+10h] [rbp-D8h]
  __int64 v65; // [rsp+10h] [rbp-D8h]
  __int64 v66; // [rsp+10h] [rbp-D8h]
  __int64 v67; // [rsp+18h] [rbp-D0h]
  __int64 v68; // [rsp+18h] [rbp-D0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v70; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v71; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v72; // [rsp+20h] [rbp-C8h]
  __int64 v73; // [rsp+20h] [rbp-C8h]
  int v74; // [rsp+20h] [rbp-C8h]
  __int64 v75; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v76; // [rsp+28h] [rbp-C0h]
  __int64 v77; // [rsp+30h] [rbp-B8h]
  __int64 v78; // [rsp+38h] [rbp-B0h]
  char v79; // [rsp+4Fh] [rbp-99h] BYREF
  void *v80; // [rsp+50h] [rbp-98h] BYREF
  int v81; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v83; // [rsp+68h] [rbp-80h]
  _BYTE v84[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *(void ***)(a2 + 32);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v10 = sub_1E287C0(a1, v6, a3);
  else
    v10 = (void **)sub_1E1F330(a1, (__int64)v6, a3, a4);
  if ( !v10 )
    return 1;
  v61 = 0;
  v11 = *(_QWORD *)a2;
  v12 = (*(_QWORD *)a2 >> 16) & 0x10LL;
  if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( !v13 )
    {
LABEL_8:
      v63 = 1;
      LOBYTE(v12) = 1;
      goto LABEL_10;
    }
    v14 = sub_1E11560(a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v7, v8, v9);
    if ( v14 != 1 )
    {
      v11 = *(_QWORD *)a2;
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_8;
    }
    return 1;
  }
  v63 = 0;
  v13 = 0;
LABEL_10:
  v15 = *(unsigned int *)(a2 + 4);
  v79 = 0;
  ptr = v84;
  v83 = 0x800000000LL;
  v16 = sub_1E11B50(
          a1,
          (unsigned __int16 **)(a2 + 8 * (((v11 >> 20) & 1) + ((v11 >> 24) & 1)) + 56),
          v15,
          1u,
          (__int64)&ptr,
          &v79,
          a3,
          a4);
  v18 = v16;
  if ( !(_BYTE)v16 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0
      && (v19 = (*(_QWORD *)a2 >> 20) & 1LL, (v20 = *(_QWORD *)(a2 + 8 * v19 + 56)) != 0) )
    {
      v67 = *(_QWORD *)(a2 + 8 * v19 + 56);
      v21 = sub_1E11DF0(a1, v67, 1u, a3, a4, v16, v20, v17);
      v22 = v67;
      v18 = 0;
      v23 = v21;
      if ( v21 == 1 )
        goto LABEL_14;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v25 = *(_QWORD *)(a2 + 16);
    if ( v25 )
    {
      v75 = v23;
      v72 = v18;
      v68 = v22;
      v26 = sub_1E0AF30((__int64)a1, *(_QWORD *)(a2 + 16));
      v22 = v68;
      v18 = v72;
      v25 = v26;
      v23 = v75;
      if ( !v26 )
        goto LABEL_14;
    }
    v27 = *(_QWORD *)(a2 + 24);
    if ( v27 )
    {
      v77 = v23;
      v76 = v18;
      v73 = v22;
      v69 = v25;
      v27 = sub_1E0AF30((__int64)a1, *(_QWORD *)(a2 + 24));
      v25 = v69;
      v22 = v73;
      v18 = v76;
      v23 = v77;
      if ( !v27 )
        goto LABEL_14;
    }
    v28 = *a1;
    v29 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v30 = *(unsigned int *)(*a1 + 12632);
    if ( !(_DWORD)v30 && *(void ***)(a2 + 32) == v10 )
    {
      v33 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v30 = *(_QWORD *)(a2 + 56);
        v78 = v30;
        LOBYTE(v18) = v30 != 0;
      }
      if ( (_BYTE)v18 == v63 )
      {
        if ( v78 != v13 && (_BYTE)v18 == 1 )
        {
          v31 = *v10;
          v32 = *(_DWORD *)(a2 + 40);
          goto LABEL_26;
        }
        if ( v22 == v29 && v25 == *(_QWORD *)(a2 + 16) && v27 == *(_QWORD *)(a2 + 24) && !v79 )
        {
          if ( v25 )
          {
            v33 = *(unsigned int *)(a2 + 40);
            v62 = v27;
            sub_1910D40(v28, v33, v25, 1, v22, v25, a3, a4);
            v27 = v62;
          }
          if ( v27 )
          {
            v33 = *(unsigned int *)(a2 + 40);
            sub_1910D40(*a1, v33, v27, 1, v22, v25, a3, a4);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v33, v30, v18) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v50 = *(_QWORD *)(*a1 + 248);
            v51 = sub_DC7990(a2, v33, v48, v49);
            v52 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v50, v51) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v52 + 16) == 48 )
            {
              v57 = sub_F60F10(*v52, v51, v53, v54, v55, v56);
              v58 = sub_1A69EF0((__int64 *)*a1, (__int64)v57);
              if ( v58 )
                sub_1910D40(*a1, *(unsigned int *)(a2 + 40), v58, 1, v59, v60, a3, a4);
            }
          }
          v24 = a2;
          goto LABEL_15;
        }
      }
    }
    v31 = *v10;
    if ( !v63 )
    {
      v70 = v29;
      v64 = *v10;
      v37 = sub_A72040(*(_QWORD **)(v28 + 248), (__int64)v31);
      v31 = v64;
      v29 = v70;
      if ( v37 )
      {
        v28 = *a1;
        v32 = *(_DWORD *)(a2 + 40);
        v38 = *(unsigned __int8 *)(v37 + 16);
        if ( (unsigned int)(v38 - 2) > 1 )
        {
          if ( (_BYTE)v38 == 4 && *(_QWORD *)(v37 + 40) )
          {
            v31 = *(void **)(v37 + 32);
            v13 = *(_QWORD *)(v37 + 40);
            LOBYTE(v12) = 1;
          }
          v33 = *(_QWORD *)a2;
        }
        else
        {
          v74 = *(_DWORD *)(a2 + 40);
          v65 = v37;
          v39 = sub_A63CE0(*(_QWORD **)(v28 + 248));
          v40 = v65;
          v41 = v70;
          v42 = v39;
          v43 = v74;
          v44 = *(_BYTE *)(v65 + 19);
          v45 = *(_QWORD *)(v65 + 40);
          if ( (v44 & 2) != 0 )
          {
            v81 = *(_DWORD *)(v45 + 8);
            if ( (unsigned int)v81 > 0x40 )
            {
              sub_2205510(&v80);
              v40 = v65;
              v41 = v70;
              v43 = v74;
            }
            else
            {
              v80 = *(void **)v45;
            }
          }
          else
          {
            v81 = 8 * ((v44 >> 2) & 0x1F);
            if ( v81 > 64 )
            {
              sub_2205470(&v80, v45, 0);
              v43 = v74;
              v41 = v70;
              v40 = v65;
            }
            else
            {
              v80 = (void *)v45;
            }
          }
          v71 = v41;
          v66 = v40;
          v46 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v80, v42, v43);
          v47 = v66;
          v13 = v46;
          v29 = v71;
          if ( (unsigned int)v81 > 0x40 && v80 )
          {
            operator delete[](v80);
            v29 = v71;
            v47 = v66;
          }
          v31 = *(void **)(v47 + 32);
          v28 = *a1;
          LOBYTE(v12) = 1;
          v32 = *(_DWORD *)(a2 + 40);
          v33 = *(_QWORD *)a2;
        }
        goto LABEL_26;
      }
      v28 = *a1;
    }
    v32 = *(_DWORD *)(a2 + 40);
    v33 = *(_QWORD *)a2;
LABEL_26:
    if ( (v33 & 0x8000000) != 0 )
    {
      v34 = *(_DWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v33 & 0x100000) != 0) + (BYTE3(v33) & 1u)) + 56);
      v35 = *(unsigned int *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v33 & 0x100000) != 0) + (BYTE3(v33) & 1u)) + 60);
    }
    else
    {
      v35 = 0;
      v34 = 0;
    }
    LOBYTE(v61) = v12;
    v24 = sub_19B7590(
            (__int64 *)v28,
            ((unsigned __int64)v32 << 32) | v32,
            (v33 & 0x80000) != 0,
            v32,
            (__int64)ptr,
            (unsigned int)v83,
            a3,
            a4,
            v32,
            (v35 << 32) | v34,
            (unsigned __int64)v31,
            v10,
            v13,
            v61,
            *(_QWORD *)(a2 + 48),
            v29);
    goto LABEL_15;
  }
LABEL_14:
  v24 = 1;
LABEL_15:
  if ( ptr != v84 )
    free(ptr);
  return v24;
}
