__int64 __fastcall sub_18EFFC0(
        __int64 *a1,
        unsigned __int64 a2,
        double a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // r9
  __int64 *v17; // rbp
  int v18; // eax
  unsigned int v19; // r13d
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rsi
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // al
  __int64 v29; // r10
  __int64 *v30; // rdx
  __int64 v31; // r10
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _BYTE *v37; // rdi
  unsigned __int64 v38; // rdx
  bool v39; // zf
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdi
  int v44; // edx
  unsigned __int64 v45; // rdx
  int v46; // eax
  __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-130h]
  __int64 v49; // [rsp+8h] [rbp-130h]
  __int64 v50; // [rsp+8h] [rbp-130h]
  __int64 v51; // [rsp+8h] [rbp-130h]
  __int64 v52; // [rsp+8h] [rbp-130h]
  __int64 v53; // [rsp+10h] [rbp-128h]
  __int64 *v54; // [rsp+18h] [rbp-120h]
  void *ptr; // [rsp+20h] [rbp-118h] BYREF
  __int64 v56; // [rsp+28h] [rbp-110h]
  _BYTE v57[64]; // [rsp+30h] [rbp-108h] BYREF
  __m128i v58[12]; // [rsp+70h] [rbp-C8h] BYREF

  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(_QWORD *)(*a1 + 248);
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(v10 + 19088) == v11 )
  {
    v15 = 0;
    v14 = sub_BFB570(*(_QWORD *)(a2 + 32), a2, v10, a6);
  }
  else
  {
    v12 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    v13 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 42 || (v13 = sub_18BBDD0(v13, a2, v10, a6)) != 0 )
    {
      v14 = *(_QWORD *)(v13 + 32);
      v15 = 1;
    }
    else if ( *(_BYTE *)(*v12 + 16LL) == 11 )
    {
      v14 = *(_QWORD *)(*v12 + 32LL);
      v15 = 2;
    }
    else
    {
      v15 = 2;
      v14 = *(_QWORD *)(sub_F63050(*v12, a2, v10, a6) + 32);
    }
  }
  v16 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 25 > 1 )
    v16 = sub_F63050(v16, a2, v10, a6);
  v17 = (__int64 *)*a1;
  v18 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (unsigned __int8)(v18 - 2) > 4u )
  {
    if ( (unsigned int)(v18 - 25) <= 1 )
      goto LABEL_8;
  }
  else if ( (*(_BYTE *)(v17[29] + 89) & 1) == 0 )
  {
LABEL_8:
    v19 = 3859;
    if ( v15 == 2 )
      v19 = 3334;
    v20 = sub_C00A40(a2, a2, (unsigned int)(v18 - 2), 3334, a7);
    sub_168B9F0((__int64)v58, v17 + 1, v20, v19, 0);
    LOBYTE(ptr) = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL)
                                                                           + 8LL)
                                                               & 0xFFFFFFFFFFFFFFF0LL)
                                                   + 16LL)
                - 25 <= 1;
    v21 = sub_1588420((__int64)v58, (unsigned __int8 *)&ptr);
    sub_1605D30(v21, a1 + 1);
    sub_15F7200(v58);
    return 1;
  }
  v23 = v17[31];
  v48 = v16;
  v24 = sub_F67970(a1 + 1, v23);
  v25 = v48;
  *(_QWORD *)(a2 + 8) = v24;
  v26 = *(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL);
  v27 = *(unsigned __int8 *)(v26 + 16);
  if ( (unsigned int)(v27 - 43) <= 1 )
    goto LABEL_14;
  v41 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v41 <= 1 )
  {
    v26 = sub_F63050(*(_QWORD *)(a1[1] & 0xFFFFFFFFFFFFFFF0LL), v23, v41, v27);
    v25 = v48;
    if ( v26 )
    {
      v27 = *(unsigned __int8 *)(v26 + 16);
LABEL_14:
      if ( (_BYTE)v27 == 43 )
        goto LABEL_15;
      while ( 1 )
      {
        v39 = (*(_BYTE *)(v26 + 18) & 0x10) == 0;
        v26 = *(_QWORD *)(*(_QWORD *)(v26 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v39 )
          break;
        v40 = (unsigned int)*(unsigned __int8 *)(v26 + 16) - 43;
        if ( (unsigned int)v40 > 1 )
        {
          v50 = v25;
          v26 = sub_F63050(v26, v23, v40, v27);
          v25 = v50;
        }
      }
      v44 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      v28 = 2;
      if ( (unsigned int)(v44 - 25) <= 1 )
LABEL_15:
        v28 = 1;
      goto LABEL_16;
    }
  }
  v28 = 0;
LABEL_16:
  *(_BYTE *)(a2 + 1) = (2 * v28) | *(_BYTE *)(a2 + 1) & 0xF9;
  if ( *(_BYTE *)(v25 + 16) == 26 )
  {
    v29 = *(unsigned __int16 *)(v25 + 22);
    v30 = (__int64 *)(v25 + 48);
    v56 = 0x800000000LL;
    v31 = 8 * v29;
    ptr = v57;
    v32 = v31;
    if ( v31 )
    {
      v32 = v31 >> 3;
    }
    else if ( *(char *)(v25 + 19) < 0 )
    {
      v45 = *(unsigned int *)(a2 + 16);
      v46 = *(_DWORD *)(a2 + 16);
      if ( v45 > 8 )
      {
        v52 = v25;
        sub_2237220(&ptr, v57, v45, 8);
        v46 = *(_DWORD *)(a2 + 16);
        v25 = v52;
      }
      if ( v46 )
      {
        v53 = 8LL * (unsigned int)(v46 - 1) + 8;
        do
        {
          v51 = v25;
          v32 += 8LL;
          v47 = sub_A732E0(
                  *(_QWORD *)(*a1 + 248),
                  *(_QWORD *)(v32 + a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 24));
          sub_A6A4A0((__int64)&ptr, v47);
          v25 = v51;
        }
        while ( v32 != v53 );
      }
      v30 = (__int64 *)ptr;
      v32 = (unsigned int)v56;
    }
    v54 = v30;
    v49 = *(_QWORD *)(*a1 + 248);
    sub_A5E110((__m128 *)v58, v25);
    v33 = sub_A73610(v49, a1[1], v54, v32, v58, 0);
    v37 = ptr;
    a1[1] = v33;
    if ( v37 != v57 )
      free(v37);
  }
  else
  {
    v42 = a1[1];
    v43 = *(_QWORD *)(*a1 + 248);
    v58[0].m128i_i16[0] = *(_WORD *)(v25 + 20) >> 2;
    a1[1] = sub_A71610(v43, v42, (unsigned __int16 *)v58);
  }
  if ( v15 == 1 )
  {
    a1[1] = sub_A70010(*(_QWORD *)(*a1 + 248), a1[1]);
  }
  else if ( v15 == 2 )
  {
    a1[1] = sub_A74B00(*(_QWORD *)(*a1 + 248), a1[1]);
  }
  v38 = sub_18EEFD0(a1, v9, v34, v35, v36, a3, a4);
  result = 1;
  if ( v38 > 1 )
  {
    *(_QWORD *)(a2 + 32) = v38 & 0xFFFFFFFFFFFFFFFELL;
    return sub_19A3E40(*a1, a2);
  }
  return result;
}
