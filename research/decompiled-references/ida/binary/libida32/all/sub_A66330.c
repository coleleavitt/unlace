__int64 __fastcall sub_A66330(_QWORD *a1, __int64 a2, const void *a3, size_t a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  size_t v8; // r14
  __int64 v9; // rax
  _QWORD *v10; // rbp
  char *v11; // rdx
  void *v12; // rax
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 result; // rax

  v8 = (unsigned int)sub_F48820(a2);
  v9 = a1[294];
  a1[304] += v8 + 8;
  v10 = (_QWORD *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v11 = (char *)v10 + v8 + 8;
  if ( a1[295] >= (unsigned __int64)v11 && v9 )
    a1[294] = v11;
  else
    v10 = (_QWORD *)sub_962430((__int64)(a1 + 294), v8 + 8, v8 + 8, 3, v6, v7);
  *v10 = a2;
  v12 = memset(v10 + 1, 0, v8);
  sub_F49F30(a1, *v10, v12, 0);
  v13 = sub_6D2E30(a1[2188], a3, a4);
  v18 = sub_6E4280((__int64 *)(*(_QWORD *)(a1[283] + 80LL) + 72LL), *(_QWORD *)(a1[283] + 80LL), v14, v15, v16, v17);
  if ( v18 )
    v18 += 5;
  result = sub_B567D0(a1, v18, 0, 0, v13, v10);
  *(_BYTE *)(result + 29) |= 2u;
  return result;
}

