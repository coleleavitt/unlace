unsigned __int64 __fastcall sub_1D90130(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  void *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int16 *v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int16 **v13; // r15
  unsigned __int64 v14; // rax
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
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-140h]
  unsigned int v34; // [rsp+8h] [rbp-140h]
  unsigned int v35; // [rsp+10h] [rbp-138h]
  unsigned __int64 v36; // [rsp+10h] [rbp-138h]
  const void *src; // [rsp+18h] [rbp-130h]
  void *v38; // [rsp+20h] [rbp-128h]
  __int64 v39; // [rsp+20h] [rbp-128h]
  __int64 v40; // [rsp+28h] [rbp-120h]
  int v41; // [rsp+30h] [rbp-118h]
  void *v42; // [rsp+30h] [rbp-118h]
  __int64 v43; // [rsp+38h] [rbp-110h]
  unsigned int v44; // [rsp+40h] [rbp-108h]
  int v45; // [rsp+44h] [rbp-104h]
  int v46; // [rsp+44h] [rbp-104h]
  __int64 v47; // [rsp+48h] [rbp-100h]
  void *v48; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+58h] [rbp-F0h]
  _BYTE v50[48]; // [rsp+60h] [rbp-E8h] BYREF
  void *v51; // [rsp+90h] [rbp-B8h] BYREF
  unsigned int v52; // [rsp+98h] [rbp-B0h]
  __int64 v53; // [rsp+A0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-70h]
  _QWORD v56[13]; // [rsp+E0h] [rbp-68h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  v9 = *(unsigned __int16 **)(a2 + 56);
  if ( !v9 )
    goto LABEL_21;
  v10 = sub_1D8B300(a1, v9, a3, a4, (__int64)v6, v7, v8);
  v11 = v10;
  if ( v10 == 1 )
    goto LABEL_5;
  if ( v10 )
    v11 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v10 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_21:
    v11 = 0;
LABEL_5:
  v49 = 0x600000000LL;
  v12 = *(unsigned int *)(a2 + 52);
  v13 = (unsigned __int16 **)(a2 + 64);
  v48 = v50;
  v33 = a2 + 64 + 8 * v12 - 8;
  if ( a2 + 64 != v33 )
  {
    do
    {
      v14 = sub_1D8B300(a1, *v13, a3, a4, (__int64)v6, v7, v8);
      if ( v14 <= 1 )
        break;
      v30 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v14 & 0xFFFFFFFFFFFFFFFELL);
      if ( v30 > 1 )
      {
        v7 = (unsigned int)v49;
        v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
        v32 = (unsigned int)v49 + 1LL;
        if ( v32 > HIDWORD(v49) )
        {
          v36 = v31;
          sub_2237220(&v48, v50, v32, 8);
          v7 = (unsigned int)v49;
          v31 = v36;
        }
        v6 = v48;
        *((_QWORD *)v48 + v7) = v31;
        LODWORD(v49) = v49 + 1;
      }
      ++v13;
    }
    while ( (unsigned __int16 **)v33 != v13 );
  }
  v15 = 1;
  sub_1D8D140(
    (unsigned __int16 **)&v51,
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
                           (char *)v51,
                           v52,
                           a3) )
  {
    v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v11 <= 1;
    v18 = *(_DWORD *)(a2 + 44);
    v19 = *(_DWORD *)(a2 + 40);
    v20 = *(_DWORD *)(a2 + 20);
    v35 = *(_DWORD *)(a2 + 16);
    v34 = *(_DWORD *)(a2 + 48);
    if ( v17 )
      v16 = 0;
    v21 = v51;
    src = v48;
    v22 = v56;
    v44 = *(_DWORD *)(a2 + 12);
    v23 = v52;
    v24 = 8LL * (unsigned int)v49;
    v56[0] = v16;
    ptr = v56;
    v25 = v24 >> 3;
    v55 = 0x600000001LL;
    if ( (unsigned __int64)((v24 >> 3) + 1) > 6 )
    {
      v47 = (8LL * (unsigned int)v49) >> 3;
      v42 = v51;
      v43 = v52;
      v39 = 8LL * (unsigned int)v49;
      v46 = v19;
      sub_2237220(&ptr, v56, v25 + 1, 8);
      v19 = v46;
      v24 = v39;
      v27 = v55;
      v22 = (__int64 *)ptr;
      v21 = v42;
      v23 = v43;
      v26 = (unsigned int)v55;
      LODWORD(v25) = v47;
    }
    else
    {
      v26 = 1;
      v27 = 1;
    }
    if ( v24 )
    {
      v41 = v25;
      v38 = v21;
      v40 = v23;
      v45 = v19;
      memcpy(&v22[v26], src, v24);
      LODWORD(v25) = v41;
      v21 = v38;
      v22 = (__int64 *)ptr;
      v27 = v55;
      v23 = v40;
      v19 = v45;
    }
    v28 = *a1;
    LODWORD(v55) = v27 + v25;
    v15 = sub_1AA2840(
            *(_QWORD **)(v28 + 744),
            18,
            v44,
            v20,
            v19,
            v34,
            v22,
            (unsigned int)(v27 + v25),
            4,
            v18,
            v35,
            v21,
            v23,
            0);
    if ( ptr != v56 )
      free(ptr);
  }
  if ( v51 != &v53 )
    free(v51);
  if ( v48 != v50 )
    free(v48);
  return v15;
}
