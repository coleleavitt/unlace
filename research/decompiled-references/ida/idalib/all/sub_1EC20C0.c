__int64 __fastcall sub_1EC20C0(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  _OWORD *v5; // rax
  _OWORD *v6; // rdx

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 7));
  v3 = *v2;
  if ( !*v2 )
  {
    v5 = (_OWORD *)sub_1EC2080((__int64 *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL), 1024, 3u);
    *v2 = (__int64)v5;
    v6 = v5 + 64;
    do
      *v5++ = 0;
    while ( v6 != v5 );
    v3 = *v2;
  }
  return v3 + 8 * (a2 & 0x7F);
}
