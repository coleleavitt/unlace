__int64 __fastcall sub_101F8A0(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rdx

  v2 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8 * (a2 >> 5));
  v3 = *v2;
  if ( !*v2 )
  {
    v5 = (_DWORD *)sub_9C3B30((__int64 *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
    *v2 = (__int64)v5;
    v6 = v5 + 192;
    do
    {
      *v5 = 0;
      v5 += 6;
      *((_OWORD *)v5 - 1) = 0;
      *((_QWORD *)v5 - 1) = 0;
    }
    while ( v5 != v6 );
    v3 = *v2;
  }
  return v3 + 24 * (a2 & 0x1F);
}
