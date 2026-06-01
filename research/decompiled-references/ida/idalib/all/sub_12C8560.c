_QWORD *__fastcall sub_12C8560(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rbx
  _QWORD *v5; // rbp
  _QWORD *v6; // r14
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // r13
  char *v14; // rbx
  size_t v15; // rax
  __int64 v16; // rax
  _DWORD v17[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v17[0] = 2986;
  v2 = sub_21B6DA0(a2, v17, 1);
  v3 = *(_QWORD *)(a2 + 8);
  v4 = (_QWORD *)(v3 + 8LL * (unsigned int)v2);
  v5 = (_QWORD *)(v3 + 8 * HIDWORD(v2));
  if ( v4 == v5 )
    goto LABEL_5;
  while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 2986) )
  {
    if ( v5 == ++v4 )
      goto LABEL_5;
  }
  if ( v4 == v5 )
  {
LABEL_5:
    v6 = a1 + 2;
  }
  else
  {
    do
    {
      v8 = *v4;
      if ( *(_QWORD *)(*v4 + 16LL) )
        v8 = *(_QWORD *)(*v4 + 16LL);
      ++v4;
      *(_BYTE *)(v8 + 44) |= 1u;
      if ( v4 == v5 )
        break;
      while ( !*v4 || !(unsigned __int8)sub_21B9810(*v4, 2986) )
      {
        if ( v5 == ++v4 )
          goto LABEL_15;
      }
    }
    while ( v4 != v5 );
LABEL_15:
    v6 = a1 + 2;
    v17[0] = 2986;
    v9 = sub_21B6DA0(a2, v17, 1);
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (_QWORD *)(v10 + 8LL * (unsigned int)v9);
    v12 = (_QWORD *)(v10 + 8 * HIDWORD(v9));
    if ( v11 == v12 )
      goto LABEL_19;
    while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 2986) )
    {
      if ( v12 == ++v11 )
        goto LABEL_19;
    }
    if ( v12 == v11 )
    {
LABEL_19:
      v13 = 0;
    }
    else
    {
      while ( 2 )
      {
        v13 = *v11;
        v16 = *(_QWORD *)(*v11 + 16LL);
        if ( !v16 )
          v16 = *v11;
        ++v11;
        *(_BYTE *)(v16 + 44) |= 1u;
        if ( v11 != v12 )
        {
          while ( !*v11 || !(unsigned __int8)sub_21B9810(*v11, 2986) )
          {
            if ( v12 == ++v11 )
            {
              v14 = **(char ***)(v13 + 48);
              if ( v14 )
                goto LABEL_21;
              goto LABEL_6;
            }
          }
          if ( v12 != v11 )
            continue;
        }
        break;
      }
    }
    v14 = **(char ***)(v13 + 48);
    if ( v14 )
    {
LABEL_21:
      v15 = strlen(v14);
      if ( v15 )
      {
        *a1 = v6;
        sub_12C84A0(a1, v14, (__int64)&v14[v15]);
        return a1;
      }
    }
  }
LABEL_6:
  *a1 = v6;
  *(_WORD *)v6 = 17731;
  *((_BYTE *)v6 + 2) = 69;
  a1[1] = 3;
  *((_BYTE *)v6 + 3) = 0;
  return a1;
}
