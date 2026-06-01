__int64 __fastcall sub_17E40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // cx
  const char *v4; // r12
  char *v5; // rax
  unsigned __int64 v7; // rbp
  const char *v8; // r13
  void *v9; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_WORD *)(a2 + 24);
  if ( !v3 || v3 == a3 )
  {
    if ( a2 != a1 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 >= 2 )
      {
        v8 = *(const char **)a2;
        v9 = (void *)sub_96080(a1, 0, *(_QWORD *)(a2 + 8), 1);
        *(_QWORD *)a1 = v9;
        *(_QWORD *)(a1 + 8) = v7;
        memmove(v9, v8, v7 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v7 - 1) = 0;
      }
    }
    return a1;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    v4 = *(const char **)a2;
    if ( **(_BYTE **)a2 != 91 )
    {
      v5 = strchr(v4, 58);
      if ( v5 )
      {
        if ( v5 - v4 != -1 )
        {
          sub_17D80((char **)a1);
          return a1;
        }
      }
    }
  }
  sub_17D80((char **)a1);
  return a1;
}

