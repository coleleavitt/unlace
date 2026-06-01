__int64 __fastcall sub_2094590(__int64 a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v4; // r15d
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 (*v7)(); // rax

  v2 = *(_DWORD *)(a1 + 56) - 1;
  if ( v2 < 0 )
  {
    return 0;
  }
  else
  {
    v4 = 0;
    v5 = 8LL * v2;
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + v5);
        v7 = *(__int64 (**)())(*(_QWORD *)v6 + 32LL);
        if ( v7 != sub_200E140 )
          break;
        --v2;
        v5 -= 8;
        if ( v2 == -1 )
          return v4;
      }
      --v2;
      v5 -= 8;
      v4 |= ((__int64 (__fastcall *)(__int64, __int64))v7)(v6, a2);
    }
    while ( v2 != -1 );
  }
  return v4;
}
