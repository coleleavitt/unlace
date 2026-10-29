__int64 __fastcall sub_15686D0(__int64 a1)
{
  int *i; // rbp
  __int16 v3; // ax
  int v5; // eax
  __int64 *v6; // rdi
  int v7; // eax
  __int64 *v8; // rdi
  __int16 v9; // ax
  __int64 v10; // rdi
  __int64 v11; // rdx

  for ( i = (int *)(a1 + 16); ; sub_14634E0(v8, i) )
  {
    while ( 1 )
    {
      v3 = *(_WORD *)(a1 + 32);
      if ( v3 != 457 )
        break;
      sub_1A80410(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
      v5 = *(_DWORD *)(a1 + 20);
      v6 = *(__int64 **)(a1 + 8);
      if ( !v5 )
        v5 = *(_DWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 40) = v5;
      sub_14634E0(v6, i);
      ++*(_WORD *)(a1 + 94);
    }
    if ( v3 == 458 )
      break;
    if ( v3 != 456 )
      return 0;
    sub_1A7E790(*(_QWORD *)(a1 + 96), *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
LABEL_10:
    v7 = *(_DWORD *)(a1 + 20);
    v8 = *(__int64 **)(a1 + 8);
    if ( !v7 )
      v7 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v7;
  }
  v9 = *(_WORD *)(a1 + 94);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 96);
    v11 = *(_QWORD *)(a1 + 24);
    *(_WORD *)(a1 + 94) = v9 - 1;
    sub_1A7E7D0(v10, *(unsigned int *)(a1 + 16), v11);
    goto LABEL_10;
  }
  return 1;
}
