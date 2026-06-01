__int64 __fastcall sub_6AFE80(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 i; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 816) + 8LL);
  if ( v3 )
  {
    for ( i = 0; i != *(_DWORD *)(v3 - 4); ++i )
    {
      if ( *(_QWORD *)(v3 + 8 * i) == a2 )
      {
        *a3 = i;
        return 1;
      }
    }
  }
  return 0;
}

