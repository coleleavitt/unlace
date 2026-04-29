bool __fastcall sub_3A3790(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  const char *v5; // rsi
  const char *v6; // rdi

  if ( **(_QWORD **)(a1 + 24) != **(_QWORD **)(a2 + 24) )
    return 0;
  if ( (unsigned int)sub_1C2510(*(int **)(a1 + 32), *(int **)(a2 + 32)) )
    return 0;
  v3 = *(_QWORD **)(a2 + 32);
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4[2] != v3[2] )
    return 0;
  v5 = s1;
  if ( v3[5] )
    v5 = (const char *)v3[4];
  v6 = s1;
  if ( v4[5] )
    v6 = (const char *)v4[4];
  return strcmp(v6, v5) == 0;
}
