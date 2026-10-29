void __fastcall sub_14EDD50(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  void *v4; // rdi
  void **v5; // rbp
  unsigned __int64 v6; // rax
  void **v7; // r12
  void **v8; // rbx
  void **v9; // rdi
  void **v10; // rdi
  void **v11; // rbx
  void **v12; // r12
  void **v13; // r12
  void **v14; // rbx
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rbx
  void **v18; // r12
  void *v19; // rdi
  __int64 v20; // rdx
  void *v21; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-60h]
  __int64 v23; // [rsp+10h] [rbp-58h]
  void *v24; // [rsp+20h] [rbp-48h]
  _BYTE v25[16]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v26; // [rsp+40h] [rbp-28h]

  v3 = *(_DWORD *)(a3 + 8);
  if ( v3 != 1 )
  {
    if ( !v3 )
      return;
LABEL_5:
    sub_1564820(&v21, a1, a2, 1613);
    if ( (_BYTE)v26 )
    {
      sub_FC7790(v23, (__int64 *)&v21, SHIBYTE(v26));
      v4 = v24;
      v23 = 0;
      v26 = 0;
      if ( v24 == v25 )
        goto LABEL_8;
    }
    else
    {
      v4 = v24;
      if ( v24 == v25 )
      {
LABEL_8:
        v5 = (void **)v21;
        if ( v21 )
        {
          v6 = v22;
          if ( v22 )
          {
            if ( (unsigned __int64)v21 >= v22 && (unsigned __int64)v21 <= v22 + 14848 )
            {
LABEL_52:
              v20 = *(unsigned int *)(v6 + 14976);
              *(_DWORD *)(v6 + 14976) = v20 + 1;
              *(_QWORD *)(v6 + 8 * v20 + 14848) = v5;
              return;
            }
            v7 = *((void ***)v21 + 66);
            v8 = &v7[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
            if ( v7 != v8 )
            {
              do
              {
                while ( 1 )
                {
                  v8 -= 8;
                  v9 = (void **)v8[3];
                  if ( v9 == v8 + 5 )
                    break;
                  operator delete(v9);
                  if ( v7 == v8 )
                    goto LABEL_14;
                }
              }
              while ( v7 != v8 );
LABEL_14:
              v8 = (void **)v5[66];
            }
            if ( v8 != v5 + 68 )
              free(v8);
            v10 = (void **)v5[52];
            if ( v10 != v5 + 54 )
              free(v10);
            v11 = v5 + 48;
            v12 = v5 + 8;
            do
            {
              while ( *v11 != v11 + 2 )
              {
                operator delete(*v11);
                v11 -= 4;
                if ( v12 == v11 )
                  goto LABEL_22;
              }
              v11 -= 4;
            }
            while ( v12 != v11 );
LABEL_22:
            operator delete(v5, 0x3A0u);
            return;
          }
        }
        return;
      }
    }
    operator delete(v4);
    goto LABEL_8;
  }
  if ( (unsigned int)(**(_DWORD **)a3 - 1) > 1 )
    goto LABEL_5;
  sub_1564820(&v21, a1, a2, 1991);
  if ( (_BYTE)v26 )
  {
    sub_FC7790(v23, (__int64 *)&v21, SHIBYTE(v26));
    v23 = 0;
    v26 = 0;
  }
  if ( v24 != v25 )
    operator delete(v24);
  v5 = (void **)v21;
  if ( v21 )
  {
    v6 = v22;
    if ( v22 )
    {
      if ( (unsigned __int64)v21 >= v22 && (unsigned __int64)v21 <= v22 + 14848 )
        goto LABEL_52;
      v13 = *((void ***)v21 + 66);
      v14 = &v13[8 * (unsigned __int64)*((unsigned int *)v21 + 134)];
      if ( v13 != v14 )
      {
        do
        {
          while ( 1 )
          {
            v14 -= 8;
            v15 = (void **)v14[3];
            if ( v15 == v14 + 5 )
              break;
            operator delete(v15);
            if ( v13 == v14 )
              goto LABEL_34;
          }
        }
        while ( v13 != v14 );
LABEL_34:
        v14 = (void **)v5[66];
      }
      if ( v14 != v5 + 68 )
        free(v14);
      v16 = (void **)v5[52];
      if ( v16 != v5 + 54 )
        free(v16);
      v17 = v5 + 48;
      v18 = v5 + 8;
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 != v17 + 2 )
          break;
LABEL_43:
        v17 -= 4;
        if ( v17 == v18 )
          goto LABEL_22;
      }
      while ( 1 )
      {
        operator delete(v19);
        v17 -= 4;
        if ( v18 == v17 )
          goto LABEL_22;
        v19 = *v17;
        if ( *v17 == v17 + 2 )
          goto LABEL_43;
      }
    }
  }
}
