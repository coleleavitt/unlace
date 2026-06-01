__int64 __fastcall sub_156E540(__int64 a1, unsigned __int8 a2, _DWORD *a3, __m128i a4, __m128 a5)
{
  int *v6; // rbp
  int v8; // r14d
  bool v9; // zf
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned int v17; // r15d
  int v18; // eax
  char *v19; // rax
  __int64 *v20; // rdi
  unsigned int v21; // [rsp+4h] [rbp-D4h]
  char *v22; // [rsp+10h] [rbp-C8h] BYREF
  char v23; // [rsp+18h] [rbp-C0h]
  _BYTE v24[12]; // [rsp+1Ch] [rbp-BCh]
  void *v25; // [rsp+28h] [rbp-B0h]
  __int64 (__fastcall *v26)(__int64); // [rsp+30h] [rbp-A8h]
  __int64 v27; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-98h]
  char v29; // [rsp+48h] [rbp-90h]
  unsigned __int8 *v30[17]; // [rsp+50h] [rbp-88h] BYREF

  v6 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v8 = *(_DWORD *)(a1 + 40);
  if ( sub_15434E0(a1, a1 + 16) )
  {
    v21 = sub_13DC060(
            *(_DWORD *)(a1 + 16),
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            a4,
            *(double *)a5.m128_u64);
    v17 = sub_13DC060(
            v8,
            0,
            *(__int64 **)(*(_QWORD *)(a1 + 8) + 88LL),
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
            a4,
            *(double *)a5.m128_u64);
    sub_FC70B0((__int64)v30, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1685);
    v18 = sub_1543C10(a1, (__int64)v6);
    v19 = sub_1543BE0(v18);
    sub_AE9DF0(v30, (__int64)v19, 1u);
    *(_QWORD *)v24 = 0;
    v24[8] = 0;
    v25 = &v27;
    v26 = nullptr;
    LOBYTE(v27) = 0;
    v29 = 0;
    v22 = (char *)__PAIR64__(v21, v17);
    v23 = 1;
    if ( v17 )
    {
      if ( v21 )
      {
        sub_1569180((__int64 *)v30, (unsigned __int64)&v22);
        if ( v25 != &v27 )
          operator delete(v25);
      }
    }
    sub_AEA040((__int64)v30);
    v20 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v20, v6);
  }
  v9 = *(_WORD *)(a1 + 32) == 22;
  *(_QWORD *)&v24[4] = a1;
  v22 = (char *)(a1 + 1952);
  v10 = *(_BYTE *)(a1 + 1952);
  LODWORD(v25) = 1507350;
  v23 = v10;
  *(_BYTE *)(a1 + 1952) = 1;
  WORD2(v25) = 63;
  v26 = sub_146A990;
  v27 = 0;
  v28 = 0;
  if ( !v9 )
    goto LABEL_10;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( !(unsigned __int8)sub_1568800((__int64)&v22) )
      goto LABEL_5;
LABEL_10:
    sub_FC70B0((__int64)v30, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1625);
    sub_AE9DF0(v30, (__int64)"asm", 1u);
    sub_AEA040((__int64)v30);
    result = 1;
    goto LABEL_11;
  }
  LODWORD(v28) = sub_146A990(a1);
LABEL_5:
  v13 = sub_1565350(a1, a2, a4, a5);
  if ( v13 == 1 )
  {
    LOWORD(v30[0]) = 23;
    if ( (unsigned __int8)sub_1566E40(a1, v30, 1, 3) )
    {
      if ( a3 )
        *a3 = *(_DWORD *)(a1 + 16);
      sub_146A990(a1);
    }
  }
  else
  {
    sub_14808E0((__int64)&v22, (__int64 *)a2, v11, v12, v14, v15);
    if ( a3 )
      *a3 = HIDWORD(v28);
  }
  result = v13;
LABEL_11:
  *v22 = v23;
  return result;
}
