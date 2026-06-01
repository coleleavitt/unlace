__int64 (__fastcall *__fastcall sub_1436EB0(__int64 a1))(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // r12
  char *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  void *v12; // rbp
  __int64 (__fastcall *result)(__int64); // rax
  unsigned int v14; // eax
  __int64 *v15; // rax
  __int64 v16; // [rsp-8h] [rbp-40h]

  v2 = *(_DWORD *)(a1 + 2404);
  if ( v2 )
  {
    v14 = v2 - 1;
    *(_DWORD *)(a1 + 2404) = v14;
    v15 = (__int64 *)(a1 + 8LL * v14 + 2408);
    v4 = *v15;
    *v15 = 0;
    sub_1469A10(v4);
    v5 = *(char **)(a1 + 1176);
    if ( v5 != *(char **)(a1 + 1184) )
      goto LABEL_3;
  }
  else
  {
    v3 = operator new(0x48u);
    *(_BYTE *)(v3 + 64) &= ~8u;
    v4 = v3;
    *(_QWORD *)(v3 + 16) = a1;
    *(_QWORD *)(v3 + 40) = 0;
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 56) = 0;
    *(_OWORD *)v3 = 0;
    sub_1469A10(v3);
    v5 = *(char **)(a1 + 1176);
    if ( v5 != *(char **)(a1 + 1184) )
    {
LABEL_3:
      v6 = *(_QWORD *)(a1 + 1120);
      v5 += 56;
      v7 = *(_QWORD *)(a1 + 1152);
      v8 = *(_QWORD *)(a1 + 1128);
      v9 = *(_QWORD *)(a1 + 1136);
      *((_QWORD *)v5 - 6) = *(_QWORD *)(a1 + 1160);
      *((_QWORD *)v5 - 7) = v7;
      v10 = *(_QWORD *)(a1 + 1112);
      *(_QWORD *)(a1 + 1112) = 0;
      *((_QWORD *)v5 - 4) = v6;
      v11 = *(_QWORD *)(a1 + 1144);
      *((_QWORD *)v5 - 5) = v10;
      *(_QWORD *)(a1 + 1144) = 0;
      *((_QWORD *)v5 - 3) = v11;
      *((_QWORD *)v5 - 2) = v8;
      *((_QWORD *)v5 - 1) = v9;
      *(_QWORD *)(a1 + 1176) = v5;
      goto LABEL_4;
    }
  }
  sub_1417C50(
    a1 + 1168,
    v5,
    (_QWORD *)(a1 + 1152),
    (_QWORD *)(a1 + 1160),
    (_QWORD *)(a1 + 1112),
    (_QWORD *)(a1 + 1120),
    (__int64 *)(a1 + 1144),
    (__int64 *)(a1 + 1128));
  v8 = v16;
LABEL_4:
  v12 = *(void **)(a1 + 1144);
  *(_QWORD *)(a1 + 1136) = 0;
  *(_OWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1144) = v4;
  if ( v12 )
  {
    sub_1466570(v12, v5, v8);
    operator delete(v12, 0x48u);
  }
  result = (__int64 (__fastcall *)(__int64))sub_1436080;
  if ( *(__int64 (__fastcall **)())(a1 + 1152) != sub_1436080 )
  {
    result = sub_1436090;
    *(_QWORD *)(a1 + 1152) = sub_1436090;
  }
  return result;
}
