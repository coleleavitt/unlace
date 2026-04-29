unsigned __int64 __fastcall sub_17F410(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int8 *v7; // [rsp+8h] [rbp-50h] BYREF
  char v8[8]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 4 )
  {
    v4 = *(_DWORD **)(a2 + 8);
    if ( *v4 == 12 )
    {
      v5 = sub_1186A0((__int64)v4, &v7);
      if ( v5 )
      {
        if ( *v7 == 10 )
        {
          v6 = *((_QWORD *)v7 + 1);
          if ( *(_BYTE *)v6 == 6 && !(unsigned __int8)is_spec_ea(*(_QWORD *)(v6 + 8)) )
          {
            sub_11F840((__int64)v8, v7);
            *(_QWORD *)(v9 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL)
                                & (*(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL) + *(_QWORD *)(v9 + 8));
            sub_118810((char *)a2, v8);
            sub_118BA0((__int64)v8);
          }
        }
      }
    }
  }
  return v10 - __readfsqword(0x28u);
}
