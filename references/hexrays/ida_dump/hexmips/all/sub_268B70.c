__int64 __fastcall sub_268B70(__int64 a1, __int64 *a2, __int64 *a3, _QWORD *a4)
{
  __int64 tinfo_size; // rax
  __int64 v8; // rdx
  _QWORD v9[7]; // [rsp+0h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 444) != 1 || (get_tinfo_property(*a4, 2) & 0xF) != 0xB )
    return 0;
  v9[0] = get_tinfo_property(*a4, 11);
  tinfo_size = get_tinfo_size(0, v9[0], 0);
  if ( tinfo_size > 0 )
  {
    v8 = v9[0];
    v9[0] = *a4;
    *a4 = v8;
    *a2 = (*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 96)) / tinfo_size;
    *a3 = tinfo_size;
    *(_DWORD *)(a1 + 444) |= 2u;
  }
  clear_tinfo_t(v9);
  return 1;
}
