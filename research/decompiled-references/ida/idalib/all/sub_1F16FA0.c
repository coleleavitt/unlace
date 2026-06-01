_QWORD *__fastcall sub_1F16FA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // ebp
  int v13; // r15d
  _QWORD *v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // [rsp+8h] [rbp-40h]

  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD **)a1;
  v9 = (unsigned int)(v6 + 1);
  v10 = *(_QWORD *)(v7 + 8 * v6);
  *(_DWORD *)(a1 + 24) = v9;
  if ( (_DWORD)v10 )
  {
    v11 = a1 + 24;
    v12 = v10;
    v13 = 0;
    v22 = (_DWORD *)(a1 + 24);
    v14 = nullptr;
    while ( 1 )
    {
      v15 = (unsigned int)(v9 + 1);
      v16 = *(unsigned int *)(v7 + 8 * v9);
      *(_DWORD *)(a1 + 24) = v15;
      switch ( v16 )
      {
        case 0LL:
          v21 = sub_1EE3540(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (_QWORD *)(a1 + 32), v22);
          v11 = (__int64)v14;
          v14 = sub_E918E0(v8, (__int64)v14, v21);
          goto LABEL_5;
        case 1LL:
          v20 = sub_1EE1670(a1);
          v11 = (__int64)v14;
          v14 = sub_E91C40(v8, (__int64)v14, v20);
          goto LABEL_5;
        case 2LL:
          v19 = sub_1EE1670(a1);
          v11 = (__int64)v14;
          v14 = sub_E91B20(v8, (__int64)v14, v19);
          goto LABEL_5;
        case 3LL:
          ++v13;
          v17 = sub_1F16500(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 16), (__int64 *)(a1 + 32), v22);
          v11 = (__int64)v14;
          v14 = sub_E91A00(v8, (__int64)v14, *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
          if ( v12 == v13 )
            return v14;
          goto LABEL_6;
        case 4LL:
          v14 = sub_E91110(v8, v11, v7, v15, a5, a6);
          goto LABEL_5;
        case 5LL:
          v11 = sub_1EE1670(a1);
          v14 = sub_E917C0(v8, v11);
LABEL_5:
          if ( v12 == ++v13 )
            return v14;
LABEL_6:
          v9 = *(unsigned int *)(a1 + 24);
          v7 = *(_QWORD *)(a1 + 32);
          break;
      }
    }
  }
  return nullptr;
}
