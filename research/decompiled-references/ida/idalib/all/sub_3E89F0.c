__int64 __fastcall sub_3E89F0(_QWORD *a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 result; // rax
  _QWORD *v7; // r13
  void *v8; // rdi

  result = 0;
  if ( a2 > 0 && (unsigned __int64)a2 < a1[1] )
  {
    v7 = (_QWORD *)(48LL * a2 + *a1);
    if ( *v7 )
    {
      v8 = (void *)v7[3];
      if ( v8 )
      {
        v7[4] = 0;
        qfree(v8);
        v7[3] = 0;
        v7[5] = 0;
      }
      callui(93, a2, 0, (int)&callui, a5, a6);
    }
  }
  return result;
}
