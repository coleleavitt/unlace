__int64 __fastcall linearray_t_ending(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 24);
  if ( v1[2] < *(_DWORD *)(a1 + 8) )
    return 0;
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 80LL))(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a1 + 32));
}

