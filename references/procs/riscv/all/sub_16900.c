__int64 __fastcall sub_16900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 spd; // rax
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v4 = sub_16730(a1, a3);
  if ( !v4 )
  {
    if ( *(_WORD *)(a3 + 24) == 123 && *(_BYTE *)(a3 + 41) == 1 && *(_WORD *)(a3 + 46) == 2 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 0x10) != 0 && *(_BYTE *)(a3 + 81) == 1 && *(_WORD *)(a3 + 86) == 8 )
      {
        spd = get_spd(a2, *(_QWORD *)(a3 + 16));
        if ( a2 )
        {
          v6 = -(*(_QWORD *)(a2 + 56) + spd + *(unsigned __int16 *)(a2 + 40));
          return add_auto_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v6);
        }
      }
      else if ( (unsigned __int8)sub_266E0(a1, &v8, *(_QWORD *)(a3 + 16), *(unsigned __int16 *)(a3 + 86)) )
      {
        set_auto_spd(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v8);
      }
    }
    return v9 - __readfsqword(0x28u);
  }
  if ( !a2 )
    return v9 - __readfsqword(0x28u);
  v6 = v4;
  return add_auto_stkpnt(a2, *(_QWORD *)(a3 + 16) + *(unsigned __int16 *)(a3 + 26), v6);
}
