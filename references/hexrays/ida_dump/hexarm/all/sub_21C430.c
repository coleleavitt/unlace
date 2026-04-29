unsigned __int64 __fastcall sub_21C430(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v6; // [rsp+Ch] [rbp-3Ch] BYREF
  _DWORD v7[6]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v3 = *a1;
  v8 = __readfsqword(0x28u);
  (*(void (__fastcall **)(_DWORD *, __int64 *, unsigned int *, __int64))(v3 + 104))(v7, a1, &v6, a3);
  if ( !v7[0] )
  {
    if ( !under_debugger )
      sub_3835A0(52236);
    BUG();
  }
  v4 = a2[2];
  a2[1] = 0;
  if ( v4 )
  {
    a2[3] = 0;
    qfree(v4);
    a2[2] = 0;
    a2[4] = 0;
  }
  sub_1C2BF0((__int64)v7, a2, v6, 0, nullptr);
  cleanup_argloc(v7);
  return v8 - __readfsqword(0x28u);
}
