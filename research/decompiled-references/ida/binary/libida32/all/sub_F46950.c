__int64 __fastcall sub_F46950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax

  while ( 1 )
  {
    v5 = sub_F46700(a1, a2, a3, a4, a5);
    if ( !v5 )
      return 0;
    a3 = *(_WORD *)(v5 + 18) >> 3;
    if ( (_DWORD)a2 == (_DWORD)a3 )
      break;
    a1 = *(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  }
  return 1;
}

