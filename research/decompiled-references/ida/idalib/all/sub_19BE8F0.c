__int64 __fastcall sub_19BE8F0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 a5, __int64 a6)
{
  int v7; // r13d
  __int64 v10; // rsi
  __int64 *v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int16 v15; // ax
  unsigned __int8 v16; // al
  _QWORD v18[2]; // [rsp+10h] [rbp-F8h] BYREF
  unsigned int v19; // [rsp+20h] [rbp-E8h]
  void *ptr; // [rsp+28h] [rbp-E0h]
  __int64 v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v23[200]; // [rsp+40h] [rbp-C8h] BYREF

  v7 = a5;
  v10 = *a4;
  if ( (*(_BYTE *)(*(_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
  {
    v14 = 0;
  }
  else
  {
    v18[0] = 0;
    v21 = 0x100000000LL;
    ptr = &v22;
    v18[1] = 0;
    v19 = 0;
    sub_19BE6C0(a1, v10, (__int64)v18, (__int64)&v22, a5, a6);
    if ( !(_DWORD)v21 )
    {
      v11 = (__int64 *)(a1 + 8);
      v12 = 5420;
      goto LABEL_5;
    }
    if ( (unsigned int)v21 > 1 )
    {
      v11 = (__int64 *)(a1 + 8);
      v12 = 5419;
LABEL_5:
      v13 = 1;
      sub_168B9F0((__int64)v23, v11, a3, v12, 0);
      sub_15F7200(v23);
      if ( ptr != &v22 )
        free(ptr);
      operator delete(v18[0], 8LL * v19, 8);
      return v13;
    }
    v14 = *(_QWORD *)(*(_QWORD *)ptr + 56LL);
    if ( ptr != &v22 )
      free(ptr);
    operator delete(v18[0], 8LL * v19, 8);
  }
  v13 = sub_EEE9A0(40, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v13 = *(_WORD *)v13 & 0xFE00 | 0x5E;
  if ( unk_2CD7484 )
    sub_EE9B50(94);
  v15 = *(_WORD *)(v13 + 1);
  *(_QWORD *)(v13 + 8) = a2;
  *(_QWORD *)(v13 + 16) = (unsigned __int64)a4 | 4;
  *(_QWORD *)(v13 + 24) = v14;
  *(_DWORD *)(v13 + 32) = a3;
  *(_WORD *)(v13 + 1) = v15 & 0xF801 | 2;
  *(_DWORD *)(v13 + 36) = v7;
  v16 = sub_B63490(v13);
  *(_BYTE *)(v13 + 1) = (v16 << 6) | *(_BYTE *)(v13 + 1) & 0x3F;
  *(_BYTE *)(v13 + 2) = *(_BYTE *)(v13 + 2) & 0xF8 | (v16 >> 2) & 7;
  return v13;
}
