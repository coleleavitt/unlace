unsigned __int64 __fastcall sub_1D730(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // [rsp+4h] [rbp-44h] BYREF
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v6[3]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+28h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v5 = -1;
  v4 = 0;
  if ( batch
    && !(unsigned __int8)is_debugger_on()
    && (unsigned __int8)sub_14FD0((__int64)a1, &v5, &v4)
    && v4 > 0xA
    && v4 != 14
    && (!*(_QWORD *)(a2 + 120) || rangeset_t_find_range()) )
  {
    sub_1D3F0((__int64)a1, a2);
    sub_198E0(a2);
    v6[0] = &off_3C0F0;
    v3 = *a1;
    v6[1] = 3;
    (*(void (__fastcall **)(__int64 *, _QWORD *))(v3 + 376))(a1, v6);
  }
  return v7 - __readfsqword(0x28u);
}
