void __fastcall sub_6D4540(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // eax
  char v6; // al

  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v2 = sub_B8C3D0(a2);
    v3 = *(_QWORD *)v2 + 8LL * *(unsigned int *)(v2 + 8);
    v4 = 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
      v4 = *(_QWORD *)sub_B8C3D0(a2);
    if ( v4 != v3 )
    {
      while ( *(_WORD *)(*(_QWORD *)v4 + 36LL) != 126 )
      {
        v4 += 8;
        if ( v3 == v4 )
          return;
      }
      v5 = sub_B8C970(a2);
      if ( v5 > 7 )
      {
        v6 = log2floor(v5 >> 3);
        set_tinfo_property4(a1, 26, (unsigned __int8)(v6 + 1), 0, 0, 0);
      }
    }
  }
}
