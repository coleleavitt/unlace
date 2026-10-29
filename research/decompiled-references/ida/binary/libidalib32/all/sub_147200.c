unsigned __int64 __fastcall sub_147200(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbx
  char *v3; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v9; // [rsp+50F8h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  get_idasgn_desc();
  get_ida_subdirs();
  v1 = *(_QWORD *)(a1 + 192);
  v2 = 56LL * *(_QWORD *)(a1 + 200);
  v3 = (char *)(v1 + v2);
  if ( v1 != v1 + v2 )
  {
    v4 = 0x6DB6DB6DB6DB6DB7LL * (v2 >> 3);
    if ( v4 )
    {
      _BitScanReverse64(&v5, v4);
      sub_146670(*(_QWORD *)(a1 + 192), v3, 2LL * (int)v5);
      if ( v2 > 896 )
      {
        v6 = (__int64 *)(v1 + 896);
        sub_145210(v1, v1 + 896);
        do
        {
          v7 = v6;
          v6 += 7;
          sub_145070(v7);
        }
        while ( v3 != (char *)v6 );
        return v9 - __readfsqword(0x28u);
      }
    }
    else
    {
      sub_146670(*(_QWORD *)(a1 + 192), v3, -2);
    }
    sub_145210(v1, (__int64)v3);
  }
  return v9 - __readfsqword(0x28u);
}

