__int64 __fastcall sub_83F650(__int64 *a1, __int64 *a2, int a3)
{
  void **v3; // r14
  char *v4; // r12
  char *v5; // rbx
  void *v6; // rbp
  char *v7; // rsi
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v11; // rax

  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        *a1 = *a2;
        break;
      case 2:
        v9 = *a2;
        v10 = operator new(0x28u);
        sub_83F4E0(v10, (__int64 **)v9);
        *(_DWORD *)(v10 + 24) = *(_DWORD *)(v9 + 24);
        *(_WORD *)(v10 + 28) = *(_WORD *)(v9 + 28);
        *(_BYTE *)(v10 + 30) = *(_BYTE *)(v9 + 30);
        v11 = *(_QWORD *)(v9 + 32);
        *a1 = v10;
        *(_QWORD *)(v10 + 32) = v11;
        break;
      case 3:
        v3 = (void **)*a1;
        if ( *a1 )
        {
          v4 = (char *)v3[1];
          v5 = (char *)*v3;
          if ( v4 != *v3 )
          {
            do
            {
              v6 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v5 + 8);
              v7 = v5 + 24;
              v5 += 40;
              sub_182CBA0(v6, v7);
            }
            while ( v4 != v5 );
            v5 = (char *)*v3;
          }
          if ( v5 )
            sub_186B220(v5);
          operator delete(v3, 0x28u);
        }
        break;
    }
    return 0;
  }
  else
  {
    *a1 = (__int64)&`typeinfo for'lp::bound_analyzer_on_row<std::vector<lp::row_cell<rational>,std_allocator<lp::row_cell<rational>>>,lp::lp_bound_propagator<arith::solver>>::limit_j(unsigned int,rational const&,bool,bool,bool)::{lambda(void)#1};
    return 0;
  }
}

