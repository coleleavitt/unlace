unsigned __int64 __fastcall sub_775220(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  size_t v3; // rax
  __int64 *v4; // r15
  __int64 v5; // rax
  __int64 *v6; // rbp
  size_t v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  char *v10; // rbp
  char *v11; // r14
  char v12; // r13
  __int64 v13; // rdx
  char v14; // al
  size_t v15; // rax
  size_t v16; // rax
  _BYTE v18[5]; // [rsp+1Eh] [rbp-4Ah] BYREF
  _BYTE v19[5]; // [rsp+23h] [rbp-45h] BYREF
  unsigned __int64 v20[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned int *)(a2 + 32);
  v20[0] = __readfsqword(0x28u);
  v3 = pack_dd(v18, v19, v2) - (_QWORD)v18;
  if ( v3 )
    sub_773F00(a1, v18, v3);
  v4 = *(__int64 **)(a2 + 24);
  v5 = 0;
  v6 = (__int64 *)((char *)v4 + 9 * *(_QWORD *)(a2 + 32));
  if ( v4 == v6 )
    goto LABEL_18;
  do
  {
    v7 = pack_dq(v18, v20, *v4 - v5) - (_QWORD)v18;
    if ( v7 )
      sub_773F00(a1, v18, v7);
    v5 = *v4;
    v4 = (__int64 *)((char *)v4 + 9);
  }
  while ( v6 != v4 );
  v8 = *(_QWORD *)(a2 + 24);
  v9 = v8 + 9LL * *(_QWORD *)(a2 + 32);
  if ( v9 == v8 )
  {
LABEL_18:
    v13 = 0;
  }
  else
  {
    v10 = (char *)(v8 + 8);
    v11 = (char *)(v9 + 8);
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
        v10 += 9;
        v13 = (unsigned int)(v13 + 1);
        if ( v11 == v10 )
          goto LABEL_14;
      }
      v15 = pack_dd(v18, v19, v13) - (_QWORD)v18;
      if ( v15 )
        sub_773F00(a1, v18, v15);
      v10 += 9;
      v13 = 1;
    }
    while ( v11 != v10 );
  }
LABEL_14:
  v16 = pack_dd(v18, v19, v13) - (_QWORD)v18;
  if ( v16 )
    sub_773F00(a1, v18, v16);
  if ( (unsigned __int64)a1[1] > 0x3FFFC00 )
  {
    if ( !under_debugger )
      interr(1800);
    BUG();
  }
  return v20[0] - __readfsqword(0x28u);
}
