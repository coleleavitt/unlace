__int64 __fastcall sub_374170(__int64 a1, const char *a2)
{
  __int64 v4; // rax
  _QWORD *v5; // rbp
  __int64 v6; // rdi

  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 320) )
    return 0;
  v4 = *(_QWORD *)(a1 + 312);
  v5 = (_QWORD *)(v4 + 40LL * (_QWORD)a2);
  v6 = v5[2];
  if ( v6 )
  {
    v5[3] = 0;
    qfree(v6, a2);
    v4 = *(_QWORD *)(a1 + 312);
  }
  memmove(v5, v5 + 5, v4 + 40LL * *(_QWORD *)(a1 + 320) - (_QWORD)v5 - 40);
  --*(_QWORD *)(a1 + 320);
  return 1;
}
