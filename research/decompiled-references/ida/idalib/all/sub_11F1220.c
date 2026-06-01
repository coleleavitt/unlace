void __fastcall sub_11F1220(__int64 a1)
{
  bool v1; // zf
  void *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi

  v1 = *(_BYTE *)(a1 + 4104) == 0;
  *(_QWORD *)a1 = off_2C393A8;
  if ( !v1 )
  {
    v3 = *(void **)(a1 + 4048);
    if ( v3 != (void *)(a1 + 4064) )
      operator delete(v3);
  }
  if ( *(_BYTE *)(a1 + 4040) )
  {
    v4 = *(unsigned int *)(a1 + 4032);
    v5 = *(_QWORD *)(a1 + 4016);
    v6 = 104 * v4;
    if ( (_DWORD)v4 )
    {
      v7 = v5 + 104 * v4;
      do
      {
        while ( *(_QWORD *)v5 == -2 || *(_QWORD *)v5 == -1 || !*(_BYTE *)(v5 + 96) )
        {
          v5 += 104;
          if ( v7 == v5 )
            goto LABEL_12;
        }
        v8 = *(unsigned int *)(v5 + 88);
        v9 = *(_QWORD *)(v5 + 72);
        v5 += 104;
        operator delete(v9, 32 * v8, 4);
      }
      while ( v7 != v5 );
LABEL_12:
      v5 = *(_QWORD *)(a1 + 4016);
      v6 = 104LL * *(unsigned int *)(a1 + 4032);
    }
    operator delete(v5, v6, 8);
    sub_11F0F60(a1);
  }
  else
  {
    sub_11F0F60(a1);
  }
}
