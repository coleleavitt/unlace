__int64 __fastcall sub_BAC080(_QWORD *a1, unsigned int *a2, __m128 a3, __m128 a4, __m128 a5)
{
  unsigned int **v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // r13
  unsigned int *v9; // rsi
  void (__fastcall *v10)(_QWORD *, _QWORD *); // r14
  _QWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // r13d
  unsigned __int8 v18; // al
  unsigned int v19[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v6 = (unsigned int **)(a2 + 8);
  v7 = 2LL * a2[6];
  v8 = (unsigned int **)&a2[v7 + 8];
  if ( v7 * 4 )
  {
    do
    {
      v9 = *v6++;
      v10 = *(void (__fastcall **)(_QWORD *, _QWORD *))*a1;
      v11 = sub_966570((__int64)a1, v9);
      v10(a1, v11);
    }
    while ( v8 != v6 );
  }
  v12 = a1[2];
  v13 = *(_QWORD *)(v12 + 8656);
  if ( !v13 || (v14 = *a2, (unsigned int)v14 >= *(_DWORD *)(v13 - 4)) || !*(_QWORD *)(v13 + 8 * v14) )
  {
    v18 = sub_15D2CB0(a1[3], a2);
    sub_B68280(v12, a2, 0, v18, 1u, *(double *)a3.m128_u64, *(double *)a4.m128_u64, a5);
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD *))*a1)(a1);
  v19[0] = 0;
  v16 = v15;
  if ( (unsigned __int8)sub_163B280(a1 + 7, a2, v19) )
    sub_BA99A0(a1, v16, v19[0], a3, a4, a5);
  if ( (unsigned __int8)sub_163B300(a1 + 7, a2) && a2[6] == 1 )
  {
    sub_BAB7C0((__int64)a1, v16, *((unsigned int **)a2 + 4), a3, a4, a5);
  }
  else if ( (unsigned __int8)sub_163B360(a1 + 7, a2) && a2[6] == 1 )
  {
    sub_BAA080((__int64)a1, (__int64)a2, *((unsigned int **)a2 + 4), a3, a4, a5);
  }
  else if ( (unsigned __int8)sub_163B330(a1 + 7, a2) && a2[6] == 1 )
  {
    sub_BAA1F0((__int64)a1, v16, *((_QWORD *)a2 + 4), a3, a4, a5);
  }
  return 1;
}

