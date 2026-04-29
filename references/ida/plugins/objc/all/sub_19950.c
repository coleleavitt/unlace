unsigned __int64 __fastcall sub_19950(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v2 = a1[1];
  v5 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 2216) )
    sub_EC40();
  sub_198E0(a2);
  v4[1] = a1;
  v4[2] = a2;
  v4[0] = &off_3C250;
  (*(void (__fastcall **)(_QWORD *, _QWORD *, __int64))(*a1 + 384LL))(a1, v4, a2 + 112);
  return v5 - __readfsqword(0x28u);
}
