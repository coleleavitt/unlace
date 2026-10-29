__int64 *__fastcall sub_21B0350(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD v14[4]; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v15[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int16 v16; // [rsp+50h] [rbp-88h]
  __m128i v17[2]; // [rsp+60h] [rbp-78h] BYREF
  __int16 v18; // [rsp+80h] [rbp-58h]
  __m128i v19[4]; // [rsp+90h] [rbp-48h] BYREF

  v6 = *((_QWORD *)a3 + 5);
  v14[0] = *((_QWORD *)a3 + 4);
  v14[1] = v14[0];
  v7 = *a3;
  v14[2] = v14[0] + v6;
  switch ( v7 )
  {
    case 0LL:
      sub_21AF920(a1, (void **)a2, (__int64)a3, (__int64)v14);
      return a1;
    case 1LL:
      sub_21AE800((void **)a1, a2, (__int64)v14);
      return a1;
    case 2LL:
      sub_21A6000(a1, a2, (__int64)v14);
      return a1;
    case 3LL:
      sub_21A69A0(a1, a2, (__int64)v14);
      return a1;
    case 4LL:
      sub_21A6F20(a1, a2, (__int64)v14);
      return a1;
    case 5LL:
      sub_21A73A0(a1, a2, (__int64)v14);
      return a1;
    case 6LL:
      sub_21A7E30(a1, a2, (__int64)v14);
      return a1;
    case 7LL:
      sub_21A8270(a1, a2, (__int64)v14);
      return a1;
    case 8LL:
      v10 = sub_21A2A40((__int64)v14);
      v11 = *(_QWORD *)(a2 + 544);
      v12 = *(unsigned int *)(a2 + 680);
      *(_DWORD *)(a2 + 608) = v10;
      if ( v10 < (unsigned __int64)(v12 + ((v11 - *(_QWORD *)(a2 + 536)) >> 7)) )
        goto LABEL_5;
      sub_21A2C10(v19[0].m128i_i64, "invalid start function");
      *a1 = v19[0].m128i_i64[0];
      return a1;
    case 9LL:
      sub_21AA1F0(a1, a2, (__int64)v14);
      return a1;
    case 10LL:
      sub_21A3E60(a1, a2, (__int64)v14);
      return a1;
    case 11LL:
      sub_21A8E70(a1, a2, (__int64)v14);
      return a1;
    case 12LL:
      v8 = sub_21A2A40((__int64)v14);
      if ( !*(_BYTE *)(a2 + 528) )
        *(_BYTE *)(a2 + 528) = 1;
      *(_QWORD *)(a2 + 520) = v8;
LABEL_5:
      *a1 = 0;
      return a1;
    case 13LL:
      sub_21A78B0(a1, a2, (__int64)v14);
      return a1;
    default:
      v15[0].m128i_i32[0] = v7;
      v16 = 265;
      v17[0].m128i_i64[0] = (__int64)"invalid section type: ";
      v18 = 259;
      sub_A41580(v19, v17, v15, 259, a5, a6);
      v13 = operator new(0x38u);
      sub_2195A00(v13, (__int64)v19, 3);
      *a1 = v13;
      return a1;
  }
}
