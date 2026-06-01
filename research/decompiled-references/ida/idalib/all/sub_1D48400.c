unsigned __int64 __fastcall sub_1D48400(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int16 *v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int16 **v11; // r12
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  signed __int64 v16; // r14
  unsigned int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // r10
  void *v20; // r8
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 *v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v26; // rax
  unsigned int v27; // [rsp+4h] [rbp-134h]
  unsigned int v28; // [rsp+8h] [rbp-130h]
  int v29; // [rsp+Ch] [rbp-12Ch]
  void *v30; // [rsp+10h] [rbp-128h]
  __int64 v31; // [rsp+18h] [rbp-120h]
  void *v32; // [rsp+20h] [rbp-118h]
  int v33; // [rsp+20h] [rbp-118h]
  __int64 v34; // [rsp+28h] [rbp-110h]
  unsigned int v35; // [rsp+30h] [rbp-108h]
  int v36; // [rsp+34h] [rbp-104h]
  const void *src; // [rsp+38h] [rbp-100h]
  void *v38; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-F0h]
  _BYTE v40[48]; // [rsp+50h] [rbp-E8h] BYREF
  void *v41; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v42; // [rsp+88h] [rbp-B0h]
  __int64 v43; // [rsp+90h] [rbp-A8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-70h]
  _BYTE v46[104]; // [rsp+D0h] [rbp-68h] BYREF

  sub_1AA24E0(*(__int64 **)(*a1 + 744));
  v8 = *(unsigned __int16 **)(a2 + 56);
  if ( !v8 )
    goto LABEL_21;
  v9 = sub_1D434A0(a1, v8, a3, a4, v5, v6, v7);
  v10 = v9;
  if ( v9 == 1 )
    goto LABEL_5;
  if ( v9 )
    v10 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v9 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_21:
    v10 = 0;
LABEL_5:
  v11 = (unsigned __int16 **)(a2 + 64);
  v38 = v40;
  v39 = 0x600000000LL;
  v12 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 != v12 )
  {
    do
    {
      v13 = sub_1D434A0(a1, *v11, a3, a4, v5, v6, v7);
      if ( v13 <= 1 )
        break;
      v26 = sub_1AA2500(*(_QWORD **)(*a1 + 744), 18, 51, *(_DWORD *)(a2 + 12), v13 & 0xFFFFFFFFFFFFFFFELL);
      if ( v26 > 1 )
        sub_14B7B40((__int64)&v38, v26 & 0xFFFFFFFFFFFFFFFELL);
      ++v11;
    }
    while ( (unsigned __int16 **)v12 != v11 );
  }
  v14 = 1;
  sub_1D45410(
    (unsigned __int16 **)&v41,
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
                           (char *)v41,
                           v42,
                           a3) )
  {
    v15 = v10 & 0xFFFFFFFFFFFFFFFELL;
    v35 = *(_DWORD *)(a2 + 16);
    v32 = v41;
    v27 = *(_DWORD *)(a2 + 44);
    v34 = v42;
    src = v38;
    v28 = *(_DWORD *)(a2 + 48);
    if ( v10 <= 1 )
      v15 = 0;
    v16 = 8LL * (unsigned int)v39;
    v29 = *(_DWORD *)(a2 + 40);
    v36 = *(_DWORD *)(a2 + 20);
    v17 = *(_DWORD *)(a2 + 12);
    ptr = v46;
    v45 = 0x600000000LL;
    sub_14B7B40((__int64)&ptr, v15);
    v18 = (unsigned int)v45;
    v19 = v16 >> 3;
    v20 = v32;
    v21 = (unsigned int)v45 + (v16 >> 3);
    v22 = v34;
    if ( v21 > HIDWORD(v45) )
    {
      sub_2237220(&ptr, v46, v21, 8);
      v19 = v16 >> 3;
      v20 = v32;
      v18 = (unsigned int)v45;
      v22 = v34;
    }
    v23 = (__int64 *)ptr;
    if ( v16 )
    {
      v33 = v19;
      v30 = v20;
      v31 = v22;
      memcpy((char *)ptr + 8 * v18, src, v16);
      LODWORD(v19) = v33;
      v20 = v30;
      v23 = (__int64 *)ptr;
      LODWORD(v18) = v45;
      v22 = v31;
    }
    v24 = *a1;
    LODWORD(v45) = v18 + v19;
    v14 = sub_1AA2840(
            *(_QWORD **)(v24 + 744),
            18,
            v17,
            v36,
            v29,
            v28,
            v23,
            (unsigned int)(v18 + v19),
            4,
            v27,
            v35,
            v20,
            v22,
            0);
    if ( ptr != v46 )
      free(ptr);
  }
  if ( v41 != &v43 )
    free(v41);
  if ( v38 != v40 )
    free(v38);
  return v14;
}
