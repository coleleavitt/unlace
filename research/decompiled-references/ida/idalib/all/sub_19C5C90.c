unsigned __int64 __fastcall sub_19C5C90(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r15d
  __int64 v13; // r13
  char v14; // bl
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rsi
  __int64 v20; // r13
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r15
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // [rsp+8h] [rbp-E0h]
  __int64 v30; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v32[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v34; // [rsp+40h] [rbp-A8h] BYREF
  char v35; // [rsp+98h] [rbp-50h]
  unsigned int v36; // [rsp+A0h] [rbp-48h]
  char v37; // [rsp+A4h] [rbp-44h]

  v11 = a5;
  v13 = a3;
  v14 = a4;
  if ( (_BYTE)a4 )
    goto LABEL_5;
  v15 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 42 )
  {
    a3 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(a3 + 2) & 4) == 0 )
      goto LABEL_9;
    goto LABEL_4;
  }
  a3 = *(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(a3 + 16) != 42 )
    goto LABEL_5;
  v29 = a6;
  v15 = sub_F63050(v15, a2, a3, a4);
  a6 = v29;
  if ( !v15 )
    goto LABEL_5;
  a3 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
  {
LABEL_4:
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 48 )
    {
LABEL_5:
      v16 = sub_15AB9E0(a6, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
      return sub_C99C70(
               *(_QWORD **)(a1 + 248),
               a2,
               v13,
               v14,
               v11,
               a8,
               v16,
               v17,
               a9,
               *(_OWORD *)a10,
               *(_QWORD *)(a10 + 16),
               a11);
    }
  }
LABEL_9:
  v19 = a1 + 8;
  sub_168B9F0((__int64)v32, (__int64 *)(a1 + 8), v11, 0x14AEu, 0);
  if ( v35 )
  {
    v19 = v13;
    sub_AE9DF0(&v34, v13, 8u);
  }
  else if ( v37 )
  {
    v26 = sub_168B9E0(v32);
    v27 = v33;
    if ( v33 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 32LL))(v33);
    v31 = v27;
    v28 = sub_1587BC0(v26, &v31, v22, v23, v24, v25);
    v19 = v13;
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v36 + 8), v13, 8u);
  }
  v30 = sub_EEC8C0(a2, v19, a7);
  v20 = sub_1587DB0((__int64)v32, &v30);
  v21 = sub_B85A10(a10);
  if ( !v21 )
    v21 = *(_DWORD *)(a10 + 8);
  LODWORD(v31) = *(_DWORD *)(a10 + 8);
  HIDWORD(v31) = v21;
  sub_1587DB0(v20, &v31);
  sub_15F7200(v32);
  return 1;
}
