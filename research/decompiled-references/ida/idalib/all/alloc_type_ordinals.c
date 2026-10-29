__int64 __fastcall alloc_type_ordinals(__int64 a1, int a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax

  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  if ( !a1 )
    a1 = v2[1];
  if ( a2 <= 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || (*(_BYTE *)(v3 + 8) & 2) == 0 )
    return 0;
  *(_DWORD *)(a1 + 32) |= 0x40u;
  return sub_64CC00(v2, v3, (unsigned int)a2);
}
