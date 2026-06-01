__int64 __fastcall ClpModel::setIntParam(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  result = 0;
  if ( a2 <= 2 && a3 >= 0 )
  {
    *(_DWORD *)(a1 + 4LL * (int)a2 + 296) = a3;
    return 1;
  }
  return result;
}

