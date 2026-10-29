__int64 __fastcall sub_83C0E0(__int64 *a1)
{
  __int64 **v1; // r12
  __int64 *v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // r13
  __int64 v10; // rsi
  __int64 *v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 result; // rax
  __int64 **v17; // [rsp+0h] [rbp-48h]

  v1 = (__int64 **)*a1;
  if ( *a1 )
  {
    v17 = &v1[*((unsigned int *)v1 - 1)];
    if ( v1 == v17 )
      goto LABEL_28;
    do
    {
      v2 = *v1;
      if ( *v1 )
      {
        v3 = v2[5];
        if ( v3 )
          sub_186B220((void *)(v3 - 8));
        v4 = v2[4];
        if ( v4 )
          sub_186B220((void *)(v4 - 8));
        v5 = v2[3];
        if ( v5 )
          sub_186B220((void *)(v5 - 8));
        v6 = v2[2];
        if ( v6 )
        {
          v7 = *(unsigned int *)(v6 - 4);
          if ( (_DWORD)v7 )
          {
            v8 = v6 + 32 * v7;
            do
            {
              v9 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v6);
              v10 = v6 + 16;
              v6 += 32;
              sub_182CBA0(v9, v10);
            }
            while ( v6 != v8 );
            v6 = v2[2];
          }
          sub_186B220((void *)(v6 - 8));
        }
        v11 = (__int64 *)v2[1];
        if ( v11 )
        {
          v12 = &v11[*((unsigned int *)v11 - 1)];
          if ( v11 >= v12 )
            goto LABEL_24;
          do
          {
            while ( 1 )
            {
              v13 = *v11;
              if ( *v11 )
              {
                v14 = *v2;
                if ( (*(_DWORD *)(v13 + 8))-- == 1 )
                  break;
              }
              if ( ++v11 >= v12 )
                goto LABEL_23;
            }
            sub_15D7BC0(v14, v13);
            ++v11;
          }
          while ( v11 < v12 );
LABEL_23:
          v11 = (__int64 *)v2[1];
          if ( v11 )
LABEL_24:
            sub_186B220(v11 - 1);
        }
        sub_186B220(v2);
      }
      ++v1;
    }
    while ( v17 != v1 );
    result = *a1;
    v17 = (__int64 **)*a1;
    if ( *a1 )
    {
LABEL_28:
      *((_DWORD *)v17 - 1) = 0;
      return sub_186B220(v17 - 1);
    }
  }
  return result;
}

