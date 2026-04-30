__int64 __fastcall sub_179880(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 visea; // rdi
  unsigned __int64 v5; // [rsp+8h] [rbp-20h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-18h] BYREF

  v6[1] = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a2 + 80);
  if ( (v2 & 1) != 0 )
  {
    sub_1F09E0(0, &v5, v6);
    visea = v5;
    if ( v5 < (unsigned __int64)xmmword_8CC810 )
      visea = prev_visea(v6[0]);
    if ( !get_fchunk(visea) && (unsigned __int8)segtype(xmmword_8CC810) != 1 )
      return 3;
    return 7;
  }
  if ( *(_QWORD *)(a2 + 112) || (v2 & 2) != 0 )
    return 7;
  return 3;
}
