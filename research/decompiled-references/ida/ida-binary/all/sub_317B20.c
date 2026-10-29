__int64 __fastcall sub_317B20(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  result = *(_QWORD *)(a1 + 352);
  if ( *(_DWORD *)(result + 176) != 1 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 16) + 104LL))(*(_QWORD *)(result + 16), 1);
    sub_317A00(a1, 1, v2, v3, v4, v5);
    result = *(_QWORD *)(a1 + 352);
    *(_DWORD *)(result + 176) = 1;
  }
  return result;
}
