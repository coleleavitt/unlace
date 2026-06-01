__int64 __fastcall sub_35E530(__int64 a1)
{
  char v3; // al
  __int64 v4; // rax
  _QWORD *v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 wide_byte; // rax
  _QWORD *v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // r13
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD v25[23]; // [rsp+0h] [rbp-B8h] BYREF

  v25[17] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_BYTE *)(a1 + 44) >> 2) - 1 > 2 )
    return 1;
  if ( !*(_BYTE *)(a1 + 16) || !(unsigned __int8)sub_35E4C0((_QWORD *)a1) )
    return 0;
  v3 = *(_BYTE *)(a1 + 44);
  if ( v3 > 9 )
  {
    if ( (unsigned __int8)(v3 - 12) > 1u )
      return 1;
    wide_byte = get_wide_byte(*(_QWORD *)(a1 + 96));
    v10 = *(_QWORD **)a1;
    ++*(_QWORD *)(a1 + 96);
    v11 = (v10[4] == 0) + v10[4] - 1LL;
    btoa64(v25, 136, wide_byte, 10);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v10 + 56LL))(v10, v25, 31);
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(_QWORD *)(a1 + 96);
    v14 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *(_BYTE *)(a1 + 17) = 1;
    *(_QWORD *)(a1 + 24) = (v14 == 0) + v14 - 1 - v11 + v12 - 4;
    v15 = get_wide_byte(v13);
    v16 = *(_QWORD **)a1;
    ++*(_QWORD *)(a1 + 96);
    v17 = (v16[4] == 0) + v16[4] - 1LL;
    btoa64(v25, 136, v15, 10);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v16 + 56LL))(v16, v25, 31);
    v18 = *(_QWORD *)(a1 + 24);
    v19 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *(_BYTE *)(a1 + 17) = 1;
    *(_QWORD *)(a1 + 24) = (v19 == 0) + v19 - 1 - v17 + v18 - 4;
    goto LABEL_12;
  }
  if ( v3 > 7 )
  {
LABEL_12:
    v20 = get_wide_byte(*(_QWORD *)(a1 + 96));
    v21 = *(_QWORD **)a1;
    ++*(_QWORD *)(a1 + 96);
    v22 = (v21[4] == 0) + v21[4] - 1LL;
    btoa64(v25, 136, v20, 10);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v21 + 56LL))(v21, v25, 31);
    v23 = *(_QWORD *)(a1 + 24);
    v24 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *(_BYTE *)(a1 + 17) = 1;
    *(_QWORD *)(a1 + 24) = (v24 == 0) + v24 - 1 - v22 + v23 - 4;
    goto LABEL_8;
  }
  if ( (unsigned __int8)(v3 - 4) <= 1u )
  {
LABEL_8:
    v4 = get_wide_byte(*(_QWORD *)(a1 + 96));
    v5 = *(_QWORD **)a1;
    ++*(_QWORD *)(a1 + 96);
    v6 = (v5[4] == 0) + v5[4] - 1LL;
    btoa64(v25, 136, v4, 10);
    (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*v5 + 56LL))(v5, v25, 31);
    v7 = *(_QWORD *)(a1 + 24);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *(_BYTE *)(a1 + 17) = 1;
    *(_QWORD *)(a1 + 24) = (v8 == 0) + v8 - 1 - v6 + v7 - 4;
  }
  return 1;
}
