void __fastcall sub_450EE0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rbp
  void *v9; // r14
  __int64 v10; // rsi
  __int64 *v11; // [rsp+8h] [rbp-40h]

  v2 = (void (__fastcall ***)(_QWORD))a1[6];
  *a1 = &off_1C4E928;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
  }
  v3 = a1[5];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = (__int64 *)a1[4];
  if ( v4 )
  {
    v5 = *((unsigned int *)v4 - 1);
    if ( (_DWORD)v5 )
    {
      v11 = &v4[v5];
      do
      {
        v6 = *v4;
        if ( *v4 )
        {
          v7 = *(unsigned int *)(v6 - 4);
          if ( (_DWORD)v7 )
          {
            v8 = v6 + 32 * v7;
            do
            {
              v9 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6);
              v10 = v6 + 16;
              v6 += 32;
              sub_182CBA0(v9, v10);
            }
            while ( v8 != v6 );
            v6 = *v4;
          }
          sub_186B220((void *)(v6 - 8));
        }
        ++v4;
      }
      while ( v4 != v11 );
      v4 = (__int64 *)a1[4];
    }
    sub_186B220(v4 - 1);
  }
  operator delete(a1, 0x38u);
}

