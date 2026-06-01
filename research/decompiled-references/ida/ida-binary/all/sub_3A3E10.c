__int64 __fastcall TEAViewer__::vfunc_5(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *func; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax

  if ( *(_WORD *)(a2 + 8) != 3005 )
    return watchview_t__::vfunc_5(a1, a2, a3, a4, a5, a6);
  *(_BYTE *)(a2 + 12) = 1;
  v8 = sub_1F3AB0((__int64)a1, 0, a3, a4, a5);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
  func = (__int64 *)get_func(v9);
  if ( func )
  {
    v11 = *func;
    v12 = *(_QWORD *)(a2 + 40);
    v13 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(a2 + 48) < (unsigned __int64)(v12 + 1) )
    {
      v14 = qvector_reserve(a2 + 32, v13, v12 + 1, 8);
      *(_QWORD *)(a2 + 32) = v14;
      v13 = v14;
      v12 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)(v13 + 8 * v12) = v11;
    ++*(_QWORD *)(a2 + 40);
  }
  return 1;
}
