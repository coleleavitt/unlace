__int64 __fastcall sub_D19A0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  if ( !(unsigned __int8)sub_36F620(*(_QWORD *)(a2 + 1504), *(unsigned int *)(a1 + 72)) )
    return *(_QWORD *)(a2 + 144);
  get_stkarg_area_info();
  result = *(_QWORD *)(a2 + 144);
  v3 = result - *(int *)(a2 + 120);
  if ( v3 != -1 )
  {
    v4 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 1504) + 48LL) & 0x21) == 0 )
      v4 = *(_QWORD *)(a1 + 96);
    return v3 + v4 * *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 112LL) + 80LL);
  }
  return result;
}
