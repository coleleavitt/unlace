__int64 __fastcall sub_1934340(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v8; // r13d
  unsigned int v9; // r12d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  unsigned __int64 v16; // r14
  __int64 v17; // rbp
  unsigned int v19; // eax
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  char v23; // al
  __int64 v24; // rax
  __int64 v25; // r8
  __int16 v26; // dx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // [rsp+4h] [rbp-D4h] BYREF
  __int64 v33; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v34[200]; // [rsp+10h] [rbp-C8h] BYREF

  v8 = a3;
  v9 = a4;
  v10 = sub_1907C70(a1, a2, a7, a8, a3, a4, a5, a6);
  if ( v10 == 1 )
    return 1;
  v14 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (*(_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0 )
  {
LABEL_3:
    if ( (v9 & 0xFFFFFFFD) != 0
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 6 )
    {
      goto LABEL_5;
    }
    a2 = (_QWORD *)v14;
    v21 = sub_1934250(a1, v14, *(double *)a7.m128i_i64, a8);
    if ( v21 != 1 )
    {
      v14 = v21 & 0xFFFFFFFFFFFFFFFELL;
LABEL_5:
      v15 = sub_A63CE0(*(_QWORD **)(a1 + 248));
      v16 = (unsigned __int64)sub_EEC8C0(v14, (__int64)a2, *(double *)a7.m128i_i64) >> 32;
      v17 = sub_EEE9A0(32, *(_QWORD **)(a1 + 248), 8u);
      sub_BF9B00(v17, v9, v14, v15, v8, v16);
      return v17;
    }
    return 1;
  }
  if ( v9 - 3 <= 1 )
  {
    if ( ((*(_BYTE *)(v14 + 1) >> 3) & 7) == 1 )
    {
      v19 = sub_C00A40(v14, (__int64)a2, v11, v12, v13);
      sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v19, 0x137Bu, 0);
      v32 = 1;
      v20 = sub_1587D10((__int64)v34, &v32);
      v33 = sub_EEC8C0(v14, (__int64)&v32, *(double *)a7.m128i_i64);
      sub_1587DB0(v20, &v33);
      sub_15F7200(v34);
      return 1;
    }
    v24 = sub_BFB9F0(v14);
    v26 = *(_WORD *)v24 & 0x1FF;
    if ( v26 == 71 )
    {
      v27 = *(_QWORD *)(v24 + 16);
    }
    else
    {
      if ( v26 != 46 )
      {
LABEL_32:
        a2 = (_QWORD *)v14;
        v23 = sub_18F0D00(a1, v14, v9, *(double *)a7.m128i_i64);
LABEL_21:
        if ( !v23 )
          goto LABEL_5;
        return 1;
      }
      v27 = *(_QWORD *)(v24 + 24);
    }
    if ( v27 && (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
    {
      v28 = *(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v27 + 16) & 4) != 0 )
        v28 = *(_QWORD *)v28;
      if ( (*(_BYTE *)(v28 + 8) & 0x7Fu) - 58 > 3 )
        JUMPOUT(0x2E9C80);
      if ( (*(_BYTE *)(v28 + 10) & 1) == 0 )
      {
        v31 = sub_C00A40(v14, (__int64)a2, v27, v28, v25);
        sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v31, 0xBA7u, 0);
        v33 = sub_EEC8C0(v14, a1 + 8, *(double *)a7.m128i_i64);
        sub_1587DB0((__int64)v34, &v33);
        sub_15F7200(v34);
        return 1;
      }
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 > 1 )
        goto LABEL_5;
    }
    goto LABEL_32;
  }
  if ( v9 == 6 )
  {
    v22 = (_DWORD *)sub_BFB9F0(v14);
    if ( (*v22 & 0x10000) != 0 )
      goto LABEL_5;
    a2 = v22;
    v23 = sub_18F0D00(a1, (__int64)v22, 6u, *(double *)a7.m128i_i64);
    goto LABEL_21;
  }
  if ( v9 == 7 )
  {
    v29 = sub_C00A40(v14, (__int64)a2, v11, v12, v13);
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v29, 0x1268u, 0);
    sub_15F7200(v34);
    return 1;
  }
  if ( ((*(_BYTE *)(v14 + 1) >> 3) & 7) == 1 )
  {
    v30 = sub_C00A40(v14, (__int64)a2, v11, v12, v13);
    sub_168B9F0((__int64)v34, (__int64 *)(a1 + 8), v30, 0x137Bu, 0);
    LODWORD(v33) = 0;
    sub_1587D10((__int64)v34, (int *)&v33);
    sub_15F7200(v34);
    return 1;
  }
  if ( (v9 & 0xFFFFFFFD) != 0 && v9 != 8 )
    goto LABEL_5;
  a2 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  if ( !(unsigned __int8)sub_18F0D00(a1, v14, v9, *(double *)a7.m128i_i64) )
    goto LABEL_3;
  return 1;
}
