char __fastcall sub_6B4170(__int64 **a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  __int64 *v6; // rdi
  int v8; // eax
  char result; // al

  v6 = *a1;
  if ( *(_QWORD *)(v6[3] + 16) < a3 )
  {
    v8 = sub_42DD50(v6, a3);
    if ( v8 == 7 )
      goto LABEL_9;
    goto LABEL_3;
  }
  result = sub_3BD540((__int64)v6, a3);
  if ( !result )
  {
    v8 = sub_42DD50(*a1, a3);
    if ( v8 == 7 )
    {
      if ( !a4 )
        return *(_QWORD *)(a2 + 8) <= 1u;
      goto LABEL_9;
    }
LABEL_3:
    if ( (a4 & (v8 == 0)) == 0 )
      return *(_QWORD *)(a2 + 8) <= 1u;
LABEL_9:
    sub_35A790((char **)a2);
    return *(_QWORD *)(a2 + 8) <= 1u;
  }
  return result;
}
