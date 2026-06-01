__int64 __fastcall sub_41C5B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  if ( !*(_BYTE *)(a1 + 212) )
    sub_41A7B0(a1 + 176);
  v2 = *(_QWORD *)(a1 + 192);
  if ( v2 && *(_DWORD *)(v2 - 4) )
    return sub_410B20((__int64 *)(a1 + 176), a2);
  else
    return 1;
}

