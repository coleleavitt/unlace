__int64 __fastcall sub_567180(__int64 a1, int a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1656);
  result = *(unsigned int *)(v2 + 124);
  if ( (int)result > 220 && (_DWORD)result == a2 + 1 )
    *(_DWORD *)(v2 + 124) = a2;
  return result;
}

