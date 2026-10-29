void __fastcall sub_1EE8EF0(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rdx
  int v4; // ebx
  int v5; // r15d
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-E0h]
  _QWORD v12[2]; // [rsp+10h] [rbp-D8h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+28h] [rbp-C0h]
  _BYTE v15[184]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = sub_1EE7490(*a1);
  v3 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v2;
  v4 = v3;
  ptr = v15;
  v14 = 0x1000000000LL;
  if ( v3 <= 0x10 )
  {
    if ( (_DWORD)v3 )
      goto LABEL_3;
LABEL_12:
    v10 = (unsigned int)v14;
    goto LABEL_7;
  }
  sub_2237220(&ptr, v15, v3, 8);
  if ( !v4 )
    goto LABEL_12;
LABEL_3:
  v5 = 0;
  do
  {
    v6 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v7 = (unsigned int)v14;
    v8 = (unsigned int)v14 + 1LL;
    if ( v8 > HIDWORD(v14) )
    {
      v11 = v6;
      sub_2237220(&ptr, v15, v8, 8);
      v7 = (unsigned int)v14;
      v9 = ptr;
      v6 = v11;
    }
    else
    {
      v9 = ptr;
    }
    v9[v7] = v6;
    ++v5;
    v10 = (unsigned int)(v14 + 1);
    LODWORD(v14) = v14 + 1;
  }
  while ( v5 != v4 );
LABEL_7:
  v12[1] = v10;
  v12[0] = ptr;
  sub_EB8020((__int64)v12, (char *)(a2 + 24));
  if ( ptr != v15 )
    free(ptr);
}
