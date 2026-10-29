unsigned __int64 __fastcall sub_2B0D0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-48h] BYREF
  int v6; // [rsp+18h] [rbp-30h]
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (get_flags_ex(a2, 4) & 0xF00000) != 0x500000 )
  {
    v2 = 2;
    if ( *(_BYTE *)(a1 + 617) )
      v2 = 9;
    v6 = v2;
    v3 = *(_QWORD *)(a1 + 608);
    v5[0] = -1;
    v5[2] = 0;
    v5[1] = v3;
    op_offset_ex(a2, 0, v5);
  }
  return v7 - __readfsqword(0x28u);
}

