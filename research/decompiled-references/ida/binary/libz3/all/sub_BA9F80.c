__int64 __fastcall sub_BA9F80(__int64 a1, __int64 a2, __m128 a3, __m128 a4, __m128 a5)
{
  unsigned int **v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // r12
  unsigned int *v9; // rsi
  void (__fastcall *v10)(__int64, _QWORD *); // r14
  _QWORD *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r12
  _DWORD *v14; // rax

  v6 = (unsigned int **)(a2 + 32);
  v7 = 8LL * *(unsigned int *)(a2 + 24);
  v8 = (unsigned int **)(a2 + 32 + v7);
  if ( v7 )
  {
    do
    {
      v9 = *v6++;
      v10 = **(void (__fastcall ***)(__int64, _QWORD *))a1;
      v11 = sub_966570(a1, v9);
      v10(a1, v11);
    }
    while ( v8 != v6 );
  }
  v12 = sub_B67520(*(_QWORD *)(a1 + 16), (_DWORD *)a2);
  sub_8F1CE0(*(_QWORD *)(a1 + 16), v12, *(_DWORD *)(a1 + 8));
  v13 = *(_QWORD *)(a1 + 16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v13 + 7488) + 48LL))(
    *(_QWORD *)(v13 + 7488),
    *(_QWORD *)(*(_QWORD *)(v13 + 8840) + 8LL * v12));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 7488) + 64LL))(*(_QWORD *)(v13 + 7488));
  if ( (unsigned __int8)sub_163B2D0(a1 + 56, a2) )
    sub_BA9B40(a1, 2 * v12, a2, a3, a4, a5);
  if ( !*(_WORD *)(a2 + 4) )
  {
    v14 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v14 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) == *v14 && v14[1] == 5 )
        sub_BA9CE0(a1, 2 * v12, a2, a3, a4, a5);
    }
  }
  return 1;
}

