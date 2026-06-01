_QWORD *__fastcall sub_975DF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  _QWORD *result; // rax

  v7 = a3;
  v8 = sub_975DE0(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(v8 + 32) = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF9LL | 2;
  v11 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(a2 + 4) )
  {
    v12 = 2LL * (v11 == 0);
  }
  else
  {
    v12 = v11 & 0xFFFFFFFFFFFFFFF9LL | 2;
    v11 = 0;
  }
  sub_975B20(v8, v11, v12, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v9, v10);
  if ( !v7 )
    v7 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    v15 = v7;
    v7 = 0;
    v16 = v15 & 0xFFFFFFFFFFFFFFF9LL | 2;
  }
  else
  {
    v16 = 2LL * (v7 == 0);
  }
  result = sub_975B20(v8, v7, v16, (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v13, v14);
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}

