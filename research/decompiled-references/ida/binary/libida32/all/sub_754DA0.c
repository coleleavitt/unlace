unsigned __int64 __fastcall sub_754DA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  int *v4; // rbp
  int v5; // eax
  int *v6; // r13
  size_t v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r15
  char *v10; // rbp
  char *v11; // r15
  char v12; // r13
  __int64 v13; // rdx
  char v14; // al
  size_t v15; // rax
  size_t v16; // rax
  _BYTE v18[5]; // [rsp+3h] [rbp-45h] BYREF
  _QWORD v19[8]; // [rsp+8h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a2 + 32);
  v19[0] = __readfsqword(0x28u);
  v3 = pack_dd(v18, v19, v2) - (_QWORD)v18;
  if ( v3 )
    sub_753A60(a1, v18, v3);
  v4 = *(int **)(a2 + 24);
  v5 = 0;
  v6 = (int *)((char *)v4 + 5 * *(_QWORD *)(a2 + 32));
  if ( v4 == v6 )
    goto LABEL_18;
  do
  {
    v7 = pack_dd(v18, v19, (unsigned int)(*v4 - v5)) - (_QWORD)v18;
    if ( v7 )
      sub_753A60(a1, v18, v7);
    v5 = *v4;
    v4 = (int *)((char *)v4 + 5);
  }
  while ( v6 != v4 );
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + 5LL * *(_QWORD *)(a2 + 32);
  if ( v9 == v8 )
  {
LABEL_18:
    v13 = 0;
  }
  else
  {
    v10 = (char *)(v8 + 4);
    v11 = (char *)(v9 + 4);
    v12 = 1;
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = v12;
        v12 = *v10;
        if ( *v10 != v14 )
          break;
        v10 += 5;
        v13 = (unsigned int)(v13 + 1);
        if ( v11 == v10 )
          goto LABEL_14;
      }
      v15 = pack_dd(v18, v19, v13) - (_QWORD)v18;
      if ( v15 )
        sub_753A60(a1, v18, v15);
      v10 += 5;
      v13 = 1;
    }
    while ( v11 != v10 );
  }
LABEL_14:
  v16 = pack_dd(v18, v19, v13) - (_QWORD)v18;
  if ( v16 )
    sub_753A60(a1, v18, v16);
  if ( (unsigned __int64)a1[1] > 0x3FFFC00 )
  {
    if ( !under_debugger )
      interr(1800);
    BUG();
  }
  return v19[0] - __readfsqword(0x28u);
}

