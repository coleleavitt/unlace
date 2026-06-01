void __fastcall sub_180870(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 i; // r15
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  void (__fastcall ***v12)(void *); // r14
  void (__fastcall *v13)(void *); // rsi
  void (__fastcall *v14)(void *); // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 j; // rbx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rbx
  void *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdi

  *(_QWORD *)a1 = &unk_23C988;
  v2 = *(_QWORD *)(a1 + 1912);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = xmmword_256688;
  v4 = (_QWORD *)qword_256680;
  *(_QWORD *)(a1 + 1912) = 0;
  v5 = &v4[2 * v3];
  if ( v4 == v5 )
    goto LABEL_46;
  while ( a1 != v4[1] )
  {
    v4 += 2;
    if ( v5 == v4 )
      goto LABEL_46;
  }
  if ( !v4 )
  {
LABEL_46:
    if ( under_debugger )
      goto LABEL_50;
    interr();
LABEL_48:
    if ( !under_debugger )
    {
      interr();
      sub_180BF0(&stru_9F78.st_size);
      return;
    }
LABEL_50:
    BUG();
  }
  if ( !*v4 )
    goto LABEL_48;
  *(_OWORD *)v4 = 0;
  v6 = *(_QWORD *)(a1 + 1888);
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 1896);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (_QWORD *)(v6 + 80 * i);
        v10 = v9[9];
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 8))-- == 1 )
          {
            v12 = (void (__fastcall ***)(void *))v9[9];
            v13 = **v12;
            if ( v13 == sub_17EC30 )
            {
              if ( v12 )
              {
                v14 = (*v12)[2];
                if ( (char *)v14 == (char *)sub_17E990 )
                {
                  *v12 = (void (__fastcall **)(void *))&off_235C58;
                  qregfree();
                  operator delete(v12, 0x30u);
                }
                else
                {
                  v14((void *)v9[9]);
                }
              }
            }
            else
            {
              v13((void *)v9[9]);
            }
          }
        }
        if ( v9[5] )
        {
          v9[6] = 0;
          qfree();
        }
        if ( v9[1] )
        {
          v9[2] = 0;
          qfree();
        }
        v6 = *(_QWORD *)(a1 + 1888);
      }
    }
    *(_QWORD *)(a1 + 1896) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1840) )
  {
    *(_QWORD *)(a1 + 1848) = 0;
    qfree();
  }
  v15 = *(_QWORD *)(a1 + 1808);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = *(_QWORD *)(a1 + 1784);
  if ( v16 )
  {
    v17 = *(_QWORD *)(a1 + 1792);
    if ( v17 )
    {
      for ( j = 0; j != v17; ++j )
      {
        v19 = *(_QWORD *)(v16 + 32 * j);
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v16 = *(_QWORD *)(a1 + 1784);
        }
      }
    }
    *(_QWORD *)(a1 + 1792) = 0;
    qfree();
  }
  v20 = -1;
  sub_17F8E0((_QWORD *)(a1 + 1712), 0xFFFFFFFFFFFFFFFFLL);
  v21 = *(_QWORD *)(a1 + 1728);
  while ( v21 )
  {
    sub_17EF00(*(_QWORD **)(v21 + 24));
    v22 = (void *)v21;
    v21 = *(_QWORD *)(v21 + 16);
    v20 = 48;
    operator delete(v22, 0x30u);
  }
  sub_180530(a1 + 1208, v20);
  v23 = *(_QWORD *)(a1 + 1168);
  for ( *(_QWORD *)(a1 + 1136) = &off_22F558; a1 + 1152 != v23; v23 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v23 + 32) + 32LL))(*(_QWORD *)(v23 + 32), a1 + 1136);
  sub_17EC80(*(_QWORD **)(a1 + 1160));
  v24 = *(_QWORD *)(a1 + 1104);
  for ( *(_QWORD *)(a1 + 1072) = &off_22F558; a1 + 1088 != v24; v24 = std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v24 + 32) + 32LL))(*(_QWORD *)(v24 + 32), a1 + 1072);
  sub_17EC80(*(_QWORD **)(a1 + 1096));
  v25 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)a1 = &unk_23C958;
  if ( v25 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    qfree();
  }
}

