__int64 __fastcall sub_2EC9E0(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  void **v3; // rbx
  void **v4; // r13
  void (__fastcall ***v5)(void *); // rbp
  bool v6; // zf
  __int64 result; // rax
  void **v8; // rbx
  void **v9; // r13
  void (__fastcall ***v10)(void *); // rbp
  _QWORD *v11; // rbx
  _QWORD *v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rdi

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 248);
  if ( v2 )
  {
    (**v2)(*(_QWORD *)(a1 + 248));
    sub_186B220(v2);
    *(_QWORD *)(a1 + 248) = 0;
  }
  v3 = *(void ***)(a1 + 272);
  *(_BYTE *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 280) = -1;
  if ( v3 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 >= v4 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v5 = (void (__fastcall ***)(void *))*v3;
        if ( *v3 )
        {
          v6 = (*((_DWORD *)v5 + 4))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v3 >= v4 )
          goto LABEL_10;
      }
      ++v3;
      (**v5)(v5);
      sub_186B220(v5);
    }
    while ( v3 < v4 );
LABEL_10:
    v3 = *(void ***)(a1 + 272);
    if ( v3 )
LABEL_11:
      *((_DWORD *)v3 - 1) = 0;
  }
  result = sub_2EB6D0(*(void (****)(void))(a1 + 616));
  v8 = *(void ***)(a1 + 640);
  *(_QWORD *)(a1 + 616) = 0;
  if ( v8 )
  {
    result = *((unsigned int *)v8 - 1);
    v9 = &v8[result];
    if ( v8 >= v9 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v10 = (void (__fastcall ***)(void *))*v8;
        if ( *v8 )
        {
          v6 = (*((_DWORD *)v10 + 4))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_19;
      }
      ++v8;
      (**v10)(v10);
      result = sub_186B220(v10);
    }
    while ( v8 < v9 );
LABEL_19:
    v8 = *(void ***)(a1 + 640);
    if ( v8 )
LABEL_20:
      *((_DWORD *)v8 - 1) = 0;
  }
  v11 = *(_QWORD **)(a1 + 728);
  if ( v11 )
  {
    result = *((unsigned int *)v11 - 1);
    v12 = &v11[result];
    if ( v11 >= v12 )
      goto LABEL_29;
    do
    {
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 )
        {
          v14 = *(_QWORD *)(a1 + 720);
          v6 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v11 >= v12 )
          goto LABEL_28;
      }
      result = sub_15D7BC0(v14, v13);
      ++v11;
    }
    while ( v11 < v12 );
LABEL_28:
    v11 = *(_QWORD **)(a1 + 728);
    if ( v11 )
LABEL_29:
      *((_DWORD *)v11 - 1) = 0;
  }
  return result;
}

