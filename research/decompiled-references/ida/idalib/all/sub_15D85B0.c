__int64 __fastcall sub_15D85B0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbp
  __int64 v3; // rdx
  unsigned __int8 (__fastcall *v4)(__int64 *, __int64, __int64); // r13
  __int64 v5; // rdx

  v2 = *(__int64 **)(a1 + 72);
  v3 = *v2;
  if ( (unsigned int)*(unsigned __int16 *)(a1 + 32) - 418 <= 2 )
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 48))(v2, a2);
  v4 = *(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(v3 + 56);
  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    v5 = (unsigned int)sub_FA77D0(a1);
  else
    v5 = *(_BYTE *)(a1 + 34) >> 4;
  if ( v4(v2, a2, v5) )
  {
    v2 = *(__int64 **)(a1 + 72);
    v3 = *v2;
    return (*(__int64 (__fastcall **)(__int64 *, __int64))(v3 + 48))(v2, a2);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 48LL))(*(_QWORD *)(a1 + 72), a2);
  return 0;
}
