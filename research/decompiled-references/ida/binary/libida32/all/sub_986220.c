__int64 __fastcall sub_986220(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rdx

  v1 = sub_F3F530(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL));
  if ( (*(_BYTE *)(v1 + 29) & 1) == 0 )
    goto LABEL_17;
  v2 = sub_B68690(v1);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
  if ( (unsigned __int64)v3 >= v4 )
  {
    if ( v3 != (_QWORD *)v4 )
    {
      if ( *(_WORD *)(*(_QWORD *)v4 + 36LL) == 184 )
        goto LABEL_13;
      v5 = v4 + 8;
      for ( i = v5; v3 != (_QWORD *)v5; i = v5 )
      {
        v5 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 184 )
          goto LABEL_13;
      }
    }
LABEL_17:
    BUG();
  }
  v7 = v3;
  while ( *(_WORD *)(*v7 + 36LL) != 184 )
  {
    if ( (_QWORD *)v4 == ++v7 )
      goto LABEL_17;
  }
  if ( (_QWORD *)v4 == v7 )
    goto LABEL_17;
LABEL_13:
  v8 = *v3;
  if ( *(_WORD *)(*v3 + 36LL) != 184 )
  {
    v9 = v3 + 1;
    do
      v8 = *v9++;
    while ( *(_WORD *)(v8 + 36) != 184 );
  }
  return dword_23B6E18[*(unsigned int *)(v8 + 40)];
}

