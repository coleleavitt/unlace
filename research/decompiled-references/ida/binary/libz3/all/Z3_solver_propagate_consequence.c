__int64 __fastcall Z3_solver_propagate_consequence(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int a5,
        __int64 *a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 *v8; // r10
  char v12; // al
  __int64 v13; // r11
  __int64 result; // rax
  char v16; // [rsp+Fh] [rbp-31h]

  v8 = a6;
  v12 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v16 = v12;
  if ( v12 )
  {
    sub_29E080(a1, (__int64)a2, a3, a4, a5, a6, a7, a8);
    v8 = a6;
  }
  v13 = *a2;
  *(_DWORD *)(a1 + 1520) = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *, _QWORD, __int64 *, __int64 *, __int64))(v13 + 16))(
             a2,
             a3,
             a4,
             a5,
             v8,
             a7,
             a8);
  if ( v16 )
    byte_1C7EBA0 = 1;
  return result;
}

