__int64 __fastcall sub_3E2C20(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+0h] [rbp-48h] BYREF
  __int128 v7; // [rsp+8h] [rbp-40h]
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v8 = __readfsqword(0x28u);
  v7 = 0;
  v6 = 0;
  v6 = qvector_reserve(&v6, 0, 1, 8);
  *(_QWORD *)(v6 + 8 * v7) = a2;
  *(_QWORD *)&v7 = v7 + 1;
  sub_3E29E0(a1, (char *)&v6, a3, v4, 0.0);
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree(v6, (const char *)&v6);
  }
  return 1;
}
