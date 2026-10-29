__int64 __fastcall sub_50F390(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // r9
  _QWORD *v6; // r10
  unsigned __int64 *v7; // rax
  __int64 v8; // r10
  char v9; // r11
  unsigned __int64 *v10; // rbx
  unsigned __int64 *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rdx
  char *v14; // r14
  __int64 v16; // rax
  char *v17; // r14
  unsigned __int64 *v18; // r14
  unsigned __int64 v19; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v5 = a1[4];
  v6 = (_QWORD *)a1[3];
  v21 = __readfsqword(0x28u);
  v7 = sub_50D020(v6, (__int64)&v6[2 * v5], a2);
  v10 = v7;
  if ( v7 != v11 && *v7 == a2 )
  {
    if ( v9 )
    {
      v17 = (char *)v7 - v8;
      v19 = a2;
      v20 = a3;
      sub_50D950(((__int64)v7 - v8) >> 4, v7, &v19, 0x7Au);
      v18 = (unsigned __int64 *)&v17[a1[3]];
      *v18 = a2;
      v18[1] = a3;
    }
    return 0;
  }
  else
  {
    v19 = a2;
    v20 = a3;
    sub_50D950(((__int64)v7 - v8) >> 4, &v19, nullptr, 0x7Bu);
    v12 = a1[3];
    v13 = a1[4];
    v14 = (char *)v10 - v12;
    if ( a1[5] < (unsigned __int64)(v13 + 1) )
    {
      v16 = qvector_reserve(a1 + 3, v12, v13 + 1, 16);
      v13 = a1[4];
      a1[3] = v16;
      v10 = (unsigned __int64 *)&v14[v16];
    }
    memmove(v10 + 2, v10, 16 * v13 - (_QWORD)v14);
    *v10 = a2;
    v10[1] = a3;
    ++a1[4];
    return 1;
  }
}
