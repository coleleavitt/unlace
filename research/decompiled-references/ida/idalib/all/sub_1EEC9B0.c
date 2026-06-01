void __fastcall sub_1EEC9B0(__int64 *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rdx
  int v11; // ebx
  int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // r14d
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // [rsp+8h] [rbp-E0h]
  _QWORD v23[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+28h] [rbp-C0h]
  _BYTE v26[184]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = sub_1EE7490(*a1);
  v5 = *a1;
  *(_DWORD *)(a2 + 12) = v4;
  v6 = *(unsigned int *)(v5 + 24);
  *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(a2 + 20) = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 8 * v6);
  v7 = sub_1EE7490(v5);
  v8 = *a1;
  *(_DWORD *)(a2 + 24) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 28) = v9;
  v11 = v10;
  ptr = v26;
  v25 = 0x1000000000LL;
  if ( v10 > 0x10 )
  {
    sub_2237220(&ptr, v26, v10, 8);
    if ( v11 )
    {
LABEL_3:
      v12 = 0;
      do
      {
        v13 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        v14 = (unsigned int)v25;
        v15 = (unsigned int)v25 + 1LL;
        if ( v15 > HIDWORD(v25) )
        {
          v22 = v13;
          sub_2237220(&ptr, v26, v15, 8);
          v14 = (unsigned int)v25;
          v16 = ptr;
          v13 = v22;
        }
        else
        {
          v16 = ptr;
        }
        v16[v14] = v13;
        ++v12;
        v17 = (unsigned int)(v25 + 1);
        LODWORD(v25) = v25 + 1;
      }
      while ( v12 != v11 );
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)v10 )
  {
    goto LABEL_3;
  }
  v17 = (unsigned int)v25;
LABEL_7:
  v18 = 0;
  v23[1] = v17;
  v23[0] = ptr;
  sub_EB8020((__int64)v23, (char *)(a2 + 40));
  v19 = *(_DWORD *)(a2 + 32);
  if ( v19 )
  {
    do
    {
      v20 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v21 = v18++;
      sub_EB5C30(a2, v21, v20);
    }
    while ( v18 != v19 );
  }
  if ( ptr != v26 )
    free(ptr);
}
