__int64 __fastcall sub_329E70(__int64 a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  v2 = *(_BYTE **)(a1 + 24);
  if ( *v2 != 10 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)sub_11B1C0(v2 + 80, v5, 0) )
    return (unsigned int)(v5[0] >> 3) + 1;
  v3 = *(_QWORD *)(a1 + 24);
  result = 0xFFFFFFFFLL;
  if ( **(_BYTE **)(v3 + 8) == 1 )
    return get_tinfo_property(*(_QWORD *)(v3 + 24), 14);
  return result;
}
