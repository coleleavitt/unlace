__int64 __fastcall sub_1F5CD0(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 i; // rbx
  __int64 v10; // rax

  v2 = qword_8CB520;
  result = xmmword_8CB528;
  v4 = qword_8CB520 + 8 * xmmword_8CB528;
  if ( v4 != qword_8CB520 )
  {
    do
    {
      v5 = *(_QWORD *)v2;
      v6 = *(_QWORD *)(*(_QWORD *)v2 + 640LL);
      v7 = *(_QWORD *)v2 + 624LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v5 + 648);
        if ( v8 )
        {
          for ( i = 0; i != v8; ++i )
          {
            v10 = i;
            qfree(*(_QWORD *)(v6 + 16 * v10), a2);
            v6 = *(_QWORD *)(v5 + 640);
          }
        }
        *(_QWORD *)(v5 + 648) = 0;
        qfree(v6, a2);
        *(_QWORD *)(v5 + 640) = 0;
        *(_QWORD *)(v5 + 656) = 0;
      }
      *(_BYTE *)(v5 + 664) = 0;
      a2 = (_BYTE *)(&dword_0 + 1);
      v2 += 8;
      result = sub_1E84B0(v7, (_BYTE *)&dword_0 + 1);
    }
    while ( v4 != v2 );
  }
  return result;
}
