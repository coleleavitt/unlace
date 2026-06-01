__int64 __fastcall sub_498FE0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebp

  v2 = sub_48B3B0(a1, a2);
  if ( (~*(_DWORD *)(*(_QWORD *)(a1[38] + 2392) + 12LL) & 0x40400) != 0 || (v2 & 0x40000000) != 0 )
    return v2;
  else
    return (2 * (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 448))(a1, 1, a2)) | v2;
}
