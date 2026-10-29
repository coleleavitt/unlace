__int64 __fastcall sub_E5ACB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // ax
  __int64 result; // rax
  size_t v5; // rax
  __int16 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]

  v2 = a1 + 1048;
  v3 = *(_WORD *)(a2 + 20);
  vars0 = 3;
  vars8 = v3 & 0x7FFF;
  sub_222AB70(a1 + 1048, "index", 5);
  sub_222CAC0(a1 + 1048, &vars0);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&vars0);
  result = *(_WORD *)(a2 + 22) & 0x7FFF;
  if ( (*(_WORD *)(a2 + 22) & 0x7FFF) != 0 )
  {
    vars0 = 3;
    vars8 = (unsigned int)(result - 1);
    v5 = j__strlen("pack_index");
    sub_222AB70(v2, "pack_index", v5);
    sub_222CAC0(v2, &vars0);
    sub_2229BF0(v2);
    return sub_222B2A0(&vars0);
  }
  return result;
}
