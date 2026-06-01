void __fastcall sub_1EEC240(__int64 *a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // r14
  int v4; // r15d
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // [rsp+8h] [rbp-F0h]
  __int64 v15; // [rsp+8h] [rbp-F0h]
  __int64 v16; // [rsp+18h] [rbp-E0h]
  void *v17; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = sub_1EE7490(*a1);
  v3 = *(unsigned int *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v2;
  ptr = v21;
  v20 = 0x1000000000LL;
  if ( v3 > 0x10 )
  {
    sub_2237220(&ptr, v21, v3, 8);
    v14 = (char *)(a2 + 24);
  }
  else
  {
    v14 = (char *)(a2 + 24);
    if ( !(_DWORD)v3 )
    {
      v17 = ptr;
      v18 = (unsigned int)v20;
      sub_EB8020((__int64)&v17, (char *)(a2 + 24));
      LODWORD(v20) = 0;
      v11 = 0;
      goto LABEL_13;
    }
  }
  v4 = 0;
  do
  {
    v5 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v6 = (unsigned int)v20;
    v7 = (unsigned int)v20 + 1LL;
    if ( v7 > HIDWORD(v20) )
    {
      v16 = v5;
      sub_2237220(&ptr, v21, v7, 8);
      v6 = (unsigned int)v20;
      v8 = ptr;
      v5 = v16;
    }
    else
    {
      v8 = ptr;
    }
    v8[v6] = v5;
    ++v4;
    v9 = (unsigned int)(v20 + 1);
    LODWORD(v20) = v20 + 1;
  }
  while ( v4 != (_DWORD)v3 );
  v18 = v9;
  v17 = ptr;
  sub_EB8020((__int64)&v17, v14);
  LODWORD(v20) = 0;
  if ( v3 > HIDWORD(v20) )
    sub_2237220(&ptr, v21, v3, 8);
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v12 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v13 = (unsigned int)v20 + 1LL;
      if ( v13 > HIDWORD(v20) )
        break;
      ++v10;
      *((_QWORD *)ptr + (unsigned int)v20) = v12;
      v11 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
      if ( v10 == (_DWORD)v3 )
        goto LABEL_13;
    }
    v15 = v12;
    sub_2237220(&ptr, v21, v13, 8);
    ++v10;
    *((_QWORD *)ptr + (unsigned int)v20) = v15;
    v11 = (unsigned int)(v20 + 1);
    LODWORD(v20) = v20 + 1;
  }
  while ( (_DWORD)v3 != v10 );
LABEL_13:
  sub_EB86E0(a2, (__int64)ptr, v11);
  if ( ptr != v21 )
    free(ptr);
}
