__int64 __fastcall sub_DFDBE0(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 400);
  if ( !result || !*(_QWORD *)(result + 8) )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 56LL))(*(_QWORD *)(a1 + 24));
  return result;
}

