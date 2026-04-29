__int64 __fastcall sub_216C70(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx

  v2 = (_QWORD *)a1[157];
  if ( 96LL * a1[158] )
  {
    while ( (unsigned int)sub_3307E0(v2, a2) )
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
      if ( v2[7] )
      {
        v2[8] = 0;
        qfree();
      }
      clear_tinfo_t();
      if ( v2[3] )
      {
        v2[4] = 0;
        qfree();
      }
      cleanup_argloc();
      memmove(v2, v2 + 12, a1[157] + 96LL * a1[158]-- - (_QWORD)v2 - 96);
      return 1;
    }
    v6 = a1[157];
    v5 = a1[158];
LABEL_12:
    v8 = v6 + 96 * v5;
    v9 = *(_QWORD *)(a2 + 8) & -*(_DWORD *)(a1[188] + 80LL);
    if ( v6 != v8 )
    {
      v10 = *(int *)(a1[188] + 80LL);
      v11 = v6;
      while ( 1 )
      {
        v2 = (_QWORD *)v11;
        if ( (*(_BYTE *)(v11 + 88) & 2) != 0 && *(_QWORD *)(v11 + 16) == *(_QWORD *)(a2 + 16) && *(_DWORD *)v11 == 1 )
        {
          v12 = *(_QWORD *)(v11 + 8);
          if ( v12 >= v9 && v10 && v10 + v9 - 1 >= v12 )
            break;
        }
        v11 += 96;
        if ( v8 == v11 )
          return 0;
      }
      if ( v11 )
        goto LABEL_6;
    }
  }
  return 0;
}
