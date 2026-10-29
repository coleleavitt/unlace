__int64 *__fastcall sub_B749E0(_QWORD *a1)
{
  __int64 *result; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v5; // rbp
  __int64 v6; // rdi

  result = qword_1C6E7C8;
  v2 = a1[6];
  *a1 = qword_1C6E7C8;
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v5 = v2 + 16 * v3;
      do
      {
        v6 = v2;
        v2 += 16;
        sub_15D0DF0(v6);
      }
      while ( v2 != v5 );
      v2 = a1[6];
    }
    return (__int64 *)sub_186B220((void *)(v2 - 8));
  }
  return result;
}

