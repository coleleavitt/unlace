__int64 __fastcall sub_2154400(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = a1[6];
  if ( *(_DWORD *)v3 != 4 )
    return sub_2153E90((__int64)a1, a1[23], a3, 0, 0);
  if ( *(_DWORD *)(v3 + 32) <= 0x40u )
    v4 = *(_QWORD *)(v3 + 24);
  else
    v4 = **(_QWORD **)(v3 + 24);
  *a2 = v4;
  (*(void (__fastcall **)(_QWORD *))(*a1 + 152LL))(a1);
  return 0;
}
