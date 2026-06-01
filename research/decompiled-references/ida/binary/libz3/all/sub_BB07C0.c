__int64 __fastcall sub_BB07C0(_QWORD **a1, unsigned int *a2, double a3, double a4, __m128 a5)
{
  bool v6; // zf
  _DWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v11; // rax
  unsigned int v12; // ebp
  unsigned int **v13; // rbp
  __int64 v14; // rax
  unsigned int **v15; // r13
  unsigned int *v16; // rsi
  void (__fastcall *v17)(_QWORD **, _QWORD *); // r14
  _QWORD *v18; // rax
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  void (__fastcall *v22)(_QWORD **, _QWORD *); // rbp
  _QWORD *v23; // rax
  unsigned int v24; // ebp
  unsigned __int8 v25; // al
  void (__fastcall *v26)(_QWORD **, _QWORD *); // rbp
  _QWORD *v27; // rax

  v6 = *((_WORD *)a2 + 2) == 0;
  *((_BYTE *)a1 + 4168) = 1;
  if ( v6 )
  {
    v7 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v7 )
    {
      if ( *v7 == *((_DWORD *)a1 + 436) )
      {
        if ( v7[1] != 16
          || (v26 = (void (__fastcall *)(_QWORD **, _QWORD *))**a1,
              v27 = sub_966570((__int64)a1, *((unsigned int **)a2 + 4)),
              v26(a1, v27),
              !*((_WORD *)a2 + 2))
          && (v7 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) != nullptr
          && *v7 == *((_DWORD *)a1 + 436) )
        {
          if ( v7[1] == 12 )
          {
            v22 = (void (__fastcall *)(_QWORD **, _QWORD *))**a1;
            v23 = sub_966570((__int64)a1, *((unsigned int **)a2 + 4));
            v22(a1, v23);
          }
        }
      }
    }
  }
  v8 = a1[2][1082];
  if ( v8 )
  {
    v9 = *a2;
    if ( (unsigned int)v9 < *(_DWORD *)(v8 - 4) )
    {
      if ( *(_QWORD *)(v8 + 8 * v9) )
      {
        ((void (__fastcall *)(_QWORD **))**a1)(a1);
        return 1;
      }
    }
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[3], a2) )
  {
    if ( !*((_WORD *)a2 + 2) )
    {
      v11 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( v11 )
      {
        if ( *((_DWORD *)a1 + 436) == *v11 && v11[1] == 16 || *v11 == *((_DWORD *)a1 + 472) && v11[1] == 67 )
        {
          v12 = sub_B67520((__int64)a1[2], a2);
          sub_8F1CE0((__int64)a1[2], v12, *((_DWORD *)a1 + 2));
          sub_9936C0((__int64)a1[2], v12);
          return 1;
        }
      }
    }
  }
  v13 = (unsigned int **)(a2 + 8);
  v14 = 2LL * a2[6];
  v15 = (unsigned int **)&a2[v14 + 8];
  if ( v14 * 4 )
  {
    do
    {
      v16 = *v13++;
      v17 = (void (__fastcall *)(_QWORD **, _QWORD *))**a1;
      v18 = sub_966570((__int64)a1, v16);
      v17(a1, v18);
    }
    while ( v15 != v13 );
  }
  if ( (unsigned __int8)sub_15D2CB0(a1[3], a2) )
  {
    v24 = sub_B67520((__int64)a1[2], a2);
    sub_8F1CE0((__int64)a1[2], v24, *((_DWORD *)a1 + 2));
    sub_9936C0((__int64)a1[2], v24);
  }
  v19 = (__int64)a1[2];
  v20 = *(_QWORD *)(v19 + 8656);
  if ( !v20 || (v21 = *a2, (unsigned int)v21 >= *(_DWORD *)(v20 - 4)) || !*(_QWORD *)(v20 + 8 * v21) )
  {
    v25 = sub_15D2CB0(a1[3], a2);
    sub_B68280(v19, a2, 0, v25, 1u, a3, a4, a5);
  }
  ((void (__fastcall *)(_QWORD **))**a1)(a1);
  if ( (unsigned int)sub_8E7030((__int64)a1[2]) )
    return 1;
  ((void (__fastcall *)(_QWORD **, unsigned int *))(*a1)[11])(a1, a2);
  return 1;
}

