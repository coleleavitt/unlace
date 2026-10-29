unsigned __int8 __fastcall sub_19BBBB0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 *v8; // r13

  v6 = (a2 - a1 + 1) / 2;
  v7 = 8 * v6;
  v8 = &a1[v6];
  if ( v6 <= a4 )
  {
    sub_19A0590(a1, &a1[v6], a3);
    sub_19A0590(v8, a2, a3);
  }
  else
  {
    sub_19BBBB0(a1, &a1[v6], a3);
    sub_19BBBB0(v8, a2, a3);
  }
  return sub_19BB510((char *)a1, (char *)v8, (char *)a2, v7 >> 3, a2 - v8, a3, a4);
}
