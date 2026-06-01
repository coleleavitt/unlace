void __fastcall sub_1EEC6E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int v5; // eax
  unsigned __int64 v6; // rdx
  int v7; // ebp
  int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-80h]
  _QWORD v15[2]; // [rsp+10h] [rbp-78h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+28h] [rbp-60h]
  _BYTE v18[88]; // [rsp+30h] [rbp-58h] BYREF

  *(_DWORD *)(a2 + 12) = sub_1EE7490(*a1);
  v3 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v4 = *a1;
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 16) + 24) = v3;
  v5 = sub_1EE7490(v4);
  v6 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 20) = v5;
  v7 = v6;
  ptr = v18;
  v17 = 0x400000000LL;
  if ( v6 <= 4 )
  {
    if ( (_DWORD)v6 )
      goto LABEL_3;
LABEL_12:
    v13 = (unsigned int)v17;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v18, v6, 8);
  if ( !v7 )
    goto LABEL_12;
LABEL_3:
  v8 = 0;
  do
  {
    v9 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v10 = (unsigned int)v17;
    v11 = (unsigned int)v17 + 1LL;
    if ( v11 > HIDWORD(v17) )
    {
      v14 = v9;
      sub_2237220(&ptr, v18, v11, 8);
      v10 = (unsigned int)v17;
      v12 = ptr;
      v9 = v14;
    }
    else
    {
      v12 = ptr;
    }
    v12[v10] = v9;
    ++v8;
    v13 = (unsigned int)(v17 + 1);
    LODWORD(v17) = v17 + 1;
  }
  while ( v8 != v7 );
LABEL_7:
  v15[1] = v13;
  v15[0] = ptr;
  sub_EB8020((__int64)v15, (char *)(a2 + 24));
  if ( ptr != v18 )
    free(ptr);
}
