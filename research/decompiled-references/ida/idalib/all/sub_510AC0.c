__int64 __fastcall sub_510AC0(_QWORD *a1, __int64 *a2, unsigned __int64 a3, unsigned __int64 a4, char a5)
{
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r12
  const void *v10; // r13
  void *v11; // rdi
  __int64 v12; // rax

  if ( a4 && a4 < a1[19] )
  {
    v8 = a1[18] + 56LL * (int)a4;
    if ( *(_BYTE *)(v8 + 52) || (v9 = *(_QWORD *)(v8 + 8), v9 <= 1) )
      sub_50D000(a1, a3);
    if ( a2 != (__int64 *)v8 )
    {
      v10 = *(const void **)v8;
      v11 = (void *)*a2;
      if ( a2[2] < v9 )
      {
        v12 = qvector_reserve(a2, *a2, *(_QWORD *)(v8 + 8), 1);
        *a2 = v12;
        v11 = (void *)v12;
      }
      a2[1] = v9;
      memmove(v11, v10, v9 - 1);
      *(_BYTE *)(*a2 + v9 - 1) = 0;
    }
  }
  else
  {
    sub_503EE0(*(_QWORD *)(*a1 + 1672LL) + 1624LL, a3);
    sub_35A790((char **)a2);
  }
  v6 = a2[1];
  if ( (a5 & 1) != 0 && v6 > 1 )
  {
    sub_4CD570((__int64)a2);
    v6 = a2[1];
  }
  return (v6 == 0) + v6 - 1;
}
