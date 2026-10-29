__int64 __fastcall sub_1760E60(__int64 *a1, __int64 a2)
{
  unsigned __int16 *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int16 **v7; // r13
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // rdx
  bool v12; // cc
  __int64 v13; // r15
  __int64 v14; // r8
  unsigned int v15; // r14d
  void *v16; // r9
  _QWORD *v17; // rsi
  __int64 v18; // r10
  signed __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rdi
  int v22; // edx
  __int64 v23; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // [rsp+0h] [rbp-138h]
  unsigned int v27; // [rsp+4h] [rbp-134h]
  const void *src; // [rsp+8h] [rbp-130h]
  void *v29; // [rsp+10h] [rbp-128h]
  __int64 v30; // [rsp+10h] [rbp-128h]
  __int64 v31; // [rsp+18h] [rbp-120h]
  int v32; // [rsp+20h] [rbp-118h]
  void *v33; // [rsp+20h] [rbp-118h]
  __int64 v34; // [rsp+28h] [rbp-110h]
  unsigned int v35; // [rsp+30h] [rbp-108h]
  unsigned int v36; // [rsp+34h] [rbp-104h]
  unsigned int v37; // [rsp+34h] [rbp-104h]
  __int64 v38; // [rsp+38h] [rbp-100h]
  void *v39; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-F0h]
  _BYTE v41[48]; // [rsp+50h] [rbp-E8h] BYREF
  void *v42; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v43; // [rsp+88h] [rbp-B0h]
  __int64 v44; // [rsp+90h] [rbp-A8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-70h]
  _QWORD v47[13]; // [rsp+D0h] [rbp-68h] BYREF

  sub_1AA24E0(*(_QWORD *)(*a1 + 744), *(unsigned __int8 *)(a2 + 8), *(unsigned int *)(a2 + 12));
  v4 = *(unsigned __int16 **)(a2 + 56);
  if ( !v4 )
    goto LABEL_21;
  v5 = sub_175B800(a1, v4);
  v6 = v5;
  if ( v5 == 1 )
    goto LABEL_5;
  if ( v5 )
    v6 = sub_1AA2500(*(_QWORD *)(*a1 + 744), 18, 51, *(unsigned int *)(a2 + 12), v5 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_21:
    v6 = 0;
LABEL_5:
  v7 = (unsigned __int16 **)(a2 + 64);
  v39 = v41;
  v40 = 0x600000000LL;
  v8 = a2 + 64 + 8LL * *(unsigned int *)(a2 + 52) - 8;
  if ( a2 + 64 != v8 )
  {
    do
    {
      v9 = sub_175B800(a1, *v7);
      if ( v9 <= 1 )
        break;
      v25 = sub_1AA2500(*(_QWORD *)(*a1 + 744), 18, 51, *(unsigned int *)(a2 + 12), v9 & 0xFFFFFFFFFFFFFFFELL);
      if ( v25 > 1 )
        sub_14B7B40((__int64)&v39, v25 & 0xFFFFFFFFFFFFFFFELL);
      ++v7;
    }
    while ( (unsigned __int16 **)v8 != v7 );
  }
  v10 = 1;
  sub_175DE70((unsigned __int8 *)&v42, a1, *(_BYTE *)(a2 + 8), *(__int64 **)(a2 + 24), *(_QWORD *)(a2 + 32));
  if ( !(unsigned __int8)sub_1AA8E70(
                           *(_QWORD *)(*a1 + 744),
                           *(unsigned __int8 *)(a2 + 8),
                           *(unsigned int *)(a2 + 12),
                           v42,
                           v43) )
  {
    v11 = v6 & 0xFFFFFFFFFFFFFFFELL;
    v12 = v6 <= 1;
    v13 = *(unsigned int *)(a2 + 44);
    v14 = *(unsigned int *)(a2 + 40);
    v15 = *(_DWORD *)(a2 + 20);
    v27 = *(_DWORD *)(a2 + 16);
    v26 = *(_DWORD *)(a2 + 48);
    if ( v12 )
      v11 = 0;
    v16 = v42;
    src = v39;
    v17 = v47;
    v35 = *(_DWORD *)(a2 + 12);
    v18 = v43;
    v19 = 8LL * (unsigned int)v40;
    v47[0] = v11;
    ptr = v47;
    v20 = v19 >> 3;
    v46 = 0x600000001LL;
    if ( (unsigned __int64)((v19 >> 3) + 1) > 6 )
    {
      v38 = (8LL * (unsigned int)v40) >> 3;
      v33 = v42;
      v34 = v43;
      v30 = 8LL * (unsigned int)v40;
      v37 = v14;
      sub_2237220(&ptr, v47, v20 + 1, 8);
      v14 = v37;
      v19 = v30;
      v22 = v46;
      v17 = ptr;
      v16 = v33;
      v18 = v34;
      v21 = (unsigned int)v46;
      LODWORD(v20) = v38;
    }
    else
    {
      v21 = 1;
      v22 = 1;
    }
    if ( v19 )
    {
      v32 = v20;
      v29 = v16;
      v31 = v18;
      v36 = v14;
      memcpy(&v17[v21], src, v19);
      LODWORD(v20) = v32;
      v16 = v29;
      v17 = ptr;
      v22 = v46;
      v18 = v31;
      v14 = v36;
    }
    v23 = *a1;
    LODWORD(v46) = v22 + v20;
    v10 = sub_1AA2840(
            *(_QWORD *)(v23 + 744),
            18,
            v35,
            v15,
            v14,
            v26,
            v17,
            (unsigned int)(v22 + v20),
            4,
            v13,
            v27,
            v16,
            v18,
            0);
    if ( ptr != v47 )
      free(ptr);
  }
  if ( v42 != &v44 )
    free(v42);
  if ( v39 != v41 )
    free(v39);
  return v10;
}
