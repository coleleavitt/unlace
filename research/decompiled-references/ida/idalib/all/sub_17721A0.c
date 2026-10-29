__int64 __fastcall sub_17721A0(__int64 *a1, __int64 a2, __m128 a3)
{
  void **v5; // rsi
  void **v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r11
  __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // r8
  __int64 v31; // rax
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // r11
  __int64 v36; // r12
  int v37; // ecx
  unsigned __int8 v38; // dl
  __int64 v39; // rsi
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
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-E0h]
  __int64 v54; // [rsp+8h] [rbp-E0h]
  char v55; // [rsp+10h] [rbp-D8h]
  void *v56; // [rsp+10h] [rbp-D8h]
  __int64 v57; // [rsp+10h] [rbp-D8h]
  __int64 v58; // [rsp+10h] [rbp-D8h]
  __int64 v59; // [rsp+18h] [rbp-D0h]
  __int64 v60; // [rsp+18h] [rbp-D0h]
  __int64 v61; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v62; // [rsp+18h] [rbp-D0h]
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
  int v73; // [rsp+58h] [rbp-90h]
  void *ptr[2]; // [rsp+60h] [rbp-88h] BYREF
  _BYTE v75[120]; // [rsp+70h] [rbp-78h] BYREF

  v5 = *(void ***)(a2 + 32);
  if ( *(_BYTE *)(*(_QWORD *)((unsigned __int64)*v5 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 20 )
    v6 = sub_1771FB0(a1, v5, a3);
  else
    v6 = sub_176A140(a1, v5, a3);
  if ( !v6 )
    return 1;
  v53 = 0;
  v7 = *(_QWORD *)a2;
  v8 = (*(_QWORD *)a2 >> 16) & 0x10LL;
  if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 56);
    if ( !v9 )
    {
LABEL_8:
      v55 = 1;
      LOBYTE(v8) = 1;
      goto LABEL_10;
    }
    v10 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 56));
    if ( v10 != 1 )
    {
      v7 = *(_QWORD *)a2;
      v9 = v10 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_8;
    }
    return 1;
  }
  v55 = 0;
  v9 = 0;
