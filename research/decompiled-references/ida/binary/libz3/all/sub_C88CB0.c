__int64 __fastcall sub_C88CB0(__int64 a1)
{
  __int64 v1; // r13
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax
  char *v8; // r12
  void *v9; // [rsp+0h] [rbp-28h]

  v1 = **(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)sub_186B270(0xB0u);
  *v2 = v1;
  v3 = v2;
  sub_F735C0(v2 + 1, v1);
  sub_16669D0(v3 + 17, *v3);
  sub_14B7810((_DWORD)v3 + 152, *v3, a1 + 24, v4, v5, v6, v9);
  sub_14B5FE0(v3 + 19, a1 + 24);
  result = sub_1859610(a1 + 24, "norm_int_only", 1);
  v8 = *(char **)(a1 + 16);
  *((_BYTE *)v3 + 168) = result;
  *(_QWORD *)(a1 + 16) = v3;
  if ( v8 )
  {
    sub_14B63F0(v8 + 152);
    sub_F74720(v8 + 8);
    return sub_186B220(v8);
  }
  return result;
}

