__int64 __fastcall dwarf_srclines_b(struct Dwarf_Die_s *a1, __int64 a2, _BYTE *a3, __int64 a4, Dwarf_Error *a5)
{
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-40h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h] BYREF
  __int64 v10; // [rsp+18h] [rbp-30h] BYREF
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11[0] = 0;
  result = _dwarf_internal_srclines(
             a1,
             1,
             a2,
             (__int64)a3,
             a4,
             (__int64)&v9,
             (__int64)v11,
             (__int64)&v10,
             (__int64)&v8,
             0,
             1,
             a5);
  if ( !(_DWORD)result )
    *(_BYTE *)(*(_QWORD *)a4 + 4LL) = 1;
  *a3 = (v8 != 0) - ((v11[0] == 0) - 1);
  return result;
}

