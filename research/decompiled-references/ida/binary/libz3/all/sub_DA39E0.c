__int64 __fastcall sub_DA39E0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // rdi
  __int64 *v3; // rbx
  __int64 *v4; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  void *v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    sub_DAAB00(*a1, v1[81] & 0xFFFFFFFFFFFFFFFELL);
    sub_DAAB00(v1, v1[82] & 0xFFFFFFFFFFFFFFFELL);
    v2 = v1[80];
    if ( v2 )
      sub_186B220((void *)(v2 - 8));
    sub_17E9B80(v1 + 15);
    v3 = (__int64 *)v1[14];
    if ( v3 )
    {
      v4 = &v3[*((unsigned int *)v3 - 1)];
      if ( v3 >= v4 )
        goto LABEL_12;
      do
      {
        while ( 1 )
        {
          v5 = *v3;
          if ( *v3 )
          {
            v6 = v1[13];
            if ( (*(_DWORD *)(v5 + 8))-- == 1 )
              break;
          }
          if ( ++v3 >= v4 )
            goto LABEL_11;
        }
        sub_15D7BC0(v6, v5);
        ++v3;
      }
      while ( v3 < v4 );
LABEL_11:
      v3 = (__int64 *)v1[14];
      if ( v3 )
LABEL_12:
        sub_186B220(v3 - 1);
    }
    v8 = (void *)v1[4];
    if ( v8 )
      sub_186B220(v8);
    v9 = v1[3];
    if ( v9 )
      sub_186B220((void *)(v9 - 8));
    v10 = v1[1];
    if ( v10 )
      sub_186B220((void *)(v10 - 8));
    return sub_186B220(v1);
  }
  return result;
}

