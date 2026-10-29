__int64 __fastcall sub_425290(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 1;
  if ( *(_DWORD *)(a2 + 28) != 1 )
  {
    *(_DWORD *)(a4 + 3272) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 3264) + 16LL)
                                                   + 24LL * *(int *)(*(_QWORD *)(a4 + 3264) + 28LL)
                                                   - 16)
                                       + 4LL);
    sub_43AA10(
      a1,
      *(_QWORD *)(a2 + 32) + 24LL * *(int *)(*(_QWORD *)(a2 + 32) + 20LL) + 24,
      (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
    return 0;
  }
  return result;
}

