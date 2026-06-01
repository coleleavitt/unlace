__int64 __fastcall sub_11BBB80(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_21B7850(a1, 903, 1204, 0);
  if ( (_BYTE)result )
  {
    result = *(unsigned int *)(a2 + 8);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      sub_2237220(a2, a2 + 16, result + 1, 8);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = "-floop-interchange";
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}
