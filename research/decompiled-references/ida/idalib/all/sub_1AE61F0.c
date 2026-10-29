__int64 __fastcall sub_1AE61F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = *(unsigned int *)(a1 + 344);
  result = 0;
  if ( (_DWORD)v2 )
  {
    v4 = *(_QWORD *)(a1 + 336) + 6776 * v2 - 6776;
    v5 = *(_QWORD *)v4 + 1688 * (*(unsigned int *)(v4 + 8) - (unsigned __int64)*(unsigned int *)(a1 + 27504));
    if ( *(_QWORD *)v4 != v5 )
    {
      if ( ((*(_DWORD *)(v5 - 760) - 4) & 0xFFFFFFFB) != 0 )
      {
        v6 = v5 - 1688;
        do
        {
          v5 = v6;
          if ( *(_QWORD *)v4 == v6 )
            return 0;
          v7 = *(_DWORD *)(v6 - 760);
          v6 -= 1688LL;
        }
        while ( ((v7 - 4) & 0xFFFFFFFB) != 0 );
      }
      v8 = *(_QWORD *)(v5 - 360);
      v9 = v8 + 24LL * *(unsigned int *)(v5 - 352);
      if ( v8 == v9 )
        return 0;
      if ( *(_QWORD *)(v8 + 16) != a2 )
      {
        v10 = v8 + 24;
        while ( v9 != v10 )
        {
          v10 += 24;
          if ( *(_QWORD *)(v10 - 8) == a2 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  return result;
}
