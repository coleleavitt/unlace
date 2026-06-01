__int64 __fastcall sub_8A2130(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // r13
  void *v10; // rbp
  __int64 v11; // rsi

  v2 = a1[6];
  if ( v2 )
    result = sub_186B220((void *)(v2 - 8));
  v4 = a1[5];
  if ( v4 )
    result = sub_186B220((void *)(v4 - 8));
  v5 = a1[2];
  if ( v5 )
    result = sub_186B220((void *)(v5 - 8));
  v6 = a1[1];
  if ( v6 )
    result = sub_186B220((void *)(v6 - 8));
  v7 = *a1;
  if ( *a1 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    if ( (_DWORD)v8 )
    {
      v9 = v7 + 32 * v8;
      do
      {
        v10 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v7);
        v11 = v7 + 16;
        v7 += 32;
        sub_182CBA0(v10, v11);
      }
      while ( v9 != v7 );
      v7 = *a1;
    }
    return sub_186B220((void *)(v7 - 8));
  }
  return result;
}

