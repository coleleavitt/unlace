unsigned __int64 __fastcall sub_183C370(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        double a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r13
  unsigned __int8 v10; // cl
  unsigned __int64 result; // rax
  _DWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  _BYTE *v21; // [rsp+8h] [rbp-30h]

  v7 = a2;
  sub_15F7280(&v20, a1, nullptr, a2, 0, a7);
  if ( v21 )
    sub_15F2350(&v20, v21);
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v10 == 48 )
    return sub_B88650(v7, 1);
  if ( (unsigned int)v10 - 49 >= 3 )
    v7 = 0;
  if ( a4 > 1 )
  {
    v12 = (_DWORD *)(a4 & 0xFFFFFFFFFFFFFFFELL);
    if ( !(unsigned __int8)sub_1E534E0(a1, v12, 11) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
        || (*v12 & 0x10000) != 0 )
      {
        return (unsigned __int64)sub_B78130(v7, (__int64)v12);
      }
      v13 = sub_183C230(a1, v7, (unsigned __int64)v12, a3, a5);
      if ( v13 != 1 )
      {
        v16 = 0;
        v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
        v18 = v17;
        if ( v17 )
          v16 = (unsigned int)sub_C00A40(v17, v7, 0, v14, v15);
        v19 = sub_19B4A30(a1, v18, v16, 0, 0, 0);
        if ( v19 != 1 )
        {
          v12 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFFELL);
          return (unsigned __int64)sub_B78130(v7, (__int64)v12);
        }
      }
      return sub_B88650(v7, 1);
    }
  }
  sub_B88650(v7, 1);
  result = sub_18C4330(a1, a3, a3, 0, 0, *(_QWORD *)(v7 + 48));
  if ( result > 1 )
    return (unsigned __int64)sub_B78130(v7, result & 0xFFFFFFFFFFFFFFFELL);
  return result;
}
