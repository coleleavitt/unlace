__int64 __fastcall sub_1F6EAE0(__int64 a1, unsigned int a2)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned int *v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // r12
  unsigned int *i; // rsi
  _QWORD *v11; // rdi

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
  v6 = sub_A1F730(v4);
  v7 = *(unsigned int **)(a1 + 168);
  v8 = *(_QWORD **)(a1 + 16);
  v9 = *(unsigned int *)(v4 + 48) + 8 * (v6 + v5);
  for ( i = &v7[*(unsigned int *)(a1 + 176)]; i != v7; ++v7 )
  {
    v11 = (_QWORD *)(*v8 + 8LL * *v7);
    if ( *v11 )
    {
      *v11 = v9 - *v11;
      v8 = *(_QWORD **)(a1 + 16);
    }
  }
  *(_DWORD *)(a1 + 176) = 0;
  sub_1F6E900(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), a2, (__int64)v8);
  sub_1FCF3C0(a1);
  return v9;
}
