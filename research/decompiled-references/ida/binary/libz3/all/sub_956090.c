__int64 __fastcall sub_956090(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(result + 562) )
  {
    result = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 1184LL);
    if ( result )
    {
      result = *(unsigned int *)(result - 4);
      if ( (_DWORD)result )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 32) + 64LL))(*(_QWORD *)(a1 + 32), a2, 0);
        return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 40) + 64LL))(
                 *(_QWORD *)(a1 + 40),
                 a2,
                 1);
      }
    }
  }
  return result;
}

