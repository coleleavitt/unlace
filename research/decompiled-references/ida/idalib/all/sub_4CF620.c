void __fastcall sub_4CF620(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rax
  __int64 v8; // rcx
  char *v9; // rsi
  char **v10; // r14
  char **i; // r12
  char *v12; // rbx
  __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  size_t v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rax
  char *v18; // r11
  void *v19; // rax
  _QWORD *v20; // [rsp+0h] [rbp-58h]
  char *v22; // [rsp+18h] [rbp-40h]

  if ( a2 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 1720LL);
    v6 = (_QWORD *)(v5 + 104);
    v7 = *(_QWORD **)(v5 + 112);
    v20 = v6;
    if ( v7 )
    {
      do
      {
        while ( 1 )
        {
          v8 = v7[2];
          v9 = (char *)v7[3];
          if ( v7[4] >= a3 )
            break;
          v7 = (_QWORD *)v7[3];
          if ( !v9 )
            goto LABEL_7;
        }
        v6 = v7;
        v7 = (_QWORD *)v7[2];
      }
      while ( v8 );
LABEL_7:
      while ( v20 != v6 )
      {
        if ( v6[4] >= a4 )
          break;
        v10 = (char **)v6[5];
        for ( i = &v10[3 * v6[6]]; i != v10; v10 += 3 )
        {
          v16 = a2[1];
          v9 = (char *)*a2;
          if ( a2[2] < (unsigned __int64)(v16 + 1) )
          {
            v17 = qvector_reserve(a2, v9, v16 + 1, 32);
            v16 = a2[1];
            *a2 = v17;
            v9 = (char *)v17;
          }
          a3 = 32 * v16;
          v12 = &v9[a3];
          *(_QWORD *)v12 = -1;
          v13 = (__int64)&v9[a3 + 8];
          *((_QWORD *)v12 + 1) = 0;
          *((_OWORD *)v12 + 1) = 0;
          ++a2[1];
          *(_QWORD *)v12 = v6[4];
          if ( (char **)v13 != v10 )
          {
            v14 = (unsigned __int64)v10[1];
            if ( v14 && (v15 = v14 - 1, v14 != 1) )
            {
              v18 = *v10;
              v19 = *((void **)v12 + 1);
              if ( *((_QWORD *)v12 + 3) < v14 )
              {
                v22 = *v10;
                v19 = (void *)qvector_reserve(v13, *((_QWORD *)v12 + 1), v10[1], 1);
                v18 = v22;
                v15 = v14 - 1;
                *((_QWORD *)v12 + 1) = v19;
              }
              *((_QWORD *)v12 + 2) = v14;
              v9 = v18;
              memmove(v19, v18, v15);
              *(_BYTE *)(*((_QWORD *)v12 + 1) + v14 - 1) = 0;
            }
            else
            {
              *((_QWORD *)v12 + 2) = 0;
            }
          }
        }
        v6 = (_QWORD *)std::_Rb_tree_increment(v6, v9, a3, v8);
      }
    }
  }
}
