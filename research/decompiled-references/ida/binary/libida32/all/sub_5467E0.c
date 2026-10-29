__int64 __fastcall sub_5467E0(_QWORD *a1, __int64 *a2, unsigned int a3, char a4)
{
  __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v14[3]; // [rsp+Ch] [rbp-BCh] BYREF
  __int64 v15; // [rsp+18h] [rbp-B0h] BYREF
  void *v16[4]; // [rsp+20h] [rbp-A8h] BYREF
  void *v17; // [rsp+40h] [rbp-88h]
  __int128 v18; // [rsp+48h] [rbp-80h]
  void *ptr; // [rsp+58h] [rbp-70h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  __int128 v21; // [rsp+70h] [rbp-58h] BYREF
  int v22; // [rsp+80h] [rbp-48h]
  __int16 v23; // [rsp+84h] [rbp-44h]
  char v24; // [rsp+86h] [rbp-42h]
  unsigned __int64 v25; // [rsp+88h] [rbp-40h]

  v14[0] = a3;
  v25 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  v5 = a1[2];
  memset(v16, 0, sizeof(v16));
  v17 = nullptr;
  v7 = (__int64)(a1 + 1);
  ptr = nullptr;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v18 = 0;
  v20 = 0;
  v21 = 0;
  if ( !v5 )
    goto LABEL_9;
  do
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(v5 + 16);
      v9 = *(_QWORD *)(v5 + 24);
      if ( *(_DWORD *)(v5 + 32) < a3 )
        break;
      v7 = v5;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v8 )
        goto LABEL_7;
    }
    v5 = *(_QWORD *)(v5 + 24);
  }
  while ( v9 );
LABEL_7:
  if ( a1 + 1 != (_QWORD *)v7 && a3 >= *(_DWORD *)(v7 + 32) )
  {
    v10 = 0;
  }
  else
  {
LABEL_9:
    v7 = sub_546500(a1, v7, v14, (__int64 *)v16);
    v10 = 1;
  }
  clear_tinfo_t((char *)&v21 + 8);
  if ( ptr )
  {
    *(_QWORD *)&v20 = 0;
    qfree(ptr);
  }
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  if ( v16[1] )
  {
    v16[2] = nullptr;
    qfree(v16[1]);
  }
  v11 = v7 + 40;
  if ( v10 )
  {
    v12 = *a2;
    v15 = 0;
    memset(v16, 0, 24);
    if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, void **, _QWORD, _QWORD *))(v12 + 40))(
            a2,
            &v15,
            v16,
            a3,
            a1) )
    {
      if ( v16[0] )
      {
        v16[1] = nullptr;
        qfree(v16[0]);
      }
      clear_tinfo_t(&v15);
      return 0;
    }
    sub_540940(v7 + 40, (__int64)&v15, (__int64)v16);
    if ( v16[0] )
    {
      v16[1] = nullptr;
      qfree(v16[0]);
    }
    clear_tinfo_t(&v15);
  }
  if ( a4 && !*(_BYTE *)(v7 + 140) )
    return 0;
  return v11;
}

