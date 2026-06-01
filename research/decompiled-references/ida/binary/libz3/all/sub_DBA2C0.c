void __fastcall sub_DBA2C0(__int64 *a1, __int64 *a2, __int64 *a3, __int64 a4, _QWORD *a5)
{
  __int64 v6; // rax
  __int64 *v7; // r12
  __int64 v8; // r14

  v6 = (a2 - a1 + 1) / 2;
  v7 = &a1[v6];
  v8 = (8 * v6) >> 3;
  if ( v6 <= a4 )
  {
    sub_DB9EA0(a1, &a1[v6], a3, a5);
    sub_DB9EA0(v7, a2, a3, a5);
    sub_DB8A80(a1, v7, a2, v8, a2 - v7, a3, a5);
  }
  else
  {
    sub_DBA2C0(a1, &a1[v6], a3, a4, a5);
    sub_DBA2C0(v7, a2, a3, a4, a5);
    sub_DB94A0(a1, v7, a2, v8, a2 - v7, a3, a4, a5);
  }
}

