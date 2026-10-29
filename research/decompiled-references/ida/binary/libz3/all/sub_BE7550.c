__int64 *__fastcall sub_BE7550(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  int v8; // esi
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rdi
  _DWORD *v16; // rax
  __int64 v17; // rax

  v6 = a2[2];
  v7 = *a2;
  *a1 = 0;
  a1[1] = v6;
  if ( a3 == a4 )
  {
    v17 = sub_15D1F10(a3);
    v10 = sub_163D3C0(v7 + 1752, v17);
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 1768);
    if ( !*(_WORD *)(a3 + 4) )
    {
      v9 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
      if ( v9 )
      {
        if ( v8 == *v9 && v9[1] == 35 )
        {
          if ( a4 )
            ++*(_DWORD *)(a4 + 8);
          *a1 = a4;
          goto LABEL_13;
        }
      }
    }
    if ( !*(_WORD *)(a4 + 4) )
    {
      v16 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
      if ( v16 )
      {
        if ( v8 == *v16 && v16[1] == 35 )
        {
          ++*(_DWORD *)(a3 + 8);
          *a1 = a3;
          goto LABEL_13;
        }
      }
    }
    sub_15E1B70(*(_QWORD *)(v7 + 1760));
    sub_15E1B70(*(_QWORD *)(*a2 + 1760LL));
    v10 = sub_15E1B70(*(_QWORD *)(v7 + 1760));
  }
  v11 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v12 = *a1;
  if ( *a1 )
  {
    v13 = a1[1];
    if ( (*(_DWORD *)(v12 + 8))-- == 1 )
      sub_15D7BC0(v13, v12);
  }
  *a1 = v11;
  v7 = *a2;
LABEL_13:
  sub_14B9B80(v7 + 1192, a1);
  return a1;
}

