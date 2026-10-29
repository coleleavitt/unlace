__int64 __fastcall sub_6A41C0(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v7; // ebp
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // r13
  __int64 (*v11)(); // rax

  v7 = 0;
  v8 = 0;
  result = sub_6A38B0(a1, a2, a3, a5);
  v10 = result;
  if ( a5 )
  {
    do
    {
      while ( 1 )
      {
        v11 = *(__int64 (**)())(**(_QWORD **)(a4 + 8 * v8) + 32LL);
        if ( v11 != sub_6A41B0 )
          break;
        result = sub_777E10();
        *(_QWORD *)(v10 + 8 * v8) = result;
        v8 = (unsigned int)++v7;
        if ( v7 == a5 )
          return result;
      }
      result = v11();
      *(_QWORD *)(v10 + 8 * v8) = result;
      v8 = (unsigned int)++v7;
    }
    while ( a5 != v7 );
  }
  return result;
}

