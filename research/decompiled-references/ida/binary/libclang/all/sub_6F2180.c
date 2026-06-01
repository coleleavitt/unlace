__int64 __fastcall sub_6F2180(__int64 *a1, __int64 a2, _QWORD *a3)
{
  int v3; // r12d
  __int64 v4; // r13
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int i; // r13d
  __int64 v8; // r12
  unsigned int v9; // r14d
  _BYTE *v10; // rdi
  char v12; // al
  __int64 v14; // [rsp+8h] [rbp-170h]
  __int64 v15; // [rsp+10h] [rbp-168h]
  int v16; // [rsp+18h] [rbp-160h]
  int v17; // [rsp+1Ch] [rbp-15Ch]
  void *v18[18]; // [rsp+20h] [rbp-158h] BYREF
  void *ptr; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-C0h]
  _BYTE v21[184]; // [rsp+C0h] [rbp-B8h] BYREF

  v3 = *((_DWORD *)a1 + 4);
  if ( v3 )
  {
    v4 = 36;
    v5 = 32;
    v14 = *a1;
    memset(&v18[1], 0, 0x88u);
    v18[0] = &v18[2];
    HIDWORD(v18[1]) = 32;
    v20 = 0x2000000000LL;
    v6 = 0;
    ptr = v21;
    while ( 1 )
    {
      if ( v5 >= v6 + 1 )
      {
        *((_DWORD *)ptr + v6) = -1;
      }
      else
      {
        sub_25D6060(&ptr, v21, v6 + 1, 4);
        *((_DWORD *)ptr + (unsigned int)v20) = -1;
      }
      v6 = (unsigned int)(v20 + 1);
      LODWORD(v20) = v20 + 1;
      if ( !--v4 )
        break;
      v5 = HIDWORD(v20);
    }
    v16 = 1;
    v17 = v3 - 1;
    v15 = 0;
    for ( i = sub_6999F0(*(_QWORD **)a2, *(_QWORD *)a2 + 4LL * *(unsigned int *)(a2 + 8)) & (v3 - 1);
          ;
          i = (i + v16++) & v17 )
    {
      v8 = v14 + 152LL * i;
      v9 = sub_25ABE00(a2, v8);
      if ( (_BYTE)v9 )
        break;
      if ( (unsigned __int8)sub_25ABE00(v8, v18) )
      {
        if ( v15 )
          v8 = v15;
        break;
      }
      v12 = sub_25ABE00(v8, &ptr);
      if ( !v15 )
      {
        if ( !v12 )
          v8 = 0;
        v15 = v8;
      }
    }
    v10 = ptr;
    *a3 = v8;
    if ( v10 != v21 )
      free(v10);
    if ( v18[0] != &v18[2] )
      free(v18[0]);
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return v9;
}

