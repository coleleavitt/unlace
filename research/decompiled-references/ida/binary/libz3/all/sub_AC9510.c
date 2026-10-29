void __fastcall sub_AC9510(__int64 a1, __int64 **a2)
{
  __int64 *v2; // r13
  _QWORD *v3; // rbp
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  bool v7; // zf
  void ***v8; // rax
  void **v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void **v20; // [rsp+8h] [rbp-50h]
  void ***v21; // [rsp+8h] [rbp-50h]
  __int64 *i; // [rsp+10h] [rbp-48h]

  v2 = *a2;
  if ( *a2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v3 = (_QWORD *)sub_AC93B0(a1, *v2);
      v4 = *(__int64 (__fastcall **)())(*v3 + 16LL);
      if ( v4 != sub_ACC000 )
      {
        ((void (__fastcall *)(_QWORD *))v4)(v3);
        continue;
      }
      v5 = v3[9];
      if ( v5 )
      {
        v6 = v3[10];
        v7 = (*(_DWORD *)(v5 + 8))-- == 1;
        if ( v7 )
          sub_15D7BC0(v6, v5);
      }
      v8 = (void ***)v3[15];
      v3[9] = 0;
      if ( !v8 )
        continue;
      v9 = *v8;
      if ( !*v8 )
        goto LABEL_35;
      v20 = &v9[*((unsigned int *)v9 - 1)];
      if ( v9 == v20 )
        goto LABEL_34;
      do
      {
        v10 = (__int64 *)*v9;
        if ( !*v9 )
          goto LABEL_31;
        v11 = (__int64 *)v10[1];
        v12 = 2LL * *((unsigned int *)v10 + 4);
        v13 = &v11[v12];
        if ( v11 != &v11[v12] )
        {
          while ( (unsigned __int64)*v11 <= 1 )
          {
            v11 += 2;
            if ( v13 == v11 )
              goto LABEL_24;
          }
          if ( v13 != v11 )
          {
            v14 = *v11;
            if ( *v11 )
            {
              while ( 1 )
              {
                v16 = *v10;
                v7 = (*(_DWORD *)(v14 + 8))-- == 1;
                if ( !v7 )
                  break;
                sub_15D7BC0(v16, v14);
                v15 = v11 + 2;
                if ( v13 == v11 + 2 )
                  goto LABEL_24;
LABEL_20:
                while ( 1 )
                {
                  v14 = *v15;
                  v11 = v15;
                  if ( (unsigned __int64)*v15 > 1 )
                    break;
                  v15 += 2;
                  if ( v13 == v15 )
                    goto LABEL_24;
                }
                if ( v13 == v15 )
                  goto LABEL_24;
              }
            }
            v15 = v11 + 2;
            if ( v13 == v11 + 2 )
              goto LABEL_24;
            goto LABEL_20;
          }
        }
LABEL_24:
        v17 = (void *)v10[9];
        if ( v17 )
          sub_186B220(v17);
        v18 = (void *)v10[4];
        if ( v18 )
          sub_186B220(v18);
        v19 = (void *)v10[1];
        if ( v19 )
          sub_186B220(v19);
        sub_186B220(v10);
LABEL_31:
        ++v9;
      }
      while ( v20 != v9 );
      v8 = (void ***)v3[15];
      if ( v8 )
      {
        v9 = *v8;
        if ( *v8 )
        {
LABEL_34:
          v21 = v8;
          sub_186B220(v9 - 1);
          v8 = v21;
        }
LABEL_35:
        sub_186B220(v8);
      }
      v3[15] = 0;
    }
  }
}

