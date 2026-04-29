__int64 __fastcall sub_101F40(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r14
  unsigned __int8 v4; // bp
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx
  unsigned __int8 v12; // di
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned int i; // r12d
  __int64 v16; // rbx
  char *v17; // r9
  _QWORD *v18; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  v3 = *a2;
  v4 = *((_BYTE *)a2 + 8);
  v20 = *((int *)a2 + 3) + *a2;
  v5 = a1[1];
  v6 = *(_QWORD *)(v5 + 104);
  v7 = 16LL * *(_QWORD *)(v5 + 112);
  v8 = v6;
  v21 = v6 + v7;
  v9 = v7 >> 4;
  if ( v7 > 0 )
  {
    do
    {
      while ( 1 )
      {
        v10 = v9 >> 1;
        v11 = v8 + 16 * (v9 >> 1);
        v12 = *(_BYTE *)(v11 + 8);
        if ( v12 < v4 || v4 >= v12 && v3 > *(_QWORD *)v11 )
          break;
        v9 >>= 1;
        if ( v10 <= 0 )
          goto LABEL_8;
      }
      v8 = v11 + 16;
      v9 = v9 - 1 - v10;
    }
    while ( v9 > 0 );
  }
LABEL_8:
  if ( v8 == v21 || v4 != *(_BYTE *)(v8 + 8) || v3 != *(_QWORD *)v8 )
  {
    if ( !under_debugger )
      sub_3835A0(50142);
    BUG();
  }
  v13 = v8;
  v14 = v8 + 16;
  for ( i = (v13 - v6) >> 4; ; ++i )
  {
    LODWORD(v16) = v20 - v3;
    if ( v14 != v21 && *(_BYTE *)(v14 + 8) == v4 )
    {
      v16 = *(_QWORD *)v14 - v3;
      if ( (int)v20 - (int)v3 <= (int)v16 )
        LODWORD(v16) = v20 - v3;
    }
    v17 = (char *)a1[2];
    v18 = (_QWORD *)(a1[3] + v5);
    if ( ((unsigned __int8)v17 & 1) != 0 )
      v17 = *(char **)&v17[*v18 - 1];
    v3 += (int)v16;
    ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD, _QWORD))v17)(v18, i, (int)v16, a1[4]);
    if ( v20 == v3 )
      break;
    v5 = a1[1];
    v14 += 16;
  }
  return 0;
}
