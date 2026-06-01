_BYTE *__fastcall sub_A2B490(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _BYTE *result; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v7[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v4) > 6 )
  {
    *(_DWORD *)v4 = 1701869940;
    *(_WORD *)(v4 + 4) = 25705;
    *(_BYTE *)(v4 + 6) = 40;
    *(_QWORD *)(a2 + 32) += 7LL;
  }
  else
  {
    sub_22581D0(a2, "typeid(", 7);
  }
  v6 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = 257;
  sub_F50AF0(&v6, a2, a3, v7, 0);
  result = *(_BYTE **)(a2 + 32);
  if ( result == *(_BYTE **)(a2 + 24) )
    return (_BYTE *)sub_22581D0(a2, ")", 1);
  *result = 41;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

