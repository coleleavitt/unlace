void __fastcall sub_F19710(__int64 *a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // r12
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  _BOOL4 v8; // r13d
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r12
  _BOOL4 v18; // r13d
  __int64 v19; // rax

  v2 = 1;
  v4 = a1[1];
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
    v2 = (unsigned __int8)sub_BFE300(v5);
  v6 = *(unsigned int *)(v4 + 8);
  if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_2237220(v4, v4 + 16, v6 + 1, 4);
    v6 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v6) = v2;
  ++*(_DWORD *)(v4 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 && !(unsigned __int8)sub_BFE300(v7) )
  {
    sub_F15AA0(a1, (_WORD *)a2);
    v17 = a1[1];
    v18 = (*(_QWORD *)a2 & 0x80000LL) != 0;
    v19 = *(unsigned int *)(v17 + 8);
    if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 12) )
    {
      sub_2237220(a1[1], v17 + 16, v19 + 1, 4);
      v19 = *(unsigned int *)(v17 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v17 + 4 * v19) = v18;
    ++*(_DWORD *)(v17 + 8);
  }
  v8 = 0;
  (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 56))(a1, *(_QWORD *)(a2 + 32));
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 40))(a1, *(_QWORD *)(a2 + 48), 0);
  v9 = a1[1];
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    v8 = *(_DWORD *)(a2 + 72) != 0;
  v10 = *(unsigned int *)(v9 + 8);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
  {
    sub_2237220(a1[1], v9 + 16, v10 + 1, 4);
    v10 = *(unsigned int *)(v9 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v9 + 4 * v10) = v8;
  ++*(_DWORD *)(v9 + 8);
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 && *(_DWORD *)(a2 + 72) )
  {
    v11 = a1[1];
    v12 = *(_DWORD *)(a2 + 84);
    v13 = a2 + 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72;
    v14 = *(unsigned int *)(v11 + 8);
    if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
    {
      sub_2237220(a1[1], v11 + 16, v14 + 1, 4);
      v14 = *(unsigned int *)(v11 + 8);
    }
    *(_DWORD *)(*(_QWORD *)v11 + 4 * v14) = v12;
    ++*(_DWORD *)(v11 + 8);
    if ( v12 )
    {
      v15 = v13 + 32 * ((unsigned int)(v12 - 1) + 1LL);
      do
      {
        v16 = v13;
        v13 += 32;
        sub_F18B10(a1, v16);
      }
      while ( v15 != v13 );
    }
  }
}
