__int64 __fastcall sub_119100(__int64 a1)
{
  __int64 v2; // rdx
  _QWORD **v3; // rdi
  __int64 result; // rax
  _QWORD **v5; // rbx
  __int64 v6; // rbp

  v2 = *(_QWORD *)(a1 + 4248);
  v3 = *(_QWORD ***)(a1 + 4240);
  result = 8 * v2;
  if ( 8 * v2 )
  {
    v5 = v3;
    do
    {
      v6 = (__int64)*v5;
      if ( *v5 )
      {
        sub_118C40(*v5);
        if ( *(_QWORD *)(v6 + 4240) )
        {
          *(_QWORD *)(v6 + 4248) = 0;
          qfree();
        }
        qfree();
        v3 = *(_QWORD ***)(a1 + 4240);
        v2 = *(_QWORD *)(a1 + 4248);
      }
      ++v5;
      result = (__int64)&v3[v2];
    }
    while ( v5 != (_QWORD **)result );
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 4248) = 0;
    return qfree();
  }
  return result;
}

