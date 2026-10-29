void __fastcall sub_F18D50(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax

  sub_F15AA0(a1, (_WORD *)a2);
  if ( (*(_DWORD *)a2 & 0x20000) != 0 && (v2 = *(_DWORD *)(a2 + 28)) != 0 )
  {
    v3 = a1[1];
    v4 = a2 + 40;
    v5 = *(unsigned int *)(v3 + 8);
    if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
    {
      sub_2237220(a1[1], v3 + 16, v5 + 1, 4);
      v5 = *(unsigned int *)(v3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v5) = v2;
    v6 = *(unsigned int *)(v3 + 12);
    v7 = (unsigned int)(*(_DWORD *)(v3 + 8) + 1);
    *(_DWORD *)(v3 + 8) = v7;
    if ( v7 + 1 > v6 )
    {
      sub_2237220(v3, v3 + 16, v7 + 1, 4);
      v7 = *(unsigned int *)(v3 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v3 + 4 * v7) = 0;
    ++*(_DWORD *)(v3 + 8);
    v8 = v4 + 24LL * v2;
    do
    {
      v9 = v4;
      v4 += 24;
      sub_F18B10(a1, v9);
    }
    while ( v8 != v4 );
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 24))(a1, *(_QWORD *)(a2 + 32));
    v10 = a1[1];
    v11 = *(unsigned int *)(v10 + 8);
    if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
    {
      sub_2237220(a1[1], v10 + 16, v11 + 1, 4);
      v11 = *(unsigned int *)(v10 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v10 + 4 * v11) = 0;
    ++*(_DWORD *)(v10 + 8);
  }
}
