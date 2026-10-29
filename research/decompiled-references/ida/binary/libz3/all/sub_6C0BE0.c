__int64 __fastcall sub_6C0BE0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r12
  void *v4; // rbp
  __int64 v5; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    v2 = *(unsigned int *)(a1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = a1 + 32 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v5 = v1 + 16;
        v1 += 32;
        result = sub_182CBA0(v4, v5);
      }
      while ( v1 != v3 );
    }
  }
  return result;
}

