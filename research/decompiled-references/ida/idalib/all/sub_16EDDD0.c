__int64 __fastcall sub_16EDDD0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  unsigned int v20; // eax
  __int64 *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rbp
  char v24; // al
  _QWORD *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D0h] BYREF
  int v32; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+40h] [rbp-B8h]
  int v35; // [rsp+48h] [rbp-B0h]
  __int64 v36; // [rsp+50h] [rbp-A8h]

  v3 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v6 = sub_BFD550(*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 32));
  v7 = sub_B75A50(*(_QWORD *)(v6 + 16), 0);
  v8 = 8LL * (v7 == 1006);
  if ( (unsigned __int8)sub_16EC930(a1, a2 & 0xFFFFFFFFFFFFFFFELL, (unsigned int)(v7 == 1006) + 1, a3) )
    return 1;
  v10 = *(_QWORD *)(v8 + v3 + 8 * (((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL) + 32);
  v11 = sub_19179A0(a1, v10, 1);
  if ( v11 == 1 )
    return 1;
  v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v14 = ((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL;
  *(_QWORD *)(v8 + v3 + 8 * v14 + 32) = v11 & 0xFFFFFFFFFFFFFFFELL;
  v15 = *(_QWORD *)(*(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) != 42 )
  {
    v28 = v13;
    v15 = sub_16B68B0(v15, v10, v14, v12);
    v13 = v28;
    if ( !v15 )
    {
      v20 = sub_16C50A0(v6);
      v21 = (__int64 *)(a1 + 8);
      v22 = 4319;
      goto LABEL_13;
    }
  }
  v28 = v13;
  v29 = *(_QWORD *)(v15 + 32);
  v29 = sub_6D5440(&v29);
  if ( !sub_9EC890(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), v10, v16, v17, v18) )
  {
    v19 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 11
      && !sub_F58060(v19)
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 57 > 1 )
    {
      v20 = sub_16C50A0(v6);
      v21 = (__int64 *)(a1 + 8);
      v22 = 4320;
LABEL_13:
      sub_168B9F0((__int64)&v32, v21, v20, v22, 0);
      v30 = *(_QWORD *)(v28 + 8);
      v23 = sub_162B6D0((__int64)&v32, &v30);
      v31 = sub_EEC8C0(v28, (__int64)&v30, a3);
      sub_1587DB0(v23, &v31);
      sub_15F7200(&v32);
      return 1;
    }
  }
  if ( v7 == 1006 )
  {
    v24 = *(_BYTE *)(v3 + 2);
    v25 = *(_QWORD **)(a1 + 248);
    v33 = 0;
    v35 = 0;
    v32 = 1;
    v26 = *(_QWORD *)(v3 + 8 * (((v24 & 8) != 0) + 1LL) + 32);
    v34 = sub_A73320(v25, v29);
    v36 = 0;
    v27 = sub_1A24E20(a1, &v32, 0, v26, 0, 0);
    if ( v27 == 1 )
      return 1;
    *(_QWORD *)(v3 + 8 * (((*(_BYTE *)(v3 + 2) & 8) != 0) + 1LL) + 32) = v27 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v3 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL);
    return a2;
  }
  else
  {
    *(_QWORD *)(v3 + 8) = v29;
    return a2;
  }
}
