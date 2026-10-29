void __fastcall sub_7729C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r14
  _QWORD *v6; // rbp
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // r13
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  int v15; // ebx
  _QWORD *v16; // [rsp+8h] [rbp-50h]
  __int64 v17[8]; // [rsp+18h] [rbp-40h] BYREF

  v16 = (_QWORD *)(a1 + 16);
  v3 = sub_25D5F70(a1, a1 + 16, a2, 48, v17);
  v4 = *(_QWORD **)a1;
  v5 = v3;
  v6 = (_QWORD *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v6 )
  {
    v7 = v3;
    do
    {
      while ( 1 )
      {
        v7 += 48;
        *(_QWORD *)(v7 - 48) = *v4;
        v8 = v4[1];
        v4[1] = 0;
        *(_QWORD *)(v7 - 40) = v8;
        v9 = v4[2];
        v4[2] = 0;
        *(_QWORD *)(v7 - 32) = v9;
        LODWORD(v9) = *((_DWORD *)v4 + 6);
        *((_DWORD *)v4 + 6) = 0;
        *(_DWORD *)(v7 - 24) = v9;
        *(_QWORD *)(v7 - 16) = v7;
        *(_QWORD *)(v7 - 8) = 0;
        if ( *((_DWORD *)v4 + 10) )
          break;
        v4 += 6;
        if ( v6 == v4 )
          goto LABEL_6;
      }
      v10 = (__int64)(v4 + 4);
      v4 += 6;
      sub_772640(v7 - 16, v10);
    }
    while ( v6 != v4 );
LABEL_6:
    v11 = *(_QWORD **)a1;
    v6 = (_QWORD *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v6 )
    {
      do
      {
        v12 = (_QWORD *)*(v6 - 2);
        v13 = &v12[15 * *((unsigned int *)v6 - 2)];
        if ( v12 != v13 )
        {
          do
          {
            v13 -= 15;
            v14 = (_QWORD *)v13[1];
            if ( v14 != v13 + 3 )
              free(v14);
          }
          while ( v12 != v13 );
          v13 = (_QWORD *)*(v6 - 2);
        }
        if ( v6 != v13 )
          free(v13);
        v6 -= 6;
        operator delete();
      }
      while ( v11 != v6 );
      v6 = *(_QWORD **)a1;
    }
  }
  v15 = v17[0];
  if ( v16 != v6 )
    free(v6);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v15;
}

