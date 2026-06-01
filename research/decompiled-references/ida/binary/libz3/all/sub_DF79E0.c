__int64 __fastcall sub_DF79E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbp
  _DWORD *v3; // rbx
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 i; // r13
  __int64 v9; // rdx

  v2 = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 48);
  v3 = (_DWORD *)a1[110];
  if ( v3 )
  {
    if ( v3[12]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v3)(v3);
      sub_186B220(v3);
    }
  }
  v5 = a1[106];
  a1[110] = a2;
  if ( v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v5 - 4) )
        break;
      ++v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 88LL))(v2);
      v5 = a1[106];
      v2 = a1[110];
    }
    while ( v5 );
  }
  v7 = a1[77];
  if ( v7 )
  {
    for ( i = v7 + 32LL * *(unsigned int *)(v7 - 4); i != v7; v2 = a1[110] )
    {
      v9 = *(_QWORD *)(v7 + 16);
      v7 += 32;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v2 + 160LL))(v2, *(_QWORD *)(v7 - 32), v9);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 136LL))(v2, a1 + 31);
}

