__int64 (__fastcall **__fastcall sub_430130(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v4; // r12
  void *v5; // rbp
  __int64 v6; // rsi

  result = &off_1C4E830;
  v2 = a1[9];
  *a1 = &off_1C4E830;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = v2 + 32 * v3;
      do
      {
        v5 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v2);
        v6 = v2 + 16;
        v2 += 32;
        sub_182CBA0(v5, v6);
      }
      while ( v2 != v4 );
      v2 = a1[9];
    }
    return (__int64 (__fastcall **)())sub_186B220((void *)(v2 - 8));
  }
  return result;
}

