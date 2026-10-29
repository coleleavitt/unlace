unsigned __int64 __fastcall sub_F15CD0(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rbp
  __int64 v5; // r13
  void (__fastcall *v6)(_QWORD *, unsigned __int64); // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rsi
  int v12; // eax

  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, **(_QWORD **)(a2 + 24));
  v3 = *(_DWORD *)(a2 + 32);
  if ( v3 )
  {
    v4 = a2 + 40;
    v5 = a2 + 16LL * (unsigned int)(v3 - 1) + 56;
    do
    {
      while ( 1 )
      {
        v8 = a1[1];
        v9 = *(unsigned int *)(v8 + 8);
        v10 = *(_DWORD *)(v4 + 8) & 3;
        if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 12) )
        {
          sub_2237220(a1[1], v8 + 16, v9 + 1, 4);
          v9 = *(unsigned int *)(v8 + 8);
        }
        *(_DWORD *)(*(_QWORD *)v8 + 4 * v9) = v10;
        v11 = *(_QWORD *)(v4 + 8);
        ++*(_DWORD *)(v8 + 8);
        v12 = v11 & 3;
        if ( v12 != 1 )
          break;
        v4 += 16;
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 24LL))(a1, v11 & 0xFFFFFFFFFFFFFFFCLL);
        if ( v5 == v4 )
          return sub_F15AA0(a1, (_WORD *)a2);
      }
      if ( v12 == 2 )
      {
        v6 = *(void (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 48LL);
        v7 = sub_BF9AD0(v4);
        v6(a1, v7);
      }
      v4 += 16;
    }
    while ( v5 != v4 );
  }
  return sub_F15AA0(a1, (_WORD *)a2);
}
