__int64 __fastcall sub_CD6780(__int64 a1)
{
  __int64 v1; // r12
  _QWORD *v2; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *v8; // r12

  v1 = **(_QWORD **)(a1 + 16);
  v2 = (_QWORD *)sub_186B270(0x10u);
  *v2 = v1;
  v3 = v1;
  v4 = v2;
  result = sub_148CE80(v2 + 1, v1);
  v8 = *(char **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v4;
  if ( v8 )
  {
    sub_148D160(v8 + 8, v3, v6, v7);
    return sub_186B220(v8);
  }
  return result;
}

