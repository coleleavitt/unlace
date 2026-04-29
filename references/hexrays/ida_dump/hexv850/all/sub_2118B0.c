__int64 __fastcall sub_2118B0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx

  v2 = (_QWORD *)a1[157];
  if ( 96LL * a1[158] )
  {
    while ( (unsigned int)sub_32AC50(v2, a2) )
    {
      v5 = a1[158];
      v6 = a1[157];
      v2 += 12;
      if ( v2 == (_QWORD *)(v6 + 96 * v5) )
        goto LABEL_12;
    }
    if ( v2 )
    {
LABEL_6:
      v7 = v2[7];
      if ( v7 )
      {
        v2[8] = 0;
        qfree(v7);
      }
      clear_tinfo_t(v2 + 6);
      v8 = v2[3];
      if ( v8 )
      {
        v2[4] = 0;
        qfree(v8);
      }
      cleanup_argloc(v2);
      memmove(v2, v2 + 12, a1[157] + 96LL * a1[158]-- - (_QWORD)v2 - 96);
      return 1;
    }
    v6 = a1[157];
    v5 = a1[158];
LABEL_12:
    v10 = v6 + 96 * v5;
    v11 = *(_QWORD *)(a2 + 8) & -*(_DWORD *)(a1[188] + 80LL);
    if ( v6 != v10 )
    {
      v12 = *(int *)(a1[188] + 80LL);
      v13 = v6;
      while ( 1 )
      {
        v2 = (_QWORD *)v13;
        if ( (*(_BYTE *)(v13 + 88) & 2) != 0 && *(_QWORD *)(v13 + 16) == *(_QWORD *)(a2 + 16) && *(_DWORD *)v13 == 1 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( v14 >= v11 && v12 && v12 + v11 - 1 >= v14 )
            break;
        }
        v13 += 96;
        if ( v10 == v13 )
          return 0;
      }
      if ( v13 )
        goto LABEL_6;
    }
  }
  return 0;
}
