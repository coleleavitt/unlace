void __fastcall sub_1EE9FA0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // ebp
  int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+28h] [rbp-C0h]
  _BYTE v23[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = *a1;
  v4 = *(_QWORD *)(v3 + 32);
  v5 = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(a2 + 52) = *(_QWORD *)(v4 + 8LL * v5);
  v6 = v5 + 2;
  v7 = *(_QWORD *)(v4 + 8LL * (v5 + 1));
  *(_DWORD *)(v3 + 24) = v6;
  *(_DWORD *)(a2 + 56) = v7;
  v8 = sub_1EE7490(v3);
  v9 = *a1;
  *(_DWORD *)(a2 + 12) = v8;
  *(_DWORD *)(a2 + 40) = sub_1EE7490(v9);
  *(_QWORD *)(a2 + 24) = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v11 = *(unsigned int *)(a2 + 16);
  *(_QWORD *)(a2 + 32) = v10;
  v12 = v11;
  ptr = v23;
  v22 = 0x1000000000LL;
  if ( v11 <= 0x10 )
  {
    if ( (_DWORD)v11 )
      goto LABEL_3;
LABEL_12:
    v18 = (unsigned int)v22;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v23, v11, 8);
  if ( !v12 )
    goto LABEL_12;
LABEL_3:
  v13 = 0;
  do
  {
    v14 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v15 = (unsigned int)v22;
    v16 = (unsigned int)v22 + 1LL;
    if ( v16 > HIDWORD(v22) )
    {
      v19 = v14;
      sub_2237220(&ptr, v23, v16, 8);
      v15 = (unsigned int)v22;
      v17 = ptr;
      v14 = v19;
    }
    else
    {
      v17 = ptr;
    }
    v17[v15] = v14;
    ++v13;
    v18 = (unsigned int)(v22 + 1);
    LODWORD(v22) = v22 + 1;
  }
  while ( v13 != v12 );
LABEL_7:
  v20[1] = v18;
  v20[0] = ptr;
  sub_EB8020((__int64)v20, (char *)(a2 + 72));
  if ( ptr != v23 )
    free(ptr);
}
