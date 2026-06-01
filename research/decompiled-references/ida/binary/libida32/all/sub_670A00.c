unsigned __int64 __fastcall sub_670A00(char *a1, char *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // r12d
  __int64 v6; // rdx
  int v7; // r13d
  __int64 v8; // rax
  int **v9; // r15
  int *v10; // rdx
  int v11; // eax
  int v12; // eax
  char *v13; // rax
  char *v14; // rbp
  __int64 v15; // r10
  char *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // r10
  unsigned int *v20; // rax
  int **v22; // [rsp+8h] [rbp-70h]
  __int64 v23; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v27; // [rsp+28h] [rbp-50h]
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v4 = (unsigned int)a2;
  v5 = (_DWORD)a2 + a4;
  v6 = a3 - (unsigned int)a2;
  v7 = v6;
  v28 = __readfsqword(0x28u);
  v8 = *((_QWORD *)a1 + 201);
  v9 = *(int ***)(v8 + 40);
  v22 = &v9[*(_QWORD *)(v8 + 48)];
  while ( v22 != v9 )
  {
    while ( 1 )
    {
      v10 = *v9;
      v11 = **v9;
      if ( v11 != -1 )
      {
        *v10 = v7 + v11;
        v10 = *v9;
      }
      v12 = v10[1];
      if ( v12 != -1 )
      {
        v10[1] = v7 + v12;
        v10 = *v9;
      }
      v13 = *((char **)v10 + 1);
      v6 = 3LL * *((_QWORD *)v10 + 2);
      a2 = &v13[4 * v6];
      if ( v13 != a2 )
      {
        do
        {
          v6 = *(unsigned int *)v13;
          if ( (unsigned int)v6 >= v4 && (unsigned int)v6 < v5 )
          {
            v6 = (unsigned int)(v7 + v6);
            *(_DWORD *)v13 = v6;
          }
          v13 += 12;
        }
        while ( a2 != v13 );
        v14 = *((char **)*v9 + 1);
        v15 = 12LL * *((_QWORD *)*v9 + 2);
        v16 = &v14[v15];
        if ( v14 != &v14[v15] )
          break;
      }
LABEL_18:
      if ( v22 == ++v9 )
        goto LABEL_19;
    }
    v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 2);
    if ( v17 )
    {
      _BitScanReverse64(&v18, v17);
      v23 = 12LL * *((_QWORD *)*v9 + 2);
      sub_66FAD0(*((_QWORD *)*v9 + 1), (unsigned __int64)v16, 2LL * (int)v18);
      if ( v23 > 192 )
      {
        sub_66F720(v14, v14 + 192);
        v19 = v14 + 192;
        do
        {
          while ( 1 )
          {
            a2 = (char *)*(unsigned int *)v19;
            a1 = *(char **)(v19 + 4);
            v20 = (unsigned int *)(v19 - 12);
            if ( (unsigned int)a2 < *((_DWORD *)v19 - 3) )
              break;
            v6 = (__int64)v19;
            v19 += 12;
            *(_DWORD *)v6 = (_DWORD)a2;
            *(_QWORD *)(v6 + 4) = a1;
            if ( v16 == v19 )
              goto LABEL_18;
          }
          do
          {
            *(_QWORD *)(v20 + 3) = *(_QWORD *)v20;
            v20[5] = v20[2];
            v6 = (__int64)v20;
            v20 -= 3;
          }
          while ( (unsigned int)a2 < *v20 );
          v19 += 12;
          *(_DWORD *)v6 = (_DWORD)a2;
          *(_QWORD *)(v6 + 4) = a1;
        }
        while ( v16 != v19 );
        goto LABEL_18;
      }
    }
    else
    {
      sub_66FAD0(*((_QWORD *)*v9 + 1), (unsigned __int64)v16, -2);
    }
    a2 = v16;
    a1 = v14;
    ++v9;
    sub_66F720(v14, v16);
  }
LABEL_19:
  if ( (unsigned __int8)must_journal(a1, a2, v6) )
  {
    ptr = nullptr;
    v27 = 0;
    sub_407AD0((__int64 *)&ptr, v4);
    sub_407AD0((__int64 *)&ptr, a3);
    sub_407AD0((__int64 *)&ptr, a4);
    add_undo_record(202, ptr, v27);
    if ( ptr )
    {
      *(_QWORD *)&v27 = 0;
      qfree(ptr);
    }
  }
  return v28 - __readfsqword(0x28u);
}

