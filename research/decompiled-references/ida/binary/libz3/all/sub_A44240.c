__int64 __fastcall sub_A44240(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r13
  __int64 v3; // r13
  void *v4; // rbp
  void *v5; // rbp
  __int64 v6; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *(unsigned int *)(v1 - 4);
    if ( (_DWORD)v2 )
    {
      v3 = v1 + (v2 << 6);
      do
      {
        v4 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1 + 32);
        sub_182CBA0(v4, v1 + 48);
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v1);
        v6 = v1 + 16;
        v1 += 64;
        sub_182CBA0(v5, v6);
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    return sub_186B220((void *)(v1 - 8));
  }
  return result;
}

