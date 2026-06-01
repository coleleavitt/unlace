__int64 *__fastcall link_chooser_t__::vfunc_6(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 *result; // rax

  v7 = *(__int64 **)(*(_QWORD *)(a1 + 184) + 440LL);
  if ( v7 )
    v7 = (__int64 *)v7[1];
  v8 = *(unsigned int *)(a1 + 192);
  v9 = *v7;
  if ( *(_BYTE *)(a1 + 196) )
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v9 + 120))(v7, v8, a5);
  else
    v10 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v9 + 112))(v7, v8, a5);
  result = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 664LL))(
                        *(_QWORD *)(a1 + 184),
                        a2,
                        v10,
                        *(_BYTE *)(a1 + 196) ^ 1u);
  if ( !(_BYTE)result )
    return sub_169A50((__int64 *)(*(_QWORD *)a2 + 24LL), (__int64)"node %d", v10);
  return result;
}
