__int64 __fastcall sub_4B7800(__int64 a1, unsigned int a2, const __m128i *a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  int v10; // ebp
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  sub_4B6F80(*(_QWORD *)(a1 + 24), a2, a3);
  sub_4B7750((_QWORD *)a1, a2, a4);
  v7 = a3[2].m128i_i64[1];
  v8 = *(_QWORD *)(a1 + 16);
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, v8);
  if ( *(_DWORD *)(a1 + 32) != 7 )
  {
    v10 = result;
    result = get_merge_state(v7, v8);
    if ( (result & 2) == 0 )
      return sub_52CCE0(*(_DWORD *)(a1 + 32), 1, v10, v11, v12, v13);
  }
  return result;
}
