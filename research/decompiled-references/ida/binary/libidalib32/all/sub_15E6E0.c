__int64 __fastcall sub_15E6E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 880) + 32LL))(
             *(_QWORD *)(a1 + 880),
             *(_QWORD *)(a1 + 752),
             a2,
             a3);
  if ( (*(_BYTE *)(a1 + 896) & 2) == 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  return result;
}

