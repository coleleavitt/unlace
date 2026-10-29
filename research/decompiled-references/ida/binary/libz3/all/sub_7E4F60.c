__int64 __fastcall sub_7E4F60(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 2328LL);
  if ( result )
  {
    if ( a2 >= *(_DWORD *)(result - 4) )
      return 0;
    else
      return *(_QWORD *)(result + 8LL * a2);
  }
  return result;
}

