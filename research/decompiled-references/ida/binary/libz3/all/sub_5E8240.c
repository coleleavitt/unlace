void *__fastcall sub_5E8240(
        _QWORD *a1,
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
  __int64 v15; // r14
  __int64 v16; // r13
  void *v17; // rdi
  __int64 *v19; // [rsp+8h] [rbp-40h]

  if ( (unsigned __int8)sub_64B420(a1[3]) )
  {
    v9 = (void *)sub_186B270(0xF8u);
    sub_63D370(v9, a1[3]);
    sub_63DFA0(v9, a2, v10, a3, a4, a5, a6, v11, v12, a9);
    v13 = *(__int64 **)(a2 + 24);
    if ( v13 )
    {
      v19 = &v13[*((unsigned int *)v13 - 1)];
      if ( v19 != v13 )
      {
        v14 = 0;
        do
        {
          v15 = a1[3];
          v16 = *v13;
          if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)v15) )
          {
            *(_DWORD *)(v15 + 2988) = 6;
            sub_63D960(v9);
            v17 = v9;
            v9 = nullptr;
            sub_186B220(v17);
            return v9;
          }
          v14 |= sub_5E7160(a1, v16, (__int64)v9);
          ++v13;
        }
        while ( v19 != v13 );
        if ( (_BYTE)v14 )
          return v9;
      }
    }
    sub_63D960(v9);
    sub_186B220(v9);
  }
  return nullptr;
}

