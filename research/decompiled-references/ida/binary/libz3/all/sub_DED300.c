__int64 __fastcall sub_DED300(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *a2;
  a1[1] = a3;
  a1[2] = a4;
  *a1 = result;
  if ( a4 )
    ++*(_DWORD *)(a4 + 8);
  return result;
}

