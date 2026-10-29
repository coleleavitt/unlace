unsigned __int64 __fastcall sub_776780(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v6; // rax
  char vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  __int64 vars18; // [rsp+18h] [rbp+18h]
  unsigned __int64 vars28; // [rsp+28h] [rbp+28h]

  vars28 = __readfsqword(0x28u);
  vars0 = 2;
  vars18 = 0;
  vars8 = 0;
  copy_idcv(&vars0);
  v2 = a1[1];
  v3 = *a1;
  if ( a1[2] < (unsigned __int64)(v2 + 1) )
  {
    v6 = qvector_reserve(a1, v3, v2 + 1, 32);
    *a1 = v6;
    v3 = v6;
    v2 = a1[1];
  }
  v4 = v3 + 32 * v2;
  *(_BYTE *)v4 = 2;
  *(_QWORD *)(v4 + 24) = 0;
  *(_OWORD *)(v4 + 8) = 0;
  copy_idcv(v4);
  ++a1[1];
  free_idcv(&vars0);
  return vars28 - __readfsqword(0x28u);
}

