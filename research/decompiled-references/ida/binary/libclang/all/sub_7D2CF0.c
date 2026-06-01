__int64 __fastcall sub_7D2CF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbp

  result = sub_7D2960(*(_QWORD *)(a1 + 56), a2);
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    result = (*(_BYTE *)(v3 + 28) & 0x7Fu) - 32;
    if ( (unsigned int)result <= 5 )
    {
      result = *(_QWORD *)(v3 + 56);
      if ( (result & 4) != 0 )
      {
        result &= 0xFFFFFFFFFFFFFFF8LL;
        v4 = *(_QWORD *)(result + 40);
        if ( v4 )
        {
          result = *(unsigned int *)(a2 + 8);
          if ( *(unsigned int *)(a2 + 12) < (unsigned __int64)(result + 1) )
          {
            sub_25D6060(a2, a2 + 16, result + 1, 8);
            result = *(unsigned int *)(a2 + 8);
          }
          *(_QWORD *)(*(_QWORD *)a2 + 8 * result) = v4;
          ++*(_DWORD *)(a2 + 8);
        }
      }
    }
  }
  return result;
}

