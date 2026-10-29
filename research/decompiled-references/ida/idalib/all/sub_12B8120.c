void __fastcall sub_12B8120(__int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbx
  _QWORD *v15; // r15
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int16 v20; // [rsp+Eh] [rbp-9Ah] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  __int64 v23; // [rsp+28h] [rbp-80h]
  _BYTE v24[120]; // [rsp+30h] [rbp-78h] BYREF

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
      LODWORD(ptr) = 3052;
      v12 = sub_21B6DA0(a2, &ptr, 1);
      v13 = a2[1];
      v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
      v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
      if ( v14 == v15 )
        goto LABEL_13;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3052) )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
      if ( v15 == v14 )
      {
LABEL_13:
        v16 = getenv("NCC_CPLUS_INCLUDE_PATH");
        if ( v16 )
        {
          v23 = 0x400000000LL;
          v20 = 58;
          ptr = v24;
          v21[0] = v16;
          v21[1] = strlen(v16);
          sub_22471D0(v21, &ptr, &v20, 1, 0xFFFFFFFFLL, 1);
          sub_112D6D0(a2, a3, (__int64 *)ptr, (unsigned int)v23);
          if ( ptr != v24 )
            free(ptr);
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)a1 + 768LL))(a1, a2, a3);
        }
      }
      else
      {
        do
        {
          v19 = *(_QWORD *)(*v14 + 16LL);
          if ( !v19 )
            v19 = *v14;
          ++v14;
          *(_BYTE *)(v19 + 44) |= 1u;
          if ( v14 == v15 )
            break;
          while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 3052) )
          {
            if ( v15 == ++v14 )
              return;
          }
        }
        while ( v14 != v15 );
      }
    }
    else
    {
      do
      {
        v18 = *v10;
        if ( *(_QWORD *)(*v10 + 16LL) )
          v18 = *(_QWORD *)(*v10 + 16LL);
        ++v10;
        *(_BYTE *)(v18 + 44) |= 1u;
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
      v17 = *v6;
      if ( *(_QWORD *)(*v6 + 16LL) )
        v17 = *(_QWORD *)(*v6 + 16LL);
      ++v6;
      *(_BYTE *)(v17 + 44) |= 1u;
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
