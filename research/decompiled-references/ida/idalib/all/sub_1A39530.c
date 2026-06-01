__int64 __fastcall sub_1A39530(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 result; // rax
  bool v5; // zf

  result = sub_B85A10(a3);
  if ( !(_DWORD)result )
    result = *(unsigned int *)(a3 + 8);
  v5 = *(_BYTE *)(a1 + 60) == 0;
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 56) = result;
  if ( !v5 && a2 )
  {
    result = *a2;
    if ( (_DWORD)result && a2[1] )
    {
      *(_DWORD *)(a1 + 52) = result;
    }
    else if ( *((_QWORD *)a2 + 1) )
    {
      *(_DWORD *)(a1 + 52) = result;
    }
  }
  return result;
}
