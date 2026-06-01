__int64 __fastcall sub_535330(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdx
  __int64 v3; // rax
  unsigned int v5; // r12d
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[1] = __readfsqword(0x28u);
  v2 = *(__int64 **)(a1 + 32);
  v3 = *v2;
  if ( !*v2 )
    return 0;
  if ( !((*(_BYTE *)(a1 + 68) & 8) != 0
       ? (unsigned __int8)get_numbered_type(v3, *((_DWORD *)v2 + 2), (unsigned int)v7, 0, 0, 0, 0)
       : get_named_type(v3, v2[1], 1, (unsigned int)v7, 0, 0, 0, 0, 0)) )
    return 0;
  v5 = *(unsigned __int8 *)v7[0];
  if ( !(unsigned __int8)sub_567720(a2, v7) || *(_QWORD *)(a2 + 8) <= 1u )
    return 0;
  return v5;
}
