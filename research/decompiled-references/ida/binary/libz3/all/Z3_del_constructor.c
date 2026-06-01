char __fastcall Z3_del_constructor(__int64 a1, _QWORD *a2)
{
  char v3; // bp
  __int64 v4; // rsi
  __int64 v5; // rdi
  bool v6; // zf
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rdi
  char result; // al

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
  {
    sub_2956B0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
LABEL_21:
      result = byte_1C7EBA0;
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
      return result;
  }
  v4 = a2[6];
  if ( v4 )
  {
    v5 = a2[7];
    v6 = (*(_DWORD *)(v4 + 8))-- == 1;
    if ( v6 )
    {
      sub_15D7BC0(v5, v4);
      v7 = a2[5];
      if ( !v7 )
        goto LABEL_7;
      goto LABEL_6;
    }
  }
  v7 = a2[5];
  if ( v7 )
LABEL_6:
    sub_186B220((void *)(v7 - 8));
LABEL_7:
  v8 = (__int64 *)a2[4];
  if ( v8 )
  {
    v9 = &v8[*((unsigned int *)v8 - 1)];
    if ( v8 >= v9 )
      goto LABEL_15;
    do
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          v11 = a2[3];
          v6 = (*(_DWORD *)(v10 + 8))-- == 1;
          if ( v6 )
            break;
        }
        if ( ++v8 >= v9 )
          goto LABEL_14;
      }
      sub_15D7BC0(v11, v10);
      ++v8;
    }
    while ( v8 < v9 );
LABEL_14:
    v8 = (__int64 *)a2[4];
    if ( v8 )
LABEL_15:
      sub_186B220(v8 - 1);
  }
  v12 = a2[2];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  result = sub_186B220(a2);
  if ( v3 )
    goto LABEL_21;
  return result;
}

