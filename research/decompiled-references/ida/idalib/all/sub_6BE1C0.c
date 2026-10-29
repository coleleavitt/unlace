__int64 __fastcall sub_6BE1C0(__int64 *a1, unsigned __int64 *a2, __int64 a3, void *a4)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  char v8; // al
  void *v9; // r12
  const char *v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __int64 v16; // [rsp+18h] [rbp-40h]
  __int64 v17; // [rsp+20h] [rbp-38h]
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v14 = 0;
  v17 = 0;
  if ( (unsigned __int8)sub_6BDC20(a1, &v14, a4) && (get_tinfo_property(v14, 2) & 0x2F) == 0xD )
  {
    ptr = nullptr;
    v16 = 0;
    v8 = sub_6B9E00(a1, (__int64)&ptr, a4, v6, v7);
    v9 = ptr;
    if ( v8 )
    {
      v10 = haystack;
      if ( v16 )
        v10 = (const char *)ptr;
      v11 = sub_6BDD30((__int64)a1, a3, v10, (__int64)&v14);
      if ( a2 )
      {
        v12 = v14;
        v14 = *a2;
        *a2 = v12;
      }
    }
    else
    {
      v11 = -1;
    }
    if ( v9 )
      qfree(v9);
  }
  else
  {
    v11 = -1;
  }
  clear_tinfo_t(&v14);
  return v11;
}
