__int64 __fastcall sub_4C9DC0(__int64 a1, __int64 a2)
{
  void *v2; // r12
  __int64 result; // rax

  v2 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8));
  if ( !*(_QWORD *)(a1 + 16) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a2 + 88LL))(a2, v2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             v2,
             0);
  if ( v2 )
    return sub_4D63B0(v2);
  return result;
}

