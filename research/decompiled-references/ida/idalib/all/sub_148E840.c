_BYTE *__fastcall sub_148E840(__int64 a1, __int64 a2, __m128i a3, __m128 a4)
{
  char v4; // dl
  unsigned int v5; // r12d
  _BYTE *result; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r13d
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE *v17; // [rsp+10h] [rbp-B8h] BYREF
  char v18; // [rsp+18h] [rbp-B0h]
  __int64 v19; // [rsp+20h] [rbp-A8h]
  int v20; // [rsp+28h] [rbp-A0h]
  __int16 v21; // [rsp+2Ch] [rbp-9Ch]
  __int64 (__fastcall *v22)(__int64); // [rsp+30h] [rbp-98h]
  __int64 v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+40h] [rbp-88h]
  unsigned __int8 *v25[15]; // [rsp+50h] [rbp-78h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v4 = *(_BYTE *)(a1 + 1952);
  v5 = *(_DWORD *)(a1 + 40);
  result = (_BYTE *)(a1 + 1952);
  v7 = *(_WORD *)(a1 + 32) == 22;
  v17 = (_BYTE *)(a1 + 1952);
  v18 = v4;
  *(_BYTE *)(a1 + 1952) = 1;
  v19 = a1;
  v20 = 1507350;
  v21 = 63;
  v22 = sub_146A990;
  v23 = 0;
  v24 = 0;
  if ( !v7 )
    goto LABEL_7;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 88) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 144LL) )
  {
    if ( (unsigned __int8)sub_1568800(&v17) )
    {
      result = v17;
      v4 = v18;
      goto LABEL_7;
    }
  }
  else
  {
    LODWORD(v24) = sub_146A990(a1);
  }
  v12 = sub_148B630(a1, nullptr, a3, a4);
  if ( (_BYTE)v8 )
  {
    LOWORD(v25[0]) = 23;
    sub_15680D0(a1, v25, 1, 1);
    result = v17;
    v4 = v18;
    goto LABEL_7;
  }
  sub_14808E0((__int64)&v17, nullptr, v8, v9, v10, v11);
  if ( !HIDWORD(v24) )
  {
    result = v17;
    v4 = v18;
LABEL_7:
    *result = v4;
    return result;
  }
  v13 = v24;
  *(_DWORD *)(a2 + 164) = HIDWORD(v24);
  *(_QWORD *)(a2 + 212) = v13;
  v14 = *(_QWORD *)(a1 + 96);
  v16 = 0;
  if ( (unsigned __int8)sub_15AD370(
                          a2,
                          54,
                          v5,
                          (unsigned int)&v16,
                          (unsigned int)&v15,
                          v12,
                          *(_QWORD *)(v14 + 248) + 17464LL) )
  {
    sub_1564820(v25, a1, v5, v15);
    sub_1478320(v25, v16);
    sub_AEA040((__int64)v25);
  }
  result = v17;
  *v17 = v18;
  return result;
}
