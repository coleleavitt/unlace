__int64 __fastcall sub_36E070(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  void *v4; // rcx
  __int128 v5; // kr00_16
  unsigned __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v9; // [rsp+18h] [rbp-30h]
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  v3 = *(unsigned int *)(a1 + 8);
  v7 = 0;
  if ( (unsigned __int8)get_type_by_tid(&v7, v3) && (get_tinfo_property(v7, 2) & 0x2F) == 0xD )
  {
    ptr = nullptr;
    v9 = 0;
    if ( v7 > 0xFF )
    {
      get_tinfo_pdata(&ptr, v7, 5);
      v4 = ptr;
      v5 = v9;
    }
    else
    {
      v4 = nullptr;
      v5 = 0u;
    }
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = v4;
    *(_OWORD *)(a2 + 16) = v5;
  }
  clear_tinfo_t(&v7);
  return 0;
}

