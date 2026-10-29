bool __fastcall sub_15D1C80(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi

  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v5++);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 296LL))(v6, a2, a3);
    }
    while ( *(unsigned int *)(a1 + 24) > v5 );
  }
  return *(_DWORD *)(a2 + 16) != 0;
}
