void __fastcall sub_1592420(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbx
  char v10; // al
  char ***v11; // rdi
  char ***v12; // rsi
  _QWORD *v13; // r13
  _QWORD *v14; // rdi
  int v15; // r13d
  _QWORD v16[8]; // [rsp+8h] [rbp-40h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 64, v16);
  v5 = v4;
  v6 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
  if ( *(_QWORD **)a1 != v6 )
  {
    v7 = v6 + 2;
    v8 = *(_QWORD *)a1 + 16LL;
    v9 = v4;
    do
    {
      while ( 1 )
      {
        *(_QWORD *)v9 = *(_QWORD *)(v8 - 16);
        *(_BYTE *)(v9 + 8) = *(_BYTE *)(v8 - 8);
        *(_BYTE *)(v9 + 9) = *(_BYTE *)(v8 - 7);
        *(_BYTE *)(v9 + 10) = *(_BYTE *)(v8 - 6);
        *(_BYTE *)(v9 + 11) = *(_BYTE *)(v8 - 5);
        v10 = *(_BYTE *)(v8 - 4);
        *(_DWORD *)(v9 + 24) = 0;
        *(_BYTE *)(v9 + 12) = v10;
        *(_QWORD *)(v9 + 16) = v9 + 32;
        *(_DWORD *)(v9 + 28) = 2;
        if ( *(_DWORD *)(v8 + 8) )
          break;
        v8 += 64;
        v9 += 64;
        if ( (_QWORD *)v8 == v7 )
          goto LABEL_6;
      }
      v11 = (char ***)(v9 + 16);
      v12 = (char ***)v8;
      v8 += 64;
      v9 += 64;
      sub_1591FE0(v11, v12);
    }
    while ( (_QWORD *)v8 != v7 );
LABEL_6:
    v13 = *(_QWORD **)a1;
    v6 = (_QWORD *)(*(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 8) << 6));
    if ( *(_QWORD **)a1 != v6 )
    {
      do
      {
        while ( 1 )
        {
          v6 -= 8;
          v14 = (_QWORD *)v6[2];
          if ( v14 == v6 + 4 )
            break;
          free(v14);
          if ( v13 == v6 )
          {
            v6 = *(_QWORD **)a1;
            goto LABEL_10;
          }
        }
      }
      while ( v13 != v6 );
      v6 = *(_QWORD **)a1;
    }
  }
LABEL_10:
  v15 = v16[0];
  if ( v3 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v15;
}
