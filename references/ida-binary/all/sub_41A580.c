__int64 __fastcall sub_41A580(__int64 a1, __int64 a2, int a3)
{
  unsigned __int16 v3; // cx
  int v4; // ebp
  const char *v5; // r12
  char *v6; // rax
  unsigned __int64 v8; // rbp
  const char *v9; // r13
  void *v10; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = *(_WORD *)(a2 + 24);
  if ( !v3 || (v4 = v3, v3 == a3) )
  {
    if ( a2 != a1 )
    {
      v8 = *(_QWORD *)(a2 + 8);
      if ( v8 >= 2 )
      {
        v9 = *(const char **)a2;
        v10 = (void *)qvector_reserve(a1, 0, *(_QWORD *)(a2 + 8), 1);
        *(_QWORD *)a1 = v10;
        *(_QWORD *)(a1 + 8) = v8;
        memmove(v10, v9, v8 - 1);
        *(_BYTE *)(*(_QWORD *)a1 + v8 - 1) = 0;
      }
    }
    return a1;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    v5 = *(const char **)a2;
    if ( **(_BYTE **)a2 != 91 )
    {
      v6 = strchr(v5, 58);
      if ( v6 )
      {
        if ( v6 - v5 != -1 )
        {
          sub_169A50((__int64 *)a1, (__int64)"[%s]:%u", v5, v4);
          return a1;
        }
      }
    }
  }
  else
  {
    v5 = &s1;
  }
  sub_169A50((__int64 *)a1, (__int64)"%s:%u", v5, v4);
  return a1;
}
