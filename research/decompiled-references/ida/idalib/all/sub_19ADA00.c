char __fastcall sub_19ADA00(_QWORD *a1, unsigned int a2, __int64 a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char result; // al
  __int64 *v12; // rsi
  unsigned int *v13; // rax
  __int64 v14; // r15
  _BYTE *v15; // rdx
  signed __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v25; // [rsp+0h] [rbp-E8h]
  _BYTE *v26; // [rsp+0h] [rbp-E8h]
  _BYTE *v27; // [rsp+0h] [rbp-E8h]
  __int64 v28; // [rsp+8h] [rbp-E0h]
  bool v29; // [rsp+17h] [rbp-D1h] BYREF
  _QWORD *v30; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v31[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( sub_B74C70(a7) )
  {
    result = sub_1E63CF0(a1, a2, *(_QWORD *)(**(_QWORD **)(a7 + 120) + 48LL), 1, 3968);
    if ( result )
      return result;
  }
  if ( (*(_BYTE *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a7 + 32LL))(a7) + 82) & 0x40) == 0 )
    return (unsigned int)sub_1661D40(a1, a2, a3, a5, a6, a4) == 1;
  result = 1;
  if ( !a4 )
    return result;
  v12 = a1 + 1;
  if ( (*(_BYTE *)(a7 + 83) & 8) == 0 || (v13 = *(unsigned int **)(a7 + 128), !*((_BYTE *)v13 + 4)) )
  {
    sub_168B9F0((__int64)v31, v12, a2, 0xE4Eu, 0);
    v29 = 0;
    v14 = sub_1588420((__int64)v31, (unsigned __int8 *)&v29);
    goto LABEL_16;
  }
  v25 = *(_QWORD *)&v13[2 * *v13 + 2];
  sub_168B9F0((__int64)v31, v12, a2, 0xE4Eu, 0);
  v29 = v25 != 0;
  v14 = sub_1588420((__int64)v31, (unsigned __int8 *)&v29);
  if ( !v25 )
  {
LABEL_16:
    v16 = 0;
    v15 = nullptr;
    goto LABEL_8;
  }
  v15 = (_BYTE *)(v25 + 4LL * *(unsigned int *)(v25 + 4) + 20);
  v16 = *(_DWORD *)(v25 + 16) * ((*(_WORD *)(v25 + 2) >> 6) & 7u);
LABEL_8:
  if ( *(_BYTE *)(v14 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v14 + 32), v15, v16);
  }
  else if ( *(_BYTE *)(v14 + 132) )
  {
    v26 = v15;
    v17 = sub_168B9E0((_QWORD *)v14);
    v20 = (__int64)v26;
    v21 = v17;
    v22 = *(_QWORD **)(v14 + 16);
    if ( v22 )
    {
      v28 = v21;
      v22 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _BYTE *))(*v22 + 32LL))(v22, *v22, v26);
      v21 = v28;
      v20 = (__int64)v26;
    }
    v27 = (_BYTE *)v20;
    v30 = v22;
    v23 = sub_1587BC0(v21, (__int64 *)&v30, v20, v21, v18, v19);
    sub_AEC220((unsigned __int8 **)(*v23 + 32LL * *(unsigned int *)(v14 + 128) + 8), v27, v16);
  }
  sub_15F7200(v31);
  sub_18F5080((__int64)a1, a7);
  return a4;
}
