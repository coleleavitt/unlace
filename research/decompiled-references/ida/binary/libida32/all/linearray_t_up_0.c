__int64 __fastcall linearray_t_up_0(__int64 a1)
{
  int *v2; // rdi
  __int64 v3; // rax
  char v4; // al
  _DWORD *v5; // rdi

  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  v2 = *(int **)(a1 + 24);
  v3 = v2[2];
  if ( (int)v3 >= 0 )
    return *(_QWORD *)a1 + 24 * v3;
  while ( 1 )
  {
    v4 = (*(__int64 (__fastcall **)(int *, _QWORD))(*(_QWORD *)v2 + 72LL))(v2, *(_QWORD *)(a1 + 32));
    v5 = *(_DWORD **)(a1 + 24);
    if ( v4 )
    {
      ++v5[2];
      return 0;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v5 + 56LL))(v5, *(_QWORD *)(a1 + 32)) )
      break;
    sub_43FAE0(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = (__int16)(*(_WORD *)(a1 + 8) - 1);
    v2 = *(int **)(a1 + 24);
    v3 = v2[2];
    if ( (int)v3 >= 0 )
      return *(_QWORD *)a1 + 24 * v3;
  }
  ++*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
  return 0;
}

