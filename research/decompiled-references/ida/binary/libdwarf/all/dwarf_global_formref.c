__int64 __fastcall dwarf_global_formref(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v4 = 0;
  return dwarf_global_formref_b(a1, a2, &v4, a3);
}

