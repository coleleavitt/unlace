__int64 __fastcall sub_16D0C90(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 *v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r15
  int v39; // [rsp+10h] [rbp-F8h] BYREF
  int v40; // [rsp+14h] [rbp-F4h] BYREF
  int v41; // [rsp+18h] [rbp-F0h] BYREF
  int v42; // [rsp+1Ch] [rbp-ECh] BYREF
  unsigned __int64 v43; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v47[200]; // [rsp+40h] [rbp-C8h] BYREF

  if ( *(_DWORD *)(a2 + 16) <= 2u )
  {
    sub_168B9F0((__int64)v47, a1 + 1, *(_DWORD *)(a2 + 20), 0x1469u, 0);
    LODWORD(v43) = 0;
    v4 = sub_1587D10((__int64)v47, (int *)&v43);
    LODWORD(v44) = 3;
    v5 = sub_1587D10(v4, (int *)&v44);
    LODWORD(v45) = *(_DWORD *)(a2 + 16);
    v6 = sub_16CF160(v5, (unsigned int *)&v45);
    LODWORD(v46) = 0;
    v7 = *(unsigned __int8 *)(sub_1587D10(v6, (int *)&v46) + 120);
    sub_15F7200(v47);
    return v7;
  }
  v9 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int8)sub_16BBD70((__int64)a1, a2) )
    return 1;
  v7 = sub_16B6120((__int64)a1, v9, nullptr, a3);
  if ( (_BYTE)v7 )
    return 1;
  v10 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v11 = sub_BFB9F0(*(_QWORD *)(a2 + v10 + 40));
  v12 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v13 = sub_BFB9F0(*(_QWORD *)(a2 + v10 + 48));
  v14 = a1[31];
  v15 = v13;
  v16 = (unsigned __int64 *)(*(_QWORD *)(v14 + 18648) | 1LL);
  v17 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v43 = sub_A70010(v14, (__int64)v16);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
  {
LABEL_8:
    v21 = sub_EEB7E0(v11, (__int64)v16, a3);
    sub_168B9F0((__int64)v47, a1 + 1, v21, 0x1482u, 0);
    v45 = *(_QWORD *)(v11 + 8);
    v22 = sub_162B6D0((__int64)v47, &v45);
    v23 = sub_1605D30(v22, (__int64 *)&v43);
    v40 = 1;
    v24 = sub_1587D10(v23, &v40);
    v41 = 0;
    v25 = sub_1587D10(v24, &v41);
    v42 = 3;
    v26 = sub_1587D10(v25, &v42);
    LODWORD(v44) = 2;
    v27 = sub_1587D10(v26, (int *)&v44);
    v46 = *(_QWORD *)(v11 + 8);
    v28 = sub_162B6D0(v27, &v46);
    v16 = &v43;
    sub_1605D30(v28, (__int64 *)&v43);
    sub_15F7200(v47);
LABEL_9:
    v29 = (_QWORD *)a1[31];
    goto LABEL_10;
  }
  v29 = (_QWORD *)a1[31];
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
  {
    v38 = v29[2331];
    if ( (sub_F68450(
            *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)v16,
            v18,
            v19,
            v20)
        & 0xFFFFFFFFFFFFFFF8LL) == v38 )
      goto LABEL_9;
    goto LABEL_8;
  }
LABEL_10:
  v44 = sub_A63CE0(v29);
  if ( v44 != (*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    v30 = sub_EEB7E0(v15, (__int64)v16, a3);
    sub_168B9F0((__int64)v47, a1 + 1, v30, 0x1482u, 0);
    v45 = *(_QWORD *)(v15 + 8);
    v31 = sub_162B6D0((__int64)v47, &v45);
    v32 = sub_1605D30(v31, &v44);
    v39 = 1;
    v33 = sub_1587D10(v32, &v39);
    v40 = 0;
    v34 = sub_1587D10(v33, &v40);
    v41 = 3;
    v35 = sub_1587D10(v34, &v41);
    v42 = 3;
    v36 = sub_1587D10(v35, &v42);
    v46 = *(_QWORD *)(v15 + 8);
    v37 = sub_162B6D0(v36, &v46);
    sub_1605D30(v37, &v44);
    sub_15F7200(v47);
  }
  return v7;
}
