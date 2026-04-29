bool __fastcall sub_A9400(__int64 a1, _DWORD *a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  _DWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h]
  unsigned __int64 v13; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v13 = a4;
  v14[1] = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 1) & 0x40) != 0 )
    return 0;
  if ( *(_BYTE *)a3 == 4 )
  {
    v8 = *(_DWORD **)(a3 + 8);
    if ( *v8 == 11
      || (v12 = a5, v9 = sub_30D1C0(v8), a5 = v12, v9)
      || (v10 = *(_QWORD *)(a3 + 8), *(_DWORD *)v10 == 10)
      && *(_BYTE *)(v10 + 32) == 4
      && (unsigned int)(**(_DWORD **)(v10 + 40) - 23) <= 1 )
    {
      if ( (unsigned int)(*a2 - 1) <= 1 || (unsigned int)(*a2 - 56) <= 1 )
        return 1;
    }
  }
  if ( !a5 )
  {
LABEL_6:
    if ( (unsigned __int8)sub_A8840(a1, (char *)a3, nullptr, &v13, 1u) )
      return v13 != 0;
    return 0;
  }
  v14[0] = 0;
  copy_tinfo_t(v14, a5);
  if ( !(unsigned __int8)sub_A8580(v14, &v13, *(_DWORD *)(a3 + 4), 1u) )
  {
    clear_tinfo_t(v14);
    goto LABEL_6;
  }
  v11 = v13 != 0;
  clear_tinfo_t(v14);
  return v11;
}
