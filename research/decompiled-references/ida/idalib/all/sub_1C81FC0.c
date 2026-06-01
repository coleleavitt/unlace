unsigned __int64 __fastcall sub_1C81FC0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 *v12; // r13
  __int64 v13; // r15
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdx
  bool v17; // cc
  unsigned int v18; // r15d
  int v19; // r8d
  int v20; // r14d
  void *v21; // r9
  __int64 *v22; // rsi
  __int64 v23; // r10
  signed __int64 v24; // rax
  __int64 v25; // r11
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rax
  unsigned __int64 v30; // rax
  unsigned int v31; // [rsp+0h] [rbp-138h]
  unsigned int v32; // [rsp+4h] [rbp-134h]
  const void *src; // [rsp+8h] [rbp-130h]
  void *v34; // [rsp+10h] [rbp-128h]
  __int64 v35; // [rsp+10h] [rbp-128h]
  __int64 v36; // [rsp+18h] [rbp-120h]
  int v37; // [rsp+20h] [rbp-118h]
  void *v38; // [rsp+20h] [rbp-118h]
  __int64 v39; // [rsp+28h] [rbp-110h]
  unsigned int v40; // [rsp+30h] [rbp-108h]
  int v41; // [rsp+34h] [rbp-104h]
  int v42; // [rsp+34h] [rbp-104h]
  __int64 v43; // [rsp+38h] [rbp-100h]
  void *v44; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+48h] [rbp-F0h]
  _BYTE v46[48]; // [rsp+50h] [rbp-E8h] BYREF
  void *v47; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+88h] [rbp-B0h]
  __int64 v49; // [rsp+90h] [rbp-A8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-70h]
  _QWORD v52[13]; // [rsp+D0h] [rbp-68h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  v9 = *(_QWORD *)(a2 + 56);
  if ( !v9 )
    goto LABEL_21;
  v10 = (unsigned __int64)sub_1C7CFE0(a1, v9, a3, a4, v6, v7, v8);
  v11 = v10;
  if ( v10 == 1 )
    goto LABEL_5;
  if ( v10 )
    v11 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v10 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_21:
    v11 = 0;
LABEL_5:
  v12 = (unsigned __int64 *)(a2 + 64);
  v44 = v46;
  v45 = 0x600000000LL;
  v13 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 != v13 )
  {
    do
    {
      v14 = sub_1C7CFE0(a1, *v12, a3, a4, v6, v7, v8);
      if ( (unsigned __int64)v14 <= 1 )
        break;
      v30 = sub_1AA2500(
              *(_QWORD **)(*a1 + 744),
              18,
              51,
              *(_DWORD *)(a2 + 12),
              (unsigned __int64)v14 & 0xFFFFFFFFFFFFFFFELL);
      if ( v30 > 1 )
        sub_14B7B40((__int64)&v44, v30 & 0xFFFFFFFFFFFFFFFELL);
      ++v12;
    }
    while ( (unsigned __int64 *)v13 != v12 );
  }
  v15 = 1;
  sub_1C7EFD0(
    (unsigned __int64 *)&v47,
    a1,
    *(_BYTE *)(a2 + 8),
    *(__int64 **)(a2 + 24),
    *(_QWORD *)(a2 + 32),
    *(double *)a3.m128_u64,
    a4);
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(_BYTE *)(a2 + 8),
                           *(_DWORD *)(a2 + 12),
                           (char *)v47,
                           v48,
                           a3) )
  {
    v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v11 <= 1;
    v18 = *(_DWORD *)(a2 + 44);
    v19 = *(_DWORD *)(a2 + 40);
    v20 = *(_DWORD *)(a2 + 20);
    v32 = *(_DWORD *)(a2 + 16);
    v31 = *(_DWORD *)(a2 + 48);
    if ( v17 )
      v16 = 0;
    v21 = v47;
    src = v44;
    v22 = v52;
    v40 = *(_DWORD *)(a2 + 12);
    v23 = v48;
    v24 = 8LL * (unsigned int)v45;
    v52[0] = v16;
    ptr = v52;
    v25 = v24 >> 3;
    v51 = 0x600000001LL;
    if ( (unsigned __int64)((v24 >> 3) + 1) > 6 )
    {
      v43 = (8LL * (unsigned int)v45) >> 3;
      v38 = v47;
      v39 = v48;
      v35 = 8LL * (unsigned int)v45;
      v42 = v19;
      sub_2237220(&ptr, v52, v25 + 1, 8);
      v19 = v42;
      v24 = v35;
      v27 = v51;
      v22 = (__int64 *)ptr;
      v21 = v38;
      v23 = v39;
      v26 = (unsigned int)v51;
      LODWORD(v25) = v43;
    }
    else
    {
      v26 = 1;
      v27 = 1;
    }
    if ( v24 )
    {
      v37 = v25;
      v34 = v21;
      v36 = v23;
      v41 = v19;
      memcpy(&v22[v26], src, v24);
      LODWORD(v25) = v37;
      v21 = v34;
      v22 = (__int64 *)ptr;
      v27 = v51;
      v23 = v36;
      v19 = v41;
    }
    v28 = *a1;
    LODWORD(v51) = v27 + v25;
    v15 = sub_1AA2840(
            *(_QWORD **)(v28 + 744),
            18,
            v40,
            v20,
            v19,
            v31,
            v22,
            (unsigned int)(v27 + v25),
            4,
            v18,
            v32,
            v21,
            v23,
            0);
    if ( ptr != v52 )
      free(ptr);
  }
  if ( v47 != &v49 )
    free(v47);
  if ( v44 != v46 )
    free(v44);
  return v15;
}
