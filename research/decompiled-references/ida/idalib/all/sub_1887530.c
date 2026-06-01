__int64 __fastcall sub_1887530(
        __int64 a1,
        unsigned __int32 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char a10,
        unsigned __int8 a11,
        int a12,
        __int64 a13)
{
  __m128 *v13; // rbx
  char v14; // r14
  __m128 *v15; // rax
  char v16; // dl
  __int64 result; // rax
  unsigned __int64 v18; // rax
  char v19; // al
  bool v20; // al
  bool v21; // al
  _QWORD *v22; // rdx
  bool v23; // al
  char v25; // [rsp+8h] [rbp-60h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  __int64 v27; // [rsp+18h] [rbp-50h]
  _DWORD v28[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v13 = (__m128 *)a5;
  v25 = a6;
  if ( a12 )
    goto LABEL_3;
  if ( !a5 )
    goto LABEL_3;
  v26 = a4;
  v19 = sub_B990E0(a5, v28, a3, a4);
  a4 = v26;
  if ( !v19 )
    goto LABEL_3;
  v14 = 0;
  if ( !a8 )
    goto LABEL_4;
  if ( (a8 == 1 || (v20 = sub_BFDFF0(*(_QWORD *)(a7 + 8)), a4 = v26, v20))
    && (v27 = a4, v21 = sub_BFDFF0(*(_QWORD *)a7), a4 = v27, !v21) )
  {
    v22 = (_QWORD *)(*(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v27 + 16) & 4) != 0 )
      v22 = (_QWORD *)*v22;
    if ( v22 )
      v22 -= 8;
    v23 = sub_BFE060(*(_QWORD *)a7, *(_QWORD *)(a1 + 248), (__int64)v22, v27, a5, a6);
    a4 = v27;
    v14 = v23;
  }
  else
  {
LABEL_3:
    v14 = 0;
  }
LABEL_4:
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) != 0x36
    || (v15 = sub_1886CC0(a1, a2, v13, a4, a5, a6),
        v28[0] = a2,
        v13 = v15,
        v16 = sub_18F5260(a1, (_DWORD)v15, (unsigned int)v28, 1, 0, 0, 0, 0, 1),
        result = 1,
        !v16) )
  {
    sub_1910D40(a1, a2, v13, 1);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 0x10) == 0
      || (unsigned __int8)sub_1799D00(*(__int64 **)(a1 + 664), a2, (__int64)v13) )
    {
      v18 = sub_C982A0(*(_QWORD **)(a1 + 248), a3, a2, (__int64)v13, v14, v25, a7, a8, a9, a10, a11, a12, a13);
      return sub_18C3A50(a1, v18, v13);
    }
    else
    {
      return 1;
    }
  }
  return result;
}
