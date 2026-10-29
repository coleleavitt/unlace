void __fastcall sub_4D56C0(_QWORD *a1, int a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  void (__fastcall *v6)(_QWORD *, __int64); // rdx
  __int64 v7; // rax

  v4 = 0;
  if ( a2 )
  {
    do
    {
      while ( 1 )
      {
        v6 = *(void (__fastcall **)(_QWORD *, __int64))(*a1 + 168LL);
        v7 = a1[2];
        if ( !v7 )
          break;
        v5 = (unsigned int)(*(_DWORD *)(v7 - 4) * v4++);
        v6(a1, a3 + 8 * v5);
        if ( a2 == v4 )
          return;
      }
      ++v4;
      v6(a1, a3);
    }
    while ( a2 != v4 );
  }
}

