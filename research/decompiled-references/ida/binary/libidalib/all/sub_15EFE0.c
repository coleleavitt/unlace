__int64 __fastcall sub_15EFE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 888) + 32LL))(
             *(_QWORD *)(a1 + 888),
             *(_QWORD *)(a1 + 760),
             a2,
             a3);
  if ( (*(_BYTE *)(a1 + 904) & 2) == 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

