__int64 __fastcall sub_1AE6050(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  bool v7; // cf

  v1 = *(unsigned int *)(a1 + 344);
  result = 0;
  if ( (_DWORD)v1 )
  {
    v3 = *(_QWORD *)(a1 + 336) + 6776 * v1 - 6776;
    if ( *(_QWORD *)(v3 + 6768) == *(_QWORD *)(a1 + 328) )
    {
      v4 = *(unsigned int *)(v3 + 8);
      v5 = *(unsigned int *)(a1 + 27504);
      if ( (unsigned int)v4 > (unsigned int)v5 )
      {
        v7 = v4 == v5;
        v6 = v4 - v5;
        if ( !v7 && v6 != 1 )
          return *(_QWORD *)v3 + 1688 * (v6 - 2);
      }
    }
  }
  return result;
}
