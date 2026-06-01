__int64 __fastcall sub_1260F0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(_QWORD *); // rax
  __int64 v5; // r8
  __int64 (__fastcall *v6)(__int64, int *); // rax
  __int64 v7; // rax
  _DWORD *v8; // rsi
  _DWORD *v9; // rdx
  _DWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v2 = *a1;
  v15 = __readfsqword(0x28u);
  v14 = 0;
  v3 = *(void (__fastcall **)(_QWORD *))(v2 + 32);
  if ( a2 < 0 )
  {
    v3(a1);
    return -1;
  }
  if ( (unsigned __int64)a2 < a1[28] )
    v14 = *(_DWORD *)(a1[27] + 4 * a2);
  v3(a1);
  v5 = *a1;
  v6 = *(__int64 (__fastcall **)(__int64, int *))(*a1 + 72LL);
  if ( v6 == sub_125560 )
  {
    v7 = a1[28];
    if ( !v7 )
      goto LABEL_17;
    if ( v14 <= 0 )
      goto LABEL_17;
    v8 = (_DWORD *)a1[27];
    v9 = &v8[v7];
    if ( v8 == v9 )
      goto LABEL_17;
    v10 = (_DWORD *)a1[27];
    while ( v14 != *v10 )
    {
      if ( v9 == ++v10 )
        goto LABEL_17;
    }
    if ( v10 == v9 )
      goto LABEL_17;
    result = v10 - v8;
    if ( result != -1 )
      return result;
  }
  else
  {
    result = v6((__int64)a1, &v14);
    if ( result != -1 )
      return result;
  }
  v5 = *a1;
LABEL_17:
  v12 = (*(__int64 (__fastcall **)(_QWORD *))(v5 + 40))(a1);
  v13 = v12;
  if ( !v12 )
    return -1;
  result = v12 - 1;
  if ( a2 < v13 )
    return a2;
  return result;
}

