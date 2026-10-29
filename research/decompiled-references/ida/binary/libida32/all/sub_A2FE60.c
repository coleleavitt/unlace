__int64 __fastcall sub_A2FE60(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 (*v12)(); // rax

  v7 = 0;
  v8 = sub_A2D740(a1, a2, a3, a5);
  result = 0;
  if ( a5 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a4 + 8 * result);
        v11 = 8 * result;
        v12 = *(__int64 (**)())(*(_QWORD *)v10 + 32LL);
        if ( v12 != sub_9DD400 )
          break;
        *(_QWORD *)(v11 + v8) = sub_B4CD20(v10);
        result = (unsigned int)++v7;
        if ( v7 == a5 )
          return result;
      }
      *(_QWORD *)(v11 + v8) = v12();
      result = (unsigned int)++v7;
    }
    while ( a5 != v7 );
  }
  return result;
}

