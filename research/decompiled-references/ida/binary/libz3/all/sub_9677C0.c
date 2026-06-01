void __fastcall sub_9677C0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  int v4; // ebp
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax

  v2 = (_QWORD *)*a1;
  if ( !*a1 )
    return;
  v3 = *((unsigned int *)v2 - 3);
  v4 = *((_DWORD *)v2 - 3);
  v5 = (_QWORD *)((char *)v2 + v3);
  v6 = v3 >> 3;
  v7 = v3 >> 5;
  if ( v7 )
  {
    v8 = (_QWORD *)*a1;
    v9 = &v2[4 * v7];
    while ( a2 != *v8 )
    {
      if ( a2 == v8[1] )
      {
        ++v8;
        goto LABEL_9;
      }
      if ( a2 == v8[2] )
      {
        v8 += 2;
        goto LABEL_9;
      }
      if ( a2 == v8[3] )
      {
        v8 += 3;
        goto LABEL_9;
      }
      v8 += 4;
      if ( v9 == v8 )
      {
        v6 = v5 - v8;
        goto LABEL_18;
      }
    }
    goto LABEL_9;
  }
  v8 = (_QWORD *)*a1;
LABEL_18:
  if ( v6 == 2 )
  {
LABEL_25:
    if ( a2 != *v8 )
    {
      ++v8;
      goto LABEL_21;
    }
    goto LABEL_9;
  }
  if ( v6 != 3 )
  {
    if ( v6 != 1 )
      return;
LABEL_21:
    if ( a2 != *v8 )
      return;
    goto LABEL_9;
  }
  if ( a2 != *v8 )
  {
    ++v8;
    goto LABEL_25;
  }
LABEL_9:
  if ( v5 != v8 )
  {
    if ( v8 + 1 != v5 )
      memmove(v8, v8 + 1, (char *)(v5 - 1) - (char *)v8);
    *((_DWORD *)v2 - 3) = v4 - 8;
  }
}

