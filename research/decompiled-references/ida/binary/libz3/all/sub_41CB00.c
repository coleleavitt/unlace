__int64 __fastcall sub_41CB00(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  void *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 *v11; // r12
  _QWORD *v12; // rbp
  __int64 v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 result; // rax
  void *v19; // rdi

  v2 = a1[1];
  if ( !v2 )
    goto LABEL_14;
  v3 = *(_QWORD *)(v2 + 96);
  if ( !v3 )
    goto LABEL_14;
  v4 = *(unsigned int *)(v3 - 4);
  v5 = (_QWORD *)(v3 + 8 * v4);
  v6 = (8 * v4) >> 3;
  if ( (8 * v4) >> 5 )
  {
    v7 = *(_QWORD **)(v2 + 96);
    while ( a1 != (_QWORD *)*v7 )
    {
      if ( a1 == (_QWORD *)v7[1] )
      {
        ++v7;
        goto LABEL_10;
      }
      if ( a1 == (_QWORD *)v7[2] )
      {
        v7 += 2;
        goto LABEL_10;
      }
      if ( a1 == (_QWORD *)v7[3] )
      {
        v7 += 3;
        goto LABEL_10;
      }
      v7 += 4;
      if ( v7 == (_QWORD *)(v3 + 32 * ((8 * v4) >> 5)) )
      {
        v6 = v5 - v7;
        goto LABEL_38;
      }
    }
    goto LABEL_10;
  }
  v7 = *(_QWORD **)(v2 + 96);
LABEL_38:
  if ( v6 == 2 )
  {
LABEL_42:
    if ( a1 != (_QWORD *)*v7 )
    {
      ++v7;
LABEL_44:
      if ( a1 != (_QWORD *)*v7 )
        goto LABEL_14;
      goto LABEL_10;
    }
    goto LABEL_10;
  }
  if ( v6 != 3 )
  {
    if ( v6 != 1 )
      goto LABEL_14;
    goto LABEL_44;
  }
  if ( a1 != (_QWORD *)*v7 )
  {
    ++v7;
    goto LABEL_42;
  }
LABEL_10:
  if ( v5 != v7 )
  {
    if ( v5 != v7 + 1 )
      memmove(v7, v7 + 1, (char *)(v5 - 1) - (char *)v7);
    *(_DWORD *)(v3 - 4) = v4 - 1;
  }
LABEL_14:
  v8 = (void *)a1[18];
  if ( v8 )
  {
    sub_41CB00(a1[18]);
    sub_186B220(v8);
  }
  sub_3FCDF0(a1[15], a1[16]);
  v9 = a1[13];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[12];
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = (__int64 *)a1[11];
  if ( v11 )
  {
    sub_2B4F40(v11 + 6);
    sub_3FCDF0(v11[4], v11[5]);
    v12 = (_QWORD *)v11[2];
    if ( v12 )
    {
      v13 = *((unsigned int *)v12 - 1);
      if ( (_DWORD)v13 )
      {
        v14 = &v12[7 * v13];
        do
        {
          while ( 1 )
          {
            sub_2B4F40(v12 + 5);
            v15 = v12[2];
            if ( v15 )
            {
              v16 = v12[3];
              if ( (*(_DWORD *)(v15 + 8))-- == 1 )
                break;
            }
            v12 += 7;
            if ( v14 == v12 )
              goto LABEL_28;
          }
          sub_15D7BC0(v16, v15);
          v12 += 7;
        }
        while ( v14 != v12 );
LABEL_28:
        v12 = (_QWORD *)v11[2];
      }
      sub_186B220(v12 - 1);
    }
    sub_186B220(v11);
  }
  sub_3FCDF0(a1[7], a1[8]);
  sub_2B4F40(a1 + 5);
  result = sub_3FCDF0(a1[3], a1[4]);
  v19 = (void *)a1[1];
  if ( v19 )
    return sub_41CD50(v19);
  return result;
}

