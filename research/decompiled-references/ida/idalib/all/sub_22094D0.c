__int64 __fastcall sub_22094D0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r12d
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v9; // rbp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v12; // [rsp+Fh] [rbp-39h] BYREF
  void *v13; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-30h]

  sub_2209010((__int64)&v13, a2, a3, &v12);
  if ( !v12 )
  {
    *(_DWORD *)(a1 + 8) = v14;
    *(_QWORD *)a1 = v13;
    return a1;
  }
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_QWORD *)a2;
  v6 = v4 - 1;
  v7 = 1LL << ((unsigned __int8)v4 - 1);
  if ( v4 <= 0x40 )
  {
    if ( (v7 & v5) == 0 )
    {
      *(_DWORD *)(a1 + 8) = v4;
      v9 = ~v7;
      *(_QWORD *)a1 = -1;
      sub_CF8100((unsigned __int64 *)a1);
      v10 = *(_QWORD *)a1;
      if ( *(_DWORD *)(a1 + 8) <= 0x40u )
        goto LABEL_7;
LABEL_15:
      *(_QWORD *)(v10 + 8LL * (v6 >> 6)) &= v9;
      goto LABEL_11;
    }
    *(_DWORD *)(a1 + 8) = v4;
    v11 = 0;
LABEL_10:
    *(_QWORD *)a1 = v11 | v7;
    goto LABEL_11;
  }
  v8 = v6 >> 6;
  if ( (v7 & *(_QWORD *)(v5 + 8 * v8)) != 0 )
  {
    *(_DWORD *)(a1 + 8) = v4;
    sub_2205470(a1, 0, 0);
    v11 = *(_QWORD *)a1;
    if ( *(_DWORD *)(a1 + 8) > 0x40u )
    {
      *(_QWORD *)(v11 + 8 * v8) |= v7;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  *(_DWORD *)(a1 + 8) = v4;
  v9 = ~v7;
  sub_2205470(a1, -1, 1);
  v10 = *(_QWORD *)a1;
  if ( *(_DWORD *)(a1 + 8) > 0x40u )
    goto LABEL_15;
LABEL_7:
  *(_QWORD *)a1 = v10 & v9;
LABEL_11:
  if ( v14 <= 0x40 || !v13 )
    return a1;
  operator delete[](v13);
  return a1;
}
