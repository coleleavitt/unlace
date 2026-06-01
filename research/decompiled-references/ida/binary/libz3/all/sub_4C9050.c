_QWORD *__fastcall sub_4C9050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        char a9)
{
  __int64 v13; // rdx
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rbp
  unsigned int *v18; // rbx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 96LL))(
          *(_QWORD *)(a2 + 8),
          a2,
          a3,
          a4);
  if ( !v13 )
  {
    v15 = *(_QWORD *)(a3 + 8);
    if ( *(_QWORD *)(a2 + 8) == v15
      || (v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v15 + 96LL))(
                  v15,
                  a2,
                  a3,
                  a4,
                  a5,
                  a6,
                  a7)) == 0 )
    {
      v16 = sub_4C4750(a1, a2, a3, a4, a5, a6, a9);
      v13 = v16;
      if ( v16 )
      {
        v20 = v16;
        v17 = (_QWORD *)sub_186B270(0x20u);
        *v17 = &off_1C4EDC8;
        v17[1] = v20;
        v17[2] = 0;
        v17[3] = 0;
        if ( a7 )
        {
          v18 = a8;
          do
            sub_4C54F0(v17 + 3, v18++);
          while ( v18 != &a8[a7] );
        }
        return v17;
      }
    }
  }
  return (_QWORD *)v13;
}

