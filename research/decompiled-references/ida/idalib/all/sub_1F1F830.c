_QWORD *__fastcall sub_1F1F830(__int64 a1, unsigned __int64 a2, int *a3)
{
  _QWORD *v4; // rbp
  unsigned __int64 v5; // r13
  _QWORD *v6; // rdx
  int v7; // eax
  unsigned __int64 v8; // r13
  unsigned __int64 v10[6]; // [rsp+8h] [rbp-30h] BYREF

  v10[0] = a2;
  v4 = (_QWORD *)sub_1EAB380(a1, a2);
  v5 = *(_QWORD *)(v4[383] + 16LL * (unsigned int)sub_B8F2E0((__int64)v10));
  if ( v4[107] )
    sub_1EDF870(a1, (__int64)v4);
  v6 = v4;
  v7 = __ROR4__(v5, 1);
  v8 = HIDWORD(v5);
  if ( v8 )
    v6 = *(_QWORD **)(v4[415] + 8LL * (unsigned int)(v8 - 1));
  if ( v7 )
    v7 = v7 + *((_DWORD *)v6 + 412) - 2;
  *a3 = v7;
  return v4;
}
