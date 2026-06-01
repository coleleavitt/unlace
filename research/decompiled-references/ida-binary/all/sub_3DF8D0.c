__int64 __fastcall sub_3DF8D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rax
  _QWORD *v7; // r9
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rax

  if ( *(_QWORD *)(a2 + 32) == a3 )
  {
    *(_QWORD *)a1 = -1;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 16) = 0;
    return a1;
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 40);
    v7 = *(_QWORD **)(v6 + 16);
    v8 = &v7[*(_QWORD *)(v6 + 24)];
    if ( v7 == v8 )
      goto LABEL_10;
    v9 = *(_QWORD **)(v6 + 16);
    while ( a3 != *v9 )
    {
      if ( v8 == ++v9 )
        goto LABEL_10;
    }
    if ( v8 == v9 || (v10 = v9 - v7, (_DWORD)v10 == -1) )
    {
LABEL_10:
      if ( under_debugger )
        BUG();
      interr(40273, a2, a3, a4, a5);
      return sub_3DF970();
    }
    else
    {
      *(_DWORD *)a1 = v10;
      *(_DWORD *)(a1 + 4) = a4;
      *(_QWORD *)(a1 + 8) = a3;
      *(_QWORD *)(a1 + 16) = a2;
      return a1;
    }
  }
}
