void __fastcall sub_44AD40(__int64 a1, int a2)
{
  int *v2; // rdx
  int *v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  if ( *(_BYTE *)(a1 + 304) != 5 )
  {
    v2 = *(int **)(a1 + 416);
    v4 = v2;
    if ( 4LL * *(_QWORD *)(a1 + 424) )
    {
      do
      {
        while ( 1 )
        {
          v5 = *v4;
          if ( off_2BD0460[10 * v5 + 8] == a2 )
            break;
          if ( ++v4 == &v2[*(_QWORD *)(a1 + 424)] )
            goto LABEL_8;
        }
        v6 = sub_444550(a1, v5);
        *(_QWORD *)(a1 + 440) = v6;
        if ( v6 < *(_QWORD *)(a1 + 448) )
        {
          if ( !under_debugger )
            interr(1971);
          BUG();
        }
        sub_44AA60(a1, &off_2BD0460[10 * v5]);
        memmove(v4, v4 + 1, *(_QWORD *)(a1 + 416) + 4LL * *(_QWORD *)(a1 + 424) - (_QWORD)v4 - 4);
        v2 = *(int **)(a1 + 416);
        v7 = *(_QWORD *)(a1 + 424) - 1LL;
        *(_QWORD *)(a1 + 424) = v7;
      }
      while ( v4 != &v2[v7] );
    }
  }
LABEL_8:
  *(_QWORD *)(a1 + 440) = -1;
}

