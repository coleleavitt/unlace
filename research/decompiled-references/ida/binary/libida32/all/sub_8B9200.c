__int64 __fastcall sub_8B9200(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v5[0] = *a2;
  *(_DWORD *)(a1 + 12) = unpack_dd(v5);
  if ( v3 >= v5[0] )
    return 0;
  *a2 = v5[0];
  return 1;
}

