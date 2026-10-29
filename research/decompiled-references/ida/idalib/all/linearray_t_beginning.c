__int64 __fastcall linearray_t_beginning(__int64 a1)
{
  int *v1; // rax

  v1 = *(int **)(a1 + 24);
  if ( v1[2] <= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 72LL))(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 32));
  else
    return 0;
}
