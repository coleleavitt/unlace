void __fastcall sub_12C50C0(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 v15; // [rsp+Eh] [rbp-8Ah] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-88h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  _BYTE v19[104]; // [rsp+30h] [rbp-68h] BYREF

  LODWORD(ptr) = 3053;
  v4 = sub_21B6DA0(a2, &ptr, 1);
  v5 = a2[1];
  v6 = (_QWORD *)(v5 + 8LL * (unsigned int)v4);
  v7 = (_QWORD *)(v5 + 8 * HIDWORD(v4));
  if ( v6 == v7 )
    goto LABEL_5;
  while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
  {
    if ( v7 == ++v6 )
      goto LABEL_5;
  }
  if ( v7 == v6 )
  {
LABEL_5:
    LODWORD(ptr) = 3055;
    v8 = sub_21B6DA0(a2, &ptr, 1);
    v9 = a2[1];
    v10 = (_QWORD *)(v9 + 8LL * (unsigned int)v8);
    v11 = (_QWORD *)(v9 + 8 * HIDWORD(v8));
    if ( v10 == v11 )
      goto LABEL_9;
    while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3055) )
    {
      if ( v11 == ++v10 )
        goto LABEL_9;
    }
    if ( v10 == v11 )
    {
LABEL_9:
      v12 = getenv("XCC_C_INCLUDE_PATH");
      if ( v12 )
      {
        v16[0] = v12;
        v15 = 58;
        v18 = 0x400000000LL;
        ptr = v19;
        v16[1] = strlen(v12);
        sub_22471D0(v16, &ptr, &v15, 1, 0xFFFFFFFFLL, 1);
        sub_112D6D0(a2, a3, (__int64 *)ptr, (unsigned int)v18);
        if ( ptr != v19 )
          free(ptr);
      }
    }
    else
    {
      do
      {
        v14 = *v10;
        if ( *(_QWORD *)(*v10 + 16LL) )
          v14 = *(_QWORD *)(*v10 + 16LL);
        ++v10;
        *(_BYTE *)(v14 + 44) |= 1u;
        if ( v10 == v11 )
          break;
        while ( !*v10 || !(unsigned __int8)sub_21B9810(*v10, 3055) )
        {
          if ( v11 == ++v10 )
            return;
        }
      }
      while ( v11 != v10 );
    }
  }
  else
  {
    do
    {
      v13 = *v6;
      if ( *(_QWORD *)(*v6 + 16LL) )
        v13 = *(_QWORD *)(*v6 + 16LL);
      ++v6;
      *(_BYTE *)(v13 + 44) |= 1u;
      if ( v6 == v7 )
        break;
      while ( !*v6 || !(unsigned __int8)sub_21B9810(*v6, 3053) )
      {
        if ( v7 == ++v6 )
          return;
      }
    }
    while ( v7 != v6 );
  }
}
