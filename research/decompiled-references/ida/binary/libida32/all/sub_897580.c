__int64 __fastcall sub_897580(_QWORD **a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  __int64 v7; // r15
  char *v9; // rax
  unsigned int *v10; // r10
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int *v15; // rax
  unsigned int *v16; // r13
  unsigned int *v17; // rsi
  unsigned int *v18; // r10
  unsigned int *v19; // rdx
  unsigned int *v20; // rax
  unsigned int *v22; // r13
  _QWORD *v23; // rdx
  unsigned int *v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-70h]
  unsigned __int64 v28; // [rsp+10h] [rbp-68h]
  unsigned int *v29; // [rsp+18h] [rbp-60h]
  unsigned int *v30; // [rsp+18h] [rbp-60h]
  unsigned int *v31; // [rsp+18h] [rbp-60h]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v4 = a2 + a4;
  v7 = (__int64)a1[6];
  v32[3] = __readfsqword(0x28u);
  if ( a2 == *(_DWORD *)v7 && v4 == *(_DWORD *)(v7 + 4) )
    goto LABEL_6;
  v9 = sub_897360(a1, v7, a2, v4);
  v7 = (__int64)v9;
  if ( v9 )
  {
    if ( a2 != *(_DWORD *)v9 || v4 != *((_DWORD *)v9 + 1) )
    {
      if ( !under_debugger )
        interr(592);
      goto LABEL_51;
    }
LABEL_6:
    v10 = sub_8952A0(a1, a3);
    if ( v10 != (unsigned int *)v7 )
    {
      if ( (_QWORD *)v7 == a1[2] )
      {
        if ( v10 != (unsigned int *)a1[10] )
          goto LABEL_9;
      }
      else if ( v10 != (unsigned int *)(v7 - 16) )
      {
LABEL_9:
        v11 = 4LL * a4;
        v28 = *(_QWORD *)(v7 + 8);
        v12 = *((_BYTE *)a1 + 92);
        if ( a2 >= a3 )
        {
          if ( v10 == (unsigned int *)a1[10] )
            v27 = **a1;
          else
            v27 = *((_QWORD *)v10 + 1) + 4LL * (v10[1] - *v10);
          if ( v12 )
          {
            v30 = v10;
            sub_8994C0(*a1, v28, v27, 4LL * a4);
            v10 = v30;
          }
        }
        else
        {
          v13 = *((_QWORD *)v10 + 1);
          v14 = v10[1] - *v10;
          v27 = v13 + 4 * v14;
          if ( v12 )
          {
            v31 = v10;
            sub_8994C0(*a1, v28, v13 + 4 * v14 - v11, 4LL * a4);
            v10 = v31;
          }
        }
        v29 = v10;
        HIDWORD(v32[0]) = a3 + a4;
        LODWORD(v32[0]) = a3;
        v32[1] = v27;
        sub_895360(a1, v32);
        v15 = sub_8951C0(a1, a2, 0, (__int64)a1[3]);
        v16 = (unsigned int *)a1[10];
        v17 = (unsigned int *)a1[2];
        v18 = v29;
        v19 = &v17[4 * (_QWORD)a1[3]];
        if ( v15 != v16 && a2 == *v15 )
        {
          if ( v15 != v19 )
          {
            v25 = (unsigned int *)memmove(v15, v15 + 4, (char *)v19 - (char *)v15 - 16);
            v17 = (unsigned int *)a1[2];
            v18 = v29;
            v16 = v25;
            v26 = (__int64)a1[3] - 1;
            a1[3] = (_QWORD *)v26;
            a1[10] = &v17[4 * v26];
            goto LABEL_15;
          }
        }
        else if ( v16 != v19 )
        {
LABEL_15:
          if ( v18 < v17 || v18 >= (unsigned int *)a1[10] || (v7 = (__int64)v18, a3 != *v18) )
          {
            v20 = sub_8951C0(a1, a3, 0, (__int64)a1[3]);
            v7 = (__int64)a1[10];
            if ( v20 != (unsigned int *)v7 && a3 == *v20 )
              v7 = (__int64)v20;
          }
          if ( v28 >= v27 )
          {
            v22 = v16 - 4;
            if ( v22 != (unsigned int *)v7 )
            {
              v23 = a1[10];
              if ( v23 != (_QWORD *)v7 )
              {
                v24 = (unsigned int *)(v7 + 16);
                if ( v23 != (_QWORD *)(v7 + 16) )
                {
                  do
                  {
                    *((_QWORD *)v24 + 1) += v11;
                    if ( v22 == v24 )
                      break;
                    v24 += 4;
                  }
                  while ( v24 != (unsigned int *)a1[10] );
                }
              }
            }
          }
          else
          {
            for ( ; v16 != (unsigned int *)a1[10]; v16 += 4 )
            {
              *((_QWORD *)v16 + 1) -= v11;
              if ( (unsigned int *)v7 == v16 )
                break;
            }
          }
          goto LABEL_27;
        }
        if ( !under_debugger )
          interr(804);
LABEL_51:
        BUG();
      }
    }
    *(_DWORD *)v7 = a3;
    *(_DWORD *)(v7 + 4) = a4 + a3;
LABEL_27:
    sub_897480(a1, (unsigned int *)v7);
    return 0;
  }
  return 4294967292LL;
}

