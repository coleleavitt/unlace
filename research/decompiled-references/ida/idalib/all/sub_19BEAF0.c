__int64 __fastcall sub_19BEAF0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5, double a6)
{
  _QWORD *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int16 v16; // ax
  unsigned __int8 v17; // al
  __int64 v19; // rsi
  __int64 *v20; // rsi
  unsigned int v21; // ecx
  _QWORD v22[2]; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v23; // [rsp+20h] [rbp-E8h]
  void *ptr; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+30h] [rbp-D8h]
  __int64 v26; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v27[200]; // [rsp+40h] [rbp-C8h] BYREF

  v10 = *(_QWORD **)(a1 + 248);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v14 = 0;
    goto LABEL_5;
  }
  if ( (unsigned int)sub_BFE6E0(a4, (unsigned __int64)v10, 1, a6) )
  {
    v13 = sub_A7AAC0(*(_QWORD *)(a1 + 248), 0, 0);
    v10 = *(_QWORD **)(a1 + 248);
    v14 = v13;
LABEL_5:
    v15 = sub_EEE9A0(40, v10, 8u);
    *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x5E;
    if ( unk_2CD7484 )
      sub_EE9B50(94);
    v16 = *(_WORD *)(v15 + 1);
    *(_QWORD *)(v15 + 8) = a2;
    *(_QWORD *)(v15 + 16) = a4 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(v15 + 24) = v14;
    *(_DWORD *)(v15 + 32) = a3;
    *(_WORD *)(v15 + 1) = v16 & 0xF801 | 2;
    *(_DWORD *)(v15 + 36) = a5;
    v17 = sub_B63490(v15);
    *(_BYTE *)(v15 + 1) = (v17 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
    *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v17 >> 2) & 7;
    return v15;
  }
  v19 = *(_QWORD *)(a4 + 8);
  v25 = 0x100000000LL;
  ptr = &v26;
  v22[0] = 0;
  v22[1] = 0;
  v23 = 0;
  sub_19BE6C0(a1, v19, (__int64)v22, (__int64)&v26, v11, v12);
  if ( (_DWORD)v25 )
  {
    if ( (unsigned int)v25 <= 1 )
    {
      v14 = *(_QWORD *)(*(_QWORD *)ptr + 56LL);
      if ( ptr != &v26 )
        free(ptr);
      operator delete(v22[0], 8LL * v23, 8);
      v10 = *(_QWORD **)(a1 + 248);
      goto LABEL_5;
    }
    v20 = (__int64 *)(a1 + 8);
    v21 = 5419;
  }
  else
  {
    v20 = (__int64 *)(a1 + 8);
    v21 = 5420;
  }
  v15 = 1;
  sub_168B9F0((__int64)v27, v20, a3, v21, 0);
  sub_15F7200(v27);
  if ( ptr != &v26 )
    free(ptr);
  operator delete(v22[0], 8LL * v23, 8);
  return v15;
}
