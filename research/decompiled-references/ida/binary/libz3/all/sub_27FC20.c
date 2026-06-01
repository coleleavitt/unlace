__int64 __fastcall sub_27FC20(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  __int64 v3; // r12
  void *v4; // rbp
  __int64 v5; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + 32 * v2;
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v5 = v1 + 16;
        v1 += 32;
        sub_182CBA0(v4, v5);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    return sub_186B220((void *)(v1 - 8));
  }
  return result;
}

