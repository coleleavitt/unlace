__int64 __fastcall sub_220B260(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned int v7; // r9d
  int v8; // r10d
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned int v14; // eax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  void *v18; // rdi
  void *src; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-50h]
  void *v21; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-40h]

  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 <= 0x40 )
  {
    v8 = *(_DWORD *)(a2 + 8);
    if ( *(_QWORD *)a2 )
    {
      _BitScanReverse64(&v9, *(_QWORD *)a2);
      v8 = v7 - 64 + (v9 ^ 0x3F);
    }
    v10 = *(_DWORD *)(a3 + 8);
    if ( v10 <= 0x40 )
      goto LABEL_5;
LABEL_15:
    v10 = sub_2206780((__int64 *)a3);
    goto LABEL_7;
  }
  v8 = sub_2206780((__int64 *)a2);
  v10 = *(_DWORD *)(a3 + 8);
  if ( v10 > 0x40 )
    goto LABEL_15;
LABEL_5:
  v11 = v10 - 64;
  if ( *(_QWORD *)a3 )
  {
    _BitScanReverse64(&v12, *(_QWORD *)a3);
    v10 = v11 + (v12 ^ 0x3F);
  }
LABEL_7:
  if ( v10 + v8 + 2 <= v7 )
  {
    *a4 = 1;
    sub_2209CE0(a1, a2, (__int64 *)a3);
    return a1;
  }
  v22 = v7;
  if ( v7 <= 0x40 )
  {
    v21 = *(void **)a2;
    goto LABEL_12;
  }
  sub_2205510((__int64)&v21, (const void **)a2);
  v7 = v22;
  if ( v22 <= 0x40 )
  {
LABEL_12:
    if ( v7 == 1 )
      v21 = nullptr;
    else
      v21 = (void *)((unsigned __int64)v21 >> 1);
    goto LABEL_18;
  }
  sub_220A970(v21, ((unsigned __int64)v22 + 63) >> 6, 1u);
LABEL_18:
  sub_2209CE0((__int64)&src, (__int64)&v21, (__int64 *)a3);
  if ( v22 > 0x40 && v21 )
    operator delete[](v21);
  v14 = v20;
  v15 = src;
  v16 = 1LL << ((unsigned __int8)v20 - 1);
  if ( v20 <= 0x40 )
  {
    *a4 = (v16 & (unsigned __int64)src) != 0;
    v18 = (void *)(2LL * (_QWORD)v15);
    if ( v14 == 1 )
      v18 = nullptr;
    src = v18;
    sub_CF8100((unsigned __int64 *)&src);
  }
  else
  {
    *a4 = (v16 & *((_QWORD *)src + ((v20 - 1) >> 6))) != 0;
    sub_220A060(v15, ((unsigned __int64)v14 + 63) >> 6, 1u);
    sub_CF8100((unsigned __int64 *)&src);
  }
  v17 = *(_QWORD *)a2;
  if ( *(_DWORD *)(a2 + 8) > 0x40u )
    v17 = *(_QWORD *)v17;
  if ( (v17 & 1) != 0 )
  {
    sub_22059A0((unsigned __int64 *)&src, (__int64 *)a3);
    if ( (int)sub_2205DB0((unsigned __int64 *)&src, (unsigned __int64 *)a3) < 0 )
      *a4 = 1;
  }
  *(_DWORD *)(a1 + 8) = v20;
  *(_QWORD *)a1 = src;
  return a1;
}
