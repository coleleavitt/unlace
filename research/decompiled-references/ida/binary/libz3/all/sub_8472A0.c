__int64 __fastcall sub_8472A0(_QWORD *a1)
{
  __int64 **v2; // rbp
  __int64 **v3; // r12
  __int64 *v4; // r14
  void *v5; // rdi
  void *v6; // rdi
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 result; // rax
  void *v15; // rdi
  void *v16; // rdi

  v2 = (__int64 **)a1[17];
  *a1 = &off_1C55380;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
      goto LABEL_20;
    do
    {
      v4 = *v2;
      if ( *v2 )
      {
        v5 = (void *)v4[5];
        if ( v5 )
          sub_186B220(v5);
        v6 = (void *)v4[2];
        if ( v6 )
          sub_186B220(v6);
        v7 = (__int64 *)v4[1];
        if ( v7 )
        {
          v8 = &v7[*((unsigned int *)v7 - 1)];
          if ( v7 >= v8 )
            goto LABEL_16;
          do
          {
            while ( 1 )
            {
              v9 = *v7;
              if ( *v7 )
              {
                v10 = *v4;
                if ( (*(_DWORD *)(v9 + 8))-- == 1 )
                  break;
              }
              if ( ++v7 >= v8 )
                goto LABEL_15;
            }
            sub_15D7BC0(v10, v9);
            ++v7;
          }
          while ( v7 < v8 );
LABEL_15:
          v7 = (__int64 *)v4[1];
          if ( v7 )
LABEL_16:
            sub_186B220(v7 - 1);
        }
        sub_186B220(v4);
      }
      ++v2;
    }
    while ( v3 != v2 );
    v3 = (__int64 **)a1[17];
    if ( v3 )
    {
LABEL_20:
      *((_DWORD *)v3 - 1) = 0;
      sub_186B220(v3 - 1);
    }
  }
  v12 = (void *)a1[14];
  if ( v12 )
    sub_186B220(v12);
  v13 = (void *)a1[11];
  if ( v13 )
    sub_186B220(v13);
  result = sub_1600000(a1 + 7);
  v15 = (void *)a1[8];
  if ( v15 )
    result = sub_186B220(v15);
  v16 = (void *)a1[4];
  if ( v16 )
    return sub_186B220(v16);
  return result;
}

