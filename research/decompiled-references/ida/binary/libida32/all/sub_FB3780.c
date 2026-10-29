__int64 __fastcall sub_FB3780(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 800);
  *(_QWORD *)(a1 + 800) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

