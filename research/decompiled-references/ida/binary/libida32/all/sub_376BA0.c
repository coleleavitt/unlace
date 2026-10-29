__int64 __fastcall sub_376BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int tinfo_udt_member; // eax
  const char *v4; // rcx
  __int64 v6; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-B8h] BYREF
  void *v8; // [rsp+20h] [rbp-A8h]
  __int128 v9; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-90h]
  __int128 v11; // [rsp+40h] [rbp-88h]
  __int128 v12; // [rsp+50h] [rbp-78h] BYREF
  __int64 v13; // [rsp+70h] [rbp-58h]
  int v14; // [rsp+78h] [rbp-50h]
  __int64 v15; // [rsp+80h] [rbp-48h]
  char v16; // [rsp+88h] [rbp-40h]
  unsigned __int64 v17; // [rsp+98h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v6 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  if ( (unsigned __int8)get_type_by_tid(&v6, *(unsigned int *)(a1 + 8)) )
  {
    v2 = *(unsigned int *)(a1 + 40);
    v7[1] = 0;
    v8 = nullptr;
    ptr = nullptr;
    v13 = 1;
    v14 = -1;
    v15 = 0;
    v16 = 0;
    v7[0] = v2;
    v9 = 0;
    v11 = 0;
    v12 = 0;
    tinfo_udt_member = find_tinfo_udt_member((int)v7);
    if ( tinfo_udt_member != -1 )
    {
      v4 = haystack;
      if ( *(_QWORD *)(a1 + 80) )
        v4 = *(const char **)(a1 + 72);
      *(_DWORD *)(a2 + 8) = set_tinfo_property4(&v6, 11, tinfo_udt_member, v4, 0, 0) == 0;
    }
    clear_tinfo_t(&v12);
    if ( ptr )
    {
      *(_QWORD *)&v11 = 0;
      qfree(ptr);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
  }
  clear_tinfo_t(&v6);
  return 0;
}

