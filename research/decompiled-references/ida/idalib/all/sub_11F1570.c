void __fastcall sub_11F1570(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r14
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // r13
  _QWORD *v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi

  *a1 = off_2C396F8;
  v2 = (_QWORD *)a1[482];
  if ( v2 != a1 + 484 )
    operator delete(v2);
  if ( *((_BYTE *)a1 + 3840) )
    sub_11F0AD0((__int64)(a1 + 346));
  v3 = (_QWORD *)a1[338];
  if ( v3 != a1 + 340 )
    operator delete(v3);
  if ( *((_BYTE *)a1 + 2688) )
  {
    v8 = (char *)a1[331];
    if ( *((_DWORD *)a1 + 665) )
    {
      v9 = *((_DWORD *)a1 + 664);
      if ( v9 )
      {
        v10 = 0;
        v11 = 8LL * (unsigned int)(v9 - 1) + 8;
        do
        {
          v12 = *(_QWORD **)&v8[v10];
          if ( v12 != (_QWORD *)-8LL && v12 )
          {
            v13 = (_QWORD *)v12[1];
            v14 = *v12 + 41LL;
            if ( v13 != v12 + 3 )
              operator delete(v13);
            operator delete(v12, v14, 8);
            v8 = (char *)a1[331];
          }
          v10 += 8;
        }
        while ( v11 != v10 );
      }
    }
    free(v8);
    v15 = (_QWORD *)a1[327];
    if ( v15 != a1 + 329 )
      operator delete(v15);
    v16 = (_QWORD *)a1[323];
    if ( v16 != a1 + 325 )
      operator delete(v16);
    v17 = (_QWORD *)a1[319];
    if ( v17 != a1 + 321 )
      operator delete(v17);
    v18 = (_QWORD *)a1[315];
    if ( v18 != a1 + 317 )
      operator delete(v18);
  }
  v4 = (_QWORD *)a1[305];
  if ( v4 != a1 + 307 )
    operator delete(v4);
  v5 = a1[300];
  *a1 = off_2C39A48;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = a1[299];
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = a1[298];
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_112BEE0((__int64)a1);
  operator delete(a1, 0xF58u);
}
