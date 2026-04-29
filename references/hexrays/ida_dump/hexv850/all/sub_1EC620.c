unsigned __int64 __fastcall sub_1EC620(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  signed int v5; // edx
  unsigned __int64 result; // rax
  __int64 v7; // r13
  __int64 i; // rbx
  _QWORD *v9; // rbp
  __int64 v10; // rdi

  *(_QWORD *)(a1 + 8) = 0;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 32) = 0;
  }
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v4 )
    goto LABEL_6;
  if ( *(_BYTE *)v4 != 15 )
  {
    if ( !under_debugger )
      sub_37CFE0(52932);
    BUG();
  }
  v5 = *(_DWORD *)(v4 + 4);
  if ( v5 > 0 )
    result = sub_1BE430(*(_QWORD *)(v4 + 8), (__int64 *)a1, v5, *(_QWORD *)(a2 + 1440), nullptr);
  else
LABEL_6:
    result = sub_1BE600(*(_QWORD *)(a2 + 432) + 104LL * *(int *)(a1 + 80), a2, (__int64 *)a1, 0);
  v7 = *(_QWORD *)(a1 + 48);
  if ( v7 )
  {
    for ( i = 0; i != v7; ++i )
    {
      v9 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 40 * i);
      v10 = v9[2];
      if ( v10 )
      {
        v9[3] = 0;
        qfree(v10);
      }
      result = qfree(*v9);
    }
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 88) = 0;
  return result;
}
