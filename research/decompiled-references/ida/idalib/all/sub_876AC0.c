_BYTE *__fastcall sub_876AC0(__int64 a1)
{
  unsigned int *v1; // rbx
  char *v3; // rax
  _QWORD *v4; // rax
  unsigned int *v5; // rdi
  _QWORD *v6; // r12
  int v7; // eax
  unsigned int *v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  double v11; // rcx
  __int64 v12; // rdx
  _QWORD *v14; // r14
  _QWORD *v15; // rax
  double v16[7]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(unsigned int **)a1;
  *(_QWORD *)&v16[1] = __readfsqword(0x28u);
  v16[0] = 0.0;
  if ( !*v1 )
  {
    v1[36] = 1;
    v3 = sub_867CC0((__int64)v1, 1u, 0, 0, 142, 8);
    if ( v3 )
      *v3 = -113;
  }
  sub_86B8E0(v1, 32, 1, 0, 9, 0);
  sub_86B8E0(v1, 32, 4, 0, 129, 16);
  sub_86B8E0(v1, 32, 3, 0, 127, 0);
  v4 = sub_86E080(v1, 5, 2, 0, 4, 0);
  v5 = *(unsigned int **)a1;
  v6 = v4;
  if ( *(_DWORD *)(a1 + 168) == 1 )
  {
    sub_86B8E0(v5, 33, 1, 0, 130, -1);
    goto LABEL_8;
  }
  sub_86D900(v5, 0x42u, 2, 0, 2, 0, 0x7Fu, 1);
  v7 = *(_DWORD *)(a1 + 168);
  v8 = *(unsigned int **)a1;
  if ( v7 == 2 )
  {
    sub_86D900(v8, 0x40u, 1, 0, 142, *(int *)(a1 + 92), 0x7Fu, 1);
    v14 = sub_86E080(v8, 5, 1, 0, 2, 0);
    sub_86B8E0(v8, 32, 142, *(int *)(a1 + 92), 2, 0);
    v15 = sub_868BC0((__int64)v8);
    if ( !v14 || !v15 )
      goto LABEL_29;
LABEL_28:
    v14[2] &= ~1uLL;
    v14[3] = v15;
LABEL_29:
    v8 = *(unsigned int **)a1;
    goto LABEL_7;
  }
  if ( v7 == 4 )
  {
    v14 = sub_86E080(*(unsigned int **)a1, 5, 142, *(int *)(a1 + 92), 2, 0);
    sub_86B8E0(v8, 32, 142, *(int *)(a1 + 92), 2, 0);
    v15 = sub_868BC0((__int64)v8);
    if ( !v15 || !v14 )
      goto LABEL_29;
    goto LABEL_28;
  }
LABEL_7:
  sub_876A60(v8);
LABEL_8:
  sub_86B8E0(v1, 33, 1, 0, 129, *(_QWORD *)(a1 + 240));
  if ( !*v1 )
  {
    v1[36] = 0;
    sub_86D720(v1, 40, 0, 1, 0, 1, 0, 127, 4);
    if ( !*v1 )
    {
      v1[36] = 0;
      sub_86D220(v1, 0x25232120u, 3, 0, 1, 0, 127, 1);
    }
  }
  v9 = sub_868BC0((__int64)v1);
  if ( v9 && v6 )
  {
    v6[2] &= ~1uLL;
    v6[3] = v9;
  }
  sub_86B8E0(v1, 32, 4, 0, 127, 0);
  sub_86EE90(a1, v16);
  sub_86B8E0(*(unsigned int **)a1, 33, 1, 0, 130, 0);
  sub_86B8E0(v1, 33, 4, 0, 129, *(_QWORD *)(a1 + 240));
  if ( !*v1 )
  {
    v1[36] = 0;
    sub_86D720(v1, 40, 0, 4, 0, 4, 0, 127, 4);
    if ( !*v1 )
    {
      v1[36] = 0;
      sub_86D220(v1, 0x25232120u, 4, 0, 4, 0, 127, 1);
    }
  }
  v10 = sub_868BC0((__int64)v1);
  v11 = v16[0];
  if ( *(_QWORD *)&v16[0] )
  {
    do
    {
      v12 = **(_QWORD **)&v11;
      if ( **(_QWORD **)&v11 && v10 )
      {
        *(_QWORD *)(v12 + 16) &= ~1uLL;
        *(_QWORD *)(v12 + 24) = v10;
      }
      v11 = *(double *)(*(_QWORD *)&v11 + 8LL);
    }
    while ( v11 != 0.0 );
  }
  sub_86B8E0(v1, 32, 1, 0, 142, 8);
  if ( !*v1 )
  {
    v1[36] = 0;
    sub_86D220(v1, 0x35333130u, 4, 0, 4, 0, 3, 0);
  }
  return sub_868F20(v1, 1);
}
