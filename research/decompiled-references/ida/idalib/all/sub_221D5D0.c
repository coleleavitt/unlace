void __fastcall sub_221D5D0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // r12
  _QWORD *v4; // rsi

  v1 = a1[20];
  if ( a1[21] != v1 )
    a1[21] = v1;
  v2 = a1[16];
  v3 = a1[17];
  while ( v3 != v2 )
  {
    v4 = (_QWORD *)(v2 + 8);
    v2 += 48;
    sub_221CAB0(a1[15], v4);
  }
}
