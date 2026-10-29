__int64 __fastcall sub_1AE7690(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)result )
  {
    v2 = *(_QWORD *)(a1 + 336) + 6776 * result - 6776;
    result = 0;
    if ( *(_QWORD *)(v2 + 6768) == *(_QWORD *)(a1 + 328) && *(_DWORD *)(v2 + 8) > *(_DWORD *)(a1 + 27504) )
      return *(unsigned int *)(sub_1AE5FF0(a1) + 928);
  }
  return result;
}
