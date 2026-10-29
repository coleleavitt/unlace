__int64 __fastcall sub_293BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  __int64 v5; // rbp
  char v6; // r13
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // [rsp+Ch] [rbp-7Ch]
  __int64 v12; // [rsp+10h] [rbp-78h]
  __int64 v13; // [rsp+10h] [rbp-78h]
  _BYTE v14[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) != 61 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51 )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 48 )
    return 0;
  tinfo_property = get_tinfo_property();
  v6 = get_tinfo_property();
  clear_tinfo_t();
  if ( v6 != 33 )
  {
    if ( v6 == 32 )
    {
      v11 = 8;
      goto LABEL_9;
    }
    return 0;
  }
  v11 = 4;
LABEL_9:
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 9
    && v11 == get_tinfo_size()
    && (v12 = *(_QWORD *)(a2 + 32), v11 == get_tinfo_size()) )
  {
    tinfo_property = 0xFFFFFFFF00000000LL;
    v7 = *(_QWORD *)(a1 + 72);
    v16 = 0;
    v8 = sub_11D360((__int64)&tinfo_property, *(_QWORD *)(v7 + 112), *(_QWORD *)(v12 + 24), -(__int64)v11);
    v9 = v12;
    v3 = v8;
    if ( (_BYTE)v8 )
    {
      v10 = *(_QWORD *)(v12 + 24);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 16) )
        {
          *(_QWORD *)(v10 + 24) = 0;
          qfree();
          v9 = v12;
        }
        v13 = v9;
        j__qfree();
        v9 = v13;
      }
      *(_DWORD *)(v9 + 8) = 62;
      *(_QWORD *)(v9 + 24) = v16;
      sub_32C150(v14, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (unsigned int)v11);
      copy_tinfo_t();
      clear_tinfo_t();
      LOBYTE(tinfo_property) = 0;
      sub_255850((__int64 *)v5, *(_QWORD *)(v5 + 24));
      sub_2441C0(*(_QWORD *)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), 0);
      *(_DWORD *)(a2 + 56) |= 4u;
      copy_tinfo_t();
      if ( (unsigned __int8)sub_283B00(a1, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL)) )
        *(_DWORD *)(a1 + 8) |= 8u;
    }
    sub_11CDA0((__int64)&tinfo_property);
  }
  else
  {
    v3 = 0;
  }
  clear_tinfo_t();
  return v3;
}
