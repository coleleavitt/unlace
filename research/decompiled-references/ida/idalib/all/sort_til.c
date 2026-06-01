__int64 __fastcall sort_til(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebp
  int v3; // eax

  v1 = a1;
  if ( !a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 8LL);
  v2 = sub_64B7D0(*(_QWORD *)(v1 + 56));
  if ( v2 == -1 )
    return 0;
  v3 = sub_64B7D0(*(_QWORD *)(v1 + 64));
  if ( v3 == -1 )
    return 0;
  if ( v3 | v2 )
    *(_DWORD *)(v1 + 32) |= 0x40u;
  return 1;
}
