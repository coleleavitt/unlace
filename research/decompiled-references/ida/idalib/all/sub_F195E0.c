void __fastcall sub_F195E0(__int64 *a1, __int64 a2)
{
  _BOOL4 v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rsi

  v2 = 0;
  sub_F15AA0(a1, (_WORD *)a2);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 40))(a1, *(_QWORD *)(a2 + 32), 0);
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 56))(a1, *(_QWORD *)(a2 + 16));
  v3 = a1[1];
  if ( (*(_DWORD *)a2 & 0x80000) != 0 )
    v2 = *(_DWORD *)(a2 + 56) != 0;
  v4 = *(unsigned int *)(v3 + 8);
  if ( v4 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
  {
    sub_2237220(a1[1], v3 + 16, v4 + 1, 4);
    v4 = *(unsigned int *)(v3 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 4 * v4) = v2;
  ++*(_DWORD *)(v3 + 8);
  if ( (*(_DWORD *)a2 & 0x80000) != 0 && *(_DWORD *)(a2 + 56) )
  {
    v5 = a1[1];
    v6 = *(_DWORD *)(a2 + 68);
    v7 = a2 + 16LL * ((*(_DWORD *)a2 & 0x80000) != 0) + 56;
    v8 = *(unsigned int *)(v5 + 8);
    if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v5 + 12) )
    {
      sub_2237220(a1[1], v5 + 16, v8 + 1, 4);
      v8 = *(unsigned int *)(v5 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v5 + 4 * v8) = v6;
    ++*(_DWORD *)(v5 + 8);
    if ( v6 )
    {
      v9 = v7 + 32 * ((unsigned int)(v6 - 1) + 1LL);
      do
      {
        v10 = v7;
        v7 += 32;
        sub_F18B10(a1, v10);
      }
      while ( v9 != v7 );
    }
  }
}
