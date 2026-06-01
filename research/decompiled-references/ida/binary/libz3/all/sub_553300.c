__int64 __fastcall sub_553300(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  void *v6; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    sub_182A4B0(a1, *(_QWORD *)a2);
    if ( *(_DWORD *)(a2 + 16) )
    {
      v4 = 0;
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v4++);
        sub_182A4B0(a1, v5);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(a2 + 16) );
    }
    v6 = *(void **)(a2 + 8);
    *(_DWORD *)(a2 + 16) = 0;
    if ( v6 )
    {
      if ( v6 != (void *)(a2 + 24) )
        sub_186B220(v6);
    }
    return sub_17E9C40(a1 + 560, 88, a2);
  }
  return result;
}

