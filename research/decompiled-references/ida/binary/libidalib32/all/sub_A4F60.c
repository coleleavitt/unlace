__int64 __fastcall sub_A4F60(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rdx

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 4;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  result = qvector_reserve();
  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = result;
  if ( v2 <= 3 )
  {
    result += 24 * v2;
    *(_QWORD *)result = 0;
    *(_OWORD *)(result + 8) = 0;
    if ( v2 != 3 )
    {
      result = 24 * v2 + 24;
      do
      {
        v3 = result + *(_QWORD *)(a1 + 16);
        result += 24;
        *(_QWORD *)v3 = 0;
        *(_OWORD *)(v3 + 8) = 0;
      }
      while ( result != 96 );
    }
  }
  *(_QWORD *)(a1 + 24) = 4;
  return result;
}

