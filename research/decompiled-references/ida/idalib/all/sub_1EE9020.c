// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1EE9020(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rdx
  int v12; // r12d
  char *v13; // r15
  int v14; // r13d
  __int64 v15; // rax
  int v16; // r13d
  __int64 v17; // rax
  int v18; // r13d
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // rax
  int v22; // r13d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  int i; // r13d
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+18h] [rbp-C0h]
  _BYTE v34[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( !a2 )
  {
    sub_1EACA60(a1, 0);
    *(_QWORD *)&word_10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    BUG();
  }
  sub_1EACA60(a1, a2 + 24);
  v3 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v4 = *a1;
  *(_QWORD *)(a2 + 40) = v3;
  v5 = sub_1EE7490(v4);
  v6 = *a1;
  *(_DWORD *)(a2 + 12) = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a2 + 56) = v7;
  v9 = *(unsigned int *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v9 + 1;
  *(_DWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 8 * v9);
  v10 = sub_1EE7490(v8);
  v11 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 52) = v10;
  v12 = v11;
  ptr = v34;
  v33 = 0x1000000000LL;
  if ( v11 > 0x10 )
  {
    v13 = (char *)(a2 + 64);
    sub_2237220(&ptr, v34, v11, 8);
    if ( v12 )
    {
LABEL_4:
      v14 = 0;
      do
      {
        ++v14;
        v15 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v15);
      }
      while ( v14 != v12 );
      v16 = 0;
      v30 = ptr;
      v31 = (unsigned int)v33;
      sub_EB8020((__int64)&v30, v13);
      LODWORD(v33) = 0;
      do
      {
        ++v16;
        v17 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v17);
      }
      while ( v16 != v12 );
      v18 = 0;
      sub_EB56B0(a2, ptr, (unsigned int)v33);
      LODWORD(v33) = 0;
      do
      {
        ++v18;
        v19 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v19);
      }
      while ( v18 != v12 );
      v20 = 0;
      sub_EB84A0(a2, (__int64)ptr, (unsigned int)v33);
      LODWORD(v33) = 0;
      do
      {
        ++v20;
        v21 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v21);
      }
      while ( v20 != v12 );
      v22 = 0;
      sub_EB84D0(a2, (__int64)ptr, (unsigned int)v33);
      LODWORD(v33) = 0;
      do
      {
        ++v22;
        v23 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        sub_14B7B40((__int64)&ptr, v23);
      }
      while ( v22 != v12 );
      v24 = (unsigned int)v33;
      goto LABEL_15;
    }
  }
  else
  {
    v13 = (char *)(a2 + 64);
    if ( (_DWORD)v11 )
      goto LABEL_4;
  }
  v30 = ptr;
  v31 = (unsigned int)v33;
  sub_EB8020((__int64)&v30, v13);
  LODWORD(v33) = 0;
  sub_EB56B0(a2, ptr, 0);
  LODWORD(v33) = 0;
  sub_EB84A0(a2, (__int64)ptr, 0);
  LODWORD(v33) = 0;
  sub_EB84D0(a2, (__int64)ptr, 0);
  LODWORD(v33) = 0;
  v24 = 0;
LABEL_15:
  sub_EB8500(a2, (__int64)ptr, v24);
  *(_QWORD *)(a2 + 40LL * *(unsigned int *)(a2 + 16) + 64) = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v25 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v26 = *(unsigned int *)(a2 + 16);
  LODWORD(v33) = 0;
  *(_QWORD *)(a2 + 40 * v26 + 72) = v25;
  if ( v12 == -1 )
  {
    v29 = 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v28 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      sub_14B7B40((__int64)&ptr, v28);
      if ( v12 == i )
        break;
    }
    v29 = (unsigned int)v33;
  }
  sub_EB8530(a2, (__int64)ptr, v29);
  if ( ptr != v34 )
    free(ptr);
}
