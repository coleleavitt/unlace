__int64 __fastcall sub_3E7170(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  int v7; // r13d
  int v8; // ebp
  int dtype_size; // eax
  int v10; // eax

  v6 = a5;
  v7 = a4;
  v8 = a3;
  if ( (unsigned __int8)sub_3E2770(a1 + 24, a2, a3, a4, a5, a6) )
    sub_3E6180(a1, a2, v8, v7, 5);
  else
    sub_1CF640(a1, 0, a2, 0, 272, 0);
  dtype_size = get_dtype_size((unsigned __int8)a2);
  sub_1CF210(a1, 0xCu, dtype_size, 272, v7, 272, 0);
  v10 = get_dtype_size((unsigned __int8)a2);
  return sub_1CF210(a1, 0xDu, v10, v8, 272, v6, 0);
}
