_QWORD *__fastcall sub_9E0F70(__int64 **a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v4; // eax
  _QWORD *result; // rax
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  _QWORD *v11; // rbp
  __int64 v12; // rdx

  v4 = (*(_BYTE *)(a2 + 3) >> 1) & 0x3F;
  if ( v4 != 7 && v4 != 41 )
    return sub_9E0B40(a1, a2, a3, 0);
  v7 = sub_9DF520((__int64)a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), a3, a4);
  v10 = *a1;
  v11 = v7;
  v12 = **a1;
  v10[10] += 24;
  result = (_QWORD *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( v10[1] >= (unsigned __int64)(result + 3) && v12 )
    *v10 = (__int64)(result + 3);
  else
    result = (_QWORD *)sub_986170((__int64)v10, 24, 24, 4, v8, v9);
  result[2] = v11;
  *result = 327701;
  result[1] = 0;
  return result;
}