LABEL_10:
  v11 = *(_DWORD *)(a2 + 4);
  v71 = 0;
  ptr[0] = v75;
  ptr[1] = (void *)0x800000000LL;
  v12 = sub_175C6E0(
          a1,
          (unsigned __int16 **)(a2 + 8 * (((v7 >> 20) & 1) + ((v7 >> 24) & 1)) + 56),
          v11,
          1,
          (__int64)ptr,
          &v71);
  v13 = v12;
  if ( !(_BYTE)v12 )
  {
    if ( (*(_QWORD *)a2 & 0x1000000) != 0 && (v14 = (*(_QWORD *)a2 >> 20) & 1LL, *(_QWORD *)(a2 + 8 * v14 + 56)) )
    {
      v59 = *(_QWORD *)(a2 + 8 * v14 + 56);
      v15 = sub_175C980(a1, v59, 1u, *(double *)a3.m128_u64);
      v16 = v59;
      v13 = 0;
      v17 = v15;
      if ( v15 == 1 )
        goto LABEL_14;
    }
    else
    {
      v16 = 0;
      v17 = 0;
    }
    v19 = *(_QWORD *)(a2 + 16);
    if ( v19 )
    {
      v67 = v17;
      v64 = v13;
      v60 = v16;
      v20 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 16));
      v16 = v60;
      v13 = v64;
      v19 = v20;
      v17 = v67;
      if ( !v20 )
        goto LABEL_14;
    }
    v21 = *(_QWORD *)(a2 + 24);
    if ( v21 )
    {
      v69 = v17;
      v68 = v13;
      v65 = v16;
      v61 = v19;
      v21 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 24));
      v19 = v61;
      v16 = v65;
      v13 = v68;
      v17 = v69;
      if ( !v21 )
        goto LABEL_14;
    }
    v22 = *a1;
    v23 = v17 & 0xFFFFFFFFFFFFFFFELL;
    v24 = *(unsigned int *)(*a1 + 12632);
    if ( !(_DWORD)v24 && *(void ***)(a2 + 32) == v6 )
    {
      v27 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 0x100000) != 0 )
      {
        v24 = *(_QWORD *)(a2 + 56);
        v70 = v24;
        LOBYTE(v13) = v24 != 0;
      }
      if ( (_BYTE)v13 == v55 )
      {
        if ( v70 != v9 && (_BYTE)v13 == 1 )
        {
          v25 = (__int64)*v6;
          v26 = *(_DWORD *)(a2 + 40);
          goto LABEL_26;
        }
        if ( v16 == v23 && v19 == *(_QWORD *)(a2 + 16) && v21 == *(_QWORD *)(a2 + 24) && !v71 )
        {
          if ( v19 )
          {
            v27 = *(unsigned int *)(a2 + 40);
            v54 = v21;
            sub_1910D40(v22, v27, v19, 1);
            v21 = v54;
          }
          if ( v21 )
          {
            v27 = *(unsigned int *)(a2 + 40);
            sub_1910D40(*a1, v27, v21, 1);
          }
          if ( (*(_QWORD *)a2 & 0x100000LL) != 0
            && (*(_BYTE *)(*(_QWORD *)(sub_DC7990(a2, v27, v24, v13) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v44 = *(_QWORD *)(*a1 + 248);
            v45 = sub_DC7990(a2, v27, v42, v43);
            v46 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_A71450(v44, v45) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v46 + 16) == 48 )
            {
              v51 = sub_F60F10(*v46, v45, v47, v48, v49, v50);
              v52 = sub_1A69EF0(*a1, v51);
              if ( v52 )
                sub_1910D40(*a1, *(unsigned int *)(a2 + 40), v52, 1);
            }
          }
          v18 = a2;
          goto LABEL_15;
        }
      }
    }
    v25 = (__int64)*v6;
    if ( !v55 )
    {
      v62 = v23;
      v56 = *v6;
      v31 = sub_A72040(*(_QWORD **)(v22 + 248), v25);
      v25 = (__int64)v56;
      v23 = v62;
      if ( v31 )
      {
        v22 = *a1;
        v26 = *(_DWORD *)(a2 + 40);
        v32 = *(unsigned __int8 *)(v31 + 16);
        if ( (unsigned int)(v32 - 2) > 1 )
        {
          if ( (_BYTE)v32 == 4 && *(_QWORD *)(v31 + 40) )
          {
            v25 = *(_QWORD *)(v31 + 32);
            v9 = *(_QWORD *)(v31 + 40);
            LOBYTE(v8) = 1;
          }
          v27 = *(_QWORD *)a2;
        }
        else
        {
          v66 = *(_DWORD *)(a2 + 40);
          v57 = v31;
          v33 = sub_A63CE0(*(_QWORD **)(v22 + 248));
          v34 = v57;
          v35 = v62;
          v36 = v33;
          v37 = v66;
          v38 = *(_BYTE *)(v57 + 19);
          v39 = *(_QWORD *)(v57 + 40);
          if ( (v38 & 2) != 0 )
          {
            v73 = *(_DWORD *)(v39 + 8);
            if ( (unsigned int)v73 > 0x40 )
            {
              sub_2205510(&v72);
              v34 = v57;
              v35 = v62;
              v37 = v66;
            }
            else
            {
              v72 = *(void **)v39;
            }
          }
          else
          {
            v73 = 8 * ((v38 >> 2) & 0x1F);
            if ( v73 > 64 )
            {
              sub_2205470(&v72, v39, 0);
              v37 = v66;
              v35 = v62;
              v34 = v57;
            }
            else
            {
              v72 = (void *)v39;
            }
          }
          v63 = v35;
          v58 = v34;
          v40 = sub_C0C5D0(*(_QWORD **)(*a1 + 248), (__int64)&v72, v36, v37);
          v41 = v58;
          v9 = v40;
          v23 = v63;
          if ( (unsigned int)v73 > 0x40 && v72 )
          {
            operator delete[](v72);
            v23 = v63;
            v41 = v58;
          }
          v25 = *(_QWORD *)(v41 + 32);
          v22 = *a1;
          LOBYTE(v8) = 1;
          v26 = *(_DWORD *)(a2 + 40);
          v27 = *(_QWORD *)a2;
        }
        goto LABEL_26;
      }
      v22 = *a1;
    }
    v26 = *(_DWORD *)(a2 + 40);
    v27 = *(_QWORD *)a2;
LABEL_26:
    if ( (v27 & 0x8000000) != 0 )
    {
      v28 = *(_DWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v27 & 0x100000) != 0) + (BYTE3(v27) & 1u)) + 56);
      v29 = *(unsigned int *)(a2 + 8LL * (*(_DWORD *)(a2 + 4) + ((v27 & 0x100000) != 0) + (BYTE3(v27) & 1u)) + 60);
    }
    else
    {
      v29 = 0;
      v28 = 0;
    }
    LOBYTE(v53) = v8;
    v18 = sub_19B7590(v22, v26, (v29 << 32) | v28, v25, (__int64)v6, v9, v53, *(_QWORD *)(a2 + 48), v23);
    goto LABEL_15;
  }
LABEL_14:
  v18 = 1;
LABEL_15:
  if ( ptr[0] != v75 )
    free(ptr[0]);
  return v18;
}
