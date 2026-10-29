__int64 __fastcall sub_21060(__int64 a1, __int64 a2, _BYTE *a3, int a4, __int64 a5)
{
  unsigned int v6; // ebp
  __int64 v7; // rax
  char *v8; // r14
  unsigned __int64 v9; // r13
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  char *v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int64 v16; // rsi

  v6 = (_DWORD)a3 + 1;
  v7 = *(_QWORD *)(a1 + 32);
  if ( v7 )
  {
    a3 = *(_BYTE **)(a1 + 24);
    if ( *a3 == 71 )
    {
      *(_QWORD *)(a1 + 24) = a3 + 1;
      *(_QWORD *)(a1 + 32) = v7 - 1;
      v16 = sub_1E7C0((_QWORD *)a1, v6, 0);
      if ( !v16 )
        return 0;
      sub_C080(a2, v16, *(_QWORD **)(a1 + 40));
    }
  }
  v8 = sub_1C940((_QWORD *)a1, v6, (_DWORD)a3, a4, a5);
  if ( v8 )
  {
    v9 = sub_C400(*(_QWORD **)(a1 + 40), 221);
    sub_C080(v9, (__int64)v8, *(_QWORD **)(a1 + 40));
    if ( v9 )
    {
      sub_C080(a2, v9, *(_QWORD **)(a1 + 40));
      v13 = sub_1C940((_QWORD *)a1, v6, v10, v11, v12);
      if ( v13 )
      {
        v14 = sub_C400(*(_QWORD **)(a1 + 40), 221);
        sub_C080(v14, (__int64)v13, *(_QWORD **)(a1 + 40));
        if ( v14 )
        {
          sub_C080(a2, v14, *(_QWORD **)(a1 + 40));
          return 1;
        }
      }
    }
  }
  return 0;
}
