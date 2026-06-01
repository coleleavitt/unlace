__int64 __fastcall sub_3B2DC0(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rdi
  __int64 result; // rax
  _DWORD *v4; // rbp
  _QWORD *v5; // rax
  unsigned __int64 v6; // rbx
  _QWORD *v7; // r15
  bool v8; // zf
  void *v9; // rdi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r13
  _QWORD *v12; // r12
  void *v13; // rdi
  __int64 v14; // rdi
  void *v15; // rdi
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  _QWORD *v18; // r14
  void *v19; // rdi
  _DWORD *v20; // rax
  __int64 v21; // [rsp+0h] [rbp-58h]
  unsigned __int64 v22; // [rsp+8h] [rbp-50h]
  _QWORD *ptr; // [rsp+10h] [rbp-48h]

  v1 = *(unsigned int *)(a1 + 8);
  v2 = *(_DWORD **)a1;
  result = (__int64)&v2[6 * v1];
  v4 = v2;
  v21 = result;
  if ( v2 != (_DWORD *)result )
  {
    while ( v4[1] != 2 )
    {
      v4 += 6;
      if ( (_DWORD *)result == v4 )
        goto LABEL_48;
    }
    if ( (_DWORD *)result != v4 )
    {
      do
      {
        v5 = *((_QWORD **)v4 + 2);
        ptr = v5;
        if ( v5 )
        {
          v6 = v5[2];
          if ( v6 )
          {
            v22 = v6 + 8LL * *(unsigned int *)(v6 - 4);
            if ( v6 >= v22 )
              goto LABEL_26;
            do
            {
              while ( 1 )
              {
                v7 = *(_QWORD **)v6;
                v8 = (*(_DWORD *)(*(_QWORD *)v6 + 32LL))-- == 1;
                if ( v8 )
                  break;
                v6 += 8LL;
                if ( v6 >= v22 )
                  goto LABEL_25;
              }
              v9 = (void *)v7[9];
              if ( v9 )
                sub_186B220(v9);
              v10 = v7[3];
              if ( v10 )
              {
                v11 = v10 + 8LL * *(unsigned int *)(v10 - 4);
                if ( v10 >= v11 )
                  goto LABEL_23;
                do
                {
                  while ( 1 )
                  {
                    v12 = *(_QWORD **)v10;
                    v8 = (*(_DWORD *)(*(_QWORD *)v10 + 32LL))-- == 1;
                    if ( v8 )
                      break;
                    v10 += 8LL;
                    if ( v10 >= v11 )
                      goto LABEL_22;
                  }
                  v13 = (void *)v12[9];
                  if ( v13 )
                    sub_186B220(v13);
                  v10 += 8LL;
                  sub_3B2C00((__int64)(v12 + 2));
                  sub_186B220(v12);
                }
                while ( v10 < v11 );
LABEL_22:
                v10 = v7[3];
                if ( v10 )
LABEL_23:
                  sub_186B220((void *)(v10 - 8));
              }
              v6 += 8LL;
              sub_186B220(v7);
            }
            while ( v6 < v22 );
LABEL_25:
            v6 = ptr[2];
            if ( v6 )
LABEL_26:
              *(_DWORD *)(v6 - 4) = 0;
          }
          sub_1829A00(ptr + 4);
          v14 = ptr[80];
          if ( v14 )
            sub_186B220((void *)(v14 - 8));
          v15 = (void *)ptr[77];
          if ( v15 )
            sub_186B220(v15);
          sub_18299D0(ptr + 4);
          v16 = ptr[2];
          if ( v16 )
          {
            v17 = v16 + 8LL * *(unsigned int *)(v16 - 4);
            if ( v16 >= v17 )
              goto LABEL_40;
            do
            {
              while ( 1 )
              {
                v18 = *(_QWORD **)v16;
                v8 = (*(_DWORD *)(*(_QWORD *)v16 + 32LL))-- == 1;
                if ( v8 )
                  break;
                v16 += 8LL;
                if ( v16 >= v17 )
                  goto LABEL_39;
              }
              v19 = (void *)v18[9];
              if ( v19 )
                sub_186B220(v19);
              v16 += 8LL;
              sub_3B2C00((__int64)(v18 + 2));
              sub_186B220(v18);
            }
            while ( v16 < v17 );
LABEL_39:
            v16 = ptr[2];
            if ( v16 )
LABEL_40:
              sub_186B220((void *)(v16 - 8));
          }
          sub_186B220(ptr);
        }
        v20 = v4 + 6;
        if ( (_DWORD *)v21 == v4 + 6 )
          break;
        while ( 1 )
        {
          v4 = v20;
          if ( v20[1] == 2 )
            break;
          v20 += 6;
          if ( (_DWORD *)v21 == v20 )
            goto LABEL_47;
        }
      }
      while ( (_DWORD *)v21 != v20 );
LABEL_47:
      result = a1;
      v2 = *(_DWORD **)a1;
    }
  }
LABEL_48:
  if ( v2 )
    return sub_186B220(v2);
  return result;
}

