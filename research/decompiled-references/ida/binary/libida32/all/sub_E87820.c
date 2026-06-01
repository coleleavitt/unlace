void __fastcall sub_E87820(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rsi

  v2 = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_22134E0(a1 + 176, a1 + 192, v2 + 1, 4);
    v2 = *(unsigned int *)(a1 + 184);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v2) = v3;
  v4 = (__int64 *)(a2 + 24);
  ++*(_DWORD *)(a1 + 184);
  v5 = a2 + 24 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF);
  if ( v5 != a2 + 24 )
  {
    do
    {
      v6 = *v4++;
      sub_E853B0(a1, v6);
    }
    while ( (__int64 *)v5 != v4 );
  }
}

