unsigned int *__fastcall sub_A77B10(__int64 *a1)
{
  __int64 v1; // r12
  int v2; // r14d
  int v3; // eax
  _DWORD *v4; // rbx
  _DWORD *v5; // r15
  unsigned int *v6; // r13
  unsigned int *v7; // rbp
  __int64 v8; // rax
  unsigned int *v9; // rax
  int v10; // eax
  __int64 v11; // rdi

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 29) )
  {
    v2 = -1;
    v3 = 1;
  }
  else
  {
    v2 = 1;
    v3 = -1;
  }
  v4 = *(_DWORD **)v1;
  v5 = *(_DWORD **)(v1 + 8);
  if ( *(_BYTE *)(v1 + 28) )
    v2 = v3;
  v6 = nullptr;
  if ( v4 != v5 )
  {
    while ( 1 )
    {
      while ( *v4 == *(_DWORD *)(v1 + 24) )
      {
LABEL_11:
        v4 += 10;
        if ( v5 == v4 )
          return v6;
      }
      v10 = v2;
      if ( (int)v4[2] <= 0 )
        v10 = -v2;
      v11 = *(_QWORD *)(v1 + 32);
      if ( v10 == 1 )
        break;
      v7 = (unsigned int *)sub_FF9F50(v11);
      v8 = sub_FF9FF0(*(_QWORD *)(v1 + 32));
      if ( v6 )
        goto LABEL_8;
LABEL_17:
      v4 += 10;
      v6 = v7;
      if ( v5 == v4 )
        return v6;
    }
    v7 = (unsigned int *)sub_FF9E60(v11);
    v8 = sub_FF9FF0(*(_QWORD *)(v1 + 32));
    if ( !v6 )
      goto LABEL_17;
LABEL_8:
    if ( v7 && v7 != v6 )
    {
      v9 = (unsigned int *)sub_180C100(*(_QWORD *)(v8 + 56), 24);
      *v6 = (*v6 + 1) & 0x3FFFFFFF | *v6 & 0xC0000000;
      *v7 = (*v7 + 1) & 0x3FFFFFFF | *v7 & 0xC0000000;
      *(_QWORD *)v9 = 0;
      *((_QWORD *)v9 + 2) = v7;
      *((_QWORD *)v9 + 1) = v6;
      v6 = v9;
    }
    goto LABEL_11;
  }
  return v6;
}

