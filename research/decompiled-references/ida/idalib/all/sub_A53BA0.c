__int64 __fastcall sub_A53BA0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v7; // ebx
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 (*v12)(void); // rax

  v7 = 0;
  v8 = sub_A51480(a1, a2, a3, a5);
  result = 0;
  if ( a5 )
  {
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(a4 + 8 * result);
        v11 = 8 * result;
        v12 = *(__int64 (**)(void))(*(_QWORD *)v10 + 32LL);
        if ( (char *)v12 != (char *)sub_A01140 )
          break;
        *(_QWORD *)(v11 + v8) = sub_B70A60(v10);
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
