int __fastcall sub_3823E0(int a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // rax
  _QWORD *v4; // rbp
  _QWORD *i; // r13
  _QWORD *v6; // r15
  const char *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // r12
  _QWORD *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  bool v13; // al
  __int64 v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  void *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  _BOOL8 v23; // rdi
  __int64 j; // rdi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rdi
  void *v28; // rax
  char *s2; // [rsp+8h] [rbp-60h]
  __int64 v33; // [rsp+28h] [rbp-40h]

  v2 = sub_19A9A0(*(unsigned int *)(a2 + 40), a2);
  LODWORD(v3) = xmmword_8CF2A8;
  if ( qword_8CF2A0 != qword_8CF2A0 + 8LL * (_QWORD)xmmword_8CF2A8 )
  {
    s2 = (char *)v2;
    v4 = (_QWORD *)(qword_8CF2A0 + 8 * xmmword_8CF2A8);
    for ( i = (_QWORD *)qword_8CF2A0; v4 != i; ++i )
    {
      v6 = (_QWORD *)*i;
      if ( !*i )
        continue;
      v7 = &s1;
      if ( v6[8] )
        v7 = (const char *)v6[7];
      LODWORD(v3) = strcmp(v7, s2);
      if ( (_DWORD)v3 )
        continue;
      v8 = *(_QWORD *)(a2 + 32);
      if ( !a1 )
      {
        v14 = v6[19];
        v15 = v6 + 18;
        v16 = (__int64)(v6 + 18);
        if ( !v14 )
          goto LABEL_29;
        do
        {
          while ( 1 )
          {
            v17 = *(_QWORD *)(v14 + 16);
            v18 = *(_QWORD *)(v14 + 24);
            if ( (int)v8 > *(_DWORD *)(v14 + 32) )
              break;
            v16 = v14;
            v14 = *(_QWORD *)(v14 + 16);
            if ( !v17 )
              goto LABEL_27;
          }
          v14 = *(_QWORD *)(v14 + 24);
        }
        while ( v18 );
LABEL_27:
        if ( v15 != (_QWORD *)v16 && (int)v8 >= *(_DWORD *)(v16 + 32) )
        {
LABEL_34:
          *(_QWORD *)(v16 + 40) = a2;
        }
        else
        {
LABEL_29:
          v33 = *(_QWORD *)(a2 + 32);
          v19 = operator new(0x30u);
          *(_QWORD *)(v19 + 40) = 0;
          v20 = (void *)v19;
          *(_DWORD *)(v19 + 32) = v33;
          v21 = sub_381D70(v6 + 17, v16, v33);
          v16 = v21;
          if ( v22 )
          {
            v23 = v21 || v15 == (_QWORD *)v22 || (int)v33 < *(_DWORD *)(v22 + 32);
            v16 = (__int64)v20;
            std::_Rb_tree_insert_and_rebalance(v23, v20, v22, v6 + 18);
            ++v6[22];
            goto LABEL_34;
          }
          if ( !v20 )
            goto LABEL_34;
          operator delete(v20, 0x30u);
          *(_QWORD *)(v16 + 40) = a2;
        }
        v3 = v6[4];
        *(_BYTE *)(v3 + 256) = 1;
        continue;
      }
      if ( a1 == 1 )
      {
        v9 = v6 + 18;
        v10 = v6 + 18;
        if ( v6[19] )
        {
          v11 = v6[19];
          while ( 1 )
          {
            while ( (int)v8 > *(_DWORD *)(v11 + 32) )
            {
              v11 = *(_QWORD *)(v11 + 24);
              if ( !v11 )
                goto LABEL_15;
            }
            v12 = *(_QWORD *)(v11 + 16);
            if ( (int)v8 >= *(_DWORD *)(v11 + 32) )
              break;
            v10 = (_QWORD *)v11;
            v11 = *(_QWORD *)(v11 + 16);
            if ( !v12 )
            {
LABEL_15:
              v13 = v9 == v10;
              goto LABEL_16;
            }
          }
          for ( j = *(_QWORD *)(v11 + 24); j; j = *(_QWORD *)(j + 24) )
          {
            while ( 1 )
            {
              v25 = *(_QWORD *)(j + 16);
              if ( (int)v8 >= *(_DWORD *)(j + 32) )
                break;
              v10 = (_QWORD *)j;
              j = *(_QWORD *)(j + 16);
              if ( !v25 )
                goto LABEL_42;
            }
          }
LABEL_42:
          while ( v12 )
          {
            while ( 1 )
            {
              v26 = *(_QWORD *)(v12 + 16);
              if ( (int)v8 > *(_DWORD *)(v12 + 32) )
                break;
              v11 = v12;
              v12 = *(_QWORD *)(v12 + 16);
              if ( !v26 )
                goto LABEL_45;
            }
            v12 = *(_QWORD *)(v12 + 24);
          }
LABEL_45:
          if ( v6[20] != v11 || v10 != v9 )
          {
            if ( (_QWORD *)v11 != v10 )
            {
              do
              {
                v27 = v11;
                v11 = std::_Rb_tree_increment(v11);
                v28 = (void *)std::_Rb_tree_rebalance_for_erase(v27, v9);
                operator delete(v28, 0x30u);
                --v6[22];
              }
              while ( v10 != (_QWORD *)v11 );
              v3 = v6[4];
              *(_BYTE *)(v3 + 256) = 1;
              continue;
            }
            goto LABEL_19;
          }
        }
        else
        {
          v13 = 1;
LABEL_16:
          if ( (_QWORD *)v6[20] != v10 || !v13 )
            goto LABEL_19;
        }
        sub_382200((_QWORD *)v6[19]);
        v6[20] = v9;
        v6[19] = 0;
        v6[21] = v9;
        v6[22] = 0;
      }
LABEL_19:
      v3 = v6[4];
      *(_BYTE *)(v3 + 256) = 1;
    }
  }
  return v3;
}
