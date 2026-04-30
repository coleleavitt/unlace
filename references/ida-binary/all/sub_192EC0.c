_BOOL8 __fastcall sub_192EC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // eax
  __int64 v5; // rsi
  _BOOL4 v6; // ebx
  __int64 local_types_tlc; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-A8h]
  __int128 v17; // [rsp+38h] [rbp-A0h]
  __int64 v18; // [rsp+48h] [rbp-90h]
  __int128 v19; // [rsp+50h] [rbp-88h]
  _OWORD v20[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v21; // [rsp+90h] [rbp-48h]
  int v22; // [rsp+98h] [rbp-40h]
  __int64 v23; // [rsp+A0h] [rbp-38h]
  char v24; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v25; // [rsp+B8h] [rbp-20h]

  v2 = a1;
  v3 = *(_DWORD *)a1;
  v25 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 == -1 )
  {
    v5 = *(_QWORD *)(a1 + 88);
    if ( v3 == 4 )
    {
      if ( v5 == -1 )
      {
        if ( !*(_BYTE *)(a1 + 136) )
          return (_BOOL4)(unsigned __int8)sub_17E490(unk_8C9E58);
        if ( *(_DWORD *)(a1 + 96) != -2 )
          return (_BOOL4)(unsigned __int8)sub_17E490(unk_8C9E58);
        v5 = *(_QWORD *)(a1 + 104);
        if ( v5 == -1 || !(unsigned __int8)is_mapped(*(_QWORD *)(a1 + 104)) )
          return (_BOOL4)(unsigned __int8)sub_17E490(unk_8C9E58);
      }
      return (_BOOL4)(unsigned __int8)sub_192AA0(a2, v5, -1, 1u);
    }
    if ( v3 > 4 )
    {
      if ( v3 == 5 )
        return (_BOOL4)(unsigned __int8)sub_192AA0(a2, v5, -1, 1u);
      return 0;
    }
  }
  else
  {
    if ( v3 > 5 )
      return 0;
    if ( v3 > 3 )
      return (_BOOL4)(unsigned __int8)sub_192AA0(a2, v5, -1, 1u);
  }
  if ( v3 == 1 )
  {
    if ( a2 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v14 = 0;
      v16 = 0;
      v18 = 0;
      v21 = 1;
      v22 = -1;
      v23 = 0;
      v24 = 0;
      v15 = 0;
      v17 = 0;
      v19 = 0;
      v20[0] = 0;
      get_udm_by_tid(&v14, &v15, v9);
      v10 = (unsigned __int64)v15 >> 3;
      v6 = sub_28EAC0(*(_QWORD *)(a1 + 8), (unsigned __int64)v15 >> 3) != 0;
      clear_tinfo_t(v20);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18, v10, v11, v12, v13);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16, v10, v11, v12, v13);
      }
      clear_tinfo_t(&v14);
    }
    else
    {
      return (_BOOL4)(unsigned __int8)sub_17E490(unk_8C9E48);
    }
  }
  else
  {
    if ( v3 - 2 > 1 )
      return 0;
    if ( a2 || (a1 = *(_QWORD *)(a1 + 64), v5 = 7, (unsigned int)get_tinfo_property(a1, 7)) )
    {
      *(_QWORD *)&v15 = -2;
      local_types_tlc = get_local_types_tlc(a1, v5);
      (*(void (__fastcall **)(__int64, __int128 *, __int64, _QWORD, __int64))(*(_QWORD *)local_types_tlc + 104LL))(
        local_types_tlc,
        &v15,
        v2 + 64,
        *(unsigned int *)(v2 + 72),
        -1);
      return (_BOOL4)(unsigned __int8)sub_3CE6D0(v2 + 64, &v15, 0);
    }
    else
    {
      return (_BOOL4)(unsigned __int8)sub_17E490(unk_8CA0A8);
    }
  }
  return v6;
}
