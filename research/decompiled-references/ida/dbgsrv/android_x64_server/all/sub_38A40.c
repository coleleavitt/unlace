/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38A40
// Address: 0x0000000000038A40

//----- (0000000000038A40) ----------------------------------------------------
void __fastcall sub_38A40(_QWORD *a1)
{
  void **v2; // rcx
  void **v3; // rsi
  unsigned __int64 v4; // rdi
  void **v5; // r12
  __int64 v6; // rbx
  _QWORD *v7; // r15
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax

  v2 = (void **)a1[1];
  v3 = (void **)a1[2];
  v4 = a1[4];
  if ( v3 == v2 )
  {
    v7 = a1 + 5;
  }
  else
  {
    v5 = &v2[v4 / 0x38];
    v6 = (__int64)*v5 + 72 * (v4 % 0x38);
    v7 = a1 + 5;
    v8 = (unsigned __int64)v2[(a1[5] + v4) / 0x38] + 72 * ((a1[5] + v4) % 0x38);
    if ( v8 != v6 )
    {
      do
      {
        free_debug_event(v6);
        v6 += 72;
        if ( v6 - (_QWORD)*v5 == 4032 )
        {
          v6 = (__int64)v5[1];
          ++v5;
        }
      }
      while ( v8 != v6 );
      v2 = (void **)a1[1];
      v3 = (void **)a1[2];
    }
  }
  *v7 = 0;
  v9 = v3 - v2;
  if ( v9 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v10 = a1[2];
      v2 = (void **)(a1[1] + 8LL);
      a1[1] = v2;
      v9 = (v10 - (__int64)v2) >> 3;
    }
    while ( v9 > 2 );
  }
  if ( v9 == 1 )
  {
    v11 = 28;
  }
  else
  {
    if ( v9 != 2 )
      return;
    v11 = 56;
  }
  a1[4] = v11;
}
