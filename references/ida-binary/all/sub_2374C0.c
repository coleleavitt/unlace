unsigned __int64 __fastcall threads_chooser_t__::vfunc_9(__int64 a1, __int64 *a2, unsigned int *a3, double a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v6 = sub_237460(a4, a1, a3);
  v7 = *a2;
  v8 = v6;
  if ( *a2 )
  {
    a2[1] = 0;
    qfree(v7, (const char *)a3);
    *a2 = 0;
    a2[2] = 0;
  }
  if ( v8 != -1 )
  {
    v10 = a2[1];
    v11 = *a2;
    if ( a2[2] < (unsigned __int64)(v10 + 1) )
    {
      v12 = qvector_reserve(a2, v11, v10 + 1, 8);
      *a2 = v12;
      v11 = v12;
      v10 = a2[1];
    }
    *(_QWORD *)(v11 + 8 * v10) = v8;
    ++a2[1];
  }
  return v13 - __readfsqword(0x28u);
}
