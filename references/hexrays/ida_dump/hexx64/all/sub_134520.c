unsigned __int64 __fastcall sub_134520(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // eax
  _BYTE v6[24]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 56) == 3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, *(unsigned __int16 *)(a2 + 64));
    sub_1C69A0(v6, a1, v5, a3);
    copy_argloc(a2 + 56, v6);
    cleanup_argloc(v6);
  }
  return v7 - __readfsqword(0x28u);
}
