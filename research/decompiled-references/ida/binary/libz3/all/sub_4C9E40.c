__int64 __fastcall sub_4C9E40(__int64 a1, __int64 a2)
{
  void *v3; // rbx
  __int64 v4; // rbp

  v3 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  (*(void (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 8) + 16LL))(*(_QWORD *)(a1 + 8), v3);
  v4 = (*(__int64 (__fastcall **)(_QWORD, void *))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16), v3);
  if ( v3 )
    sub_4D63E0(v3);
  return v4;
}

