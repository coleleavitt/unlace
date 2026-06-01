__int64 __fastcall sub_56D980(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  int v8; // r13d
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax

  result = sub_79B370(a2, *(_QWORD *)(a2 + 1664) + 8LL);
  if ( (_BYTE)result )
  {
    v6 = sub_630AA0(*(_QWORD *)(a2 + 1480), 0);
    result = sub_79B7E0(*(_QWORD *)(a2 + 1664) + 8LL, a2, 65);
    v7 = result;
    if ( (_DWORD)result != -1 )
    {
      v8 = 0;
      do
      {
        if ( v7 && v7 < v6 )
        {
          if ( ++v8 > 4 )
            return result;
          sub_79B3A0(*(_QWORD *)(a2 + 1664) + 8LL, a2, v7, 65);
          v10 = a3[1];
          v11 = *a3;
          if ( a3[2] < (unsigned __int64)(v10 + 1) )
          {
            v12 = qvector_reserve(a3, v11, v10 + 1, 24);
            v10 = a3[1];
            *a3 = v12;
            v11 = v12;
          }
          v9 = v11 + 24 * v10;
          *(_QWORD *)v9 = 0;
          *(_OWORD *)(v9 + 8) = 0;
          ++a3[1];
          sub_3573A0((char **)v9);
        }
        result = sub_79B840(*(_QWORD *)(a2 + 1664) + 8LL, a2, v7, 65);
        v7 = result;
      }
      while ( (_DWORD)result != -1 );
    }
  }
  return result;
}

