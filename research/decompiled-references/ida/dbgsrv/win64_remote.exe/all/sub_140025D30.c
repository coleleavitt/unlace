/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140025D30
// Address: 0x0000000140025D30

//----- (0000000140025D30) ----------------------------------------------------
char *__fastcall sub_140025D30(char **a1, __int64 a2, char *a3)
{
  char *v5; // rcx
  __int64 v6; // rbx
  char *v7; // r8
  char *v8; // rbx
  char v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-10h]

  v10[0] = 2;
  v11 = 0;
  v12 = 0;
  sub_140028E70(v10, a3);
  v5 = *a1;
  v6 = a2 - (_QWORD)*a1;
  v7 = a1[1] + 1;
  if ( v7 > a1[2] )
  {
    v5 = (char *)sub_14005ABE0((__int64)a1, v5, (unsigned __int64)v7, 0x20u);
    *a1 = v5;
  }
  v8 = &v5[v6 & 0xFFFFFFFFFFFFFFE0uLL];
  memcpy(v8 + 32, v8, (unsigned __int64)&v5[32LL * (_QWORD)a1[1] - (_QWORD)v8] & 0xFFFFFFFFFFFFFFE0uLL);
  *v8 = 2;
  *(_OWORD *)(v8 + 8) = 0;
  *((_QWORD *)v8 + 3) = 0;
  sub_140028E70(v8, v10);
  ++a1[1];
  sub_140029390((__int64)v10);
  return v8;
}
