__int64 __fastcall sub_27BE70(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) == 80 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v3 + 8) == 61 && !sub_250E30(*(__int64 **)(v3 + 24), (_QWORD *)(v3 + 48)) )
    {
      v5 = *(_QWORD *)(a1 + 80);
      if ( !(_BYTE)v5 )
      {
        sub_3684A0(v6, *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8LL), 0);
        copy_tinfo_t(a1 + 80, v6);
        clear_tinfo_t(v6);
        v5 = *(_QWORD *)(a1 + 80);
      }
      if ( (get_tinfo_property(v5, 2) & 0xF) == 0xA && !*(_BYTE *)(*(_QWORD *)(v3 + 24) + 13LL) )
      {
        copy_tinfo_t(v3 + 48, a1 + 80);
        *(_BYTE *)(a1 + 88) = 1;
      }
    }
  }
  return 0;
}
