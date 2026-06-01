__int64 __fastcall sub_BDFF30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = 8 * a3;
  result = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
  v5 = a1 + 8 * result + 32;
  if ( v3 > 0 )
  {
    result = 0;
    do
    {
      *(_QWORD *)(v5 + 8 * result) = *(_QWORD *)(a2 + 8 * result);
      ++result;
    }
    while ( (v3 >> 3) - result > 0 );
  }
  return result;
}

