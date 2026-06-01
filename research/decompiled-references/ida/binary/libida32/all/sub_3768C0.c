__int64 __fastcall sub_3768C0(unsigned int *a1, __int64 a2)
{
  int v2; // r13d
  int v3; // eax
  __int64 v4; // rbp
  unsigned int v5; // r9d
  char tinfo_property; // al
  __int64 v8; // rdx
  int data_elsize; // r8d
  const char *v10; // r9
  int v11; // r9d
  char *v12; // r8
  int tinfo_udt_member; // [rsp+14h] [rbp-164h]
  __int64 v14; // [rsp+28h] [rbp-150h] BYREF
  __int128 v15; // [rsp+30h] [rbp-148h] BYREF
  void *v16; // [rsp+40h] [rbp-138h]
  __int128 v17; // [rsp+48h] [rbp-130h]
  void *ptr; // [rsp+58h] [rbp-120h]
  __int128 v19; // [rsp+60h] [rbp-118h]
  _OWORD v20[2]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v21; // [rsp+90h] [rbp-E8h]
  int v22; // [rsp+98h] [rbp-E0h]
  __int64 v23; // [rsp+A0h] [rbp-D8h]
  char v24; // [rsp+A8h] [rbp-D0h]
  _BYTE v25[136]; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v26; // [rsp+138h] [rbp-40h]

  v2 = a1[26];
  v3 = *(_DWORD *)(a2 + 8);
  v4 = a1[18];
  v26 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_364C90(v4, v2, (__int64)(a1 + 40), v3 - 5, (__int64)v25) )
  {
    *(_DWORD *)(a2 + 8) = 0;
    v14 = 0;
    if ( !(unsigned __int8)get_type_by_tid(&v14, v5) )
      goto LABEL_4;
    v16 = nullptr;
    ptr = nullptr;
    v21 = 1;
    v22 = -1;
    v23 = 0;
    v24 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v20[0] = 0;
    tinfo_property = get_tinfo_property(v14, 2);
    v8 = a1[10];
    if ( (tinfo_property & 0x3F) == 0x1D )
      *(_QWORD *)&v15 = (unsigned int)v8;
    else
      *(_QWORD *)&v15 = 8 * v8;
    tinfo_udt_member = find_tinfo_udt_member((int)&v15);
    if ( tinfo_udt_member != -1 )
    {
      data_elsize = get_data_elsize(0xFFFFFFFFLL, v4, v25);
      v10 = haystack;
      if ( (_QWORD)v17 )
        v10 = (const char *)v16;
      if ( (unsigned __int8)sub_5F8DF0(*(_QWORD *)(qword_2CA1698 + 1480), v20, v4, v25, a1[34] * data_elsize, v10) )
      {
        sub_69DC80(*(_QWORD *)(qword_2CA1698 + 1480), (unsigned int)&v15, v4, v2, (unsigned int)v25, v11);
        v12 = (char *)v20 + 8;
        if ( !*((_QWORD *)&v20[0] + 1) )
          v12 = nullptr;
        *(_DWORD *)(a2 + 8) = set_tinfo_property4(&v14, 12, tinfo_udt_member, v20, v12, 0) == 0;
      }
    }
    clear_tinfo_t(v20);
    if ( ptr )
    {
      *(_QWORD *)&v19 = 0;
      qfree(ptr);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
      clear_tinfo_t(&v14);
      return 0;
    }
    else
    {
LABEL_4:
      clear_tinfo_t(&v14);
      return 0;
    }
  }
  else
  {
    set_error_string();
    return set_qerrno(56, "set_member_type");
  }
}

