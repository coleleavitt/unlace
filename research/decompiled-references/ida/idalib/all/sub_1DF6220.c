unsigned __int64 __fastcall sub_1DF6220(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // rax
  unsigned __int64 *v15; // r15
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rdx
  bool v19; // cc
  unsigned int v20; // r15d
  int v21; // r8d
  int v22; // r14d
  void *v23; // r9
  __int64 *v24; // rsi
  __int64 v25; // r10
  signed __int64 v26; // rax
  __int64 v27; // r11
  __int64 v28; // rdi
  int v29; // edx
  __int64 v30; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // [rsp+8h] [rbp-140h]
  unsigned int v36; // [rsp+8h] [rbp-140h]
  unsigned int v37; // [rsp+10h] [rbp-138h]
  unsigned __int64 v38; // [rsp+10h] [rbp-138h]
  const void *src; // [rsp+18h] [rbp-130h]
  void *v40; // [rsp+20h] [rbp-128h]
  __int64 v41; // [rsp+20h] [rbp-128h]
  __int64 v42; // [rsp+28h] [rbp-120h]
  int v43; // [rsp+30h] [rbp-118h]
  void *v44; // [rsp+30h] [rbp-118h]
  __int64 v45; // [rsp+38h] [rbp-110h]
  unsigned int v46; // [rsp+40h] [rbp-108h]
  int v47; // [rsp+44h] [rbp-104h]
  int v48; // [rsp+44h] [rbp-104h]
  __int64 v49; // [rsp+48h] [rbp-100h]
  void *v50; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-F0h]
  _BYTE v52[48]; // [rsp+60h] [rbp-E8h] BYREF
  void *v53; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+98h] [rbp-B0h]
  __int64 v55; // [rsp+A0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-70h]
  _QWORD v58[13]; // [rsp+E0h] [rbp-68h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  v10 = *(_QWORD *)(a2 + 56);
  if ( !v10 )
    goto LABEL_21;
  v11 = (unsigned __int64)sub_1DC71F0(a1, v10, (unsigned __int64)v6, v7, v8, v9, a3, a4);
  v12 = v11;
  if ( v11 == 1 )
    goto LABEL_5;
  if ( v11 )
    v12 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v11 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_21:
    v12 = 0;
LABEL_5:
  v13 = a2 + 64;
  v51 = 0x600000000LL;
  v14 = *(unsigned int *)(a2 + 52);
  v15 = (unsigned __int64 *)(a2 + 64);
  v50 = v52;
  v35 = a2 + 64 + 8 * v14 - 8;
  if ( a2 + 64 != v35 )
  {
    do
    {
      v16 = sub_1DC71F0(a1, *v15, (unsigned __int64)v6, v7, v8, v13, a3, a4);
      if ( (unsigned __int64)v16 <= 1 )
        break;
      v32 = sub_1AA2500(
              *(_QWORD **)(*a1 + 744),
              18,
              51,
              *(_DWORD *)(a2 + 12),
              (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL);
      if ( v32 > 1 )
      {
        v7 = (unsigned int)v51;
        v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
        v34 = (unsigned int)v51 + 1LL;
        if ( v34 > HIDWORD(v51) )
        {
          v38 = v33;
          sub_2237220(&v50, v52, v34, 8);
          v7 = (unsigned int)v51;
          v33 = v38;
        }
        v6 = v50;
        *((_QWORD *)v50 + v7) = v33;
        LODWORD(v51) = v51 + 1;
      }
      ++v15;
    }
    while ( (unsigned __int64 *)v35 != v15 );
  }
  v17 = 1;
  sub_1DF3230(
    (unsigned __int64 *)&v53,
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
                           (char *)v53,
                           v54,
                           a3) )
  {
    v18 = v12 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v12 <= 1;
    v20 = *(_DWORD *)(a2 + 44);
    v21 = *(_DWORD *)(a2 + 40);
    v22 = *(_DWORD *)(a2 + 20);
    v37 = *(_DWORD *)(a2 + 16);
    v36 = *(_DWORD *)(a2 + 48);
    if ( v19 )
      v18 = 0;
    v23 = v53;
    src = v50;
    v24 = v58;
    v46 = *(_DWORD *)(a2 + 12);
    v25 = v54;
    v26 = 8LL * (unsigned int)v51;
    v58[0] = v18;
    ptr = v58;
    v27 = v26 >> 3;
    v57 = 0x600000001LL;
    if ( (unsigned __int64)((v26 >> 3) + 1) > 6 )
    {
      v49 = (8LL * (unsigned int)v51) >> 3;
      v44 = v53;
      v45 = v54;
      v41 = 8LL * (unsigned int)v51;
      v48 = v21;
      sub_2237220(&ptr, v58, v27 + 1, 8);
      v21 = v48;
      v26 = v41;
      v29 = v57;
      v24 = (__int64 *)ptr;
      v23 = v44;
      v25 = v45;
      v28 = (unsigned int)v57;
      LODWORD(v27) = v49;
    }
    else
    {
      v28 = 1;
      v29 = 1;
    }
    if ( v26 )
    {
      v43 = v27;
      v40 = v23;
      v42 = v25;
      v47 = v21;
      memcpy(&v24[v28], src, v26);
      LODWORD(v27) = v43;
      v23 = v40;
      v24 = (__int64 *)ptr;
      v29 = v57;
      v25 = v42;
      v21 = v47;
    }
    v30 = *a1;
    LODWORD(v57) = v29 + v27;
    v17 = sub_1AA2840(
            *(_QWORD **)(v30 + 744),
            18,
            v46,
            v22,
            v21,
            v36,
            v24,
            (unsigned int)(v29 + v27),
            4,
            v20,
            v37,
            v23,
            v25,
            0);
    if ( ptr != v58 )
      free(ptr);
  }
  if ( v53 != &v55 )
    free(v53);
  if ( v50 != v52 )
    free(v50);
  return v17;
}
