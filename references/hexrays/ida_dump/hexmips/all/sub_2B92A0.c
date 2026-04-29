void __fastcall sub_2B92A0(__int64 *a1, int a2, __int64 a3)
{
  __int64 *v4; // rax
  const char *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // r12
  const char *v9; // rax
  __int64 *v10; // rax
  const char *v11; // rdx
  __int64 v12; // rax

  if ( a2 != 2 )
    return;
  if ( *(_QWORD *)(a3 + 32) > 1u )
  {
    v10 = (__int64 *)sub_2B6950(a1);
    v11 = s1;
    if ( *(_QWORD *)(a3 + 32) )
      v11 = *(const char **)(a3 + 24);
    sub_67670(v10, (__int64)"name: %s", v11);
    if ( *(_QWORD *)(a3 + 64) <= 1u )
    {
LABEL_4:
      if ( !*(_BYTE *)(a3 + 48) )
        return;
      goto LABEL_9;
    }
  }
  else if ( *(_QWORD *)(a3 + 64) <= 1u )
  {
    goto LABEL_4;
  }
  v4 = (__int64 *)sub_2B6950(a1);
  v5 = s1;
  if ( *(_QWORD *)(a3 + 64) )
    v5 = *(const char **)(a3 + 56);
  sub_67670(v4, (__int64)"cmt: %s", v5);
  if ( *(_BYTE *)(a3 + 48) )
  {
LABEL_9:
    v6 = a1[1];
    v7 = *a1;
    if ( a1[2] < (unsigned __int64)(v6 + 1) )
    {
      v12 = qvector_reserve(a1, v7, v6 + 1, 24);
      v6 = a1[1];
      *a1 = v12;
      v7 = v12;
    }
    v8 = v7 + 24 * v6;
    *(_QWORD *)v8 = 0;
    *(_OWORD *)(v8 + 8) = 0;
    ++a1[1];
    v9 = (const char *)dstr_tinfo(a3 + 48);
    sub_67670((__int64 *)v8, (__int64)"type: %s", v9);
  }
}
