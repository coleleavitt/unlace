bool __fastcall sub_634A60(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+8h] [rbp-30h]
  __int64 v28; // [rsp+10h] [rbp-28h]
  unsigned __int64 v29; // [rsp+18h] [rbp-20h]

  v7 = *(unsigned __int8 *)(a2 + 4);
  v8 = *a1;
  v29 = __readfsqword(0x28u);
  sub_6335B0(v8, 2, 128, v7, a5, a6);
  v9 = *a1;
  v26 = v9;
  v10 = *(unsigned __int8 *)(a2 + 5);
  if ( v9 )
    v27 = *(_QWORD *)(v9 + 1520);
  else
    v27 = -1;
  v28 = v9 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B354A0, v10, 30, 1);
  sub_6335B0(*a1, 44, 32, *(unsigned __int8 *)(a2 + 6), v11, v12);
  v13 = *a1;
  v14 = *(unsigned __int8 *)(a2 + 7);
  v26 = v13;
  if ( v13 )
    v27 = *(_QWORD *)(v13 + 1520);
  else
    v27 = -1;
  v28 = v13 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B35760, v14, 41, 1);
  v15 = *a1;
  v16 = *(unsigned __int8 *)(a2 + 8);
  v26 = v15;
  if ( v15 )
    v27 = *(_QWORD *)(v15 + 1520);
  else
    v27 = -1;
  v28 = v15 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B35720, v16, 40, 1);
  v17 = *a1;
  v18 = *(unsigned __int8 *)(a2 + 9);
  v26 = v17;
  if ( v17 )
    v27 = *(_QWORD *)(v17 + 1520);
  else
    v27 = -1;
  v28 = v17 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B358A0, v18, 46, 1);
  v19 = *a1;
  v20 = *(unsigned __int16 *)(a2 + 10);
  v26 = v19;
  if ( v19 )
    v27 = *(_QWORD *)(v19 + 1520);
  else
    v27 = -1;
  v28 = v19 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B357A0, v20, 42, 1);
  v21 = *a1;
  v22 = *(__int16 *)(a2 + 12);
  v26 = v21;
  if ( v21 )
    v27 = *(_QWORD *)(v21 + 1520);
  else
    v27 = -1;
  v28 = v21 + 640;
  sub_632390((__int64)&v26, (__int64)&unk_2B358E0, v22, 47, 1);
  return sub_6335B0(*a1, 48, 8, (*(_BYTE *)(a2 + 14) & 8) != 0, v23, v24);
}
