_BYTE *__fastcall sub_796CA0(__int64 *a1, _BYTE *a2)
{
  _BYTE *v2; // rbx
  __int64 v3; // rdx
  _BYTE *v4; // r13
  __int64 v6; // rax
  char v7[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v8; // [rsp+8h] [rbp-50h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v2 = a2;
  v10 = __readfsqword(0x28u);
  v7[0] = 2;
  v9 = 0;
  v8 = 0;
  copy_idcv(v7);
  v3 = a1[1];
  v4 = &a2[-*a1];
  if ( a1[2] < (unsigned __int64)(v3 + 1) )
  {
    v6 = qvector_reserve(a1, *a1, v3 + 1, 32);
    *a1 = v6;
    v3 = a1[1];
    v2 = &v4[v6];
  }
  memmove(v2 + 32, v2, 32 * v3 - (_QWORD)v4);
  *v2 = 2;
  *((_QWORD *)v2 + 3) = 0;
  *(_OWORD *)(v2 + 8) = 0;
  copy_idcv(v2);
  ++a1[1];
  free_idcv(v7);
  return v2;
}
