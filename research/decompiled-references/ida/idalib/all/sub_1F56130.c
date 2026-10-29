__int64 __fastcall sub_1F56130(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 v12; // rbp
  double v13[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_1F56000(a1, a2);
  v3 = a1[2];
  v4 = *(_QWORD **)(v3 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
  result = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  if ( result )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
    if ( v11 == sub_B94CD0 )
      v12 = sub_B709C0((__int64)a2);
    else
      v12 = v11((__int64)a2);
    result = sub_1F6A0A0(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
    if ( !*(_QWORD *)(v12 + 168) )
    {
      *(_QWORD *)&v13[0] = result;
      *(__m128 *)(v12 + 168) = _mm_loadh_ps(v13);
    }
  }
  return result;
}
