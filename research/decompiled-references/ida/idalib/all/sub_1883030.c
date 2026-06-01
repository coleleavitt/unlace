__int64 __fastcall sub_1883030(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r8
  unsigned int *v5; // r14
  __int64 (__fastcall *v6)(__int64); // rax
  unsigned __int64 v7; // rbp
  unsigned int v8; // r15d
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // [rsp+8h] [rbp-130h]
  __int64 v28; // [rsp+8h] [rbp-130h]
  __int64 v29; // [rsp+8h] [rbp-130h]
  __int64 v30; // [rsp+8h] [rbp-130h]
  __int64 v31; // [rsp+10h] [rbp-128h]
  _BOOL8 v32; // [rsp+18h] [rbp-120h]
  __int64 v33; // [rsp+20h] [rbp-118h]
  __int64 v34; // [rsp+20h] [rbp-118h]
  int v35; // [rsp+28h] [rbp-110h]
  int v36; // [rsp+2Ch] [rbp-10Ch]
  unsigned int v37; // [rsp+3Ch] [rbp-FCh] BYREF
  __int64 v38; // [rsp+58h] [rbp-E0h]
  _BYTE v39[200]; // [rsp+70h] [rbp-C8h] BYREF

  v2 = a2 + 72;
  v4 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
  if ( (v4 & 4) != 0 )
    v5 = *(unsigned int **)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v5 = (unsigned int *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  if ( v5 )
    v5 -= 16;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_B94CD0 )
  {
    v7 = *(_QWORD *)(sub_B709C0(a2) + 168);
    if ( v7 )
      return 0;
  }
  else
  {
    v7 = *(_QWORD *)(((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64)))v6)(a2, a2, sub_B94CD0)
                   + 168);
    if ( v7 )
      return 0;
  }
  if ( !sub_AED5B0(a2) )
    return 0;
  v10 = (*(_BYTE *)(a2 + 29) & 2) != 0 ? v5[6] : *(unsigned int *)(a2 + 24);
  v37 = v10;
  v11 = sub_19BB2C0(a1, v10, v5, 1);
  if ( !v11 )
    return 0;
  v27 = v11;
  LOBYTE(v12) = sub_B74C20(v11);
  v13 = v27;
  v8 = v12;
  if ( !(_BYTE)v12
    || (v32 = sub_B74C70(v27),
        v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 120) + 8 * v32) + 48LL),
        v17 = (unsigned int *)sub_F63270(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL), v10, v14, v32, v15, v16),
        v13 = v27,
        v17)
    && v5
    && (v17 == v5
     || (v33 = v27,
         v28 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v17 + 32LL))(v17),
         v18 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v5 + 32LL))(v5),
         v13 = v33,
         v28 == v18)) )
  {
LABEL_23:
    v30 = v13;
    sub_18F5260(a1, v13, (unsigned int)&v37, 1, 0, 0, 0, 0, 0);
    sub_1910D40(a1, v37, v30, 1);
    sub_B99450(a2, v30, v7);
    return 0;
  }
  v19 = *(_QWORD *)(a1 + 512);
  v29 = v13;
  v20 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 512) = 0;
  v21 = v19;
  v22 = *(_QWORD *)(a1 + 9944);
  *(_QWORD *)(a1 + 544) = v2;
  *(_QWORD *)(a1 + 9944) = 0;
  v38 = v22;
  v34 = v20;
  v35 = *(_DWORD *)(a1 + 80);
  v36 = *(_DWORD *)(a1 + 2632);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  v23 = sub_19B4F60(a1, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 120) + 8 * v32) + 24LL));
  v24 = sub_1BFA490(a1, v23 & 0xFFFFFFFFFFFFFFFELL, v31, 1, 0);
  v13 = v29;
  if ( v24 != 1 )
  {
    v7 = v24 & 0xFFFFFFFFFFFFFFFELL;
    if ( v34 )
    {
      v25 = v38;
      *(_QWORD *)(a1 + 544) = v34;
      *(_QWORD *)(a1 + 512) = v21;
      *(_QWORD *)(a1 + 9944) = v25;
      *(_DWORD *)(a1 + 80) = v35;
      *(_DWORD *)(a1 + 2632) = v36;
    }
    goto LABEL_23;
  }
  sub_168B9F0((__int64)v39, (__int64 *)(a1 + 8), v37, 0x178Bu, 0);
  sub_15F7200(v39);
  if ( v34 )
  {
    v26 = v38;
    *(_QWORD *)(a1 + 544) = v34;
    *(_QWORD *)(a1 + 512) = v21;
    *(_QWORD *)(a1 + 9944) = v26;
    *(_DWORD *)(a1 + 80) = v35;
    *(_DWORD *)(a1 + 2632) = v36;
  }
  return v8;
}
