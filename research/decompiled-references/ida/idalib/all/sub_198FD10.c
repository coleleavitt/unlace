__int64 __fastcall sub_198FD10(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void **v6; // rsi
  __int64 *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  char v11; // r15
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rsi
  unsigned int v30; // edx
  __int64 v31; // r10
  __int64 v33; // rax
  __int64 v34; // r15
  int v35; // edx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r12
  __int64 v41; // rsi
  __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // [rsp+8h] [rbp-E0h]
  __int64 v52; // [rsp+8h] [rbp-E0h]
  __int64 v53; // [rsp+8h] [rbp-E0h]
  __int64 v54; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v55; // [rsp+18h] [rbp-D0h]
  __int64 v56; // [rsp+18h] [rbp-D0h]
  __int64 v57; // [rsp+18h] [rbp-D0h]
  __int64 v58; // [rsp+18h] [rbp-D0h]
  int v59; // [rsp+18h] [rbp-D0h]
  __int64 v60; // [rsp+20h] [rbp-C8h]
  __int64 v61; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v62; // [rsp+20h] [rbp-C8h]
  unsigned __int8 v63; // [rsp+28h] [rbp-C0h]
  __int64 v64; // [rsp+28h] [rbp-C0h]
  unsigned __int8 v65; // [rsp+37h] [rbp-B1h]
  __int64 v66; // [rsp+38h] [rbp-B0h]
  char v67; // [rsp+4Fh] [rbp-99h] BYREF
  void *v68; // [rsp+50h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+58h] [rbp-90h]
  void *ptr[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v71[120]; // [rsp+70h] [rbp-78h] BYREF

  v6 = *(void ***)(a2 + 32);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v6 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v7 = (__int64 *)sub_198FB20(a1, v6, a3);
  else
    v7 = sub_1988430(a1, (__int64)v6, a3, a4);
  if ( !v7 )
    return 1;
  v54 = 0;
  v8 = *(_QWORD *)a2;
  v51 = WORD1(*(_QWORD *)a2) & 0x10;
  if ( v51 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
LABEL_8:
      v11 = 1;
      v51 = 1;
      goto LABEL_10;
    }
    v10 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 56), *(double *)a3.m128_u64, a4);
    if ( v10 != 1 )
    {
      v8 = *(_QWORD *)a2;
      v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_8;
    }
    return 1;
  }
  v11 = 0;
  v9 = 0;
