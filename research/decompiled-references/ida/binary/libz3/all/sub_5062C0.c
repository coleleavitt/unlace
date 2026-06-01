void __fastcall sub_5062C0(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // r12
  _QWORD *v8; // rbx
  __int64 v9; // r13
  _QWORD *v10; // r13
  __int64 v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi

  *a1 = &off_1C66CA0;
  v2 = a1[16];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = (_QWORD *)a1[15];
  *a1 = qword_1C66BA8;
  if ( v3 )
  {
    v4 = v3[4];
    if ( v4 )
      sub_186B220((void *)(v4 - 8));
    v5 = v3[3];
    if ( v5 )
      sub_186B220((void *)(v5 - 8));
    v6 = v3[2];
    if ( v6 )
      sub_186B220((void *)(v6 - 8));
    sub_186B220(v3);
  }
  v7 = (_QWORD *)a1[6];
  if ( v7 )
  {
    v8 = (_QWORD *)*v7;
    if ( *v7 )
    {
      v9 = *((unsigned int *)v8 - 1);
      if ( (_DWORD)v9 )
      {
        v10 = &v8[2 * v9];
        do
        {
          while ( 1 )
          {
            v11 = v8[1];
            if ( v11 )
              sub_186B220((void *)(v11 - 8));
            if ( !*v8 )
              break;
            v12 = (void *)(*v8 - 8LL);
            v8 += 2;
            sub_186B220(v12);
            if ( v8 == v10 )
              goto LABEL_19;
          }
          v8 += 2;
        }
        while ( v8 != v10 );
LABEL_19:
        v8 = (_QWORD *)*v7;
      }
      sub_186B220(v8 - 1);
    }
    sub_186B220(v7);
  }
  sub_180C0E0(a1 + 10);
  v13 = a1[9];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[8];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[5];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[4];
  if ( v16 )
    sub_186B220((void *)(v16 - 8));
  v17 = a1[2];
  *a1 = qword_1C665B0;
  if ( v17 )
    sub_186B220((void *)(v17 - 8));
  operator delete(a1, 0x88u);
}

