void __fastcall sub_738930(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdi

  *a1 = &off_1C53F10;
  v2 = (__int64 *)a1[78];
  v3 = &v2[*((unsigned int *)a1 + 158)];
  if ( v2 != v3 )
  {
    v4 = v2;
    do
    {
      v5 = *v4++;
      *(_BYTE *)(v5 + 6) &= ~1u;
    }
    while ( v4 != v3 );
  }
  *((_DWORD *)a1 + 158) = 0;
  if ( v2 != a1 + 80 && v2 )
    sub_186B220(v2);
  v6 = a1[77];
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  v7 = a1[76];
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  v8 = a1[75];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[74];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[66];
  *a1 = &off_1C53EF0;
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  v11 = a1[64];
  if ( v11 )
  {
    v12 = a1[65];
    v13 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v12, v11);
  }
  v14 = a1[62];
  if ( v14 )
  {
    v15 = a1[63];
    v13 = (*(_DWORD *)(v14 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v15, v14);
  }
  v16 = a1[60];
  if ( v16 )
  {
    v17 = a1[61];
    v13 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v17, v16);
  }
  a1[41] = &qword_1C637E8;
  sub_15841B0(a1 + 41);
  a1[21] = &qword_1C637E8;
  sub_15841B0(a1 + 21);
  v18 = a1[20];
  if ( v18 )
    sub_186B220((void *)(v18 - 8));
  sub_15841B0(a1);
  operator delete(a1, 0x318u);
}

