unsigned __int64 __fastcall sub_78EC70(__int64 a1)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rdx
  unsigned __int64 result; // rax
  _QWORD *v5; // rbp
  void *v6; // rdi
  __int64 v7; // rbx
  void *v8; // rdi
  char *v9; // rdx
  __int64 v10; // r14
  __int64 i; // rbx
  char *v12; // rax
  void *v13; // rdi

  v2 = 0;
  register_undo_handlers(&unk_2B10760, 5, 0, 0);
  result = *(unsigned int *)(a1 + 40);
  if ( (_DWORD)result )
  {
    do
    {
      v5 = *(_QWORD **)(a1 + 8 * v2 + 8);
      if ( v5 )
      {
        sub_78E9A0(*(_QWORD **)(a1 + 8 * v2 + 8), 0, v3);
        v6 = (void *)v5[745];
        if ( v6 )
        {
          v5[746] = 0;
          qfree(v6);
        }
        v7 = v5[741];
        while ( v7 )
        {
          sub_78E370(*(_QWORD **)(v7 + 24));
          v8 = (void *)v7;
          v7 = *(_QWORD *)(v7 + 16);
          operator delete(v8, 0x30u);
        }
        v9 = (char *)v5[736];
        if ( v9 )
        {
          v10 = v5[737];
          if ( v10 )
          {
            for ( i = 0; i != v10; ++i )
            {
              v12 = &v9[24 * i];
              v13 = *(void **)v12;
              if ( *(_QWORD *)v12 )
              {
                *((_QWORD *)v12 + 1) = 0;
                qfree(v13);
                v9 = (char *)v5[736];
              }
            }
          }
          v5[737] = 0;
          qfree(v9);
        }
        sub_722E10((__int64)v5);
        operator delete(v5, 0x1768u);
      }
      result = *(int *)(a1 + 40);
      ++v2;
    }
    while ( v2 < result );
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = 0;
  return result;
}

