__int64 __fastcall sub_1EACCF0(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        signed __int64 a4,
        _BYTE *a5,
        unsigned __int8 *a6,
        char a7)
{
  __int64 v7; // r13
  _QWORD *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  signed __int64 v13; // r12
  _BYTE *v14; // r15
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 result; // rax
  _BYTE v20[32]; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v22; // [rsp+60h] [rbp-98h]
  unsigned __int8 *v23[4]; // [rsp+70h] [rbp-88h] BYREF
  __int16 v24; // [rsp+90h] [rbp-68h]

  v7 = 0;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_QWORD *)(a1 + 16);
  if ( a7 )
    v7 = *(_QWORD *)(v9 + 104);
  if ( (*(_BYTE *)(v8[7] + 21LL) & 2) == 0 )
    return 0;
  if ( *(_BYTE *)(v8[5] + 173LL) )
    return 0;
  v10 = v8[13];
  v13 = *(_QWORD *)(v10 + 312);
  v14 = *(_BYTE **)(v10 + 304);
  if ( a6 == (unsigned __int8 *)v13 && (!a6 || !memcmp(a5, *(const void **)(v10 + 304), (size_t)a6)) )
    return 0;
  v15 = *(_QWORD *)(v9 + 88);
  v21[0] = v14;
  v16 = *(_QWORD *)(v15 + 8);
  v21[1] = v13;
  v24 = 261;
  v22 = 261;
  v23[0] = a5;
  v23[1] = a6;
  sub_225AEF0(v20, v16, v23, v21);
  if ( (v20[16] & 1) == 0 )
  {
    if ( v20[0] )
      return 0;
  }
  result = 1;
  if ( v7 )
  {
    sub_FC70B0((__int64)v23, v7, 0, 908);
    sub_AEC220(v23, a5, (signed __int64)a6);
    sub_AEC220(v23, v14, v13);
    sub_AEC220(v23, a3, a4);
    sub_AEA040((__int64)v23);
    return 1;
  }
  return result;
}
