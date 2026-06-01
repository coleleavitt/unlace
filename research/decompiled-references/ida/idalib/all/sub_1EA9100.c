_BOOL8 __fastcall sub_1EA9100(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const void *a5, __int64 a6)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rsi
  _BOOL8 result; // rax
  _BYTE v13[16]; // [rsp+0h] [rbp-A8h] BYREF
  char v14; // [rsp+10h] [rbp-98h]
  _QWORD v15[4]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v16; // [rsp+40h] [rbp-68h]
  _QWORD v17[4]; // [rsp+50h] [rbp-58h] BYREF
  __int16 v18; // [rsp+70h] [rbp-38h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 21LL) & 2) == 0 || *(_BYTE *)(*(_QWORD *)(a1 + 24) + 173LL) )
    return 0;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a1 + 32);
  if ( v8 == a6 && (!v8 || !memcmp(a5, *(const void **)(a1 + 32), *(_QWORD *)(a1 + 40))) )
    return 0;
  v10 = *(_QWORD *)(a1 + 64);
  v15[0] = v9;
  v11 = *(_QWORD *)(v10 + 8);
  v18 = 261;
  v16 = 261;
  v15[1] = v8;
  v17[0] = a5;
  v17[1] = a6;
  sub_225AEF0(v13, v11, v17, v15);
  result = v14 & 1;
  if ( (v14 & 1) != 0 )
    return result;
  return !v13[0];
}