LABEL_10:
  v12 = *(_DWORD *)(a2 + 4);
  v67 = 0;
  ptr[0] = v71;
  ptr[1] = (void *)0x800000000LL;
  v13 = sub_197B2A0(
          a1,
          (unsigned __int16 **)(a2 + 8 * (((v8 >> 20) & 1) + ((v8 >> 24) & 1)) + 56),
          v12,
          1,
          (__int64)ptr,
          &v67,
          *(double *)a3.m128_u64,
          a4);
  v15 = v13;
  if ( !(_BYTE)v13 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0
      && (v16 = (*(_QWORD *)a2 >> 20) & 1LL, (v17 = *(_QWORD *)(a2 + 8 * v16 + 56)) != 0) )
    {
      v55 = *(_QWORD *)(a2 + 8 * v16 + 56);
      v18 = sub_197B880((__int64)a1, v55, 1u, v13, v17, v14, a3, a4);
      v19 = v55;
      v15 = 0;
      v20 = v18;
      if ( v18 == 1 )
        goto LABEL_14;
    }
    else
    {
      v20 = 0;
      v19 = 0;
    }
    v22 = *(_QWORD *)(a2 + 16);
    if ( v22 )
    {
      v63 = v15;
      v60 = v19;
      v56 = v20;
      v23 = sub_18CBE40((__int64)a1, *(_QWORD *)(a2 + 16));
      v20 = v56;
      v19 = v60;
      v22 = v23;
      v15 = v63;
      if ( !v23 )
        goto LABEL_14;
    }
    v24 = *(_QWORD *)(a2 + 24);
    if ( v24 )
    {
      v65 = v15;
      v64 = v19;
      v61 = v22;
      v57 = v20;
      v24 = sub_18CBE40((__int64)a1, *(_QWORD *)(a2 + 24));
      v20 = v57;
      v22 = v61;
      v19 = v64;
      v15 = v65;
      if ( !v24 )
        goto LABEL_14;
    }
    v25 = v20 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(__int64 **)(a2 + 32) == v7 )
    {
      v29 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v15 = *(_QWORD *)(a2 + 56);
        v66 = v15;
        LOBYTE(v15) = v15 != 0;
      }
      if ( (_BYTE)v15 == v11 )
      {
        if ( v66 != v9 && (_BYTE)v15 == 1 )
        {
          v26 = *v7;
          v27 = *a1;
          v28 = *(_DWORD *)(a2 + 40);
          goto LABEL_25;
        }
        if ( v19 == v25 && v22 == *(_QWORD *)(a2 + 16) && v24 == *(_QWORD *)(a2 + 24) && !v67 )
        {
          if ( v22 )
          {
            v29 = *(unsigned int *)(a2 + 40);
            v53 = v24;
            sub_1910D40(*a1, v29, v22, 1, v19, v25, a3, a4);
            v24 = v53;
          }
          if ( v24 )
          {
            v29 = *(unsigned int *)(a2 + 40);
            sub_1910D40(*a1, v29, v24, 1, v19, v25, a3, a4);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v29, v22, v15) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v40 = *(_QWORD *)(*a1 + 248);
            v41 = sub_DC7990(a2, v29, v38, v39);
            v42 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v40, v41) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v42 + 16) == 48 )
            {
              v47 = sub_F60F10(*v42, v41, v43, v44, v45, v46);
              v48 = sub_1A69EF0(*a1, v47);
              if ( v48 )
                sub_1910D40(*a1, *(unsigned int *)(a2 + 40), v48, 1, v49, v50, a3, a4);
            }
          }
          v21 = a2;
          goto LABEL_15;
        }
      }
    }
    v26 = *v7;
    v27 = *a1;
    if ( !v11 )
    {
      v62 = v25;
      v58 = *v7;
      v33 = sub_A72040(*(_QWORD **)(v27 + 248), *v7);
      v26 = v58;
      v25 = v62;
      v34 = v33;
      if ( v33 )
      {
        v27 = *a1;
        v28 = *(_DWORD *)(a2 + 40);
        v35 = *(unsigned __int8 *)(v33 + 16);
        if ( (unsigned int)(v35 - 2) > 1 )
        {
          if ( (_BYTE)v35 == 4 )
          {
            v37 = *(_QWORD *)(v33 + 40);
            if ( v37 )
            {
              v51 = 1;
              v26 = *(_QWORD *)(v34 + 32);
              v9 = v37;
            }
          }
          v29 = *(_QWORD *)a2;
        }
        else
        {
          v59 = *(_DWORD *)(a2 + 40);
          v52 = sub_A63CE0(*(_QWORD **)(v27 + 248));
          sub_A5DAD0((__int64)&v68, v34);
          v36 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v68, v52, v59);
          v25 = v62;
          v9 = v36;
          if ( v69 > 0x40 && v68 )
          {
            operator delete[](v68);
            v25 = v62;
          }
          v26 = *(_QWORD *)(v34 + 32);
          v27 = *a1;
          v51 = 1;
          v28 = *(_DWORD *)(a2 + 40);
          v29 = *(_QWORD *)a2;
        }
        goto LABEL_25;
      }
      v27 = *a1;
    }
    v28 = *(_DWORD *)(a2 + 40);
    v29 = *(_QWORD *)a2;
LABEL_25:
    if ( (v29 & 0x8000000) != 0 )
    {
      v30 = *(_DWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v29 & 0x100000) != 0) + (BYTE3(v29) & 1u)) + 56);
      v31 = *(unsigned int *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v29 & 0x100000) != 0) + (BYTE3(v29) & 1u)) + 60);
    }
    else
    {
      v31 = 0;
      v30 = 0;
    }
    LOBYTE(v54) = v51;
    v21 = sub_19B7590(v27, v28, (v31 << 32) | v30, v26, (__int64)v7, v9, v54, *(_QWORD *)(a2 + 48), v25);
    goto LABEL_15;
  }
LABEL_14:
  v21 = 1;
LABEL_15:
  if ( ptr[0] != v71 )
    free(ptr[0]);
  return v21;
}
