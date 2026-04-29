unsigned __int64 __fastcall sub_189C10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  __int128 v6; // [rsp+8h] [rbp-40h]
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  v6 = 0;
  v5 = 0;
  v5 = qvector_reserve(&v5, 0, 1, 8);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  *(_QWORD *)&v6 = v6 + 1;
  sub_1898C0(a1, &v5, a3);
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5);
  }
  return v7 - __readfsqword(0x28u);
}
