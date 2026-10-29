__int64 __fastcall sub_1D5A7A0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  void **v11; // r13
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
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rsi
  __int64 *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // [rsp+8h] [rbp-E0h]
  __int64 v56; // [rsp+8h] [rbp-E0h]
  char v57; // [rsp+10h] [rbp-D8h]
  void *v58; // [rsp+10h] [rbp-D8h]
  __int64 v59; // [rsp+10h] [rbp-D8h]
  __int64 v60; // [rsp+18h] [rbp-D0h]
  __int64 v61; // [rsp+18h] [rbp-D0h]
  __int64 v62; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v63; // [rsp+18h] [rbp-D0h]
  unsigned __int8 v64; // [rsp+20h] [rbp-C8h]
  __int64 v65; // [rsp+20h] [rbp-C8h]
  int v66; // [rsp+20h] [rbp-C8h]
  __int64 v67; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v68; // [rsp+28h] [rbp-C0h]
  __int64 v69; // [rsp+30h] [rbp-B8h]
  __int64 v70; // [rsp+38h] [rbp-B0h]
  char v71; // [rsp+4Fh] [rbp-99h] BYREF
  void *v72; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v73; // [rsp+58h] [rbp-90h]
  void *ptr; // [rsp+60h] [rbp-88h] BYREF
  __int64 v75; // [rsp+68h] [rbp-80h]
  _BYTE v76[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = sub_1D5A780(a1, *(_QWORD *)(a2 + 32), a3, a4);
  if ( !v6 )
    return 1;
  v55 = 0;
  v10 = *(_QWORD *)a2;
  v11 = v6;
  v12 = (*(_QWORD *)a2 >> 16) & 0x10LL;
  if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a2 + 56);
    if ( !v13 )
    {
LABEL_6:
      v57 = 1;
      LOBYTE(v12) = 1;
      goto LABEL_8;
    }
    v14 = sub_1D434A0(a1, *(unsigned __int16 **)(a2 + 56), a3, a4, v7, v8, v9);
    if ( v14 != 1 )
    {
      v10 = *(_QWORD *)a2;
      v13 = v14 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_6;
    }
    return 1;
  }
  v57 = 0;
  v13 = 0;
LABEL_8:
  v15 = *(unsigned int *)(a2 + 4);
  v71 = 0;
  ptr = v76;
  v75 = 0x800000000LL;
  v16 = sub_1D43E00(
          a1,
          (unsigned __int16 **)(a2 + 8 * (((v10 >> 20) & 1) + ((v10 >> 24) & 1)) + 56),
          v15,
          1u,
          (__int64)&ptr,
          &v71,
          a3,
          a4);
  v18 = v16;
  if ( !(_BYTE)v16 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0
      && (v19 = (*(_QWORD *)a2 >> 20) & 1LL, (v20 = *(_QWORD *)(a2 + 8 * v19 + 56)) != 0) )
    {
      v60 = *(_QWORD *)(a2 + 8 * v19 + 56);
      v21 = sub_1D440A0(a1, v60, 1u, a3, a4, v16, v20, v17);
      v22 = v60;
      v18 = 0;
      v23 = v21;
      if ( v21 == 1 )
        goto LABEL_12;
    }
    else
    {
      v22 = 0;
      v23 = 0;
    }
    v25 = *(_QWORD *)(a2 + 16);
    if ( v25 )
    {
      v67 = v23;
      v64 = v18;
      v61 = v22;
      v26 = sub_1D41150((__int64)a1, *(_QWORD *)(a2 + 16));
      v22 = v61;
      v18 = v64;
      v25 = v26;
      v23 = v67;
      if ( !v26 )
        goto LABEL_12;
    }
    v27 = *(_QWORD *)(a2 + 24);
    if ( v27 )
    {
      v69 = v23;
      v68 = v18;
      v65 = v22;
      v62 = v25;
      v27 = sub_1D41150((__int64)a1, *(_QWORD *)(a2 + 24));
      v25 = v62;
      v22 = v65;
      v18 = v68;
      v23 = v69;
      if ( !v27 )
        goto LABEL_12;
    }
    v28 = *a1;
    v29 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v30 = *(unsigned int *)(*a1 + 12632);
    if ( !(_DWORD)v30 && v11 == *(void ***)(a2 + 32) )
    {
      v33 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v30 = *(_QWORD *)(a2 + 56);
        v70 = v30;
        LOBYTE(v18) = v30 != 0;
      }
      if ( (_BYTE)v18 == v57 )
      {
        if ( v70 != v13 && (_BYTE)v18 == 1 )
        {
          v31 = *v11;
          v32 = *(_DWORD *)(a2 + 40);
          goto LABEL_24;
        }
        if ( v22 == v29 && v25 == *(_QWORD *)(a2 + 16) && v27 == *(_QWORD *)(a2 + 24) && !v71 )
        {
          if ( v25 )
          {
            v33 = *(unsigned int *)(a2 + 40);
            v56 = v27;
            sub_1910D40(v28, v33, v25, 1, v22, v25, a3, a4);
            v27 = v56;
          }
          if ( v27 )
          {
            v33 = *(unsigned int *)(a2 + 40);
            sub_1910D40(*a1, v33, v27, 1, v22, v25, a3, a4);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v33, v30, v18) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v44 = *(_QWORD *)(*a1 + 248);
            v45 = sub_DC7990(a2, v33, v42, v43);
            v46 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v44, v45) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v46 + 16) == 48 )
            {
              v51 = sub_F60F10(*v46, v45, v47, v48, v49, v50);
              v52 = sub_1A69EF0((__int64 *)*a1, (__int64)v51);
              if ( v52 )
                sub_1910D40(*a1, *(unsigned int *)(a2 + 40), v52, 1, v53, v54, a3, a4);
            }
          }
          v24 = a2;
          goto LABEL_13;
        }
      }
    }
    v31 = *v11;
    if ( !v57 )
    {
      v63 = v29;
      v58 = *v11;
      v37 = sub_A72040(*(_QWORD **)(v28 + 248), (__int64)v31);
      v31 = v58;
      v29 = v63;
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
          v66 = *(_DWORD *)(a2 + 40);
          v59 = v37;
          v39 = sub_A63CE0(*(_QWORD **)(v28 + 248));
          sub_A5DAD0((__int64)&v72, v59);
          v40 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v72, v39, v66);
          v41 = v59;
          v13 = v40;
          v29 = v63;
          if ( v73 > 0x40 && v72 )
          {
            operator delete[](v72);
            v29 = v63;
            v41 = v59;
          }
          v31 = *(void **)(v41 + 32);
          v28 = *a1;
          LOBYTE(v12) = 1;
          v32 = *(_DWORD *)(a2 + 40);
          v33 = *(_QWORD *)a2;
        }
        goto LABEL_24;
      }
      v28 = *a1;
    }
    v32 = *(_DWORD *)(a2 + 40);
    v33 = *(_QWORD *)a2;
LABEL_24:
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
    LOBYTE(v55) = v12;
    v24 = sub_19B7590(
            (__int64 *)v28,
            ((unsigned __int64)v32 << 32) | v32,
            (v33 & 0x80000) != 0,
            v32,
            (__int64)ptr,
            (unsigned int)v75,
            a3,
            a4,
            v32,
            (v35 << 32) | v34,
            (unsigned __int64)v31,
            v11,
            v13,
            v55,
            *(_QWORD *)(a2 + 48),
            v29);
    goto LABEL_13;
  }
LABEL_12:
  v24 = 1;
LABEL_13:
  if ( ptr != v76 )
    free(ptr);
  return v24;
}
