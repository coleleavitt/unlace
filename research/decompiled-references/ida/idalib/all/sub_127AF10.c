__int64 __fastcall sub_127AF10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 17);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 8) == 12
    && **(_QWORD **)a1 == *(_QWORD *)a3
    && *(_DWORD *)(*(_QWORD *)a1 + 8LL) == *(_DWORD *)(a3 + 8) )
  {
    *(_WORD *)(a1 + 16) = 257;
    return 1;
  }
  return result;
}
