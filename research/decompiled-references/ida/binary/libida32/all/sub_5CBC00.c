__int64 __fastcall sub_5CBC00(__int64 a1)
{
  int v1; // ebp
  __int64 i; // r15
  void **v3; // rbx
  void *v4; // rdi
  char **v5; // r13
  char *v6; // rdi
  char *v7; // r14
  char *j; // r12
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi
  char v12; // al
  char v13; // al
  char *v14; // r14
  char *v15; // r15
  void *v16; // rdi
  __int64 v17; // r13
  char *v18; // rdx
  __int64 k; // rbx
  char *v20; // rax
  void *v21; // rdi
  _QWORD *v22; // rdi
  char *v24; // [rsp+0h] [rbp-48h]

  v24 = *(char **)(a1 + 488);
  if ( v24 )
  {
    while ( 1 )
    {
      v1 = 0;
      for ( i = (__int64)(v24 + 8); *((_DWORD *)v24 + 3074) > v1; i += 192 )
      {
        qfree(*(void **)i);
        *(_QWORD *)i = 0;
        qfree(*(void **)(i + 8));
        v3 = *(void ***)(i + 24);
        *(_QWORD *)(i + 8) = 0;
        if ( v3 )
        {
          v4 = *v3;
          if ( *v3 )
          {
            v3[1] = nullptr;
            qfree(v4);
          }
          qfree(v3);
        }
        v5 = *(char ***)(i + 16);
        *(_QWORD *)(i + 24) = 0;
        if ( v5 )
        {
          v6 = *v5;
          if ( *v5 )
          {
            v7 = v5[1];
            if ( v7 )
            {
              for ( j = nullptr; j != v7; ++j )
              {
                v9 = &v6[48 * (_QWORD)j];
                v10 = *((void **)v9 + 3);
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
                v6 = *v5;
              }
            }
            v5[1] = nullptr;
            qfree(v6);
          }
          qfree(v5);
        }
        v12 = *(_BYTE *)(i + 186);
        *(_QWORD *)(i + 16) = 0;
        v13 = v12 & 0xF;
        if ( v13 == 12 )
        {
          qfree(*(void **)(i + 56));
          *(_QWORD *)(i + 56) = 0;
          *(_DWORD *)(i + 64) = 0;
        }
        else if ( v13 == 13 )
        {
          qfree(*(void **)(i + 72));
          *(_QWORD *)(i + 72) = 0;
          sub_5C8300(i);
        }
        ++v1;
      }
      v14 = *(char **)v24;
      v15 = v24 + 12104;
      do
      {
        v16 = *((void **)v15 + 19);
        if ( v16 )
        {
          *((_QWORD *)v15 + 20) = 0;
          qfree(v16);
        }
        if ( *((_QWORD *)v15 + 16) )
        {
          v17 = *((_QWORD *)v15 + 17);
          if ( v17 )
          {
            v18 = *((char **)v15 + 16);
            for ( k = 0; k != v17; ++k )
            {
              v20 = &v18[24 * k];
              v21 = *(void **)v20;
              if ( *(_QWORD *)v20 )
              {
                *((_QWORD *)v20 + 1) = 0;
                qfree(v21);
                v18 = *((char **)v15 + 16);
              }
            }
          }
          else
          {
            v18 = *((char **)v15 + 16);
          }
          *((_QWORD *)v15 + 17) = 0;
          qfree(v18);
        }
        v22 = v15 + 112;
        v15 -= 192;
        cleanup_argloc(v22);
      }
      while ( v15 != v24 - 184 );
      operator delete(v24, 0x3010u);
      if ( !v14 )
        break;
      v24 = v14;
    }
  }
  *(_QWORD *)(a1 + 488) = 0;
  *(_BYTE *)(a1 + 739) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  return a1;
}

