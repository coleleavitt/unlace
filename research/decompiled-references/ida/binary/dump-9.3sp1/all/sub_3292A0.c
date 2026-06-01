__int64 __fastcall sub_3292A0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v9; // rax
  __int64 *v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !a4 )
    return sub_122B20(a1, a2, a3);
  v10 = nullptr;
  v11 = 0;
  if ( a2 + a3 - 1 >= a2 )
  {
    v10 = (__int64 *)qvector_reserve((__int64)&v10, 0, 1, 16);
    v9 = &v10[2 * v11];
    *v9 = a2;
    v9[1] = a3;
    *(_QWORD *)&v11 = v11 + 1;
  }
  sub_317C60((__int64 *)&v10, a4);
  sub_316CB0(a1 + 2, &v10, v6, v7);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree((__int64)v10);
  }
  return v12 - __readfsqword(0x28u);
}
