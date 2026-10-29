__int64 __fastcall sub_2CDF20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 1032) )
    return *(unsigned int *)(a2 + 36);
  result = sub_23BFC0(a1, (_QWORD *)a2, *(_DWORD *)(a1 + 1184));
  if ( (_DWORD)result == -1 )
    return *(unsigned int *)(a2 + 36);
  return result;
}
