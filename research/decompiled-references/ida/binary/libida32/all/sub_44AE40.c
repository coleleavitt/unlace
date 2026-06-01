__int64 __fastcall sub_44AE40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  int *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 328);
  if ( !v2 )
  {
    v4 = off_2BD0460;
    do
    {
      while ( *(_BYTE *)(a1 + 304) == 5 )
      {
        v7 = v4[7];
        if ( (unsigned int)(v7 - 9) <= 2 || v7 == 29 )
          break;
        ++v2;
        v4 += 10;
        if ( v2 == 58 )
          goto LABEL_12;
      }
      if ( v4[8] == -1 )
      {
        sub_44AA60(a1, v4);
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 424);
        v6 = *(_QWORD *)(a1 + 416);
        if ( *(_QWORD *)(a1 + 432) < (unsigned __int64)(v5 + 1) )
        {
          v9 = qvector_reserve(a1 + 416, v6, v5 + 1, 4);
          *(_QWORD *)(a1 + 416) = v9;
          v6 = v9;
          v5 = *(_QWORD *)(a1 + 424);
        }
        *(_DWORD *)(v6 + 4 * v5) = v2;
        ++*(_QWORD *)(a1 + 424);
      }
      ++v2;
      v4 += 10;
    }
    while ( v2 != 58 );
  }
LABEL_12:
  if ( a2 )
    *a2 = *(_QWORD *)a1;
  return a1 + 320;
}

