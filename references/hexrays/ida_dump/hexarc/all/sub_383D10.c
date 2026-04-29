__int64 __fastcall sub_383D10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = a1[23];
  v11[0] = a2;
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 1496) + 1008LL);
  if ( !a2 )
    v11[0] = *(_QWORD *)(v7 + 16);
  v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, a1, v11, &callui, a6);
  v9 = 0;
  if ( v8 >= 0 && (unsigned __int64)v8 < a1[25] )
  {
    v9 = *(_QWORD *)(a1[24] + 8 * v8);
    *(_QWORD *)(v7 + 16) = v9;
  }
  return v9;
}
