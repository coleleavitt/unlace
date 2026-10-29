__int64 __fastcall sub_293BB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  __int64 v5; // rbp
  char v7; // r13
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // [rsp+Ch] [rbp-7Ch]
  __int64 v14; // [rsp+10h] [rbp-78h]
  __int64 v15; // [rsp+10h] [rbp-78h]
  __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  _BYTE v18[8]; // [rsp+28h] [rbp-60h] BYREF
  __int64 tinfo_property; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+38h] [rbp-50h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) != 61 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 51 )
    return 0;
  v5 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v5 + 8) != 48 )
    return 0;
  tinfo_property = get_tinfo_property();
  v7 = get_tinfo_property();
  clear_tinfo_t();
  if ( v7 != 33 )
  {
    if ( v7 == 32 )
    {
      v13 = 8;
      goto LABEL_9;
    }
    return 0;
  }
  v13 = 4;
LABEL_9:
  get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 9
    && v13 == get_tinfo_size()
    && (v14 = *(_QWORD *)(a2 + 32), v13 == get_tinfo_size()) )
  {
    tinfo_property = 0xFFFFFFFF00000000LL;
    v8 = *(_QWORD *)(a1 + 72);
    v20 = 0;
    v9 = sub_11D360((__int64)&tinfo_property, *(_QWORD *)(v8 + 112), *(_BYTE **)(v14 + 24), -(__int64)v13);
    v10 = v14;
    v3 = v9;
    if ( (_BYTE)v9 )
    {
      v11 = *(_QWORD *)(v14 + 24);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 16);
        if ( v12 )
        {
          v17 = v14;
          *(_QWORD *)(v11 + 24) = 0;
          v15 = v11;
          qfree(v12);
          v10 = v17;
          v11 = v15;
        }
        v16 = v10;
        j__qfree(v11);
        v10 = v16;
      }
      *(_DWORD *)(v10 + 8) = 62;
      *(_QWORD *)(v10 + 24) = v20;
      sub_32C150(v18, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), (unsigned int)v13);
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
