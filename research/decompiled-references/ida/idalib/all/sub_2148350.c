__int64 __fastcall sub_2148350(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v9; // r12
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v13; // [rsp+30h] [rbp-28h]

  v2 = sub_2153CB0(*(_QWORD *)(a1 + 8), &v10);
  if ( (_BYTE)v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    v12[0] = "expected identifier in directive";
    v13 = 259;
    return (unsigned int)sub_21543E0(v3, v12, 0, 0);
  }
  v11 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v2;
  v5 = **(_DWORD **)(v3 + 48);
  if ( v5 == 12 )
  {
    v9 = *(_QWORD *)(v3 + 184);
    v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v3 + 224LL))(v3, &v11);
    if ( (_BYTE)v6 )
      return v6;
    v3 = *(_QWORD *)(a1 + 8);
    if ( **(_DWORD **)(v3 + 48) != 9 )
      goto LABEL_4;
    if ( v11 > 0xFFFFFFFF )
    {
      v12[0] = "invalid '.secrel32' directive offset, can't be less than zero or greater than std::numeric_limits<uint32_t>::max()";
      v13 = 259;
      return (unsigned int)sub_2153E90(v3, v9, v12, 0, 0);
    }
  }
  else if ( v5 != 9 )
  {
LABEL_4:
    v12[0] = "unexpected token in directive";
    v13 = 259;
    return (unsigned int)sub_21543E0(v3, v12, 0, 0);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 24LL) + 368LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
    v10,
    v11);
  return v4;
}
