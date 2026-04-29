bool __fastcall sub_196B80(__int64 a1, char *a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax

  v4 = *a2;
  if ( *a2 == 9 )
  {
    v13 = *((__int64 **)a2 + 1);
    if ( v13[1] )
      return 0;
    v14 = *v13;
    v15 = *((int *)v13 + 4);
    if ( *(_QWORD *)(v14 + 440) < v15 )
LABEL_20:
      sub_190820();
    if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(*(_QWORD *)(v14 + 432) + 104 * v15 + 80), *(_QWORD *)(a1 + 248), 0) )
      return 1;
    v4 = *a2;
  }
  if ( !a3 )
    return 0;
  if ( v4 != 10 )
    return 0;
  v5 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)v5 != 9 )
    return 0;
  v6 = *(__int64 **)(v5 + 8);
  if ( v6[1] )
    return 0;
  v7 = *v6;
  v8 = *((int *)v6 + 4);
  if ( *(_QWORD *)(v7 + 440) < v8 )
    goto LABEL_20;
  v9 = *(_QWORD *)(v7 + 432) + 104 * v8;
  if ( !(unsigned int)lexcompare_tinfo(*(_QWORD *)(v9 + 80), *(_QWORD *)(a1 + 248), 0) )
    return 1;
  if ( *(_DWORD *)v9 != 1 )
    return 0;
  v10 = *(_QWORD **)a3;
  v11 = *(_QWORD *)a3 + 8LL * *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)a3 != v11 )
  {
    do
    {
      if ( *(_QWORD *)(v9 + 8) == *v10 )
        break;
      ++v10;
    }
    while ( (_QWORD *)v11 != v10 );
  }
  return v10 != (_QWORD *)v11;
}
