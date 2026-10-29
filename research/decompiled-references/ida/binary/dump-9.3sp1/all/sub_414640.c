unsigned __int64 __fastcall sub_414640(__int64 *a1, _DWORD *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v10[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  if ( *a2 != 61 )
  {
    sub_127A20((__int64)v9, a1[23], (__int64)a2, 1, a5, a6);
    sub_64280(a1 + 3, v9);
    sub_316CB0(a1 + 5, v10, v7, v8);
    if ( v10[0] )
    {
      v10[1] = nullptr;
      qfree((__int64)v10[0]);
    }
    qfree(v9[0]);
  }
  return v11 - __readfsqword(0x28u);
}
