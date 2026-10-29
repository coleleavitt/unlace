__int64 __fastcall sub_32F540(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  char v4; // al
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 8);
  v13 = __readfsqword(0x28u);
  if ( v4 == 1 )
  {
    v7 = *(_DWORD *)a1;
    v10[0] = 0;
    v10[1] = 0;
    sub_63E80(v10, v7, a4);
    v11 = nullptr;
    v12 = 0;
    sub_64280(a3, v10);
    sub_316CB0(a3 + 2, &v11, v8, v9);
    if ( v11 )
    {
      *(_QWORD *)&v12 = 0;
      qfree((__int64)v11);
    }
    qfree(v10[0]);
    return v13 - __readfsqword(0x28u);
  }
  else
  {
    if ( v4 != 5 )
      sub_328990(a1, a2, a4);
    return sub_122B20(a3, *(_QWORD *)a1 + a2, a4);
  }
}
