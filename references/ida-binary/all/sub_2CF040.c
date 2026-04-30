__int64 __fastcall sub_2CF040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r12
  double v17; // [rsp+10h] [rbp-38h]
  double v18; // [rsp+18h] [rbp-30h]

  if ( !*(_BYTE *)(a1 + 1080) )
  {
LABEL_7:
    result = sub_1F6320(a1, a2, a3, a4, a5);
    if ( *(_BYTE *)(a1 + 1080) )
      return sub_1E8C00((_QWORD *)(a1 + 576), (const char *)a2);
    return result;
  }
  result = sub_1EB590(a1, a2, a3, a4, a5);
  if ( (_DWORD)result == 1 && *(_QWORD *)(a1 + 888) )
  {
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    v18 = a5;
    sub_2855D0(*(_QWORD *)(a1 + 888));
    v17 = a5;
    QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
    *(_QWORD *)&a5 = *(_QWORD *)&a6 & 0x8000000000000000LL | 0x3FE0000000000000LL;
    sub_2856C0(*(_QWORD *)(a1 + 888));
    v9 = sub_1EA6A0(a1 + 384, a2, v7, v8, a5);
    v11 = (unsigned int)(int)((double)(int)(a6 + a5) / a5);
    if ( (_DWORD)v11 != *(__int16 *)(v9 + 30)
      || (v12 = sub_1F3B50(a1, 0, v11, v10, a5),
          v15 = sub_1EA6A0(a1 + 384, 0, v13, v14, a5),
          v16 = sub_2CABB0(a1, nullptr, v12, *(__int16 *)(v15 + 28), 1, 0, a5),
          a5 = (double)(int)(COERCE_DOUBLE(*(_QWORD *)&v18 & 0x8000000000000000LL | 0x3FE0000000000000LL) + v18) / v17,
          sub_2CABB0(a1, nullptr, v12, (int)a5, 1, 0, a5) != v16) )
    {
      if ( !(unsigned __int8)sub_2CCB20(a1, nullptr) )
        return sub_1C7D20(nullptr);
    }
    goto LABEL_7;
  }
  return result;
}
