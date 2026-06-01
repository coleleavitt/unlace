__int64 (__fastcall **__fastcall sub_B72500(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rbp
  __int64 v7; // rdi

  result = &off_1C57A40;
  *a1 = &off_1C57A40;
  v3 = (void *)a1[4];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( (_DWORD)v5 )
    {
      v6 = v4 + 16 * v5;
      do
      {
        v7 = v4;
        v4 += 16;
        sub_15D0DF0(v7);
      }
      while ( v6 != v4 );
      v4 = a1[2];
    }
    return (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  }
  return result;
}

