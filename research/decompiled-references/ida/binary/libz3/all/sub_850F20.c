__int64 __fastcall sub_850F20(_QWORD *a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // r12
  _QWORD *v3; // r13
  __int64 (__fastcall *v4)(_QWORD *); // rdx
  __int64 *v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 *v14; // rbx
  __int64 *v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  __int64 v20; // rdi
  void *v21; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v2 )
      goto LABEL_43;
    do
    {
      v3 = (_QWORD *)*v1;
      if ( *v1 )
      {
        v4 = *(__int64 (__fastcall **)(_QWORD *))*v3;
        if ( v4 == sub_6F1480 )
        {
          v5 = (__int64 *)v3[17];
          *v3 = &off_1C53478;
          if ( v5 )
          {
            v6 = &v5[*((unsigned int *)v5 - 1)];
            if ( v5 >= v6 )
              goto LABEL_13;
            do
            {
              while ( 1 )
              {
                v7 = *v5;
                if ( *v5 )
                {
                  v8 = v3[16];
                  v9 = (*(_DWORD *)(v7 + 8))-- == 1;
                  if ( v9 )
                    break;
                }
                if ( ++v5 >= v6 )
                  goto LABEL_12;
              }
              sub_15D7BC0(v8, v7);
              ++v5;
            }
            while ( v5 < v6 );
LABEL_12:
            v5 = (__int64 *)v3[17];
            if ( v5 )
LABEL_13:
              sub_186B220(v5 - 1);
          }
          v10 = (__int64 *)v3[15];
          if ( v10 )
          {
            v11 = &v10[*((unsigned int *)v10 - 1)];
            if ( v10 >= v11 )
              goto LABEL_22;
            do
            {
              while ( 1 )
              {
                v12 = *v10;
                if ( *v10 )
                {
                  v13 = v3[14];
                  v9 = (*(_DWORD *)(v12 + 8))-- == 1;
                  if ( v9 )
                    break;
                }
                if ( ++v10 >= v11 )
                  goto LABEL_21;
              }
              sub_15D7BC0(v13, v12);
              ++v10;
            }
            while ( v10 < v11 );
LABEL_21:
            v10 = (__int64 *)v3[15];
            if ( v10 )
LABEL_22:
              sub_186B220(v10 - 1);
          }
          v14 = (__int64 *)v3[13];
          if ( v14 )
          {
            v15 = &v14[*((unsigned int *)v14 - 1)];
            if ( v14 >= v15 )
              goto LABEL_31;
            do
            {
              while ( 1 )
              {
                v16 = *v14;
                if ( *v14 )
                {
                  v17 = v3[12];
                  v9 = (*(_DWORD *)(v16 + 8))-- == 1;
                  if ( v9 )
                    break;
                }
                if ( ++v14 >= v15 )
                  goto LABEL_30;
              }
              sub_15D7BC0(v17, v16);
              ++v14;
            }
            while ( v14 < v15 );
LABEL_30:
            v14 = (__int64 *)v3[13];
            if ( v14 )
LABEL_31:
              sub_186B220(v14 - 1);
          }
          v18 = (void *)v3[11];
          if ( v18 )
            sub_186B220(v18);
          v19 = (void *)v3[8];
          if ( v19 )
            sub_186B220(v19);
          v20 = v3[5];
          if ( v20 )
            sub_186B220((void *)(v20 - 8));
          v21 = (void *)v3[4];
          if ( v21 )
            sub_186B220(v21);
        }
        else
        {
          v4((_QWORD *)*v1);
        }
        sub_186B220(v3);
      }
      ++v1;
    }
    while ( v2 != v1 );
    result = (__int64)a1;
    v2 = (_QWORD *)*a1;
    if ( *a1 )
    {
LABEL_43:
      *((_DWORD *)v2 - 1) = 0;
      return sub_186B220(v2 - 1);
    }
  }
  return result;
}

