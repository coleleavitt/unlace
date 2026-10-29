__int64 __fastcall sub_A64980(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, bool))(**(_QWORD **)(a1 + 17448) + 16LL))(
         *(_QWORD *)(a1 + 17448),
         a2,
         a3 != 0);
  result = sub_A63B40((_QWORD *)a1, v4);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 && (_DWORD)a2 == 128 )
  {
    if ( a3 )
      return *(_QWORD *)(a1 + 18744);
    else
      return *(_QWORD *)(a1 + 18792);
  }
  return result;
}
