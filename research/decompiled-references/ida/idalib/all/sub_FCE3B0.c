void __fastcall sub_FCE3B0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rsi
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v1 = a1[19];
  v2 = (__int64 *)a1[22];
  v3 = v1;
  if ( v2 == (__int64 *)a1[23] )
  {
    sub_FCE260((__int64)(a1 + 21), v2, &v3);
  }
  else
  {
    *v2 = v1;
    a1[22] = v2 + 1;
  }
}
