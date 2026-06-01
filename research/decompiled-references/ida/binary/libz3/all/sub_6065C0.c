void *__fastcall sub_6065C0(
        struct _Unwind_Exception *a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  void *v9; // rbx
  __int64 v10; // rdx
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 *v13; // rbp
  int v14; // r15d
  _Unwind_Word private_2; // r14
  __int64 v16; // r13
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  void *v20; // rdi
  __int64 *v22; // [rsp+8h] [rbp-40h]

  if ( (unsigned __int8)sub_64B460(a1->private_2) )
  {
    v9 = (void *)sub_186B270(0xF8u);
    sub_63D370(v9, a1->private_2);
    sub_63DFA0(v9, a2, v10, a3, a4, a5, a6, v11, v12, a9);
    v13 = *(__int64 **)(a2 + 24);
    if ( v13 )
    {
      v22 = &v13[*((unsigned int *)v13 - 1)];
      if ( v22 != v13 )
      {
        v14 = 0;
        do
        {
          private_2 = a1->private_2;
          v16 = *v13;
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)private_2) )
          {
            *(_DWORD *)(private_2 + 2988) = 6;
            sub_63D960(v9);
            v20 = v9;
            v9 = nullptr;
            sub_186B220(v20);
            return v9;
          }
          v14 |= sub_604900(a1, v16, (__int64)v9, v17, v18, v19, a3);
          ++v13;
        }
        while ( v22 != v13 );
        if ( (_BYTE)v14 )
          return v9;
      }
    }
    sub_63D960(v9);
    sub_186B220(v9);
  }
  return nullptr;
}

