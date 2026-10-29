__int64 __fastcall sub_E1E580(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(result + 8) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 56LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
  return result;
}
