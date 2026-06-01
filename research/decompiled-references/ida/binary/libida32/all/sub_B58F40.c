size_t __fastcall sub_B58F40(__int64 a1, const void *a2, size_t a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char *v7; // rbx
  char *v8; // rdx
  size_t result; // rax

  v4 = (_QWORD *)sub_B685F0(a1);
  v7 = (char *)v4[294];
  v4[304] += a3 + 1;
  v8 = &v7[a3 + 1];
  if ( v4[295] >= (unsigned __int64)v8 && v7 )
    v4[294] = v8;
  else
    v7 = (char *)sub_962430((__int64)(v4 + 294), a3 + 1, a3 + 1, 0, v5, v6);
  if ( a3 )
    memmove(v7, a2, a3);
  v7[a3] = 0;
  result = strlen(v7);
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

