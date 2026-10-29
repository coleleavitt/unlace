__int64 __fastcall sub_D000D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rax
  unsigned __int8 **v6; // rax
  unsigned __int8 **v7; // rbx

  if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
    return 1;
  *(_QWORD *)(a1 + 1240) = *a3;
  if ( a2 == *(_QWORD *)(a1 + 800) )
    return 1;
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
  v3 = sub_B7D2B0(a2, v5);
  if ( (_BYTE)v3 )
  {
    return 1;
  }
  else
  {
    v6 = (unsigned __int8 **)sub_E33B30(a1 + 384, *(unsigned int *)(a2 + 24), 2483, 0);
    v7 = v6;
    if ( v6 )
    {
      sub_AE9DF0(v6, (*(_BYTE *)(a2 + 96) & 0x18) != 0, 2u);
      sub_AE9DF0(v7, a2, 0xAu);
    }
  }
  return v3;
}
