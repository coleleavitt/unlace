_BYTE *__fastcall sub_69F100(_QWORD *a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rdx
  _BYTE *result; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v7[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v8; // [rsp+30h] [rbp-28h]

  v4 = *(_DWORD **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v4 <= 6u )
  {
    sub_26240F0(a2, "typeid(", 7);
  }
  else
  {
    *v4 = 1701869940;
    *(_DWORD *)((char *)v4 + 3) = 677669221;
    *(_QWORD *)(a2 + 32) += 7LL;
  }
  v6 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
  v8 = 257;
  sub_B2AEC0(&v6, a2, a3, v7, 0);
  result = *(_BYTE **)(a2 + 32);
  if ( *(_BYTE **)(a2 + 24) == result )
    return (_BYTE *)sub_26240F0(a2, ")", 1);
  *result = 41;
  ++*(_QWORD *)(a2 + 32);
  return result;
}

