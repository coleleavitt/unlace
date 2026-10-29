__int64 __fastcall sub_676650(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  result = sub_E5E9C0(a1, a2);
  v4 = *(_QWORD *)(a1 + 1352);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 88LL))(v4, a2);
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 1360) + 88LL))(*(_QWORD *)(a1 + 1360), a2);
  }
  *(_DWORD *)(a1 + 448) = -1;
  return result;
}

