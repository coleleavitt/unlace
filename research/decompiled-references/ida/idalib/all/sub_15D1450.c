__int64 __fastcall sub_15D1450(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  __int64 v9; // rdi

  if ( *(_DWORD *)(a1 + 24) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v7++);
      v8 |= (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 72LL))(v9, a2, a3, a4);
    }
    while ( *(unsigned int *)(a1 + 24) > v7 );
  }
  else
  {
    return 0;
  }
  return v8;
}
