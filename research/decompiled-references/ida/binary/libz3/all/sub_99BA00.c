__int64 *__fastcall sub_99BA00(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 *a5, _BYTE *a6)
{
  __int64 *v6; // rbx
  __int64 v10; // r12
  __int64 v11; // rdx

  v6 = a4;
  *a6 = 0;
  if ( a4 != a5 )
  {
    v10 = a2 + 56;
    do
    {
      v11 = *v6;
      if ( a2 != *v6 && (*(_BYTE *)(v11 + 88) & 3) == a3 )
      {
        *a6 = 1;
        if ( (*(_BYTE *)(a2 + 76) & 1) != 0
          || *(_DWORD *)(a2 + 72) != 1
          || (*(_BYTE *)(v11 + 76) & 1) != 0
          || *(_DWORD *)(v11 + 72) != 1 )
        {
          if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v10, v11 + 56) )
            return v6;
        }
        else if ( (*(_BYTE *)(a2 + 60) & 1) != 0 || (*(_BYTE *)(v11 + 60) & 1) != 0 )
        {
          if ( (int)sub_182C7B0(qword_1C7F2C0, v10, v11 + 56) < 0 )
            return v6;
        }
        else if ( *(_DWORD *)(a2 + 56) < *(_DWORD *)(v11 + 56) )
        {
          return v6;
        }
      }
      ++v6;
    }
    while ( a5 != v6 );
  }
  return v6;
}

