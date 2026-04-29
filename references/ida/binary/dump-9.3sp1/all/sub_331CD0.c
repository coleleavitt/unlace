__int64 __fastcall sub_331CD0(__int64 a1, __int64 *a2, __int64 a3)
{
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 *v11; // [rsp+10h] [rbp-38h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 36) & 1) != 0 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 1504) + 168LL))(
           *(_QWORD *)(a3 + 1504),
           *(unsigned int *)(a1 + 24));
    if ( v4 != -1 )
    {
      v5 = *(_DWORD *)(a1 + 32);
      v10[0] = 0;
      v10[1] = 0;
      sub_63E80(v10, v4, v5);
      v11 = nullptr;
      v12 = 0;
      sub_64280(a2, v10);
      sub_316CB0(a2 + 2, &v11, v6, v7);
      if ( v11 )
      {
        *(_QWORD *)&v12 = 0;
        qfree((__int64)v11);
      }
      qfree(v10[0]);
      return 1;
    }
  }
  else
  {
    v9 = sub_1CFDD0(a3, *(_QWORD *)(a1 + 24));
    if ( v9 >= 0 )
    {
      sub_122B20(
        a2,
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(a3 + 1440) + v9),
        *(int *)(a1 + 32));
      return 1;
    }
  }
  return 0;
}
