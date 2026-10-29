__int64 __fastcall sub_A02CC0(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ecx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rdx

  std::__ostream_insert<char,std::char_traits<char>>();
  v2 = *(_DWORD *)(a1 + 808);
  result = *(_QWORD *)(a1 + 800);
  if ( v2 )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(result + 8 * v4);
        if ( (*(_BYTE *)(v5 + 112) & 2) != 0 )
          break;
        if ( (unsigned int)++v4 >= v2 )
          goto LABEL_5;
      }
      ++v4;
      sub_A02A90(a1, a2, v5, 1);
      v2 = *(_DWORD *)(a1 + 808);
      result = *(_QWORD *)(a1 + 800);
    }
    while ( (unsigned int)v4 < v2 );
  }
LABEL_5:
  if ( result )
  {
    if ( v2 < *(_DWORD *)(result - 4) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      result = *(_QWORD *)(a1 + 800);
      if ( result )
      {
        v6 = *(_DWORD *)(a1 + 808);
        while ( v6 < *(_DWORD *)(result - 4) )
        {
          v7 = *(_QWORD *)(result + 8LL * v6);
          if ( (*(_BYTE *)(v7 + 112) & 2) != 0 )
          {
            ++v6;
            sub_A02A90(a1, a2, v7, 1);
            result = *(_QWORD *)(a1 + 800);
            if ( !result )
              return result;
          }
          else
          {
            ++v6;
          }
        }
      }
    }
  }
  return result;
}

