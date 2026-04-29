unsigned __int64 __fastcall sub_13FD0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned __int64 *v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = netnode_altval();
  if ( v3 - 1 > 0xFFFFFFFFFFFFFFFDLL )
    return v8 - __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 )
    return v8 - __readfsqword(0x28u);
  v5 = *(unsigned __int64 **)a2;
  v6 = 0;
  while ( v3 < *v5 || v3 >= v5[2] + *v5 )
  {
    ++v6;
    v5 += 3;
    if ( v4 == v6 )
      return v8 - __readfsqword(0x28u);
  }
  if ( v5 && (netnode_supset(), *(_BYTE *)(a1 + 2216)) )
    return sub_EC40();
  else
    return v8 - __readfsqword(0x28u);
}
