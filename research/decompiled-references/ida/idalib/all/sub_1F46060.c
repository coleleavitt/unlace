void __fastcall sub_1F46060(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  int v12; // edx
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // r12
  int v16; // edx
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // r12
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int8 v37; // al
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 *v40; // r9
  _BYTE *v41; // r12
  __int64 (__fastcall *v42)(__int64); // rdx
  __int64 v43; // rbp
  __int64 (__fastcall *v44)(__int64); // rax
  __int64 v45; // [rsp+8h] [rbp-60h] BYREF
  _BYTE v46[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE *v47; // [rsp+20h] [rbp-48h]

  sub_1F458C0((__int64)a1, a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_QWORD *)(v4 + 8);
  v8 = *(_QWORD *)(v6 + 856);
  v9 = v6;
  *(_DWORD *)(v4 + 24) = v5 + 1;
  v10 = *(_QWORD *)(v4 + 32);
  v11 = *(_QWORD *)(v10 + 8 * v5);
  if ( v8 )
  {
    sub_1EDF870(v7, v6);
    v4 = a1[2];
    v9 = *(_QWORD *)(v4 + 16);
    v7 = *(_QWORD *)(v4 + 8);
    v10 = *(_QWORD *)(v4 + 32);
    v8 = *(_QWORD *)(v9 + 856);
  }
  v12 = __ROR4__(v11, 1);
  v13 = HIDWORD(v11);
  if ( v13 )
    v6 = *(_QWORD *)(*(_QWORD *)(v6 + 3320) + 8LL * (unsigned int)(v13 - 1));
  if ( v12 )
    v12 = v12 + *(_DWORD *)(v6 + 1648) - 2;
  *(_DWORD *)(a2 + 56) = v12;
  v14 = *(unsigned int *)(v4 + 24);
  v15 = *(_QWORD *)(v10 + 8 * v14);
  *(_DWORD *)(v4 + 24) = v14 + 1;
  if ( v8 )
  {
    sub_1EDF870(v7, v9);
    v4 = a1[2];
  }
  v16 = __ROR4__(v15, 1);
  v17 = HIDWORD(v15);
  if ( v17 )
    v9 = *(_QWORD *)(*(_QWORD *)(v9 + 3320) + 8LL * (unsigned int)(v17 - 1));
  if ( v16 )
    v16 = v16 + *(_DWORD *)(v9 + 1648) - 2;
  *(_DWORD *)(a2 + 60) = v16;
  *(_QWORD *)(a2 + 64) = sub_1F19370(v4);
  v18 = a1[2];
  v19 = *(_QWORD **)(v18 + 8);
  v20 = sub_1EE13A0((__int64)v19, *(_QWORD *)(v18 + 16), (__int64 *)(v18 + 32), (_DWORD *)(v18 + 24));
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 48) & 7LL | sub_1EDB980(v19, v20, v21, v22, v23, v24);
  v25 = a1[2];
  v26 = *(_QWORD **)(v25 + 8);
  v27 = sub_1EE13A0((__int64)v26, *(_QWORD *)(v25 + 16), (__int64 *)(v25 + 32), (_DWORD *)(v25 + 24));
  v32 = sub_1EDB980(v26, v27, v28, v29, v30, v31);
  if ( v32 )
    sub_A965E0(*(_QWORD *)(*a1 + 144LL), a2, v32, v33, v34, v35);
  v36 = *(_QWORD *)(*(_QWORD *)(*a1 + 144LL) + 2320LL);
  if ( (*(_BYTE *)(v36 + 21) & 2) != 0 )
  {
    if ( (*(_BYTE *)(v36 + 1) & 8) != 0
      || (v37 = *(_BYTE *)(a2 + 28) & 0x7F, (unsigned int)v37 - 49 <= 2)
      || ((v37 + 96) & 0x7Fu) <= 1 )
    {
      sub_1F43500((__int64)v46, (__int64)a1, a2);
      v41 = v47;
      if ( v47 && (v47[28] & 0x7F) == 0x50 )
      {
        v42 = sub_B94D10;
        v43 = *(_QWORD *)(*a1 + 144LL);
        v44 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 32LL);
        if ( v44 == sub_B94D10 )
        {
          if ( (char)v47[29] < 0 )
            v41 = (_BYTE *)sub_B72720((__int64)v47);
        }
        else
        {
          v41 = (_BYTE *)v44((__int64)v47);
        }
        v45 = a2;
        *sub_1742A40(v43 + 1728, &v45, (__int64)v42, v38, v39, v40) = (__int64)v41;
      }
      sub_1F42E40((__int64)v46);
    }
  }
}
