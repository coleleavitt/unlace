__int64 __fastcall sub_647DD0(__int64 a1)
{
  size_t v2; // r14
  __int64 v3; // r12
  __int64 *v4; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rdi
  bool v11; // al
  bool v12; // al
  __int64 v13; // r12
  char *v14; // rdi
  __int64 v15; // [rsp+8h] [rbp-E0h]
  __int64 v16; // [rsp+8h] [rbp-E0h]
  __int64 *v17; // [rsp+10h] [rbp-D8h]
  size_t n; // [rsp+18h] [rbp-D0h]
  __int64 *v19; // [rsp+20h] [rbp-C8h]
  _BYTE v20[32]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE *v21[11]; // [rsp+90h] [rbp-58h] BYREF

  if ( !*(_DWORD *)(a1 + 16) )
    return operator delete();
  v2 = 0;
  v3 = -1;
  v19 = nullptr;
  if ( !(unsigned __int8)sub_25B5D80(-1, 0, 0) )
  {
    sub_25B62D0(v20, -1, 0);
    v19 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    if ( !(unsigned __int8)sub_25B5D80(*v19, v19[1], 0) )
    {
      sub_25B62D0(v21, *v19, v19[1]);
      sub_63DFC0(v19, v21);
      std::string::_M_dispose();
    }
    v3 = *v19;
    v2 = v19[1];
    std::string::_M_dispose();
  }
  if ( (unsigned __int8)sub_25B5D80(-2, 0, 0) )
  {
    v4 = *(__int64 **)a1;
    v5 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
    if ( *(_QWORD *)a1 == v5 )
      goto LABEL_43;
    v17 = nullptr;
    v6 = -2;
    n = 0;
  }
  else
  {
    sub_25B62D0(v20, -2, 0);
    v17 = (__int64 *)operator new(0x20u);
    std::string::basic_string();
    if ( !(unsigned __int8)sub_25B5D80(*v17, v17[1], 0) )
    {
      sub_25B62D0(v21, *v17, v17[1]);
      sub_63DFC0(v17, v21);
      std::string::_M_dispose();
    }
    v6 = *v17;
    n = v17[1];
    std::string::_M_dispose();
    v4 = *(__int64 **)a1;
    v5 = *(_QWORD *)a1 + ((unsigned __int64)*(unsigned int *)(a1 + 16) << 6);
    if ( v5 == *(_QWORD *)a1 )
    {
LABEL_40:
      if ( (__int64 *)*v17 != v17 + 2 )
        operator delete((void *)*v17, v17[2] + 1);
      operator delete(v17, 0x20u);
      goto LABEL_43;
    }
  }
  if ( v3 == -1 )
  {
    while ( 1 )
    {
      v14 = (char *)v4[1];
      if ( v14 == (char *)-1LL )
        goto LABEL_32;
      if ( v6 == -1 )
        goto LABEL_50;
      v12 = v14 + 2 == nullptr;
      if ( v6 == -2 )
        goto LABEL_31;
      if ( v4[2] != n )
        goto LABEL_50;
      if ( n )
        break;
LABEL_32:
      v13 = *v4;
      if ( *v4 )
      {
        if ( *(_QWORD *)v13 != v13 + 16 )
          operator delete(*(void **)v13, *(_QWORD *)(v13 + 16) + 1LL);
        operator delete((void *)v13, 0x20u);
      }
      *v4 = 0;
      v4 += 8;
      if ( v4 == (__int64 *)v5 )
        goto LABEL_39;
    }
    v12 = memcmp(v14, (const void *)v6, n) == 0;
LABEL_31:
    if ( !v12 )
    {
LABEL_50:
      sub_25B66C0(v4 + 3);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  do
  {
    v10 = (char *)v4[1];
    v8 = v4[2];
    if ( v3 == -2 )
    {
      if ( v10 == (char *)-2LL )
        goto LABEL_12;
LABEL_19:
      if ( v6 == -1 )
      {
        v11 = v10 + 1 == nullptr;
      }
      else if ( v6 == -2 )
      {
        v11 = v10 + 2 == nullptr;
      }
      else
      {
        if ( v8 != n )
        {
LABEL_25:
          sub_25B66C0(v4 + 3);
          goto LABEL_12;
        }
        if ( !n )
          goto LABEL_12;
        v11 = memcmp(v10, (const void *)v6, n) == 0;
      }
      if ( v11 )
        goto LABEL_12;
      goto LABEL_25;
    }
    if ( v2 != v8 )
      goto LABEL_19;
    v15 = v4[2];
    if ( v2 )
    {
      v7 = memcmp(v10, (const void *)v3, v2);
      v8 = v15;
      if ( v7 )
        goto LABEL_19;
    }
LABEL_12:
    v9 = *v4;
    if ( *v4 )
    {
      if ( *(_QWORD *)v9 != v9 + 16 )
      {
        v16 = *v4;
        operator delete(*(void **)v9, *(_QWORD *)(v9 + 16) + 1LL);
        v9 = v16;
      }
      operator delete((void *)v9, 0x20u);
    }
    *v4 = 0;
    v4 += 8;
  }
  while ( v4 != (__int64 *)v5 );
LABEL_39:
  if ( v17 )
    goto LABEL_40;
LABEL_43:
  if ( v19 )
  {
    if ( (__int64 *)*v19 != v19 + 2 )
      operator delete((void *)*v19, v19[2] + 1);
    operator delete(v19, 0x20u);
  }
  return operator delete();
}

