__int64 __fastcall sub_359480(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( *(_BYTE *)(a1 + 64)
    && (v3 = *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 24) < v3)
    && (get_flags_ex(v3, 4) & 0x400) != 0 )
  {
    return 0;
  }
  else
  {
    return sub_3BF6C0(*(_QWORD *)(a1 + 16), a2, a1 + 40);
  }
}
