__int64 __fastcall sub_A47C60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int *v4; // r12
  void *v5; // rbp
  __int64 v6; // rsi
  int v7[2]; // [rsp+0h] [rbp-2B8h] BYREF
  int v8[2]; // [rsp+8h] [rbp-2B0h]
  int v9[170]; // [rsp+10h] [rbp-2A8h] BYREF

  *(_QWORD *)v7 = v9;
  *(_QWORD *)v8 = 0x1000000000LL;
  sub_99B560(a1, a2, 2, (char **)v7);
  sub_A088E0(a1, a2, v8[0], *(__int64 *)v7);
  v2 = *(_QWORD *)v7;
  result = 5LL * (unsigned int)v8[0];
  v4 = (int *)(*(_QWORD *)v7 + 40LL * (unsigned int)v8[0]);
  if ( *(int **)v7 != v4 )
  {
    do
    {
      v5 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v2);
      v6 = v2 + 16;
      v2 += 40;
      result = sub_182CBA0(v5, v6);
    }
    while ( v4 != (int *)v2 );
    v4 = *(int **)v7;
  }
  if ( v4 != v9 )
  {
    if ( v4 )
      return sub_186B220(v4);
  }
  return result;
}

