void __fastcall sub_AC0650(char a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v5; // rdi
  _BYTE *v7; // rax
  int v8; // ebx
  __int64 v9; // rdi
  _WORD *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  const char *v17; // rsi

  if ( a1 )
  {
    v5 = *a2;
    v7 = *(_BYTE **)(*a2 + 32);
    if ( (unsigned __int64)v7 >= *(_QWORD *)(*a2 + 24) )
    {
      sub_227BA10(v5, 10);
    }
    else
    {
      *(_QWORD *)(v5 + 32) = v7 + 1;
      *v7 = 10;
    }
    if ( a4 )
    {
      v8 = 0;
      do
      {
        while ( 1 )
        {
          v9 = *a2;
          v10 = *(_WORD **)(*a2 + 32);
          if ( *(_QWORD *)(*a2 + 24) - (_QWORD)v10 > 1u )
            break;
          ++v8;
          sub_227BF10(v9, "  ", 2);
          if ( a4 == v8 )
            goto LABEL_8;
        }
        ++v8;
        *v10 = 8224;
        *(_QWORD *)(v9 + 32) += 2LL;
      }
      while ( a4 != v8 );
    }
  }
LABEL_8:
  if ( a3 )
  {
    v11 = *a2;
    v12 = *(_QWORD *)(*a2 + 24);
    v13 = *(_QWORD *)(*a2 + 32);
    if ( a3 == 1 )
    {
      if ( (unsigned __int64)(v12 - v13) <= 4 )
      {
        v16 = 5;
        v17 = "[...]";
        goto LABEL_14;
      }
      *(_DWORD *)v13 = 774778459;
      *(_BYTE *)(v13 + 4) = 93;
      *(_QWORD *)(v11 + 32) += 5LL;
    }
    else
    {
      if ( v13 == v12 )
      {
        v11 = sub_227BF10(v11, "[", 1);
      }
      else
      {
        *(_BYTE *)v13 = 91;
        ++*(_QWORD *)(v11 + 32);
      }
      v14 = sub_227B910(v11, a3);
      v15 = *(_QWORD *)(v14 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(v14 + 24) - v15) <= 6 )
      {
        v16 = 7;
        v17 = " * ...]";
        v11 = v14;
LABEL_14:
        sub_227BF10(v11, v17, v16);
        return;
      }
      *(_DWORD *)v15 = 773859872;
      *(_WORD *)(v15 + 4) = 11822;
      *(_BYTE *)(v15 + 6) = 93;
      *(_QWORD *)(v14 + 32) += 7LL;
    }
  }
}
