_BYTE *__fastcall sub_596D94(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, char a6, _QWORD *a7, __int64 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _BYTE *result; // rax

  if ( a2 )
    v8 = a2 + 136;
  else
    v8 = 0;
  *(_QWORD *)a1 = v8;
  if ( a2 )
    v9 = a2 + 1072;
  else
    v9 = 0;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = a8;
  *(_QWORD *)(a1 + 24) = a3;
  *(_BYTE *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a5;
  *(_BYTE *)(a1 + 48) = a6;
  v10 = a7[1];
  *(_QWORD *)(a1 + 56) = *a7;
  *(_QWORD *)(a1 + 64) = v10;
  v11 = a7[3];
  *(_QWORD *)(a1 + 72) = a7[2];
  *(_QWORD *)(a1 + 80) = v11;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 88) = sub_597FBA(a1, 2048);
  result = *(_BYTE **)(a1 + 88);
  if ( result )
  {
    result = *(_BYTE **)(a1 + 88);
    *result = 0;
  }
  return result;
}
