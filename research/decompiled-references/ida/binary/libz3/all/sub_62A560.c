__int64 __fastcall sub_62A560(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi

  result = 0;
  if ( *(_QWORD *)(a2 + 40) == *(_QWORD *)(a3 + 40) )
  {
    v5 = *(unsigned int *)(a2 + 56);
    if ( (_DWORD)v5 == *(_DWORD *)(a3 + 56) )
    {
      if ( (_DWORD)v5 )
      {
        v6 = 8 * v5 + 80;
        v7 = 80;
        while ( 1 )
        {
          v8 = *(_QWORD *)(a2 + v7);
          v9 = *(_QWORD *)(a3 + v7);
          if ( (v9 & 0xFFFFFFFFFFFFFFF8LL) != (v8 & 0xFFFFFFFFFFFFFFF8LL) || ((v9 & 7) == 1) != ((v8 & 7) == 1) )
            break;
          v7 += 8;
          if ( v7 == v6 )
            return 1;
        }
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}

