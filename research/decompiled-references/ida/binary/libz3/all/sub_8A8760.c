void __fastcall sub_8A8760(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // r14
  void *v9; // rbp
  __int64 v10; // rsi

  v2 = a1[6];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[5];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[2];
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  v6 = *a1;
  if ( *a1 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    if ( (_DWORD)v7 )
    {
      v8 = v6 + 40 * v7;
      do
      {
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v6);
        v10 = v6 + 16;
        v6 += 40;
        sub_182CBA0(v9, v10);
      }
      while ( v8 != v6 );
      v6 = *a1;
    }
    sub_186B220((void *)(v6 - 8));
  }
}

