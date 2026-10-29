__int64 __fastcall sub_2EE240(__int64 a1)
{
  _DWORD *v1; // rax
  _DWORD *v2; // r12
  _DWORD *v3; // rbp
  __int64 *v4; // r13
  __int64 v5; // rdi
  void (__fastcall ***v6)(void *); // rbx
  bool v7; // zf
  void *v8; // rbx
  void *v9; // rbx
  void *v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rax
  void *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  void (__fastcall ***v16)(__int64); // rbx
  _DWORD *v17; // rax
  __int64 result; // rax
  __int64 v19; // rsi
  void *v20; // rdi
  _DWORD *v21; // rdx
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ebx
  __int64 v25; // rbp
  __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 *v28; // [rsp+0h] [rbp-48h]

  v1 = *(_DWORD **)(a1 + 416);
  v2 = v1;
  v3 = &v1[6 * *(unsigned int *)(a1 + 424)];
  if ( v1 == v3 )
  {
    if ( *(_DWORD *)(a1 + 428) )
      goto LABEL_45;
  }
  else
  {
    while ( v2[1] != 2 )
    {
      v2 += 6;
      if ( v3 == v2 )
        goto LABEL_50;
    }
    if ( v3 == v2 )
    {
LABEL_50:
      if ( !*(_DWORD *)(a1 + 428) )
        goto LABEL_32;
      v20 = *(void **)(a1 + 416);
      v19 = *(unsigned int *)(a1 + 424);
      v21 = &v1[6 * v19];
      goto LABEL_34;
    }
    do
    {
      v4 = *((__int64 **)v2 + 2);
      if ( v4 )
      {
        sub_18572D0(v4 + 20);
        v5 = v4[19];
        if ( v5 )
          sub_186B220((void *)(v5 - 8));
        v6 = (void (__fastcall ***)(void *))v4[18];
        if ( v6 )
        {
          v7 = (*((_DWORD *)v6 + 4))-- == 1;
          if ( v7 )
          {
            (**v6)(v6);
            sub_186B220(v6);
          }
        }
        v8 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 14);
        sub_182CBA0(v8, v4 + 16);
        v9 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v4 + 10);
        sub_182CBA0(v9, v4 + 12);
        sub_2334C0(v4 + 8);
        v10 = (void *)v4[5];
        if ( v10 )
          sub_186B220(v10);
        v11 = (__int64 *)v4[4];
        if ( v11 )
        {
          v12 = *((unsigned int *)v11 - 1);
          if ( (_DWORD)v12 )
          {
            v28 = &v11[7 * v12];
            do
            {
              while ( 1 )
              {
                v13 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v11 + 2);
                sub_182CBA0(v13, v11 + 4);
                v14 = *v11;
                if ( *v11 )
                {
                  v15 = v11[1];
                  v7 = (*(_DWORD *)(v14 + 8))-- == 1;
                  if ( v7 )
                    break;
                }
                v11 += 7;
                if ( v11 == v28 )
                  goto LABEL_21;
              }
              sub_15D7BC0(v15, v14);
              v11 += 7;
            }
            while ( v11 != v28 );
LABEL_21:
            v11 = (__int64 *)v4[4];
          }
          sub_186B220(v11 - 1);
        }
        v16 = (void (__fastcall ***)(__int64))v4[3];
        if ( v16 )
        {
          (**v16)(v4[3]);
          sub_186B220(v16);
        }
        sub_186B220(v4);
      }
      v17 = v2 + 6;
      if ( v3 == v2 + 6 )
        break;
      while ( 1 )
      {
        v2 = v17;
        if ( v17[1] == 2 )
          break;
        v17 += 6;
        if ( v3 == v17 )
          goto LABEL_31;
      }
    }
    while ( v3 != v17 );
LABEL_31:
    if ( *(_DWORD *)(a1 + 428) )
      goto LABEL_33;
  }
LABEL_32:
  result = a1;
  if ( !*(_DWORD *)(a1 + 432) )
    return result;
LABEL_33:
  v1 = *(_DWORD **)(a1 + 416);
  v19 = *(unsigned int *)(a1 + 424);
  v20 = v1;
  v21 = &v1[6 * v19];
  if ( v1 != v21 )
  {
LABEL_34:
    v22 = 0;
    do
    {
      while ( v1[1] )
      {
        v1[1] = 0;
        v1 += 6;
        if ( v1 == v21 )
          goto LABEL_38;
      }
      v1 += 6;
      ++v22;
    }
    while ( v1 != v21 );
LABEL_38:
    if ( (unsigned int)v19 <= 0x10 || 3 * (int)v19 >= (unsigned int)(4 * v22) )
      goto LABEL_45;
    if ( v20 )
    {
      sub_186B220(v20);
      v23 = *(_DWORD *)(a1 + 424);
      *(_QWORD *)(a1 + 416) = 0;
      v24 = v23 >> 1;
      *(_DWORD *)(a1 + 424) = v23 >> 1;
      v25 = v23 >> 1;
      v26 = sub_186B270(24 * v25);
      if ( !v24 )
      {
LABEL_44:
        *(_QWORD *)(a1 + 416) = v26;
        goto LABEL_45;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 416) = 0;
      v25 = (unsigned int)v19 >> 1;
      *(_DWORD *)(a1 + 424) = (unsigned int)v19 >> 1;
      v26 = sub_186B270(24 * v25);
    }
    v27 = (_QWORD *)v26;
    do
    {
      *v27 = 0;
      v27 += 3;
      *(v27 - 2) = 0;
    }
    while ( v27 != (_QWORD *)(v26 + 24 * v25) );
    goto LABEL_44;
  }
LABEL_45:
  result = a1;
  *(_QWORD *)(a1 + 428) = 0;
  return result;
}

