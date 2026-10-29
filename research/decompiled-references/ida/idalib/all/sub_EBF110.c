_DWORD *__fastcall sub_EBF110(_QWORD *a1, const void *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  size_t v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rax
  _DWORD *v12; // rbx
  __int64 v14; // rax
  int v15; // [rsp+8h] [rbp-30h]
  int v16; // [rsp+Ch] [rbp-2Ch]

  v8 = a3;
  v9 = 4 * a3;
  v10 = 4 * a3 + 20;
  v11 = a1[294];
  a1[304] += v10;
  v12 = (_DWORD *)((v11 + 3) & 0xFFFFFFFFFFFFFFFCLL);
  if ( a1[295] >= (unsigned __int64)v12 + v10 && v11 )
  {
    a1[294] = (char *)v12 + v10;
  }
  else
  {
    v16 = a6;
    v15 = a5;
    v14 = sub_986170((__int64)(a1 + 294), v10, 4 * a3 + 20, 2, a5, a6);
    LODWORD(a6) = v16;
    LODWORD(a5) = v15;
    v12 = (_DWORD *)v14;
  }
  *v12 = a4;
  v12[1] = a6;
  v12[2] = 0;
  v12[3] = a5;
  v12[4] = v8;
  if ( v9 )
    memmove(v12 + 5, a2, v9);
  return v12;
}
