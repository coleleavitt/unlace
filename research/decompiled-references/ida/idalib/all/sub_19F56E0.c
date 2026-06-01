__int64 __fastcall sub_19F56E0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, double a5, double a6)
{
  unsigned int v6; // r13d
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v6 = a4;
  v9 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  v10 = (unsigned int)*(unsigned __int8 *)(v9 + 16) - 57;
  if ( (unsigned int)v10 <= 1 || (v9 = sub_19F5590(*(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL), v10, (__int64)a3, a4)) != 0 )
    *a3 = *(_QWORD *)(v9 + 32);
  v11 = sub_A76A60(*(_QWORD *)(a1 + 248), *a3, v6);
  *a3 = v11;
  result = sub_160A600(a1, *a2 & 0xFFFFFFFFFFFFFFFELL, v11, 0x1Au, 0, 0, a5, a6, 0);
  *a2 = result;
  return result;
}
