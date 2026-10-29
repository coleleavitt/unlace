__int64 __fastcall sub_1036360(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rax
  __int64 result; // rax
  unsigned int v5; // esi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 936LL);
  if ( (char *)v2 != (char *)sub_1035AA0 )
    return v2();
  if ( *(_DWORD *)(a1 + 260) != 16 || !(unsigned __int8)sub_22B7EA0(a1 + 216) )
    return *(unsigned __int8 *)(a1 + 8);
  v5 = a2 - 25;
  if ( a2 <= 0x18 )
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * a2);
  result = 32;
  if ( v5 != 1 )
    return *(unsigned __int8 *)(a1 + 8);
  return result;
}
