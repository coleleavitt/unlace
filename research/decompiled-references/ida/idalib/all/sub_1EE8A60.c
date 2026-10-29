// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1EE8A60(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rdx
  int v12; // ebp
  char *v13; // r14
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  int v28; // r15d
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // r15d
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // [rsp+0h] [rbp-E8h]
  __int64 v37; // [rsp+0h] [rbp-E8h]
  __int64 v38; // [rsp+0h] [rbp-E8h]
  __int64 v39; // [rsp+0h] [rbp-E8h]
  __int64 v40; // [rsp+8h] [rbp-E0h]
  void *v41; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v42; // [rsp+18h] [rbp-D0h]
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+28h] [rbp-C0h]
  _BYTE v45[184]; // [rsp+30h] [rbp-B8h] BYREF

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
  v7 = *(unsigned int *)(v6 + 24);
  *(_DWORD *)(v6 + 24) = v7 + 1;
  *(_DWORD *)(a2 + 48) = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
  v8 = sub_1EE7490(v6);
  v9 = *a1;
  *(_DWORD *)(a2 + 52) = v8;
  v10 = sub_1EE7490(v9);
  v11 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 56) = v10;
  v12 = v11;
  ptr = v45;
  v44 = 0x1000000000LL;
  if ( v11 <= 0x10 )
  {
    v13 = (char *)(a2 + 64);
    if ( (_DWORD)v11 )
      goto LABEL_4;
LABEL_29:
    v41 = ptr;
    v42 = (unsigned int)v44;
    sub_EB8020((__int64)&v41, v13);
    LODWORD(v44) = 0;
    sub_EB8230(a2, (__int64)ptr, 0);
    LODWORD(v44) = 0;
    sub_EB8260(a2, (__int64)ptr, 0);
    LODWORD(v44) = 0;
    sub_EB8290(a2, (__int64)ptr, 0);
    LODWORD(v44) = 0;
    v33 = 0;
    goto LABEL_24;
  }
  v13 = (char *)(a2 + 64);
  sub_2237220(&ptr, v45, v11, 8);
  if ( !v12 )
    goto LABEL_29;
LABEL_4:
  v14 = 0;
  do
  {
    while ( 1 )
    {
      v16 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v17 = (unsigned int)v44 + 1LL;
      if ( v17 > HIDWORD(v44) )
        break;
      ++v14;
      *((_QWORD *)ptr + (unsigned int)v44) = v16;
      v15 = (unsigned int)(v44 + 1);
      LODWORD(v44) = v44 + 1;
      if ( v14 == v12 )
        goto LABEL_8;
    }
    ++v14;
    v40 = v16;
    sub_2237220(&ptr, v45, v17, 8);
    *((_QWORD *)ptr + (unsigned int)v44) = v40;
    v15 = (unsigned int)(v44 + 1);
    LODWORD(v44) = v44 + 1;
  }
  while ( v12 != v14 );
LABEL_8:
  v18 = 0;
  v42 = v15;
  v41 = ptr;
  sub_EB8020((__int64)&v41, v13);
  LODWORD(v44) = 0;
  do
  {
    while ( 1 )
    {
      v20 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v21 = (unsigned int)v44 + 1LL;
      if ( v21 > HIDWORD(v44) )
        break;
      ++v18;
      *((_QWORD *)ptr + (unsigned int)v44) = v20;
      v19 = (unsigned int)(v44 + 1);
      LODWORD(v44) = v44 + 1;
      if ( v18 == v12 )
        goto LABEL_12;
    }
    v36 = v20;
    sub_2237220(&ptr, v45, v21, 8);
    ++v18;
    *((_QWORD *)ptr + (unsigned int)v44) = v36;
    v19 = (unsigned int)(v44 + 1);
    LODWORD(v44) = v44 + 1;
  }
  while ( v12 != v18 );
LABEL_12:
  v22 = 0;
  sub_EB8230(a2, (__int64)ptr, v19);
  LODWORD(v44) = 0;
  do
  {
    v23 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v24 = (unsigned int)v44;
    v25 = (unsigned int)v44 + 1LL;
    if ( v25 > HIDWORD(v44) )
    {
      v39 = v23;
      sub_2237220(&ptr, v45, v25, 8);
      v24 = (unsigned int)v44;
      v26 = ptr;
      v23 = v39;
    }
    else
    {
      v26 = ptr;
    }
    v26[v24] = v23;
    ++v22;
    v27 = (unsigned int)(v44 + 1);
    LODWORD(v44) = v44 + 1;
  }
  while ( v22 != v12 );
  v28 = 0;
  sub_EB8260(a2, (__int64)ptr, v27);
  LODWORD(v44) = 0;
  do
  {
    while ( 1 )
    {
      v30 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v31 = (unsigned int)v44 + 1LL;
      if ( v31 > HIDWORD(v44) )
        break;
      ++v28;
      *((_QWORD *)ptr + (unsigned int)v44) = v30;
      v29 = (unsigned int)(v44 + 1);
      LODWORD(v44) = v44 + 1;
      if ( v28 == v12 )
        goto LABEL_20;
    }
    v37 = v30;
    sub_2237220(&ptr, v45, v31, 8);
    ++v28;
    *((_QWORD *)ptr + (unsigned int)v44) = v37;
    v29 = (unsigned int)(v44 + 1);
    LODWORD(v44) = v44 + 1;
  }
  while ( v12 != v28 );
LABEL_20:
  v32 = 0;
  sub_EB8290(a2, (__int64)ptr, v29);
  LODWORD(v44) = 0;
  do
  {
    while ( 1 )
    {
      v34 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v35 = (unsigned int)v44 + 1LL;
      if ( v35 > HIDWORD(v44) )
        break;
      ++v32;
      *((_QWORD *)ptr + (unsigned int)v44) = v34;
      v33 = (unsigned int)(v44 + 1);
      LODWORD(v44) = v44 + 1;
      if ( v32 == v12 )
        goto LABEL_24;
    }
    v38 = v34;
    sub_2237220(&ptr, v45, v35, 8);
    ++v32;
    *((_QWORD *)ptr + (unsigned int)v44) = v38;
    v33 = (unsigned int)(v44 + 1);
    LODWORD(v44) = v44 + 1;
  }
  while ( v12 != v32 );
LABEL_24:
  sub_EB82C0(a2, (__int64)ptr, v33);
  if ( ptr != v45 )
    free(ptr);
}
