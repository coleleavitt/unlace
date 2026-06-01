__int64 __fastcall sub_C88EB0(__int64 *a1, __int64 a2, int *a3)
{
  int v4; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // esi
  int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r13
  bool v20; // cf
  __int64 v21; // rsi
  unsigned __int8 v22; // [rsp+Bh] [rbp-4Dh] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h] BYREF
  __int64 v25[8]; // [rsp+18h] [rbp-40h] BYREF

  v4 = 13;
  v7 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v8 = sub_CC2440(a1[46], *(_QWORD *)(v7 + 8));
  v9 = *a3;
  if ( BYTE4(v8) )
    v4 = v8;
  v24 = a2 | 4;
  v10 = sub_C88C00((__int64)a1, v9);
  v23 = 102;
  v22 = 1;
  sub_C7BEC0(a1 + 55, &v23, &v22);
  if ( (v24 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v25[0] = a1[56] - a1[55];
    sub_C7C0D0((__int64)(a1 + 58), v25, &v24);
  }
  v11 = a1[56];
  v12 = a1[55];
  v13 = a1[56] - v12;
  if ( v13 + 4 > 0xFFFFFFFF )
    return 0;
  v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = v15 + 8;
  if ( v13 < v15 + 8 )
  {
    sub_C7BD20((__int64)(a1 + 55), v16 - v13);
    v11 = a1[56];
    v12 = a1[55];
    v13 = v11 - v12;
    v17 = v11 - v12 + 4;
LABEL_12:
    *(_DWORD *)(v12 + v15) = v10;
    if ( v17 > 0xFFFFFFFF )
      return 0;
    v18 = ((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
    v19 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = v18 < v13;
    if ( v18 > v13 )
      goto LABEL_14;
LABEL_18:
    if ( v20 )
    {
      v21 = v12 + v18;
      if ( v21 != v11 )
        a1[56] = v21;
    }
    goto LABEL_15;
  }
  if ( v13 > v15 + 8 && v11 != v12 + v16 )
  {
    a1[56] = v12 + v16;
    v17 = v15 + 12;
    v13 = v15 + 8;
    v11 = v12 + v16;
    goto LABEL_12;
  }
  *(_DWORD *)(v12 + v15) = v10;
  v18 = ((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL) + 8;
  v19 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v20 = v18 < v13;
  if ( v18 <= v13 )
    goto LABEL_18;
LABEL_14:
  sub_C7BD20((__int64)(a1 + 55), v18 - v13);
  v12 = a1[55];
LABEL_15:
  result = v22;
  *(_DWORD *)(v12 + v19) = v4;
  if ( (_BYTE)result )
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v7);
  return result;
}

