void __fastcall sub_5E4020(__int64 a1)
{
  char v2; // al
  char **v3; // r15
  char *v4; // rdi
  char *v5; // rdi
  char *v6; // r14
  __int64 v7; // r13
  char *i; // r12
  char *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  void **v12; // rbp
  void *v13; // rdi
  void **v14; // rbp
  void *v15; // rdi
  void **v16; // rbp
  void *v17; // rdi
  char **v18; // rax
  char *v19; // rdi
  __int64 v20; // r14
  char *v21; // rbp
  void *v22; // rdi
  char *v23; // rdi
  __int64 v24; // r12
  __int64 j; // r15
  char *v26; // r13
  void *v27; // rdi
  void *v28; // rdi
  _QWORD **v29; // rbp
  char *v30; // [rsp+8h] [rbp-50h]
  char **ptr; // [rsp+10h] [rbp-48h]
  char *v32; // [rsp+18h] [rbp-40h]

  v2 = *(_BYTE *)(a1 + 186) & 0x30;
  switch ( v2 )
  {
    case 16:
      goto LABEL_27;
    case 32:
      v3 = *(char ***)(a1 + 48);
      if ( v3 )
      {
        v4 = v3[3];
        if ( v4 )
        {
          v3[4] = nullptr;
          qfree(v4);
        }
        v5 = *v3;
        if ( *v3 )
        {
          v6 = v3[1];
          if ( v6 )
          {
            v7 = 0;
            for ( i = nullptr; i != v6; ++i )
            {
              v9 = &v5[v7];
              v10 = *(void **)&v5[v7 + 24];
              if ( v10 )
              {
                *((_QWORD *)v9 + 4) = 0;
                qfree(v10);
              }
              v11 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                qfree(v11);
              }
              v5 = *v3;
              v7 += 56;
            }
          }
          v3[1] = nullptr;
          qfree(v5);
        }
        qfree(v3);
      }
      v12 = *(void ***)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      if ( v12 )
      {
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = nullptr;
          qfree(v13);
        }
        qfree(v12);
      }
      v14 = *(void ***)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      if ( v14 )
      {
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = nullptr;
          qfree(v15);
        }
        qfree(v14);
      }
      goto LABEL_26;
    case 0:
LABEL_27:
      v16 = *(void ***)(a1 + 48);
      if ( v16 )
      {
        v17 = *v16;
        if ( *v16 )
        {
          v16[1] = nullptr;
          qfree(v17);
        }
        qfree(v16);
      }
      v18 = *(char ***)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      ptr = v18;
      if ( v18 )
      {
        v19 = *v18;
        if ( *v18 )
        {
          v32 = v18[1];
          if ( v32 )
          {
            v30 = nullptr;
            v20 = 0;
            do
            {
              v21 = &v19[v20];
              v22 = *(void **)&v19[v20 + 56];
              if ( v22 )
              {
                *((_QWORD *)v21 + 8) = 0;
                qfree(v22);
              }
              v23 = *(char **)v21;
              if ( *(_QWORD *)v21 )
              {
                v24 = *((_QWORD *)v21 + 1);
                if ( v24 )
                {
                  for ( j = 0; j != v24; ++j )
                  {
                    v26 = &v23[144 * j];
                    clear_tinfo_t(v26 + 64);
                    v27 = *((void **)v26 + 5);
                    if ( v27 )
                    {
                      *((_QWORD *)v26 + 6) = 0;
                      qfree(v27);
                    }
                    v28 = *((void **)v26 + 2);
                    if ( v28 )
                    {
                      *((_QWORD *)v26 + 3) = 0;
                      qfree(v28);
                    }
                    v23 = *(char **)v21;
                  }
                }
                *((_QWORD *)v21 + 1) = 0;
                qfree(v23);
              }
              ++v30;
              v20 += 88;
              v19 = *ptr;
            }
            while ( v32 != v30 );
          }
          ptr[1] = nullptr;
          qfree(v19);
        }
        qfree(ptr);
      }
      v29 = *(_QWORD ***)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      if ( v29 )
      {
        sub_5E3BF0(v29[2]);
        operator delete(v29, 0x30u);
      }
LABEL_26:
      *(_QWORD *)(a1 + 64) = 0;
      break;
  }
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 185) = 0;
}
