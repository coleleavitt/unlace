__int64 __fastcall sub_1106070(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax

  v1 = *(_DWORD **)a1;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 928LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 936LL),
             *(_QWORD *)(a1 + 16));
  *v1 = result;
  return result;
}
