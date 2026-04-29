__int64 *__fastcall sub_6E380(__int64 *a1, __int64 a2, int a3)
{
  _BYTE *v4; // rax
  unsigned __int8 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v8; // rsi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD); // rax
  int v11; // ebx
  const char *i; // rdx
  const char *v13; // rdx
  int v14; // ecx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD); // rax
  __int64 v16; // rax

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  v4 = (_BYTE *)qvector_reserve(a1, 0, 2, 1);
  *a1 = (__int64)v4;
  a1[1] = 2;
  *v4 = 123;
  *(_BYTE *)(*a1 + 1) = 0;
  hexdsp = (unsigned __int8 (__fastcall *)(__int64, __int64))get_hexdsp(a1, nullptr);
  if ( hexdsp(217, a2) )
  {
    v6 = a1[1];
    v7 = 2;
    if ( !v6 )
      goto LABEL_3;
LABEL_8:
    v7 = v6 + 1;
    v8 = *a1;
    --v6;
    if ( a1[2] >= v7 )
      goto LABEL_4;
LABEL_9:
    v16 = qvector_reserve(a1, v8, v7, 1);
    *a1 = v16;
    v8 = v16;
    goto LABEL_4;
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(217, (const char *)a2);
  v11 = v10(227, a2, 0);
  for ( i = " "; *(_DWORD *)(a2 + 8) != v11; i = ", " )
  {
    sub_10400(a1, (__int64)"%s%d", i, a3 + v11);
    v15 = (__int64 (__fastcall *)(__int64, __int64, _QWORD))get_hexdsp(a1, "%s%d", v13, v14);
    v11 = v15(227, a2, (unsigned int)(v11 + 1));
  }
  v6 = a1[1];
  v7 = 2;
  if ( v6 )
    goto LABEL_8;
LABEL_3:
  v8 = *a1;
  if ( (unsigned __int64)a1[2] < 2 )
    goto LABEL_9;
LABEL_4:
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 125;
  *(_BYTE *)(*a1 + v6 + 1) = 0;
  return a1;
}
