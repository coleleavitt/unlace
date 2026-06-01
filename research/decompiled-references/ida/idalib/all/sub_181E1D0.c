void __fastcall sub_181E1D0(__int64 *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rsi

  sub_181DA50(a1, *(_QWORD *)(a2 + 808));
  sub_181DA50(a1, *(_QWORD *)a2 + 32LL);
  sub_181DA50(a1, a2 + 728);
  v3 = *(_DWORD *)(a2 + 136);
  if ( v3 )
  {
    v4 = 0;
    v5 = 16 * (9LL * (unsigned int)(v3 - 1) + 9);
    do
    {
      v6 = v4 + *(_QWORD *)(a2 + 128);
      v4 += 144;
      sub_181DA50(a1, v6 + 16);
    }
    while ( v5 != v4 );
  }
}
