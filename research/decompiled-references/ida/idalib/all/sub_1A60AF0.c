void __fastcall sub_1A60AF0(__int64 a1, __int64 a2, void **a3, unsigned __int8 a4)
{
  void **v6; // rbp
  unsigned __int64 v7; // rax
  void **v8; // r12
  void **v9; // rbx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rbx
  void **v13; // r12
  __int64 v14; // rdx
  void *vars0; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars8; // [rsp+8h] [rbp+8h]

  sub_168B9B0((__int64)&vars0, a1 + 8, 6283);
  sub_1A5FC70(a1, a2, a3, (__int64)&vars0, a4);
  v6 = (void **)vars0;
  if ( vars0 )
  {
    v7 = vars8;
    if ( vars8 )
    {
      if ( (unsigned __int64)vars0 < vars8 || (unsigned __int64)vars0 > vars8 + 14848 )
      {
        v8 = *((void ***)vars0 + 66);
        v9 = &v8[8 * (unsigned __int64)*((unsigned int *)vars0 + 134)];
        if ( v8 != v9 )
        {
          do
          {
            while ( 1 )
            {
              v9 -= 8;
              v10 = (void **)v9[3];
              if ( v10 == v9 + 5 )
                break;
              operator delete(v10);
              if ( v8 == v9 )
                goto LABEL_7;
            }
          }
          while ( v8 != v9 );
LABEL_7:
          v9 = (void **)v6[66];
        }
        if ( v9 != v6 + 68 )
          free(v9);
        v11 = (void **)v6[52];
        if ( v11 != v6 + 54 )
          free(v11);
        v12 = v6 + 48;
        v13 = v6 + 8;
        do
        {
          while ( *v12 != v12 + 2 )
          {
            operator delete(*v12);
            v12 -= 4;
            if ( v13 == v12 )
            {
              operator delete(v6, 0x3A0u);
              return;
            }
          }
          v12 -= 4;
        }
        while ( v13 != v12 );
        operator delete(v6, 0x3A0u);
      }
      else
      {
        v14 = *(unsigned int *)(vars8 + 14976);
        *(_DWORD *)(vars8 + 14976) = v14 + 1;
        *(_QWORD *)(v7 + 8 * v14 + 14848) = v6;
      }
    }
  }
}
