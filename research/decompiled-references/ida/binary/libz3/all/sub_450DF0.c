__int64 (__fastcall **__fastcall sub_450DF0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  void (__fastcall ***v3)(_QWORD); // rbx
  __int64 v4; // rdi
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbp
  void *v10; // r14
  __int64 v11; // rsi
  __int64 *v12; // [rsp+8h] [rbp-40h]

  result = &off_1C4E928;
  v3 = (void (__fastcall ***)(_QWORD))a1[6];
  *a1 = &off_1C4E928;
  if ( v3 )
  {
    (**v3)(v3);
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  }
  v4 = a1[5];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = (__int64 *)a1[4];
  if ( v5 )
  {
    v6 = *((unsigned int *)v5 - 1);
    if ( (_DWORD)v6 )
    {
      v12 = &v5[v6];
      do
      {
        v7 = *v5;
        if ( *v5 )
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
            v7 = *v5;
          }
          sub_186B220((void *)(v7 - 8));
        }
        ++v5;
      }
      while ( v5 != v12 );
      v5 = (__int64 *)a1[4];
    }
    return (__int64 (__fastcall **)())sub_186B220(v5 - 1);
  }
  return result;
}

