__int64 __fastcall get_final_alignment(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 result; // rax
  int v5; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v2 = ea2node(a1);
  if ( netnode_supval(v2, 17, &v5, 4, 65) <= 0 || (v3 = v5 - 1, (unsigned int)(v5 - 1) > 0x1F) )
    v3 = calc_min_align(a2);
  result = v3;
  if ( (*(_BYTE *)(qword_2CCB598 + 1075) & 0x20) == 0 )
    return 1LL << v3;
  return result;
}
