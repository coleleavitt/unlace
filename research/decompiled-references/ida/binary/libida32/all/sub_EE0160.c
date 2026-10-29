__int64 __fastcall sub_EE0160(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v6[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v7; // [rsp+30h] [rbp-28h]

  sub_971800(*a1, "__builtin_sycl_unique_stable_name(");
  v3 = *a1;
  v5 = **(_QWORD **)(a2 + 32);
  v7 = 257;
  sub_F50AF0(&v5, v3, a1 + 3, v6, 0);
  return sub_971800(*a1, ")");
}

