void __fastcall sub_1EE9D60(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rdx
  int v13; // ebx
  int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  int v20; // ebx
  int v21; // r14d
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // [rsp+8h] [rbp-E0h]
  _QWORD v25[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+28h] [rbp-C0h]
  _BYTE v28[184]; // [rsp+30h] [rbp-B8h] BYREF

  *(_DWORD *)(a2 + 12) = sub_1EE7490(*a1);
  v4 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  sub_EB5A10(a2, v4);
  v5 = *a1;
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(a2 + 20) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  v7 = sub_1EE7490(v5);
  v8 = *a1;
  *(_DWORD *)(a2 + 24) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a2 + 28) = v9;
  v11 = sub_1EE7490(v10);
  v12 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 32) = v11;
  v13 = v12;
  ptr = v28;
  v27 = 0x1000000000LL;
  if ( v12 > 0x10 )
  {
    sub_2237220(&ptr, v28, v12, 8);
    if ( v13 )
    {
LABEL_3:
      v14 = 0;
      do
      {
        v15 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        v16 = (unsigned int)v27;
        v17 = (unsigned int)v27 + 1LL;
        if ( v17 > HIDWORD(v27) )
        {
          v24 = v15;
          sub_2237220(&ptr, v28, v17, 8);
          v16 = (unsigned int)v27;
          v18 = ptr;
          v15 = v24;
        }
        else
        {
          v18 = ptr;
        }
        v18[v16] = v15;
        ++v14;
        v19 = (unsigned int)(v27 + 1);
        LODWORD(v27) = v27 + 1;
      }
      while ( v14 != v13 );
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)v12 )
  {
    goto LABEL_3;
  }
  v19 = (unsigned int)v27;
LABEL_7:
  v20 = 0;
  v25[1] = v19;
  v25[0] = ptr;
  sub_EB8020((__int64)v25, (char *)(a2 + 40));
  v21 = *(_DWORD *)(a2 + 36);
  if ( v21 )
  {
    do
    {
      v22 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v23 = v20++;
      sub_EB59F0(a2, v23, v22);
    }
    while ( v20 != v21 );
  }
  if ( ptr != v28 )
    free(ptr);
}
