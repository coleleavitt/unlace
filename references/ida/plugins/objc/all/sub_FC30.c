unsigned __int64 __fastcall sub_FC30(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  v2 = *a1;
  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *, __int64))(v2 + 464))(a1, &v4, a2) )
  {
    add_dword();
    add_dword();
  }
  return v5 - __readfsqword(0x28u);
}
