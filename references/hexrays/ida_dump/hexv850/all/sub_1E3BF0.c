unsigned __int64 *__fastcall sub_1E3BF0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // al
  unsigned __int64 *result; // rax

  v3 = a2;
  if ( (unsigned int)v3 >= *(_DWORD *)(*(_QWORD *)a1 + 64LL) )
    sub_1DA080(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 528LL) + 8 * v3);
  if ( v5 + 424 != a3 + 8 )
  {
    v6 = *(_QWORD *)(v5 + 424);
    *(_QWORD *)(v5 + 424) = *(_QWORD *)(a3 + 8);
    v7 = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 8) = v6;
    v8 = *(_QWORD *)(v5 + 432);
    *(_QWORD *)(v5 + 432) = v7;
    *(_QWORD *)(a3 + 16) = v8;
  }
  v9 = *(_BYTE *)(v5 + 440);
  *(_BYTE *)(v5 + 440) = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = v9;
  sub_1E38E0(v5 + 416, a3);
  result = sub_13B0F0((unsigned __int64 **)(v5 + 456));
  *(_BYTE *)(v5 + 472) = 1;
  return result;
}
