unsigned __int64 __fastcall sub_499480(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  result = -2;
  if ( *(int *)a2 >= 0 && *(int *)(a2 + 4) >= 0 )
    return -(__int64)(*(_QWORD *)(a2 + 16) != 0) | 0xFFFFFFFFFFFFFFFELL;
  return result;
}
