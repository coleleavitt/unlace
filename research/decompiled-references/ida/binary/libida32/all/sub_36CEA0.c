__int64 __fastcall sub_36CEA0(__int64 a1, __int64 a2)
{
  void *v2; // rcx
  __int128 v3; // kr00_16
  unsigned __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __int128 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  if ( (unsigned __int8)get_type_by_tid(&v5, *(unsigned int *)(a1 + 8)) )
  {
    ptr = nullptr;
    v7 = 0;
    if ( v5 > 0xFF )
    {
      get_tinfo_pdata(&ptr, v5, 5);
      v2 = ptr;
      v3 = v7;
    }
    else
    {
      v2 = nullptr;
      v3 = 0u;
    }
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = v2;
    *(_OWORD *)(a2 + 16) = v3;
  }
  clear_tinfo_t(&v5);
  return 0;
}

