unsigned __int64 __fastcall sub_19A4600(
        __int64 a1,
        int a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v9; // r12d
  unsigned __int64 result; // rax
  _DWORD *v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  _QWORD *v15; // rsi
  int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rbx
  __int16 v19; // dx
  unsigned __int8 v20; // al
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned int v25; // eax
  _BYTE v26[200]; // [rsp+0h] [rbp-C8h] BYREF

  v9 = a4;
  result = sub_1907C70(a1, a3, a7, a8, (__int64)a3, a4, a5, a6);
  if ( result != 1 )
  {
    v11 = (_DWORD *)(result & 0xFFFFFFFFFFFFFFFELL);
    sub_18C38A0(a1, result & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_DWORD *)(a1 + 11320) <= *(_DWORD *)(a1 + 12596) && (*v11 & 0x8000) == 0 )
    {
      v21 = *(_QWORD *)(a1 + 248);
      if ( (unsigned __int8)sub_C01160((unsigned __int64)v11, v21, 0, v12, v13) )
      {
        v25 = sub_C00A40((unsigned __int64)v11, v21, v22, v23, v24);
        sub_168B9F0((__int64)v26, (__int64 *)(a1 + 8), v25, 0x1CC7u, 0);
        sub_15F7200(v26);
      }
    }
    v14 = sub_18B2EA0(a1, v11);
    v15 = *(_QWORD **)(a1 + 248);
    v16 = v14;
    v17 = v15[2330];
    v18 = sub_EEE9A0(32, v15, 8u);
    *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x69;
    if ( unk_2CD7484 )
      sub_EE9B50(105);
    v19 = *(_WORD *)(v18 + 1);
    *(_QWORD *)(v18 + 8) = v17;
    *(_QWORD *)(v18 + 16) = v11;
    v19 &= 0xF801u;
    *(_DWORD *)(v18 + 24) = a2;
    *(_WORD *)(v18 + 1) = v19;
    *(_DWORD *)(v18 + 28) = v9;
    *(_BYTE *)(v18 + 2) = (8 * (v16 == 0)) | HIBYTE(v19) & 0xF7;
    v20 = sub_B63800(v18, v16);
    *(_BYTE *)(v18 + 1) = (v20 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
    *(_BYTE *)(v18 + 2) = *(_BYTE *)(v18 + 2) & 0xF8 | (v20 >> 2) & 7;
    return v18;
  }
  return result;
}
