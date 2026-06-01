void __fastcall sub_218D0(__int64 a1, __int64 a2)
{
  void **v3; // rbp
  void *v4; // rdi
  char **v5; // r13
  char *v6; // rdi
  char *v7; // r14
  char *i; // rbp
  char *v9; // r12
  void *v10; // rdi
  char **v11; // r12
  char *v12; // rdi
  char *v13; // r13
  char *j; // rbp
  char *v15; // rax

  switch ( *(_DWORD *)a1 )
  {
    case 0:
    case 1:
    case 5:
    case 6:
    case 7:
      goto LABEL_6;
    case 2:
      v3 = *(void ***)(a1 + 8);
      if ( v3 )
      {
        v4 = *v3;
        if ( *v3 )
        {
          v3[1] = nullptr;
          j__free(v4);
        }
        operator delete(v3, 0x18u);
      }
      goto LABEL_6;
    case 3:
      v5 = *(char ***)(a1 + 8);
      if ( !v5 )
        goto LABEL_6;
      v6 = *v5;
      if ( *v5 )
      {
        v7 = v5[1];
        if ( v7 )
        {
          for ( i = nullptr; i != v7; ++i )
          {
            v9 = &v6[40 * (_QWORD)i];
            sub_218D0(v9 + 24);
            v10 = *(void **)v9;
            if ( *(_QWORD *)v9 )
            {
              *((_QWORD *)v9 + 1) = 0;
              j__free(v10);
            }
            v6 = *v5;
          }
        }
        v5[1] = nullptr;
        j__free(v6);
      }
      j__free(v5);
      *(_OWORD *)a1 = 0;
      break;
    case 4:
      v11 = *(char ***)(a1 + 8);
      if ( v11 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          v13 = v11[1];
          if ( v13 )
          {
            for ( j = nullptr; j != v13; ++j )
            {
              v15 = j;
              sub_218D0(&v12[16 * (_QWORD)v15]);
              v12 = *v11;
            }
          }
          v11[1] = nullptr;
          j__free(v12);
        }
        operator delete(v11, 0x18u);
        *(_OWORD *)a1 = 0;
      }
      else
      {
LABEL_6:
        *(_OWORD *)a1 = 0;
      }
      break;
    default:
      if ( !byte_7BCA0 )
        sub_2A3D0(1315, a2);
      BUG();
  }
}

